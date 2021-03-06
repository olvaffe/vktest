/*
 * Copyright 2022 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef PFN_ALL
#define PFN_ALL(name)
#endif

#ifndef PFN_GIPA
#define PFN_GIPA(name) PFN_ALL(name)
#endif

#ifndef PFN_GLOBAL
#define PFN_GLOBAL(name) PFN_ALL(name)
#endif

#ifndef PFN_INSTANCE
#define PFN_INSTANCE(name) PFN_ALL(name)
#endif

#ifndef PFN_DEVICE
#define PFN_DEVICE(name) PFN_ALL(name)
#endif

PFN_GIPA(GetInstanceProcAddr)

PFN_GLOBAL(EnumerateInstanceVersion)
PFN_GLOBAL(CreateInstance)
PFN_GLOBAL(EnumerateInstanceExtensionProperties)

PFN_INSTANCE(DestroyInstance)
PFN_INSTANCE(EnumeratePhysicalDevices)
PFN_INSTANCE(EnumeratePhysicalDeviceGroups)
PFN_INSTANCE(GetPhysicalDeviceFeatures)
PFN_INSTANCE(GetPhysicalDeviceFormatProperties)
PFN_INSTANCE(GetPhysicalDeviceImageFormatProperties)
PFN_INSTANCE(GetPhysicalDeviceProperties)
PFN_INSTANCE(GetPhysicalDeviceQueueFamilyProperties)
PFN_INSTANCE(GetPhysicalDeviceMemoryProperties)
PFN_INSTANCE(GetPhysicalDeviceSparseImageFormatProperties)
PFN_INSTANCE(GetPhysicalDeviceFeatures2)
PFN_INSTANCE(GetPhysicalDeviceProperties2)
PFN_INSTANCE(GetPhysicalDeviceFormatProperties2)
PFN_INSTANCE(GetPhysicalDeviceImageFormatProperties2)
PFN_INSTANCE(GetPhysicalDeviceQueueFamilyProperties2)
PFN_INSTANCE(GetPhysicalDeviceMemoryProperties2)
PFN_INSTANCE(GetPhysicalDeviceSparseImageFormatProperties2)
PFN_INSTANCE(GetPhysicalDeviceExternalBufferProperties)
PFN_INSTANCE(GetPhysicalDeviceExternalFenceProperties)
PFN_INSTANCE(GetPhysicalDeviceExternalSemaphoreProperties)
PFN_INSTANCE(EnumerateDeviceExtensionProperties)
PFN_INSTANCE(CreateDevice)

PFN_DEVICE(GetDeviceProcAddr)
PFN_DEVICE(DestroyDevice)
PFN_DEVICE(GetDeviceQueue)
PFN_DEVICE(QueueSubmit)
PFN_DEVICE(QueueWaitIdle)
PFN_DEVICE(DeviceWaitIdle)
PFN_DEVICE(AllocateMemory)
PFN_DEVICE(FreeMemory)
PFN_DEVICE(MapMemory)
PFN_DEVICE(UnmapMemory)
PFN_DEVICE(FlushMappedMemoryRanges)
PFN_DEVICE(InvalidateMappedMemoryRanges)
PFN_DEVICE(GetDeviceMemoryCommitment)
PFN_DEVICE(BindBufferMemory)
PFN_DEVICE(BindImageMemory)
PFN_DEVICE(GetBufferMemoryRequirements)
PFN_DEVICE(GetImageMemoryRequirements)
PFN_DEVICE(GetImageSparseMemoryRequirements)
PFN_DEVICE(QueueBindSparse)
PFN_DEVICE(CreateFence)
PFN_DEVICE(DestroyFence)
PFN_DEVICE(ResetFences)
PFN_DEVICE(GetFenceStatus)
PFN_DEVICE(WaitForFences)
PFN_DEVICE(CreateSemaphore)
PFN_DEVICE(DestroySemaphore)
PFN_DEVICE(CreateEvent)
PFN_DEVICE(DestroyEvent)
PFN_DEVICE(GetEventStatus)
PFN_DEVICE(SetEvent)
PFN_DEVICE(ResetEvent)
PFN_DEVICE(CreateQueryPool)
PFN_DEVICE(DestroyQueryPool)
PFN_DEVICE(GetQueryPoolResults)
PFN_DEVICE(CreateBuffer)
PFN_DEVICE(DestroyBuffer)
PFN_DEVICE(CreateBufferView)
PFN_DEVICE(DestroyBufferView)
PFN_DEVICE(CreateImage)
PFN_DEVICE(DestroyImage)
PFN_DEVICE(GetImageSubresourceLayout)
PFN_DEVICE(CreateImageView)
PFN_DEVICE(DestroyImageView)
PFN_DEVICE(CreateShaderModule)
PFN_DEVICE(DestroyShaderModule)
PFN_DEVICE(CreatePipelineCache)
PFN_DEVICE(DestroyPipelineCache)
PFN_DEVICE(GetPipelineCacheData)
PFN_DEVICE(MergePipelineCaches)
PFN_DEVICE(CreateGraphicsPipelines)
PFN_DEVICE(CreateComputePipelines)
PFN_DEVICE(DestroyPipeline)
PFN_DEVICE(CreatePipelineLayout)
PFN_DEVICE(DestroyPipelineLayout)
PFN_DEVICE(CreateSampler)
PFN_DEVICE(DestroySampler)
PFN_DEVICE(CreateDescriptorSetLayout)
PFN_DEVICE(DestroyDescriptorSetLayout)
PFN_DEVICE(CreateDescriptorPool)
PFN_DEVICE(DestroyDescriptorPool)
PFN_DEVICE(ResetDescriptorPool)
PFN_DEVICE(AllocateDescriptorSets)
PFN_DEVICE(FreeDescriptorSets)
PFN_DEVICE(UpdateDescriptorSets)
PFN_DEVICE(CreateFramebuffer)
PFN_DEVICE(DestroyFramebuffer)
PFN_DEVICE(CreateRenderPass)
PFN_DEVICE(DestroyRenderPass)
PFN_DEVICE(GetRenderAreaGranularity)
PFN_DEVICE(CreateCommandPool)
PFN_DEVICE(DestroyCommandPool)
PFN_DEVICE(ResetCommandPool)
PFN_DEVICE(AllocateCommandBuffers)
PFN_DEVICE(FreeCommandBuffers)
PFN_DEVICE(BeginCommandBuffer)
PFN_DEVICE(EndCommandBuffer)
PFN_DEVICE(ResetCommandBuffer)
PFN_DEVICE(CmdBindPipeline)
PFN_DEVICE(CmdSetViewport)
PFN_DEVICE(CmdSetScissor)
PFN_DEVICE(CmdSetLineWidth)
PFN_DEVICE(CmdSetDepthBias)
PFN_DEVICE(CmdSetBlendConstants)
PFN_DEVICE(CmdSetDepthBounds)
PFN_DEVICE(CmdSetStencilCompareMask)
PFN_DEVICE(CmdSetStencilWriteMask)
PFN_DEVICE(CmdSetStencilReference)
PFN_DEVICE(CmdBindDescriptorSets)
PFN_DEVICE(CmdBindIndexBuffer)
PFN_DEVICE(CmdBindVertexBuffers)
PFN_DEVICE(CmdDraw)
PFN_DEVICE(CmdDrawIndexed)
PFN_DEVICE(CmdDrawIndirect)
PFN_DEVICE(CmdDrawIndexedIndirect)
PFN_DEVICE(CmdDispatch)
PFN_DEVICE(CmdDispatchIndirect)
PFN_DEVICE(CmdCopyBuffer)
PFN_DEVICE(CmdCopyImage)
PFN_DEVICE(CmdBlitImage)
PFN_DEVICE(CmdCopyBufferToImage)
PFN_DEVICE(CmdCopyImageToBuffer)
PFN_DEVICE(CmdUpdateBuffer)
PFN_DEVICE(CmdFillBuffer)
PFN_DEVICE(CmdClearColorImage)
PFN_DEVICE(CmdClearDepthStencilImage)
PFN_DEVICE(CmdClearAttachments)
PFN_DEVICE(CmdResolveImage)
PFN_DEVICE(CmdSetEvent)
PFN_DEVICE(CmdResetEvent)
PFN_DEVICE(CmdWaitEvents)
PFN_DEVICE(CmdPipelineBarrier)
PFN_DEVICE(CmdBeginQuery)
PFN_DEVICE(CmdEndQuery)
PFN_DEVICE(CmdResetQueryPool)
PFN_DEVICE(CmdWriteTimestamp)
PFN_DEVICE(CmdCopyQueryPoolResults)
PFN_DEVICE(CmdPushConstants)
PFN_DEVICE(CmdBeginRenderPass)
PFN_DEVICE(CmdNextSubpass)
PFN_DEVICE(CmdEndRenderPass)
PFN_DEVICE(CmdExecuteCommands)

PFN_DEVICE(BindBufferMemory2)
PFN_DEVICE(BindImageMemory2)
PFN_DEVICE(GetDeviceGroupPeerMemoryFeatures)
PFN_DEVICE(CmdSetDeviceMask)
PFN_DEVICE(CmdDispatchBase)
PFN_DEVICE(GetImageMemoryRequirements2)
PFN_DEVICE(GetBufferMemoryRequirements2)
PFN_DEVICE(GetImageSparseMemoryRequirements2)
PFN_DEVICE(TrimCommandPool)
PFN_DEVICE(GetDeviceQueue2)
PFN_DEVICE(CreateSamplerYcbcrConversion)
PFN_DEVICE(DestroySamplerYcbcrConversion)
PFN_DEVICE(CreateDescriptorUpdateTemplate)
PFN_DEVICE(DestroyDescriptorUpdateTemplate)
PFN_DEVICE(UpdateDescriptorSetWithTemplate)
PFN_DEVICE(GetDescriptorSetLayoutSupport)

#undef PFN_ALL
#undef PFN_GPIA
#undef PFN_GLOBAL
#undef PFN_INSTANCE
#undef PFN_DEVICE
