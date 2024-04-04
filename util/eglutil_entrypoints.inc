/*
 * Copyright 2022 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef PFN_GIPA
#define PFN_GIPA(proc, name) PFN_EGL(proc, name)
#endif

#ifndef PFN_EGL
#define PFN_EGL(proc, name)
#endif

#ifndef PFN_EGL_EXT
#define PFN_EGL_EXT(proc, name) PFN_EGL(proc, name)
#endif

#ifndef PFN_GL
#define PFN_GL(proc, name)
#endif

#ifndef PFN_GL_EXT
#define PFN_GL_EXT(proc, name) PFN_GL(proc, name)
#endif

PFN_GIPA(GETPROCADDRESS, GetProcAddress)

/* EGL 1.5 except eglGetProcAddress */
PFN_EGL(CHOOSECONFIG, ChooseConfig)
PFN_EGL(COPYBUFFERS, CopyBuffers)
PFN_EGL(CREATECONTEXT, CreateContext)
PFN_EGL(CREATEPBUFFERSURFACE, CreatePbufferSurface)
PFN_EGL(CREATEPIXMAPSURFACE, CreatePixmapSurface)
PFN_EGL(CREATEWINDOWSURFACE, CreateWindowSurface)
PFN_EGL(DESTROYCONTEXT, DestroyContext)
PFN_EGL(DESTROYSURFACE, DestroySurface)
PFN_EGL(GETCONFIGATTRIB, GetConfigAttrib)
PFN_EGL(GETCONFIGS, GetConfigs)
PFN_EGL(GETCURRENTDISPLAY, GetCurrentDisplay)
PFN_EGL(GETCURRENTSURFACE, GetCurrentSurface)
PFN_EGL(GETDISPLAY, GetDisplay)
PFN_EGL(GETERROR, GetError)
PFN_EGL(INITIALIZE, Initialize)
PFN_EGL(MAKECURRENT, MakeCurrent)
PFN_EGL(QUERYCONTEXT, QueryContext)
PFN_EGL(QUERYSTRING, QueryString)
PFN_EGL(QUERYSURFACE, QuerySurface)
PFN_EGL(SWAPBUFFERS, SwapBuffers)
PFN_EGL(TERMINATE, Terminate)
PFN_EGL(WAITGL, WaitGL)
PFN_EGL(WAITNATIVE, WaitNative)
PFN_EGL(BINDTEXIMAGE, BindTexImage)
PFN_EGL(RELEASETEXIMAGE, ReleaseTexImage)
PFN_EGL(SURFACEATTRIB, SurfaceAttrib)
PFN_EGL(SWAPINTERVAL, SwapInterval)
PFN_EGL(BINDAPI, BindAPI)
PFN_EGL(QUERYAPI, QueryAPI)
PFN_EGL(CREATEPBUFFERFROMCLIENTBUFFER, CreatePbufferFromClientBuffer)
PFN_EGL(RELEASETHREAD, ReleaseThread)
PFN_EGL(WAITCLIENT, WaitClient)
PFN_EGL(GETCURRENTCONTEXT, GetCurrentContext)
PFN_EGL(CREATESYNC, CreateSync)
PFN_EGL(DESTROYSYNC, DestroySync)
PFN_EGL(CLIENTWAITSYNC, ClientWaitSync)
PFN_EGL(GETSYNCATTRIB, GetSyncAttrib)
PFN_EGL(CREATEIMAGE, CreateImage)
PFN_EGL(DESTROYIMAGE, DestroyImage)
PFN_EGL(GETPLATFORMDISPLAY, GetPlatformDisplay)
PFN_EGL(CREATEPLATFORMWINDOWSURFACE, CreatePlatformWindowSurface)
PFN_EGL(CREATEPLATFORMPIXMAPSURFACE, CreatePlatformPixmapSurface)
PFN_EGL(WAITSYNC, WaitSync)

/* EGL_ANDROID_get_native_client_buffer */
PFN_EGL_EXT(GETNATIVECLIENTBUFFERANDROID, GetNativeClientBufferANDROID)

/* EGL_EXT_device_enumeration */
PFN_EGL_EXT(QUERYDEVICESEXT, QueryDevicesEXT)

