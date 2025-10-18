void OutlineEffectMain_GaussianBloom___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3E78C & 1) == 0 )
  {
    sub_1C37058(&OutlineEffectMain_GaussianBloom_TypeInfo);
    sub_1C37058(&StringLiteral_3126/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/);
    byte_4C3E78C = 1;
  }
  OutlineEffectMain_GaussianBloom_TypeInfo->static_fields->NPCameraPath = (struct System_String_o *)StringLiteral_3126/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)OutlineEffectMain_GaussianBloom_TypeInfo->static_fields,
    StringLiteral_3126/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/,
    v1,
    v2);
}


void OutlineEffectMain_GaussianBloom___ctor(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v10; // w1

  if ( (byte_4C3E78B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3973/*"Cameras/BattleCamera"*/);
    byte_4C3E78B = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
  this->fields.intensityMultiplication = 1.0;
  v10 = StringLiteral_3973/*"Cameras/BattleCamera"*/;
  this->fields.EditorCameraPath = (struct System_String_o *)StringLiteral_3973/*"Cameras/BattleCamera"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.EditorCameraPath, v10, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OutlineEffectMain_GaussianBloom__Awake(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.intensityMultiplication = 1.0;
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
}


void OutlineEffectMain_GaussianBloom__CleanUp(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_Object_o *materialLUT; // x22
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4C3E78A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E78A = 1;
  }
  OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v2);
  materialLUT = (UnityEngine_Object_o *)this->fields.materialLUT;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialLUT, 0, 0) )
  {
    OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(this->fields.smr, this->fields.materialLUT, v6);
    OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v7);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(tinyPolygonVertexBuffer, 0);
    this->fields.tinyPolygonVertexBuffer = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tinyPolygonVertexBuffer, 0, v9, v10);
  }
  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, v5);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v11);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v12);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialGaussianBloom, v13);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v14);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteBlue, v15);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteGreen, v16);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteRed, v17);
}


void OutlineEffectMain_GaussianBloom__DestroyOutlineCamera(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, method);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v3);
}


void OutlineEffectMain_GaussianBloom__GenerateBloomLookUpTexture(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x19
  const MethodInfo *v4; // x1
  bool v5; // w21
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Rendering_CommandBuffer_o *outlineCmd; // x22
  UnityEngine_Rendering_CommandBuffer_o *v8; // x22
  UnityEngine_Texture_o *outlineRT; // x23
  UnityEngine_Rendering_CommandBuffer_o *v10; // x22
  UnityEngine_Rendering_CommandBuffer_o *v11; // x22
  UnityEngine_Material_o *materialGaussianBloom; // x3
  UnityEngine_Rendering_CommandBuffer_o *v13; // x22
  UnityEngine_Material_o *v14; // x3
  UnityEngine_Rendering_CommandBuffer_o *v15; // x22
  const MethodInfo *v16; // x3
  bool isPlaying; // w20
  UnityEngine_Rendering_RenderTargetIdentifier_o v18; // [xsp+0h] [xbp-700h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v19; // [xsp+30h] [xbp-6D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v20; // [xsp+58h] [xbp-6A8h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v21; // [xsp+80h] [xbp-680h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v22; // [xsp+B0h] [xbp-650h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v23; // [xsp+E0h] [xbp-620h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v24; // [xsp+110h] [xbp-5F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v25; // [xsp+140h] [xbp-5C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v26; // [xsp+170h] [xbp-590h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v27; // [xsp+1A0h] [xbp-560h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v28; // [xsp+1D0h] [xbp-530h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v29; // [xsp+200h] [xbp-500h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v30; // [xsp+230h] [xbp-4D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v31; // [xsp+260h] [xbp-4A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v32; // [xsp+290h] [xbp-470h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v33; // [xsp+2C0h] [xbp-440h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v34; // [xsp+2F0h] [xbp-410h]
  UnityEngine_RenderTextureDescriptor_o v35; // [xsp+320h] [xbp-3E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v36; // [xsp+360h] [xbp-3A0h]
  UnityEngine_RenderTextureDescriptor_o v37; // [xsp+3A0h] [xbp-360h] BYREF
  UnityEngine_RenderTextureDescriptor_o v38; // [xsp+3E0h] [xbp-320h]
  UnityEngine_RenderTextureDescriptor_o v39; // [xsp+420h] [xbp-2E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v40; // [xsp+460h] [xbp-2A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v41; // [xsp+4A0h] [xbp-260h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v42; // [xsp+4D0h] [xbp-230h]
  UnityEngine_Matrix4x4_o v43; // [xsp+500h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+540h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+580h] [xbp-180h]
  UnityEngine_Matrix4x4_o v46; // [xsp+5C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+600h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+640h] [xbp-C0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v49; // [xsp+680h] [xbp-80h]
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E785 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E785 = 1;
  }
  if ( this->fields.outlineCmd )
  {
    settings = (UnityEngine_Object_o *)this->fields.settings;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Equality(settings, 0, 0);
    if ( v5 )
      settings = (UnityEngine_Object_o *)OutlineEffectMain_GaussianBloom__get_Settings(this, v4);
    OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(this, v4);
    smr = this->fields.smr;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_SkinnedMeshRenderer__set_forceMatrixRecalculationPerRender(smr, 1, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__Clear((UnityEngine_Rendering_CommandBuffer_o *)smr, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineRT;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_RenderTexture__get_descriptor(
      (UnityEngine_RenderTextureDescriptor_o *)&v48,
      (UnityEngine_RenderTexture_o *)smr,
      0);
    *(_OWORD *)&v49.fields._width_k__BackingField = *(_OWORD *)&v48.fields.m00;
    *(_OWORD *)&v49.fields._mipCount_k__BackingField = *(_OWORD *)&v48.fields.m01;
    *(_OWORD *)&v49.fields._dimension_k__BackingField = *(_OWORD *)&v48.fields.m02;
    v49.fields._memoryless_k__BackingField = LODWORD(v48.fields.m03);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_worldToCameraMatrix(&v47, (UnityEngine_Camera_o *)smr, 0);
    v48 = v47;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_projectionMatrix(&v46, (UnityEngine_Camera_o *)smr, 0);
    v47 = v46;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v46 = v48;
    v45 = v47;
    if ( !smr )
      goto LABEL_41;
    v44 = v46;
    v43 = v45;
    UnityEngine_Rendering_CommandBuffer__SetViewProjectionMatrices(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      &v44,
      &v43,
      0);
    outlineCmd = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v40,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    *(_OWORD *)&v42.fields.m_Type = *(_OWORD *)&v40.fields._width_k__BackingField;
    *(_OWORD *)&v42.fields.m_BufferPointer = *(_OWORD *)&v40.fields._mipCount_k__BackingField;
    *(_QWORD *)&v42.fields.m_DepthSlice = *(_QWORD *)&v40.fields._dimension_k__BackingField;
    if ( !outlineCmd )
      goto LABEL_41;
    v41 = v42;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(outlineCmd, &v41, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v50.fields.r = 0.0;
    v50.fields.g = 0.0;
    v50.fields.b = 0.0;
    v50.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v50,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteRed,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteGreen,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_71339072(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteBlue,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v40 = v49;
    if ( !smr )
      goto LABEL_41;
    v39 = v40;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71336544(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      10000,
      &v39,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v38 = v49;
    if ( !smr )
      goto LABEL_41;
    v37 = v38;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71336544(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      20000,
      &v37,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v36 = v49;
    if ( !smr )
      goto LABEL_41;
    v35 = v36;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_71336544(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      30000,
      &v35,
      0);
    v8 = this->fields.outlineCmd;
    outlineRT = (UnityEngine_Texture_o *)this->fields.outlineRT;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(
                                                 &v33,
                                                 10000,
                                                 0);
    v34 = v33;
    if ( !v8 )
      goto LABEL_41;
    v32 = v34;
    UnityEngine_Rendering_CommandBuffer__Blit(v8, outlineRT, &v32, 0);
    v10 = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(
                                                 &v31,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    v33 = v31;
    if ( !v10 )
      goto LABEL_41;
    v30 = v33;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v10, &v30, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v51.fields.r = 0.0;
    v51.fields.g = 0.0;
    v51.fields.b = 0.0;
    v51.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_71336956(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v51,
      0);
    v11 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v29, 10000, 0);
    v31 = v29;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(
                                                 &v28,
                                                 20000,
                                                 0);
    v29 = v28;
    if ( !v11 )
      goto LABEL_41;
    materialGaussianBloom = this->fields.materialGaussianBloom;
    v27 = v31;
    v26 = v29;
    UnityEngine_Rendering_CommandBuffer__Blit_71339508(v11, &v27, &v26, materialGaussianBloom, 0, 0);
    v13 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v25, 20000, 0);
    v28 = v25;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(
                                                 &v24,
                                                 30000,
                                                 0);
    v25 = v24;
    if ( !v13 )
      goto LABEL_41;
    v14 = this->fields.materialGaussianBloom;
    v23 = v28;
    v22 = v25;
    UnityEngine_Rendering_CommandBuffer__Blit_71339508(v13, &v23, &v22, v14, 1, 0);
    v15 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332628(&v21, 30000, 0);
    v24 = v21;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_71332656(
                                                 &v20,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    v21 = v20;
    if ( !v15 )
      goto LABEL_41;
    v19 = v24;
    v18 = v21;
    UnityEngine_Rendering_CommandBuffer__Blit_71339224(v15, &v19, &v18, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            10000,
            0),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd) == 0)
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            20000,
            0),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd) == 0)
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            30000,
            0),
          OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v16),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera) == 0) )
    {
LABEL_41:
      sub_1C372B4(smr);
    }
    UnityEngine_Camera__AddCommandBuffer((UnityEngine_Camera_o *)smr, 16, this->fields.outlineCmd, 0);
    if ( v5 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      isPlaying = UnityEngine_Application__get_isPlaying(0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( isPlaying )
        UnityEngine_Object__Destroy_71266752(settings, 0);
      else
        UnityEngine_Object__DestroyImmediate_71266940(settings, 0);
    }
  }
}


// attributes: thunk
void OutlineEffectMain_GaussianBloom__LateUpdate(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__GenerateBloomLookUpTexture(this, method);
}


// attributes: thunk
void OutlineEffectMain_GaussianBloom__OnDisable(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__CleanUp(this, method);
}


// attributes: thunk
void OutlineEffectMain_GaussianBloom__OnEnable(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__Setup(this, method);
}


void OutlineEffectMain_GaussianBloom__OnValidate(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x3
  int32_t v5; // w1

  if ( (byte_4C3E784 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&StringLiteral_22727/*"please play!!"*/);
    byte_4C3E784 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    if ( this->fields.setup )
    {
      this->fields.setup = 0;
      OutlineEffectMain_GaussianBloom__SetActive(this, 1, v3);
    }
  }
  else
  {
    v5 = StringLiteral_22727/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_22727/*"please play!!"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.message, v5, (int32_t)v3, v4);
  }
}


void OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(
        OutlineEffectMain_GaussianBloom_o *this,
        int32_t cameraEvent,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *camera; // x0
  System_Collections_Generic_IEnumerable_T__o *CommandBuffers; // x23
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w23
  System_String_o *name; // x24
  System_String_o *v12; // x0
  UnityEngine_Camera_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E786 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_CommandBuffer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_CommandBuffer__TypeInfo);
    byte_4C3E786 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( cmd )
  {
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    CommandBuffers = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Camera__GetCommandBuffers(
                                                                      camera,
                                                                      cameraEvent,
                                                                      0);
    v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CommandBuffer__TypeInfo);
    System_Collections_Generic_List_object____ctor_58337560(
      v9,
      CommandBuffers,
      (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    if ( !v9 )
      goto LABEL_19;
    v10 = v9->fields._size - 1;
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        camera = (UnityEngine_Camera_o *)System_Collections_Generic_List_object___get_Item(
                                           v9,
                                           v10,
                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
        if ( !camera )
          break;
        name = UnityEngine_Rendering_CommandBuffer__get_name((UnityEngine_Rendering_CommandBuffer_o *)camera, 0);
        v12 = UnityEngine_Rendering_CommandBuffer__get_name(cmd, 0);
        if ( System_String__op_Equality(name, v12, 0) )
          System_Collections_Generic_List_object___RemoveAt(
            v9,
            v10,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
        if ( --v10 < 0 )
          goto LABEL_11;
      }
LABEL_19:
      sub_1C372B4(camera);
    }
LABEL_11:
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    UnityEngine_Camera__RemoveCommandBuffers(camera, cameraEvent, 0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      v9,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__) )
    {
      v13 = this->fields.camera;
      if ( !v13 )
        sub_1C372B4(0);
      UnityEngine_Camera__AddCommandBuffer(
        v13,
        cameraEvent,
        (UnityEngine_Rendering_CommandBuffer_o *)v14.fields._current,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
  }
}


void OutlineEffectMain_GaussianBloom__SetActive(
        OutlineEffectMain_GaussianBloom_o *this,
        bool value,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  if ( value )
  {
    OutlineEffectMain_GaussianBloom__Setup(this, v5);
    OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(this, v6);
  }
  else
  {
    OutlineEffectMain_GaussianBloom__CleanUp(this, v5);
  }
}


void OutlineEffectMain_GaussianBloom__Setup(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  __int64 *v7; // x8
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  struct System_String_o *v14; // x1
  struct System_String_o **p_message; // x19
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  System_String_o *EditorCameraPath; // x20
  OutlineEffectMain_GaussianBloom_c *v27; // x0
  struct UnityEngine_Camera_o *Camera; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  System_String_o *CommandBufferName; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x1
  System_String_o *message; // t1

  if ( (byte_4C3E787 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&OutlineEffectMain_GaussianBloom_TypeInfo);
    sub_1C37058(&StringLiteral_10070/*"OutlineEffectMaterialLUT"*/);
    sub_1C37058(&StringLiteral_19397/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_1C37058(&StringLiteral_22637/*"parent is null. please attach this component to object with parent"*/);
    sub_1C37058(&StringLiteral_4944/*"Custom/TwoPassGaussianBloom"*/);
    sub_1C37058(&StringLiteral_10071/*"OutlineEffectShaderColorSilhouette_B"*/);
    sub_1C37058(&StringLiteral_23822/*"success"*/);
    sub_1C37058(&StringLiteral_4912/*"Custom/OutlineEffectShaderLUT"*/);
    sub_1C37058(&StringLiteral_10075/*"OutlineRenderTexture"*/);
    sub_1C37058(&StringLiteral_4911/*"Custom/OutlineEffectShaderColorSilhouette"*/);
    sub_1C37058(&StringLiteral_10072/*"OutlineEffectShaderColorSilhouette_G"*/);
    sub_1C37058(&StringLiteral_10074/*"OutlineEffectTwoPassGaussianBloom"*/);
    sub_1C37058(&StringLiteral_23425/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_1C37058(&StringLiteral_10073/*"OutlineEffectShaderColorSilhouette_R"*/);
    byte_4C3E787 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_30;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0, 0) )
  {
    v7 = &StringLiteral_22637/*"parent is null. please attach this component to object with parent"*/;
LABEL_19:
    v14 = (struct System_String_o *)*v7;
    this->fields.message = (struct System_String_o *)*v7;
    p_message = &this->fields.message;
LABEL_20:
    sub_1C36FFC((CGThumbnailListItem_o *)p_message, (int32_t)v14, (int32_t)v5, v6);
    return;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_30;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_30;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.smr, (int32_t)Component_object, v10, v11);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v7 = &StringLiteral_19397/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_19;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_30:
    sub_1C372B4(transform);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v7 = &StringLiteral_23425/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_19;
  }
  OutlineEffectUtility__CreateShader(&this->fields.shaderLUTAsset, (System_String_o *)StringLiteral_4912/*"Custom/OutlineEffectShaderLUT"*/, v5);
  OutlineEffectUtility__CreateShader(&this->fields.shaderColorSilhouette, (System_String_o *)StringLiteral_4911/*"Custom/OutlineEffectShaderColorSilhouette"*/, v16);
  OutlineEffectUtility__CreateShader(&this->fields.shaderGaussianBloom, (System_String_o *)StringLiteral_4944/*"Custom/TwoPassGaussianBloom"*/, v17);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialLUT,
    this->fields.shaderLUTAsset,
    (System_String_o *)StringLiteral_10070/*"OutlineEffectMaterialLUT"*/,
    v18);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteRed,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10073/*"OutlineEffectShaderColorSilhouette_R"*/,
    v19);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteGreen,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10072/*"OutlineEffectShaderColorSilhouette_G"*/,
    v20);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteBlue,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10071/*"OutlineEffectShaderColorSilhouette_B"*/,
    v21);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialGaussianBloom,
    this->fields.shaderGaussianBloom,
    (System_String_o *)StringLiteral_10074/*"OutlineEffectTwoPassGaussianBloom"*/,
    v22);
  normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(normalDatas, 0, 0) )
    OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(this, v24);
  EditorCameraPath = this->fields.EditorCameraPath;
  v27 = OutlineEffectMain_GaussianBloom_TypeInfo;
  if ( !OutlineEffectMain_GaussianBloom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectMain_GaussianBloom_TypeInfo);
    v27 = OutlineEffectMain_GaussianBloom_TypeInfo;
  }
  Camera = OutlineEffectUtility__GetCamera(EditorCameraPath, v27->static_fields->NPCameraPath, v25);
  this->fields.camera = Camera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.camera, (int32_t)Camera, v29, v30);
  CommandBufferName = OutlineEffectMain_GaussianBloom__get_CommandBufferName(this, v31);
  OutlineEffectUtility__InstantiateCommandBuffer(&this->fields.outlineCmd, CommandBufferName, v33);
  OutlineEffectUtility__InstantiateRenderTexture(
    &this->fields.outlineRT,
    1024,
    1024,
    (System_String_o *)StringLiteral_10075/*"OutlineRenderTexture"*/,
    v34);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v35);
  message = this->fields.message;
  p_message = &this->fields.message;
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
    LODWORD(v14) = StringLiteral_23822/*"success"*/;
    *p_message = (struct System_String_o *)StringLiteral_23822/*"success"*/;
    goto LABEL_20;
  }
}


void OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *smr; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x3
  __int64 *v6; // x8
  UnityEngine_SkinnedMeshRenderer_o *v7; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  struct System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4C3E788 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12833/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_1C37058(&StringLiteral_12832/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_4C3E788 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v6 = &StringLiteral_12832/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v9 = (struct System_String_o *)*v6;
    this->fields.message = (struct System_String_o *)*v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.message, (int32_t)v9, (int32_t)v4, v5);
    return;
  }
  v7 = this->fields.smr;
  if ( !v7 )
    sub_1C372B4(0);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v6 = &StringLiteral_12833/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
    this->fields.smr,
    this->fields.materialLUT,
    v4);
  OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v10);
}


void OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  char *MainTexture; // x0
  UnityEngine_Texture_o *v4; // x20
  UnityEngine_Material_o *materialSilhouetteRed; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Material_o *materialSilhouetteBlue; // x21
  const MethodInfo *v8; // x1
  UnityEngine_Material_o *materialSilhouetteGreen; // x20
  const MethodInfo *v10; // x1
  UnityEngine_Material_o *materialLUT; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  float v14; // s8
  UnityEngine_Material_o *v15; // x20
  const MethodInfo *v16; // x1
  UnityEngine_Material_o *v17; // x20
  const MethodInfo *v18; // x1
  UnityEngine_Material_o *v19; // x20
  const MethodInfo *v20; // x1
  UnityEngine_Material_o *v21; // x20
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x0
  UnityEngine_Vector2_o ScaledScreenResolution; // kr00_8
  const MethodInfo *v25; // x0
  UnityEngine_Vector2_o ScaledUVOffset; // kr08_8
  UnityEngine_Material_o *v27; // x20
  const MethodInfo *v28; // x1
  UnityEngine_Material_o *v29; // x20
  const MethodInfo *v30; // x1
  UnityEngine_Material_o *v31; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  float v34; // s8
  UnityEngine_Material_o *v35; // x20
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  float v38; // s8
  UnityEngine_Material_o *v39; // x20
  const MethodInfo *v40; // x1
  UnityEngine_Material_o *v41; // x20
  const MethodInfo *v42; // x1
  UnityEngine_Material_o *v43; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Material_o *v45; // x20
  const MethodInfo *v46; // x1
  UnityEngine_Material_o *v47; // x20
  const MethodInfo *v48; // x1
  UnityEngine_Material_o *v49; // x20
  const MethodInfo *v50; // x1
  UnityEngine_Material_o *materialGaussianBloom; // x20
  const MethodInfo *v52; // x1
  UnityEngine_Material_o *v53; // x20
  const MethodInfo *v54; // x1
  UnityEngine_Material_o *v55; // x20
  const MethodInfo *v56; // x1
  UnityEngine_Vector4_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E789 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16407/*"_VertexScale"*/);
    sub_1C37058(&StringLiteral_16254/*"_KernelSize"*/);
    sub_1C37058(&StringLiteral_16256/*"_LUTTex"*/);
    sub_1C37058(&StringLiteral_16248/*"_Intensity"*/);
    sub_1C37058(&StringLiteral_16160/*"_ClipFade"*/);
    sub_1C37058(&StringLiteral_16335/*"_ScaledScreenResolution"*/);
    sub_1C37058(&StringLiteral_16229/*"_FullscreenUVScale"*/);
    sub_1C37058(&StringLiteral_16295/*"_OutlineThickness"*/);
    sub_1C37058(&StringLiteral_16329/*"_Scale"*/);
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    sub_1C37058(&StringLiteral_16228/*"_FullscreenUVOffset"*/);
    sub_1C37058(&StringLiteral_16336/*"_ScaledUVOffset"*/);
    sub_1C37058(&StringLiteral_16404/*"_VertexOffset"*/);
    sub_1C37058(&StringLiteral_16283/*"_Offset"*/);
    sub_1C37058(&StringLiteral_16180/*"_Contrast"*/);
    sub_1C37058(&StringLiteral_16328/*"_Saturation"*/);
    sub_1C37058(&StringLiteral_16126/*"_AlphaSettings"*/);
    byte_4C3E789 = 1;
  }
  MainTexture = (char *)OutlineEffectUtility__GetMainTexture(this->fields.smr, method);
  if ( !this->fields.materialLUT )
    goto LABEL_56;
  v4 = (UnityEngine_Texture_o *)MainTexture;
  UnityEngine_Material__set_mainTexture(this->fields.materialLUT, (UnityEngine_Texture_o *)MainTexture, 0);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16256/*"_LUTTex"*/,
    (UnityEngine_Texture_o *)this->fields.outlineRT,
    0);
  MainTexture = (char *)this->fields.materialSilhouetteRed;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v4, 0);
  materialSilhouetteRed = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v6);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteRed )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteRed, *(UnityEngine_Color_o *)(MainTexture + 88), 0);
  MainTexture = (char *)this->fields.materialSilhouetteBlue;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v4, 0);
  materialSilhouetteBlue = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v8);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteBlue )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteBlue, *(UnityEngine_Color_o *)(MainTexture + 120), 0);
  MainTexture = (char *)this->fields.materialSilhouetteGreen;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v4, 0);
  materialSilhouetteGreen = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v10);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteGreen )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteGreen, *(UnityEngine_Color_o *)(MainTexture + 104), 0);
  materialLUT = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v12);
  if ( !MainTexture )
    goto LABEL_56;
  v14 = *((float *)MainTexture + 55);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v13);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialLUT )
    goto LABEL_56;
  v57.fields.z = this->fields.alphaMultiplication;
  v57.fields.y = *((float *)MainTexture + 56);
  v57.fields.w = 0.0;
  v57.fields.x = v14;
  UnityEngine_Material__SetVector(materialLUT, (System_String_o *)StringLiteral_16126/*"_AlphaSettings"*/, v57, 0);
  v15 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v16);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v15 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v15, (System_String_o *)StringLiteral_16295/*"_OutlineThickness"*/, *((float *)MainTexture + 8), 0);
  v17 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v18);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v17 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v17, (System_String_o *)StringLiteral_16160/*"_ClipFade"*/, *((float *)MainTexture + 10), 0);
  v19 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v20);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v19 )
    goto LABEL_56;
  v58.fields.y = *((float *)MainTexture + 13);
  v58.fields.z = *((float *)MainTexture + 14);
  v58.fields.x = *((float *)MainTexture + 12);
  v58.fields.w = 0.0;
  UnityEngine_Material__SetVector(v19, (System_String_o *)StringLiteral_16407/*"_VertexScale"*/, v58, 0);
  v21 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v22);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v21 )
    goto LABEL_56;
  v59.fields.y = *((float *)MainTexture + 16);
  v59.fields.z = *((float *)MainTexture + 17);
  v59.fields.x = *((float *)MainTexture + 15);
  v59.fields.w = 0.0;
  UnityEngine_Material__SetVector(v21, (System_String_o *)StringLiteral_16404/*"_VertexOffset"*/, v59, 0);
  ScaledScreenResolution = OutlineEffectUtility__GetScaledScreenResolution(v23);
  ScaledUVOffset = OutlineEffectUtility__GetScaledUVOffset(v25);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v60.fields.z = 0.0;
  v60.fields.w = 0.0;
  v60.fields.x = ScaledScreenResolution.fields.x;
  v60.fields.y = ScaledScreenResolution.fields.y;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)MainTexture, (System_String_o *)StringLiteral_16335/*"_ScaledScreenResolution"*/, v60, 0);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v61.fields.z = 0.0;
  v61.fields.w = 0.0;
  v61.fields.x = ScaledUVOffset.fields.x;
  v61.fields.y = ScaledUVOffset.fields.y;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)MainTexture, (System_String_o *)StringLiteral_16336/*"_ScaledUVOffset"*/, v61, 0);
  v27 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v28);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v27 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v27, (System_String_o *)StringLiteral_16328/*"_Saturation"*/, *((float *)MainTexture + 57), 0);
  v29 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v30);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v29 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16180/*"_Contrast"*/, *((float *)MainTexture + 58), 0);
  v31 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v32);
  if ( !MainTexture )
    goto LABEL_56;
  v34 = *((float *)MainTexture + 18);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v33);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v31 )
    goto LABEL_56;
  v62.fields.y = *((float *)MainTexture + 19);
  v62.fields.z = 0.0;
  v62.fields.w = 0.0;
  v62.fields.x = v34;
  UnityEngine_Material__SetVector(v31, (System_String_o *)StringLiteral_16229/*"_FullscreenUVScale"*/, v62, 0);
  v35 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v36);
  if ( !MainTexture )
    goto LABEL_56;
  v38 = *((float *)MainTexture + 20);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v37);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v35 )
    goto LABEL_56;
  v63.fields.y = *((float *)MainTexture + 21);
  v63.fields.z = 0.0;
  v63.fields.w = 0.0;
  v63.fields.x = v38;
  UnityEngine_Material__SetVector(v35, (System_String_o *)StringLiteral_16228/*"_FullscreenUVOffset"*/, v63, 0);
  v39 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v40);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v39 )
    goto LABEL_56;
  v64.fields.y = *((float *)MainTexture + 44);
  v64.fields.z = *((float *)MainTexture + 45);
  v64.fields.x = *((float *)MainTexture + 43);
  v64.fields.w = 0.0;
  UnityEngine_Material__SetVector(v39, (System_String_o *)StringLiteral_16283/*"_Offset"*/, v64, 0);
  v41 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v42);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v41 )
    goto LABEL_56;
  v65.fields.y = *((float *)MainTexture + 47);
  v65.fields.z = *((float *)MainTexture + 48);
  v65.fields.x = *((float *)MainTexture + 46);
  v65.fields.w = 0.0;
  UnityEngine_Material__SetVector(v41, (System_String_o *)StringLiteral_16283/*"_Offset"*/, v65, 0);
  v43 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v44);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v43 )
    goto LABEL_56;
  v66.fields.y = *((float *)MainTexture + 50);
  v66.fields.z = *((float *)MainTexture + 51);
  v66.fields.x = *((float *)MainTexture + 49);
  v66.fields.w = 0.0;
  UnityEngine_Material__SetVector(v43, (System_String_o *)StringLiteral_16283/*"_Offset"*/, v66, 0);
  v45 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v46);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v45 )
    goto LABEL_56;
  v67.fields.y = *((float *)MainTexture + 35);
  v67.fields.z = *((float *)MainTexture + 36);
  v67.fields.x = *((float *)MainTexture + 34);
  v67.fields.w = 0.0;
  UnityEngine_Material__SetVector(v45, (System_String_o *)StringLiteral_16329/*"_Scale"*/, v67, 0);
  v47 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v48);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v47 )
    goto LABEL_56;
  v68.fields.y = *((float *)MainTexture + 38);
  v68.fields.z = *((float *)MainTexture + 39);
  v68.fields.x = *((float *)MainTexture + 37);
  v68.fields.w = 0.0;
  UnityEngine_Material__SetVector(v47, (System_String_o *)StringLiteral_16329/*"_Scale"*/, v68, 0);
  v49 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v50);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v49 )
    goto LABEL_56;
  v69.fields.y = *((float *)MainTexture + 41);
  v69.fields.z = *((float *)MainTexture + 42);
  v69.fields.x = *((float *)MainTexture + 40);
  v69.fields.w = 0.0;
  UnityEngine_Material__SetVector(v49, (System_String_o *)StringLiteral_16329/*"_Scale"*/, v69, 0);
  materialGaussianBloom = this->fields.materialGaussianBloom;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v52);
  if ( !MainTexture
    || !materialGaussianBloom
    || (UnityEngine_Material__SetFloat(
          materialGaussianBloom,
          (System_String_o *)StringLiteral_16345/*"_Sigma"*/,
          this->fields.sigmaMultiplication * *((float *)MainTexture + 52),
          0),
        v53 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v54)) == 0)
    || !v53
    || (UnityEngine_Material__SetFloat(
          v53,
          (System_String_o *)StringLiteral_16248/*"_Intensity"*/,
          this->fields.intensityMultiplication * (float)((float)(100.0 - *((float *)MainTexture + 54)) / 100.0),
          0),
        v55 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v56)) == 0)
    || !v55 )
  {
LABEL_56:
    sub_1C372B4(MainTexture);
  }
  UnityEngine_Material__SetInt(v55, (System_String_o *)StringLiteral_16254/*"_KernelSize"*/, *((_DWORD *)MainTexture + 53), 0);
}


void OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(
        OutlineEffectMain_GaussianBloom_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1C372B4(this);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0);
}


System_String_o *OutlineEffectMain_GaussianBloom__get_CommandBufferName(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  Il2CppObject *v9; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3E782 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_10068/*"Outline CommandBuffer - {0}"*/);
    byte_4C3E782 = 1;
  }
  InstanceID = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)this, 0);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID, v3, v4, v5, v6, v7, v8);
  return System_String__Format((System_String_o *)StringLiteral_10068/*"Outline CommandBuffer - {0}"*/, v9, 0);
}


OutlineEffectSettings_o *OutlineEffectMain_GaussianBloom__get_Settings(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settings; // x20
  OutlineEffectSettings_c *v4; // x0

  if ( (byte_4C3E783 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&OutlineEffectSettings_TypeInfo);
    byte_4C3E783 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0, 0) )
    return this->fields.settings;
  v4 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  return OutlineEffectSettings__get_Default((const MethodInfo *)v4);
}