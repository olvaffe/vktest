/*
 * Copyright 2022 Google LLC
 * SPDX-License-Identifier: MIT
 */

#include "vkutil.h"

static const uint32_t tex_test_vs[] = {
#include "tex.vert.inc"
};

static const uint32_t tex_test_fs[] = {
#include "tex.frag.inc"
};

static const float tex_test_vertices[3][2] = {
    { -1.0f, -1.0f },
    { 0.0f, 1.0f },
    { 1.0f, -1.0f },
};

struct tex_test {
    VkFormat color_format;
    VkFormat tex_format;
    uint32_t width;
    uint32_t height;

    struct vk vk;
    struct vk_buffer *vb;

    struct vk_image *tex;

    struct vk_image *rt;
    struct vk_framebuffer *fb;

    struct vk_pipeline *pipeline;
    struct vk_descriptor_set *set;
};

static void
tex_test_init_descriptor_set(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    test->set = vk_create_descriptor_set(vk, test->pipeline);
    vk_write_descriptor_set(vk, test->set, test->tex);
}

static void
tex_test_init_pipeline(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    test->pipeline = vk_create_pipeline(vk);

    vk_set_pipeline_shaders(vk, test->pipeline, tex_test_vs, sizeof(tex_test_vs), tex_test_fs,
                            sizeof(tex_test_fs));
    vk_set_pipeline_layout(vk, test->pipeline, true);

    const uint32_t comp_count = ARRAY_SIZE(tex_test_vertices[0]);
    vk_set_pipeline_vertices(vk, test->pipeline, &comp_count, 1);

    vk_setup_pipeline(vk, test->pipeline, test->fb);
    vk_compile_pipeline(vk, test->pipeline);
}

static void
tex_test_init_framebuffer(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    test->rt =
        vk_create_image(vk, test->color_format, test->width, test->height, VK_SAMPLE_COUNT_1_BIT,
                        VK_IMAGE_TILING_LINEAR, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT);
    vk_create_image_render_view(vk, test->rt, VK_IMAGE_ASPECT_COLOR_BIT);

    test->fb = vk_create_framebuffer(vk, test->rt, NULL, NULL);
}

static void
tex_test_init_texture(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    test->tex = vk_create_image(vk, test->tex_format, test->width, test->height,
                                VK_SAMPLE_COUNT_1_BIT, VK_IMAGE_TILING_LINEAR,
                                VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT);
    vk_create_image_sample_view(vk, test->tex, VK_IMAGE_ASPECT_COLOR_BIT);
}

static void
tex_test_init_vb(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    test->vb = vk_create_buffer(vk, sizeof(tex_test_vertices), VK_BUFFER_USAGE_VERTEX_BUFFER_BIT);
    memcpy(test->vb->mem_ptr, tex_test_vertices, sizeof(tex_test_vertices));
}

static void
tex_test_init(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    vk_init(vk);
    tex_test_init_vb(test);

    tex_test_init_texture(test);
    tex_test_init_framebuffer(test);
    tex_test_init_pipeline(test);
    tex_test_init_descriptor_set(test);
}

static void
tex_test_cleanup(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    vk_destroy_descriptor_set(vk, test->set);
    vk_destroy_pipeline(vk, test->pipeline);

    vk_destroy_image(vk, test->rt);
    vk_destroy_framebuffer(vk, test->fb);

    vk_destroy_image(vk, test->tex);

    vk_destroy_buffer(vk, test->vb);

    vk_cleanup(vk);
}