/* EGL_EXT_device_query */
PFN_EGL_EXT(QUERYDEVICEATTRIBEXT, QueryDeviceAttribEXT)
PFN_EGL_EXT(QUERYDEVICESTRINGEXT, QueryDeviceStringEXT)
PFN_EGL_EXT(QUERYDISPLAYATTRIBEXT, QueryDisplayAttribEXT)

/* EGL_EXT_image_dma_buf_import_modifiers */
PFN_EGL_EXT(QUERYDMABUFFORMATSEXT, QueryDmaBufFormatsEXT)
PFN_EGL_EXT(QUERYDMABUFMODIFIERSEXT, QueryDmaBufModifiersEXT)

/* GLES 3.2 */
PFN_GL(ACTIVETEXTURE, ActiveTexture)
PFN_GL(ATTACHSHADER, AttachShader)
PFN_GL(BINDATTRIBLOCATION, BindAttribLocation)
PFN_GL(BINDBUFFER, BindBuffer)
PFN_GL(BINDFRAMEBUFFER, BindFramebuffer)
PFN_GL(BINDRENDERBUFFER, BindRenderbuffer)
PFN_GL(BINDTEXTURE, BindTexture)
PFN_GL(BLENDCOLOR, BlendColor)
PFN_GL(BLENDEQUATION, BlendEquation)
PFN_GL(BLENDEQUATIONSEPARATE, BlendEquationSeparate)
PFN_GL(BLENDFUNC, BlendFunc)
PFN_GL(BLENDFUNCSEPARATE, BlendFuncSeparate)
PFN_GL(BUFFERDATA, BufferData)
PFN_GL(BUFFERSUBDATA, BufferSubData)
PFN_GL(CHECKFRAMEBUFFERSTATUS, CheckFramebufferStatus)
PFN_GL(CLEAR, Clear)
PFN_GL(CLEARCOLOR, ClearColor)
PFN_GL(CLEARDEPTHF, ClearDepthf)
PFN_GL(CLEARSTENCIL, ClearStencil)
PFN_GL(COLORMASK, ColorMask)
PFN_GL(COMPILESHADER, CompileShader)
PFN_GL(COMPRESSEDTEXIMAGE2D, CompressedTexImage2D)
PFN_GL(COMPRESSEDTEXSUBIMAGE2D, CompressedTexSubImage2D)
PFN_GL(COPYTEXIMAGE2D, CopyTexImage2D)
PFN_GL(COPYTEXSUBIMAGE2D, CopyTexSubImage2D)
PFN_GL(CREATEPROGRAM, CreateProgram)
PFN_GL(CREATESHADER, CreateShader)
PFN_GL(CULLFACE, CullFace)
PFN_GL(DELETEBUFFERS, DeleteBuffers)
PFN_GL(DELETEFRAMEBUFFERS, DeleteFramebuffers)
PFN_GL(DELETEPROGRAM, DeleteProgram)
PFN_GL(DELETERENDERBUFFERS, DeleteRenderbuffers)
PFN_GL(DELETESHADER, DeleteShader)
PFN_GL(DELETETEXTURES, DeleteTextures)
PFN_GL(DEPTHFUNC, DepthFunc)
PFN_GL(DEPTHMASK, DepthMask)
PFN_GL(DEPTHRANGEF, DepthRangef)
PFN_GL(DETACHSHADER, DetachShader)
PFN_GL(DISABLE, Disable)
PFN_GL(DISABLEVERTEXATTRIBARRAY, DisableVertexAttribArray)
PFN_GL(DRAWARRAYS, DrawArrays)
PFN_GL(DRAWELEMENTS, DrawElements)
PFN_GL(ENABLE, Enable)
PFN_GL(ENABLEVERTEXATTRIBARRAY, EnableVertexAttribArray)
PFN_GL(FINISH, Finish)
PFN_GL(FLUSH, Flush)
PFN_GL(FRAMEBUFFERRENDERBUFFER, FramebufferRenderbuffer)
PFN_GL(FRAMEBUFFERTEXTURE2D, FramebufferTexture2D)
PFN_GL(FRONTFACE, FrontFace)
PFN_GL(GENBUFFERS, GenBuffers)
PFN_GL(GENERATEMIPMAP, GenerateMipmap)
PFN_GL(GENFRAMEBUFFERS, GenFramebuffers)
PFN_GL(GENRENDERBUFFERS, GenRenderbuffers)
PFN_GL(GENTEXTURES, GenTextures)
PFN_GL(GETACTIVEATTRIB, GetActiveAttrib)
PFN_GL(GETACTIVEUNIFORM, GetActiveUniform)
PFN_GL(GETATTACHEDSHADERS, GetAttachedShaders)
PFN_GL(GETATTRIBLOCATION, GetAttribLocation)
PFN_GL(GETBOOLEANV, GetBooleanv)
PFN_GL(GETBUFFERPARAMETERIV, GetBufferParameteriv)
PFN_GL(GETERROR, GetError)
PFN_GL(GETFLOATV, GetFloatv)
PFN_GL(GETFRAMEBUFFERATTACHMENTPARAMETERIV, GetFramebufferAttachmentParameteriv)
PFN_GL(GETINTEGERV, GetIntegerv)
PFN_GL(GETPROGRAMIV, GetProgramiv)
PFN_GL(GETPROGRAMINFOLOG, GetProgramInfoLog)
PFN_GL(GETRENDERBUFFERPARAMETERIV, GetRenderbufferParameteriv)
PFN_GL(GETSHADERIV, GetShaderiv)
PFN_GL(GETSHADERINFOLOG, GetShaderInfoLog)
PFN_GL(GETSHADERPRECISIONFORMAT, GetShaderPrecisionFormat)
PFN_GL(GETSHADERSOURCE, GetShaderSource)
PFN_GL(GETSTRING, GetString)
PFN_GL(GETTEXPARAMETERFV, GetTexParameterfv)
PFN_GL(GETTEXPARAMETERIV, GetTexParameteriv)
PFN_GL(GETUNIFORMFV, GetUniformfv)
PFN_GL(GETUNIFORMIV, GetUniformiv)
PFN_GL(GETUNIFORMLOCATION, GetUniformLocation)
PFN_GL(GETVERTEXATTRIBFV, GetVertexAttribfv)
PFN_GL(GETVERTEXATTRIBIV, GetVertexAttribiv)
PFN_GL(GETVERTEXATTRIBPOINTERV, GetVertexAttribPointerv)
PFN_GL(HINT, Hint)
PFN_GL(ISBUFFER, IsBuffer)
PFN_GL(ISENABLED, IsEnabled)
PFN_GL(ISFRAMEBUFFER, IsFramebuffer)
PFN_GL(ISPROGRAM, IsProgram)
PFN_GL(ISRENDERBUFFER, IsRenderbuffer)
PFN_GL(ISSHADER, IsShader)
PFN_GL(ISTEXTURE, IsTexture)
PFN_GL(LINEWIDTH, LineWidth)
PFN_GL(LINKPROGRAM, LinkProgram)
PFN_GL(PIXELSTOREI, PixelStorei)
PFN_GL(POLYGONOFFSET, PolygonOffset)
PFN_GL(READPIXELS, ReadPixels)
PFN_GL(RELEASESHADERCOMPILER, ReleaseShaderCompiler)
PFN_GL(RENDERBUFFERSTORAGE, RenderbufferStorage)
PFN_GL(SAMPLECOVERAGE, SampleCoverage)
PFN_GL(SCISSOR, Scissor)
PFN_GL(SHADERBINARY, ShaderBinary)
PFN_GL(SHADERSOURCE, ShaderSource)
PFN_GL(STENCILFUNC, StencilFunc)
PFN_GL(STENCILFUNCSEPARATE, StencilFuncSeparate)
PFN_GL(STENCILMASK, StencilMask)
PFN_GL(STENCILMASKSEPARATE, StencilMaskSeparate)
PFN_GL(STENCILOP, StencilOp)
PFN_GL(STENCILOPSEPARATE, StencilOpSeparate)
PFN_GL(TEXIMAGE2D, TexImage2D)
PFN_GL(TEXPARAMETERF, TexParameterf)
PFN_GL(TEXPARAMETERFV, TexParameterfv)
PFN_GL(TEXPARAMETERI, TexParameteri)
PFN_GL(TEXPARAMETERIV, TexParameteriv)
PFN_GL(TEXSUBIMAGE2D, TexSubImage2D)
PFN_GL(UNIFORM1F, Uniform1f)
PFN_GL(UNIFORM1FV, Uniform1fv)
PFN_GL(UNIFORM1I, Uniform1i)
PFN_GL(UNIFORM1IV, Uniform1iv)
PFN_GL(UNIFORM2F, Uniform2f)
PFN_GL(UNIFORM2FV, Uniform2fv)
PFN_GL(UNIFORM2I, Uniform2i)
PFN_GL(UNIFORM2IV, Uniform2iv)
PFN_GL(UNIFORM3F, Uniform3f)
PFN_GL(UNIFORM3FV, Uniform3fv)
PFN_GL(UNIFORM3I, Uniform3i)
PFN_GL(UNIFORM3IV, Uniform3iv)
PFN_GL(UNIFORM4F, Uniform4f)
PFN_GL(UNIFORM4FV, Uniform4fv)
PFN_GL(UNIFORM4I, Uniform4i)
PFN_GL(UNIFORM4IV, Uniform4iv)
PFN_GL(UNIFORMMATRIX2FV, UniformMatrix2fv)
PFN_GL(UNIFORMMATRIX3FV, UniformMatrix3fv)
PFN_GL(UNIFORMMATRIX4FV, UniformMatrix4fv)
PFN_GL(USEPROGRAM, UseProgram)
PFN_GL(VALIDATEPROGRAM, ValidateProgram)
PFN_GL(VERTEXATTRIB1F, VertexAttrib1f)
PFN_GL(VERTEXATTRIB1FV, VertexAttrib1fv)
PFN_GL(VERTEXATTRIB2F, VertexAttrib2f)
PFN_GL(VERTEXATTRIB2FV, VertexAttrib2fv)
PFN_GL(VERTEXATTRIB3F, VertexAttrib3f)
PFN_GL(VERTEXATTRIB3FV, VertexAttrib3fv)
PFN_GL(VERTEXATTRIB4F, VertexAttrib4f)
PFN_GL(VERTEXATTRIB4FV, VertexAttrib4fv)
PFN_GL(VERTEXATTRIBPOINTER, VertexAttribPointer)
PFN_GL(VIEWPORT, Viewport)
PFN_GL(READBUFFER, ReadBuffer)
PFN_GL(DRAWRANGEELEMENTS, DrawRangeElements)
PFN_GL(TEXIMAGE3D, TexImage3D)
PFN_GL(TEXSUBIMAGE3D, TexSubImage3D)
PFN_GL(COPYTEXSUBIMAGE3D, CopyTexSubImage3D)
PFN_GL(COMPRESSEDTEXIMAGE3D, CompressedTexImage3D)
PFN_GL(COMPRESSEDTEXSUBIMAGE3D, CompressedTexSubImage3D)
PFN_GL(GENQUERIES, GenQueries)
PFN_GL(DELETEQUERIES, DeleteQueries)
PFN_GL(ISQUERY, IsQuery)
PFN_GL(BEGINQUERY, BeginQuery)
PFN_GL(ENDQUERY, EndQuery)
PFN_GL(GETQUERYIV, GetQueryiv)
PFN_GL(GETQUERYOBJECTUIV, GetQueryObjectuiv)
PFN_GL(UNMAPBUFFER, UnmapBuffer)
PFN_GL(GETBUFFERPOINTERV, GetBufferPointerv)
PFN_GL(DRAWBUFFERS, DrawBuffers)
PFN_GL(UNIFORMMATRIX2X3FV, UniformMatrix2x3fv)
PFN_GL(UNIFORMMATRIX3X2FV, UniformMatrix3x2fv)
PFN_GL(UNIFORMMATRIX2X4FV, UniformMatrix2x4fv)
PFN_GL(UNIFORMMATRIX4X2FV, UniformMatrix4x2fv)
PFN_GL(UNIFORMMATRIX3X4FV, UniformMatrix3x4fv)
PFN_GL(UNIFORMMATRIX4X3FV, UniformMatrix4x3fv)
PFN_GL(BLITFRAMEBUFFER, BlitFramebuffer)
PFN_GL(RENDERBUFFERSTORAGEMULTISAMPLE, RenderbufferStorageMultisample)
PFN_GL(FRAMEBUFFERTEXTURELAYER, FramebufferTextureLayer)
PFN_GL(MAPBUFFERRANGE, MapBufferRange)
PFN_GL(FLUSHMAPPEDBUFFERRANGE, FlushMappedBufferRange)
PFN_GL(BINDVERTEXARRAY, BindVertexArray)
PFN_GL(DELETEVERTEXARRAYS, DeleteVertexArrays)
PFN_GL(GENVERTEXARRAYS, GenVertexArrays)
PFN_GL(ISVERTEXARRAY, IsVertexArray)
PFN_GL(GETINTEGERI_V, GetIntegeri_v)
PFN_GL(BEGINTRANSFORMFEEDBACK, BeginTransformFeedback)
PFN_GL(ENDTRANSFORMFEEDBACK, EndTransformFeedback)
PFN_GL(BINDBUFFERRANGE, BindBufferRange)
PFN_GL(BINDBUFFERBASE, BindBufferBase)
PFN_GL(TRANSFORMFEEDBACKVARYINGS, TransformFeedbackVaryings)
PFN_GL(GETTRANSFORMFEEDBACKVARYING, GetTransformFeedbackVarying)
PFN_GL(VERTEXATTRIBIPOINTER, VertexAttribIPointer)
PFN_GL(GETVERTEXATTRIBIIV, GetVertexAttribIiv)
PFN_GL(GETVERTEXATTRIBIUIV, GetVertexAttribIuiv)
PFN_GL(VERTEXATTRIBI4I, VertexAttribI4i)
PFN_GL(VERTEXATTRIBI4UI, VertexAttribI4ui)
PFN_GL(VERTEXATTRIBI4IV, VertexAttribI4iv)
PFN_GL(VERTEXATTRIBI4UIV, VertexAttribI4uiv)
PFN_GL(GETUNIFORMUIV, GetUniformuiv)
PFN_GL(GETFRAGDATALOCATION, GetFragDataLocation)
PFN_GL(UNIFORM1UI, Uniform1ui)
PFN_GL(UNIFORM2UI, Uniform2ui)
PFN_GL(UNIFORM3UI, Uniform3ui)
PFN_GL(UNIFORM4UI, Uniform4ui)
PFN_GL(UNIFORM1UIV, Uniform1uiv)
PFN_GL(UNIFORM2UIV, Uniform2uiv)
PFN_GL(UNIFORM3UIV, Uniform3uiv)
PFN_GL(UNIFORM4UIV, Uniform4uiv)
PFN_GL(CLEARBUFFERIV, ClearBufferiv)
PFN_GL(CLEARBUFFERUIV, ClearBufferuiv)
PFN_GL(CLEARBUFFERFV, ClearBufferfv)
PFN_GL(CLEARBUFFERFI, ClearBufferfi)
PFN_GL(GETSTRINGI, GetStringi)
PFN_GL(COPYBUFFERSUBDATA, CopyBufferSubData)
PFN_GL(GETUNIFORMINDICES, GetUniformIndices)
PFN_GL(GETACTIVEUNIFORMSIV, GetActiveUniformsiv)
PFN_GL(GETUNIFORMBLOCKINDEX, GetUniformBlockIndex)
PFN_GL(GETACTIVEUNIFORMBLOCKIV, GetActiveUniformBlockiv)
PFN_GL(GETACTIVEUNIFORMBLOCKNAME, GetActiveUniformBlockName)
PFN_GL(UNIFORMBLOCKBINDING, UniformBlockBinding)
PFN_GL(DRAWARRAYSINSTANCED, DrawArraysInstanced)
PFN_GL(DRAWELEMENTSINSTANCED, DrawElementsInstanced)
PFN_GL(FENCESYNC, FenceSync)
PFN_GL(ISSYNC, IsSync)
PFN_GL(DELETESYNC, DeleteSync)
PFN_GL(CLIENTWAITSYNC, ClientWaitSync)
PFN_GL(WAITSYNC, WaitSync)
PFN_GL(GETINTEGER64V, GetInteger64v)
PFN_GL(GETSYNCIV, GetSynciv)
PFN_GL(GETINTEGER64I_V, GetInteger64i_v)
PFN_GL(GETBUFFERPARAMETERI64V, GetBufferParameteri64v)
PFN_GL(GENSAMPLERS, GenSamplers)
PFN_GL(DELETESAMPLERS, DeleteSamplers)
PFN_GL(ISSAMPLER, IsSampler)
PFN_GL(BINDSAMPLER, BindSampler)
PFN_GL(SAMPLERPARAMETERI, SamplerParameteri)
PFN_GL(SAMPLERPARAMETERIV, SamplerParameteriv)
PFN_GL(SAMPLERPARAMETERF, SamplerParameterf)
PFN_GL(SAMPLERPARAMETERFV, SamplerParameterfv)
PFN_GL(GETSAMPLERPARAMETERIV, GetSamplerParameteriv)
PFN_GL(GETSAMPLERPARAMETERFV, GetSamplerParameterfv)
PFN_GL(VERTEXATTRIBDIVISOR, VertexAttribDivisor)
PFN_GL(BINDTRANSFORMFEEDBACK, BindTransformFeedback)
PFN_GL(DELETETRANSFORMFEEDBACKS, DeleteTransformFeedbacks)
PFN_GL(GENTRANSFORMFEEDBACKS, GenTransformFeedbacks)
PFN_GL(ISTRANSFORMFEEDBACK, IsTransformFeedback)
PFN_GL(PAUSETRANSFORMFEEDBACK, PauseTransformFeedback)
PFN_GL(RESUMETRANSFORMFEEDBACK, ResumeTransformFeedback)
PFN_GL(GETPROGRAMBINARY, GetProgramBinary)
PFN_GL(PROGRAMBINARY, ProgramBinary)
PFN_GL(PROGRAMPARAMETERI, ProgramParameteri)
PFN_GL(INVALIDATEFRAMEBUFFER, InvalidateFramebuffer)
PFN_GL(INVALIDATESUBFRAMEBUFFER, InvalidateSubFramebuffer)
PFN_GL(TEXSTORAGE2D, TexStorage2D)
PFN_GL(TEXSTORAGE3D, TexStorage3D)
PFN_GL(GETINTERNALFORMATIV, GetInternalformativ)
PFN_GL(DISPATCHCOMPUTE, DispatchCompute)
PFN_GL(DISPATCHCOMPUTEINDIRECT, DispatchComputeIndirect)
PFN_GL(DRAWARRAYSINDIRECT, DrawArraysIndirect)
PFN_GL(DRAWELEMENTSINDIRECT, DrawElementsIndirect)
PFN_GL(FRAMEBUFFERPARAMETERI, FramebufferParameteri)
PFN_GL(GETFRAMEBUFFERPARAMETERIV, GetFramebufferParameteriv)
PFN_GL(GETPROGRAMINTERFACEIV, GetProgramInterfaceiv)
PFN_GL(GETPROGRAMRESOURCEINDEX, GetProgramResourceIndex)
PFN_GL(GETPROGRAMRESOURCENAME, GetProgramResourceName)
PFN_GL(GETPROGRAMRESOURCEIV, GetProgramResourceiv)
PFN_GL(GETPROGRAMRESOURCELOCATION, GetProgramResourceLocation)
PFN_GL(USEPROGRAMSTAGES, UseProgramStages)
PFN_GL(ACTIVESHADERPROGRAM, ActiveShaderProgram)
PFN_GL(CREATESHADERPROGRAMV, CreateShaderProgramv)
PFN_GL(BINDPROGRAMPIPELINE, BindProgramPipeline)
PFN_GL(DELETEPROGRAMPIPELINES, DeleteProgramPipelines)
PFN_GL(GENPROGRAMPIPELINES, GenProgramPipelines)
PFN_GL(ISPROGRAMPIPELINE, IsProgramPipeline)
PFN_GL(GETPROGRAMPIPELINEIV, GetProgramPipelineiv)
PFN_GL(PROGRAMUNIFORM1I, ProgramUniform1i)
PFN_GL(PROGRAMUNIFORM2I, ProgramUniform2i)
PFN_GL(PROGRAMUNIFORM3I, ProgramUniform3i)
PFN_GL(PROGRAMUNIFORM4I, ProgramUniform4i)
PFN_GL(PROGRAMUNIFORM1UI, ProgramUniform1ui)
PFN_GL(PROGRAMUNIFORM2UI, ProgramUniform2ui)
PFN_GL(PROGRAMUNIFORM3UI, ProgramUniform3ui)
PFN_GL(PROGRAMUNIFORM4UI, ProgramUniform4ui)
PFN_GL(PROGRAMUNIFORM1F, ProgramUniform1f)
PFN_GL(PROGRAMUNIFORM2F, ProgramUniform2f)
PFN_GL(PROGRAMUNIFORM3F, ProgramUniform3f)
PFN_GL(PROGRAMUNIFORM4F, ProgramUniform4f)
PFN_GL(PROGRAMUNIFORM1IV, ProgramUniform1iv)
PFN_GL(PROGRAMUNIFORM2IV, ProgramUniform2iv)
PFN_GL(PROGRAMUNIFORM3IV, ProgramUniform3iv)
PFN_GL(PROGRAMUNIFORM4IV, ProgramUniform4iv)
PFN_GL(PROGRAMUNIFORM1UIV, ProgramUniform1uiv)
PFN_GL(PROGRAMUNIFORM2UIV, ProgramUniform2uiv)
PFN_GL(PROGRAMUNIFORM3UIV, ProgramUniform3uiv)
PFN_GL(PROGRAMUNIFORM4UIV, ProgramUniform4uiv)
PFN_GL(PROGRAMUNIFORM1FV, ProgramUniform1fv)
PFN_GL(PROGRAMUNIFORM2FV, ProgramUniform2fv)
PFN_GL(PROGRAMUNIFORM3FV, ProgramUniform3fv)
PFN_GL(PROGRAMUNIFORM4FV, ProgramUniform4fv)
PFN_GL(PROGRAMUNIFORMMATRIX2FV, ProgramUniformMatrix2fv)
PFN_GL(PROGRAMUNIFORMMATRIX3FV, ProgramUniformMatrix3fv)
PFN_GL(PROGRAMUNIFORMMATRIX4FV, ProgramUniformMatrix4fv)
PFN_GL(PROGRAMUNIFORMMATRIX2X3FV, ProgramUniformMatrix2x3fv)
PFN_GL(PROGRAMUNIFORMMATRIX3X2FV, ProgramUniformMatrix3x2fv)
PFN_GL(PROGRAMUNIFORMMATRIX2X4FV, ProgramUniformMatrix2x4fv)
PFN_GL(PROGRAMUNIFORMMATRIX4X2FV, ProgramUniformMatrix4x2fv)
PFN_GL(PROGRAMUNIFORMMATRIX3X4FV, ProgramUniformMatrix3x4fv)
PFN_GL(PROGRAMUNIFORMMATRIX4X3FV, ProgramUniformMatrix4x3fv)
PFN_GL(VALIDATEPROGRAMPIPELINE, ValidateProgramPipeline)
PFN_GL(GETPROGRAMPIPELINEINFOLOG, GetProgramPipelineInfoLog)
PFN_GL(BINDIMAGETEXTURE, BindImageTexture)
PFN_GL(GETBOOLEANI_V, GetBooleani_v)
PFN_GL(MEMORYBARRIER, MemoryBarrier)
PFN_GL(MEMORYBARRIERBYREGION, MemoryBarrierByRegion)
PFN_GL(TEXSTORAGE2DMULTISAMPLE, TexStorage2DMultisample)
PFN_GL(GETMULTISAMPLEFV, GetMultisamplefv)
PFN_GL(SAMPLEMASKI, SampleMaski)
PFN_GL(GETTEXLEVELPARAMETERIV, GetTexLevelParameteriv)
PFN_GL(GETTEXLEVELPARAMETERFV, GetTexLevelParameterfv)
PFN_GL(BINDVERTEXBUFFER, BindVertexBuffer)
PFN_GL(VERTEXATTRIBFORMAT, VertexAttribFormat)
PFN_GL(VERTEXATTRIBIFORMAT, VertexAttribIFormat)
PFN_GL(VERTEXATTRIBBINDING, VertexAttribBinding)
PFN_GL(VERTEXBINDINGDIVISOR, VertexBindingDivisor)
PFN_GL(BLENDBARRIER, BlendBarrier)
PFN_GL(COPYIMAGESUBDATA, CopyImageSubData)
PFN_GL(DEBUGMESSAGECONTROL, DebugMessageControl)
PFN_GL(DEBUGMESSAGEINSERT, DebugMessageInsert)
PFN_GL(DEBUGMESSAGECALLBACK, DebugMessageCallback)
PFN_GL(GETDEBUGMESSAGELOG, GetDebugMessageLog)
PFN_GL(PUSHDEBUGGROUP, PushDebugGroup)
PFN_GL(POPDEBUGGROUP, PopDebugGroup)
PFN_GL(OBJECTLABEL, ObjectLabel)
PFN_GL(GETOBJECTLABEL, GetObjectLabel)
PFN_GL(OBJECTPTRLABEL, ObjectPtrLabel)
PFN_GL(GETOBJECTPTRLABEL, GetObjectPtrLabel)
PFN_GL(GETPOINTERV, GetPointerv)
PFN_GL(ENABLEI, Enablei)
PFN_GL(DISABLEI, Disablei)
PFN_GL(BLENDEQUATIONI, BlendEquationi)
PFN_GL(BLENDEQUATIONSEPARATEI, BlendEquationSeparatei)
PFN_GL(BLENDFUNCI, BlendFunci)
PFN_GL(BLENDFUNCSEPARATEI, BlendFuncSeparatei)
PFN_GL(COLORMASKI, ColorMaski)
PFN_GL(ISENABLEDI, IsEnabledi)
PFN_GL(DRAWELEMENTSBASEVERTEX, DrawElementsBaseVertex)
PFN_GL(DRAWRANGEELEMENTSBASEVERTEX, DrawRangeElementsBaseVertex)
PFN_GL(DRAWELEMENTSINSTANCEDBASEVERTEX, DrawElementsInstancedBaseVertex)
PFN_GL(FRAMEBUFFERTEXTURE, FramebufferTexture)
PFN_GL(PRIMITIVEBOUNDINGBOX, PrimitiveBoundingBox)
PFN_GL(GETGRAPHICSRESETSTATUS, GetGraphicsResetStatus)
PFN_GL(READNPIXELS, ReadnPixels)
PFN_GL(GETNUNIFORMFV, GetnUniformfv)
PFN_GL(GETNUNIFORMIV, GetnUniformiv)
PFN_GL(GETNUNIFORMUIV, GetnUniformuiv)
PFN_GL(MINSAMPLESHADING, MinSampleShading)
PFN_GL(PATCHPARAMETERI, PatchParameteri)
PFN_GL(TEXPARAMETERIIV, TexParameterIiv)
PFN_GL(TEXPARAMETERIUIV, TexParameterIuiv)
PFN_GL(GETTEXPARAMETERIIV, GetTexParameterIiv)
PFN_GL(GETTEXPARAMETERIUIV, GetTexParameterIuiv)
PFN_GL(SAMPLERPARAMETERIIV, SamplerParameterIiv)
PFN_GL(SAMPLERPARAMETERIUIV, SamplerParameterIuiv)
PFN_GL(GETSAMPLERPARAMETERIIV, GetSamplerParameterIiv)
PFN_GL(GETSAMPLERPARAMETERIUIV, GetSamplerParameterIuiv)
PFN_GL(TEXBUFFER, TexBuffer)
PFN_GL(TEXBUFFERRANGE, TexBufferRange)
PFN_GL(TEXSTORAGE3DMULTISAMPLE, TexStorage3DMultisample)

/* GL_OES_EGL_image */
PFN_GL_EXT(EGLIMAGETARGETTEXTURE2DOES, EGLImageTargetTexture2DOES)
PFN_GL_EXT(EGLIMAGETARGETRENDERBUFFERSTORAGEOES, EGLImageTargetRenderbufferStorageOES)

/* GL_EXT_disjoint_timer_query */
PFN_GL_EXT(QUERYCOUNTEREXT, QueryCounterEXT)
PFN_GL_EXT(GETQUERYOBJECTIVEXT, GetQueryObjectivEXT)
PFN_GL_EXT(GETQUERYOBJECTUIVEXT, GetQueryObjectuivEXT)
PFN_GL_EXT(GETQUERYOBJECTI64VEXT, GetQueryObjecti64vEXT)
PFN_GL_EXT(GETQUERYOBJECTUI64VEXT, GetQueryObjectui64vEXT)

#undef PFN_GIPA
#undef PFN_EGL
#undef PFN_EGL_EXT
#undef PFN_GL
#undef PFN_GL_EXT