static void
tex_test_draw_triangle(struct tex_test *test, VkCommandBuffer cmd)
{
    struct vk *vk = &test->vk;

    const VkImageSubresourceRange subres_range = {
        .aspectMask = VK_IMAGE_ASPECT_COLOR_BIT,
        .levelCount = 1,
        .layerCount = 1,
    };
    const VkImageMemoryBarrier barrier1 = {
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        .srcAccessMask = 0,
        .dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
        .oldLayout = VK_IMAGE_LAYOUT_UNDEFINED,
        .newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
        .image = test->rt->img,
        .subresourceRange = subres_range,
    };
    const VkImageMemoryBarrier barrier2 = {
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        .srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
        .dstAccessMask = VK_ACCESS_HOST_READ_BIT,
        .oldLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
        .newLayout = VK_IMAGE_LAYOUT_GENERAL,
        .image = test->rt->img,
        .subresourceRange = subres_range,
    };

    vk->CmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                           VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, 0, 0, NULL, 0, NULL, 1,
                           &barrier1);

    const VkRenderPassBeginInfo pass_info = {
        .sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
        .renderPass = test->fb->pass,
        .framebuffer = test->fb->fb,
        .renderArea = {
            .extent = {
                .width = test->width,
                .height = test->height,
            },
        },
        .clearValueCount = 1,
        .pClearValues = &(VkClearValue){
            .color = {
                .float32 = { 0.2f, 0.2f, 0.2f, 1.0f },
            },
        },
    };
    vk->CmdBeginRenderPass(cmd, &pass_info, VK_SUBPASS_CONTENTS_INLINE);

    vk->CmdBindVertexBuffers(cmd, 0, 1, &test->vb->buf, &(VkDeviceSize){ 0 });
    vk->CmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, test->pipeline->pipeline);

    vk->CmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS,
                              test->pipeline->pipeline_layout, 0, 1, &test->set->set, 0, NULL);

    vk->CmdDraw(cmd, 3, 1, 0, 0);

    vk->CmdEndRenderPass(cmd);

    vk->CmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                           VK_PIPELINE_STAGE_HOST_BIT, 0, 0, NULL, 0, NULL, 1, &barrier2);
}

static void
tex_test_draw_prep_texture(struct tex_test *test, VkCommandBuffer cmd)
{
    struct vk *vk = &test->vk;

    const VkImageSubresourceRange subres_range = {
        .aspectMask = VK_IMAGE_ASPECT_COLOR_BIT,
        .levelCount = 1,
        .layerCount = 1,
    };
    const VkImageMemoryBarrier barrier1 = {
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        .srcAccessMask = 0,
        .dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT,
        .oldLayout = VK_IMAGE_LAYOUT_UNDEFINED,
        .newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
        .image = test->tex->img,
        .subresourceRange = subres_range,
    };
    const VkImageMemoryBarrier barrier2 = {
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        .srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT,
        .dstAccessMask = VK_ACCESS_SHADER_READ_BIT,
        .oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
        .newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
        .image = test->tex->img,
        .subresourceRange = subres_range,
    };
    const VkClearColorValue clear_val = {
        .float32 = { 0.25f, 0.50f, 0.75f, 1.00f },
    };

    vk->CmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                           0, 0, NULL, 0, NULL, 1, &barrier1);
    vk->CmdClearColorImage(cmd, test->tex->img, barrier1.newLayout, &clear_val, 1,
                                  &subres_range);
    vk->CmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                           VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, NULL, 0, NULL, 1,
                           &barrier2);
}

static void
tex_test_draw(struct tex_test *test)
{
    struct vk *vk = &test->vk;

    VkCommandBuffer cmd = vk_begin_cmd(vk);

    tex_test_draw_prep_texture(test, cmd);
    tex_test_draw_triangle(test, cmd);

    vk_end_cmd(vk);

    vk_dump_image(vk, test->rt, VK_IMAGE_ASPECT_COLOR_BIT, "rt.ppm");
}

int
main(void)
{
    struct tex_test test = {
        .color_format = VK_FORMAT_B8G8R8A8_UNORM,
        .tex_format = VK_FORMAT_R5G5B5A1_UNORM_PACK16,
        .width = 300,
        .height = 300,
    };

    tex_test_init(&test);
    tex_test_draw(&test);
    tex_test_cleanup(&test);

    return 0;
}