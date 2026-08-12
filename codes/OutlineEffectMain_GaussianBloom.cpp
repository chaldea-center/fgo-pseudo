void OutlineEffectMain_GaussianBloom___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596BDA6 & 1) == 0 )
  {
    sub_2213A60(&OutlineEffectMain_GaussianBloom_TypeInfo);
    sub_2213A60(&StringLiteral_3249/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/);
    byte_596BDA6 = 1;
  }
  v7 = StringLiteral_3249/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/;
  OutlineEffectMain_GaussianBloom_TypeInfo->static_fields->NPCameraPath = (struct System_String_o *)StringLiteral_3249/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)OutlineEffectMain_GaussianBloom_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void OutlineEffectMain_GaussianBloom___ctor(OutlineEffectMain_GaussianBloom_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v14; // x1

  if ( (byte_596BDA5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4119/*"Cameras/BattleCamera"*/);
    byte_596BDA5 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  v14 = (struct System_String_o *)StringLiteral_4119/*"Cameras/BattleCamera"*/;
  this->fields.intensityMultiplication = 1.0;
  this->fields.EditorCameraPath = v14;
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.EditorCameraPath, (int32_t)v14, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *materialLUT; // x22
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_596BDA4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BDA4 = 1;
  }
  OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v2);
  materialLUT = (UnityEngine_Object_o *)this->fields.materialLUT;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(materialLUT, 0, 0) )
  {
    OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(this->fields.smr, this->fields.materialLUT, v8);
    OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v9);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(tinyPolygonVertexBuffer, 0);
    this->fields.tinyPolygonVertexBuffer = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tinyPolygonVertexBuffer,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, v7);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v17);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v18);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialGaussianBloom, v19);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v20);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteBlue, v21);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteGreen, v22);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteRed, v23);
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
  __int64 v2; // x2
  struct UnityEngine_Rendering_CommandBuffer_o *outlineCmd; // x8
  UnityEngine_Object_o *settings; // x19
  const MethodInfo *v6; // x1
  bool v7; // w21
  __int64 v8; // x1
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Rendering_CommandBuffer_o *v10; // x22
  UnityEngine_Rendering_CommandBuffer_o *v11; // x22
  UnityEngine_Texture_o *outlineRT; // x23
  UnityEngine_Rendering_CommandBuffer_o *v13; // x22
  UnityEngine_Rendering_CommandBuffer_o *v14; // x22
  UnityEngine_Material_o *materialGaussianBloom; // x3
  UnityEngine_Rendering_CommandBuffer_o *v16; // x22
  UnityEngine_Material_o *v17; // x3
  UnityEngine_Rendering_CommandBuffer_o *v18; // x22
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  bool isPlaying; // w8
  int v25; // w9
  UnityEngine_Rendering_RenderTargetIdentifier_o v26; // [xsp+0h] [xbp-5D0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v27; // [xsp+30h] [xbp-5A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v28; // [xsp+60h] [xbp-570h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v29; // [xsp+88h] [xbp-548h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v30; // [xsp+B0h] [xbp-520h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v31; // [xsp+E0h] [xbp-4F0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v32; // [xsp+110h] [xbp-4C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v33; // [xsp+138h] [xbp-498h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v34; // [xsp+160h] [xbp-470h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v35; // [xsp+190h] [xbp-440h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v36; // [xsp+1C0h] [xbp-410h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v37; // [xsp+1E8h] [xbp-3E8h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v38; // [xsp+210h] [xbp-3C0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v39; // [xsp+238h] [xbp-398h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v40; // [xsp+260h] [xbp-370h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v41; // [xsp+288h] [xbp-348h] BYREF
  UnityEngine_RenderTextureDescriptor_o v42; // [xsp+2B0h] [xbp-320h] BYREF
  UnityEngine_RenderTextureDescriptor_o v43; // [xsp+2F0h] [xbp-2E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v44; // [xsp+330h] [xbp-2A0h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v45; // [xsp+370h] [xbp-260h] BYREF
  UnityEngine_Rendering_RenderTargetIdentifier_o v46; // [xsp+398h] [xbp-238h] BYREF
  UnityEngine_Matrix4x4_o v47; // [xsp+3C0h] [xbp-210h] BYREF
  UnityEngine_Matrix4x4_o v48; // [xsp+400h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+44Ch] [xbp-184h] BYREF
  UnityEngine_Matrix4x4_o v50; // [xsp+48Ch] [xbp-144h] BYREF
  _BYTE v51[180]; // [xsp+4CCh] [xbp-104h] BYREF
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BD9F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD9F = 1;
  }
  outlineCmd = this->fields.outlineCmd;
  memset(&v51[52], 0, 116);
  if ( outlineCmd )
  {
    settings = (UnityEngine_Object_o *)this->fields.settings;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v7 = UnityEngine_Object__op_Equality(settings, 0, 0);
    if ( v7 )
      settings = (UnityEngine_Object_o *)OutlineEffectMain_GaussianBloom__get_Settings(this, v6);
    OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(this, v6);
    smr = this->fields.smr;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_SkinnedMeshRenderer__set_forceMatrixRecalculationPerRender(smr, 1, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Rendering_CommandBuffer__Clear((UnityEngine_Rendering_CommandBuffer_o *)smr, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineRT;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_RenderTexture__get_descriptor(
      (UnityEngine_RenderTextureDescriptor_o *)v51,
      (UnityEngine_RenderTexture_o *)smr,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    *(UnityEngine_RenderTextureDescriptor_o *)&v51[116] = *(UnityEngine_RenderTextureDescriptor_o *)v51;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Camera__get_worldToCameraMatrix(&v50, (UnityEngine_Camera_o *)smr, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    *(UnityEngine_Matrix4x4_o *)&v51[52] = v50;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Camera__get_projectionMatrix(&v49, (UnityEngine_Camera_o *)smr, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v48 = *(UnityEngine_Matrix4x4_o *)&v51[52];
    v47 = v49;
    UnityEngine_Rendering_CommandBuffer__SetViewProjectionMatrices(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      &v48,
      &v47,
      0);
    v10 = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
                                                 &v46,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    if ( !v10 )
      goto LABEL_43;
    v45 = v46;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v10, &v45, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v52.fields.r = 0.0;
    v52.fields.g = 0.0;
    v52.fields.b = 0.0;
    v52.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget((UnityEngine_Rendering_CommandBuffer_o *)smr, 1, 1, v52, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteRed,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteGreen,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_83559992(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteBlue,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v44 = *(UnityEngine_RenderTextureDescriptor_o *)&v51[116];
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556492(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      10000,
      &v44,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v43 = *(UnityEngine_RenderTextureDescriptor_o *)&v51[116];
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556492(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      20000,
      &v43,
      0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v42 = *(UnityEngine_RenderTextureDescriptor_o *)&v51[116];
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_83556492(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      30000,
      &v42,
      0);
    v11 = this->fields.outlineCmd;
    outlineRT = (UnityEngine_Texture_o *)this->fields.outlineRT;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(
                                                 &v41,
                                                 10000,
                                                 0);
    if ( !v11 )
      goto LABEL_43;
    v40 = v41;
    UnityEngine_Rendering_CommandBuffer__Blit(v11, outlineRT, &v40, 0);
    v13 = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
                                                 &v39,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    if ( !v13 )
      goto LABEL_43;
    v38 = v39;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(v13, &v38, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_43;
    v53.fields.r = 0.0;
    v53.fields.g = 0.0;
    v53.fields.b = 0.0;
    v53.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget((UnityEngine_Rendering_CommandBuffer_o *)smr, 1, 1, v53, 0);
    v14 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v37, 10000, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(
                                                 &v36,
                                                 20000,
                                                 0);
    if ( !v14 )
      goto LABEL_43;
    materialGaussianBloom = this->fields.materialGaussianBloom;
    v35 = v37;
    v34 = v36;
    UnityEngine_Rendering_CommandBuffer__Blit_83560304(v14, &v35, &v34, materialGaussianBloom, 0, 0);
    v16 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v33, 20000, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(
                                                 &v32,
                                                 30000,
                                                 0);
    if ( !v16 )
      goto LABEL_43;
    v17 = this->fields.materialGaussianBloom;
    v31 = v33;
    v30 = v32;
    UnityEngine_Rendering_CommandBuffer__Blit_83560304(v16, &v31, &v30, v17, 1, 0);
    v18 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548792(&v29, 30000, 0);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_83548824(
                                                 &v28,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0);
    if ( !v18 )
      goto LABEL_43;
    v27 = v29;
    v26 = v28;
    UnityEngine_Rendering_CommandBuffer__Blit_83560100(v18, &v27, &v26, 0);
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
          OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v19),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera) == 0) )
    {
LABEL_43:
      sub_2213CDC(smr, v8);
    }
    UnityEngine_Camera__AddCommandBuffer((UnityEngine_Camera_o *)smr, 16, this->fields.outlineCmd, 0);
    if ( v7 )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v20, v21);
      isPlaying = UnityEngine_Application__get_isPlaying(0);
      v25 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      if ( isPlaying )
      {
        if ( !v25 )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
        UnityEngine_Object__Destroy_83459800(settings, 0);
      }
      else
      {
        if ( !v25 )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
        UnityEngine_Object__DestroyImmediate_83460132(settings, 0);
      }
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
  __int64 v2; // x2
  MethodInfo *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1

  if ( (byte_596BD9E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&StringLiteral_23901/*"please play!!"*/);
    byte_596BD9E = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    if ( this->fields.setup )
    {
      this->fields.setup = 0;
      OutlineEffectMain_GaussianBloom__SetActive(this, 1, v4);
    }
  }
  else
  {
    v10 = StringLiteral_23901/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_23901/*"please play!!"*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.message,
      v10,
      (System_String_o *)v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(
        OutlineEffectMain_GaussianBloom_o *this,
        int32_t cameraEvent,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *camera; // x0
  System_Collections_Generic_IEnumerable_T__o *CommandBuffers; // x23
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t size; // w23
  System_String_o *name; // x24
  System_String_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Camera_o *v14; // x0
  __int64 v15; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v16; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BDA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandBuffer__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_CommandBuffer__TypeInfo);
    byte_596BDA0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( cmd )
  {
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    CommandBuffers = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Camera__GetCommandBuffers(
                                                                      camera,
                                                                      cameraEvent,
                                                                      0);
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommandBuffer__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v9,
      CommandBuffers,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    if ( !v9 )
      goto LABEL_19;
    size = v9->fields._size;
    if ( size - 1 >= 0 )
    {
      while ( 1 )
      {
        camera = (UnityEngine_Camera_o *)System_Collections_Generic_List_object___get_Item(
                                           v9,
                                           --size,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
        if ( !camera )
          break;
        name = UnityEngine_Rendering_CommandBuffer__get_name((UnityEngine_Rendering_CommandBuffer_o *)camera, 0);
        v12 = UnityEngine_Rendering_CommandBuffer__get_name(cmd, 0);
        if ( System_String__op_Equality(name, v12, 0) )
          System_Collections_Generic_List_object___RemoveAt(
            v9,
            size,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
        if ( size <= 0 )
          goto LABEL_11;
      }
LABEL_19:
      sub_2213CDC(camera, *(_QWORD *)&cameraEvent);
    }
LABEL_11:
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    UnityEngine_Camera__RemoveCommandBuffers(camera, cameraEvent, 0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v9,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    v15 = 0;
    v16 = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__) )
    {
      v14 = this->fields.camera;
      if ( !v14 )
        sub_2213CDC(0, v13);
      UnityEngine_Camera__AddCommandBuffer(
        v14,
        cameraEvent,
        (UnityEngine_Rendering_CommandBuffer_o *)v17.fields._current,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *parent; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x8
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *smr; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *sharedMesh; // x20
  struct System_String_o *v29; // x1
  struct System_String_o **p_message; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  System_String_o *EditorCameraPath; // x20
  OutlineEffectMain_GaussianBloom_c *v44; // x0
  struct UnityEngine_Camera_o *Camera; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  const MethodInfo *v52; // x1
  System_String_o *CommandBufferName; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x1
  struct System_String_o **v57; // x19
  System_String_o *message; // t1

  if ( (byte_596BDA1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OutlineEffectMain_GaussianBloom_TypeInfo);
    sub_2213A60(&StringLiteral_10475/*"OutlineEffectMaterialLUT"*/);
    sub_2213A60(&StringLiteral_20305/*"failed to get SkinnedMeshRenderer component from parent"*/);
    sub_2213A60(&StringLiteral_23796/*"parent is null. please attach this component to object with parent"*/);
    sub_2213A60(&StringLiteral_5132/*"Custom/TwoPassGaussianBloom"*/);
    sub_2213A60(&StringLiteral_10476/*"OutlineEffectShaderColorSilhouette_B"*/);
    sub_2213A60(&StringLiteral_25089/*"success"*/);
    sub_2213A60(&StringLiteral_5095/*"Custom/OutlineEffectShaderLUT"*/);
    sub_2213A60(&StringLiteral_10480/*"OutlineRenderTexture"*/);
    sub_2213A60(&StringLiteral_5094/*"Custom/OutlineEffectShaderColorSilhouette"*/);
    sub_2213A60(&StringLiteral_10477/*"OutlineEffectShaderColorSilhouette_G"*/);
    sub_2213A60(&StringLiteral_10479/*"OutlineEffectTwoPassGaussianBloom"*/);
    sub_2213A60(&StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_2213A60(&StringLiteral_10478/*"OutlineEffectShaderColorSilhouette_R"*/);
    byte_596BDA1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_30;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(parent, 0, 0) )
  {
    v14 = &StringLiteral_23796/*"parent is null. please attach this component to object with parent"*/;
LABEL_19:
    v29 = (struct System_String_o *)*v14;
    this->fields.message = (struct System_String_o *)*v14;
    p_message = &this->fields.message;
LABEL_20:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_message, (int32_t)v29, v8, v9, v10, v11, v12, v13);
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
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.smr,
    (int32_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v14 = &StringLiteral_20305/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_19;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_30:
    sub_2213CDC(transform, v4);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v14 = &StringLiteral_24650/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_19;
  }
  OutlineEffectUtility__CreateShader(
    &this->fields.shaderLUTAsset,
    (System_String_o *)StringLiteral_5095/*"Custom/OutlineEffectShaderLUT"*/,
    (const MethodInfo *)v8);
  OutlineEffectUtility__CreateShader(&this->fields.shaderColorSilhouette, (System_String_o *)StringLiteral_5094/*"Custom/OutlineEffectShaderColorSilhouette"*/, v31);
  OutlineEffectUtility__CreateShader(&this->fields.shaderGaussianBloom, (System_String_o *)StringLiteral_5132/*"Custom/TwoPassGaussianBloom"*/, v32);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialLUT,
    this->fields.shaderLUTAsset,
    (System_String_o *)StringLiteral_10475/*"OutlineEffectMaterialLUT"*/,
    v33);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteRed,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10478/*"OutlineEffectShaderColorSilhouette_R"*/,
    v34);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteGreen,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10477/*"OutlineEffectShaderColorSilhouette_G"*/,
    v35);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteBlue,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10476/*"OutlineEffectShaderColorSilhouette_B"*/,
    v36);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialGaussianBloom,
    this->fields.shaderGaussianBloom,
    (System_String_o *)StringLiteral_10479/*"OutlineEffectTwoPassGaussianBloom"*/,
    v37);
  normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
  if ( UnityEngine_Object__op_Inequality(normalDatas, 0, 0) )
    OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(this, v41);
  EditorCameraPath = this->fields.EditorCameraPath;
  v44 = OutlineEffectMain_GaussianBloom_TypeInfo;
  if ( !*(&OutlineEffectMain_GaussianBloom_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectMain_GaussianBloom_TypeInfo, v41, v42);
    v44 = OutlineEffectMain_GaussianBloom_TypeInfo;
  }
  Camera = OutlineEffectUtility__GetCamera(EditorCameraPath, v44->static_fields->NPCameraPath, v42);
  this->fields.camera = Camera;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.camera, (int32_t)Camera, v46, v47, v48, v49, v50, v51);
  CommandBufferName = OutlineEffectMain_GaussianBloom__get_CommandBufferName(this, v52);
  OutlineEffectUtility__InstantiateCommandBuffer(&this->fields.outlineCmd, CommandBufferName, v54);
  OutlineEffectUtility__InstantiateRenderTexture(
    &this->fields.outlineRT,
    1024,
    1024,
    (System_String_o *)StringLiteral_10480/*"OutlineRenderTexture"*/,
    v55);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v56);
  message = this->fields.message;
  v57 = &this->fields.message;
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
    p_message = v57;
    LODWORD(v29) = StringLiteral_25089/*"success"*/;
    *v57 = (struct System_String_o *)StringLiteral_25089/*"success"*/;
    goto LABEL_20;
  }
}


void OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *smr; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 *v12; // x8
  UnityEngine_SkinnedMeshRenderer_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sharedMesh; // x20
  struct System_String_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_596BDA2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13373/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/);
    sub_2213A60(&StringLiteral_13372/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/);
    byte_596BDA2 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(smr, 0, 0) )
  {
    v12 = &StringLiteral_13372/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v17 = (struct System_String_o *)*v12;
    this->fields.message = (struct System_String_o *)*v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, (int32_t)v17, v6, v7, v8, v9, v10, v11);
    return;
  }
  v13 = this->fields.smr;
  if ( !v13 )
    sub_2213CDC(0, v5);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v13, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0, 0) )
  {
    v12 = &StringLiteral_13373/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
    this->fields.smr,
    this->fields.materialLUT,
    (const MethodInfo *)v6);
  OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v18);
}


void OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  char *MainTexture; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Texture_o *v5; // x20
  UnityEngine_Material_o *materialSilhouetteRed; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Material_o *materialSilhouetteBlue; // x21
  const MethodInfo *v9; // x1
  UnityEngine_Material_o *materialSilhouetteGreen; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Material_o *materialLUT; // x20
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
  float v33; // s8
  UnityEngine_Material_o *v34; // x20
  const MethodInfo *v35; // x1
  float v36; // s8
  UnityEngine_Material_o *v37; // x20
  const MethodInfo *v38; // x1
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
  UnityEngine_Material_o *materialGaussianBloom; // x20
  const MethodInfo *v50; // x1
  UnityEngine_Material_o *v51; // x20
  const MethodInfo *v52; // x1
  UnityEngine_Material_o *v53; // x20
  const MethodInfo *v54; // x1
  UnityEngine_Vector4_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  if ( (byte_596BDA3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17064/*"_VertexScale"*/);
    sub_2213A60(&StringLiteral_16904/*"_KernelSize"*/);
    sub_2213A60(&StringLiteral_16906/*"_LUTTex"*/);
    sub_2213A60(&StringLiteral_16898/*"_Intensity"*/);
    sub_2213A60(&StringLiteral_16801/*"_ClipFade"*/);
    sub_2213A60(&StringLiteral_16986/*"_ScaledScreenResolution"*/);
    sub_2213A60(&StringLiteral_16878/*"_FullscreenUVScale"*/);
    sub_2213A60(&StringLiteral_16946/*"_OutlineThickness"*/);
    sub_2213A60(&StringLiteral_16980/*"_Scale"*/);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    sub_2213A60(&StringLiteral_16877/*"_FullscreenUVOffset"*/);
    sub_2213A60(&StringLiteral_16987/*"_ScaledUVOffset"*/);
    sub_2213A60(&StringLiteral_17061/*"_VertexOffset"*/);
    sub_2213A60(&StringLiteral_16934/*"_Offset"*/);
    sub_2213A60(&StringLiteral_16826/*"_Contrast"*/);
    sub_2213A60(&StringLiteral_16979/*"_Saturation"*/);
    sub_2213A60(&StringLiteral_16763/*"_AlphaSettings"*/);
    byte_596BDA3 = 1;
  }
  MainTexture = (char *)OutlineEffectUtility__GetMainTexture(this->fields.smr, method);
  if ( !this->fields.materialLUT )
    goto LABEL_56;
  v5 = (UnityEngine_Texture_o *)MainTexture;
  UnityEngine_Material__set_mainTexture(this->fields.materialLUT, (UnityEngine_Texture_o *)MainTexture, 0);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16906/*"_LUTTex"*/,
    (UnityEngine_Texture_o *)this->fields.outlineRT,
    0);
  MainTexture = (char *)this->fields.materialSilhouetteRed;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v5, 0);
  materialSilhouetteRed = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v7);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteRed )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteRed, *(UnityEngine_Color_o *)(MainTexture + 88), 0);
  MainTexture = (char *)this->fields.materialSilhouetteBlue;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v5, 0);
  materialSilhouetteBlue = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v9);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteBlue )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteBlue, *(UnityEngine_Color_o *)(MainTexture + 120), 0);
  MainTexture = (char *)this->fields.materialSilhouetteGreen;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v5, 0);
  materialSilhouetteGreen = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v11);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteGreen )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteGreen, *(UnityEngine_Color_o *)(MainTexture + 104), 0);
  materialLUT = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v13);
  if ( !MainTexture )
    goto LABEL_56;
  v14 = *((float *)MainTexture + 55);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v4);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialLUT )
    goto LABEL_56;
  v55.fields.w = 0.0;
  v55.fields.x = v14;
  v55.fields.z = this->fields.alphaMultiplication;
  v55.fields.y = *((float *)MainTexture + 56);
  UnityEngine_Material__SetVector(materialLUT, (System_String_o *)StringLiteral_16763/*"_AlphaSettings"*/, v55, 0);
  v15 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v16);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v15 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v15, (System_String_o *)StringLiteral_16946/*"_OutlineThickness"*/, *((float *)MainTexture + 8), 0);
  v17 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v18);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v17 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v17, (System_String_o *)StringLiteral_16801/*"_ClipFade"*/, *((float *)MainTexture + 10), 0);
  v19 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v20);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v19 )
    goto LABEL_56;
  v56.fields.w = 0.0;
  v56.fields.y = *((float *)MainTexture + 13);
  v56.fields.z = *((float *)MainTexture + 14);
  v56.fields.x = *((float *)MainTexture + 12);
  UnityEngine_Material__SetVector(v19, (System_String_o *)StringLiteral_17064/*"_VertexScale"*/, v56, 0);
  v21 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v22);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v21 )
    goto LABEL_56;
  v57.fields.w = 0.0;
  v57.fields.y = *((float *)MainTexture + 16);
  v57.fields.z = *((float *)MainTexture + 17);
  v57.fields.x = *((float *)MainTexture + 15);
  UnityEngine_Material__SetVector(v21, (System_String_o *)StringLiteral_17061/*"_VertexOffset"*/, v57, 0);
  ScaledScreenResolution = OutlineEffectUtility__GetScaledScreenResolution(v23);
  ScaledUVOffset = OutlineEffectUtility__GetScaledUVOffset(v25);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v58.fields.z = 0.0;
  v58.fields.w = 0.0;
  v58.fields.x = ScaledScreenResolution.fields.x;
  v58.fields.y = ScaledScreenResolution.fields.y;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)MainTexture, (System_String_o *)StringLiteral_16986/*"_ScaledScreenResolution"*/, v58, 0);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v59.fields.z = 0.0;
  v59.fields.w = 0.0;
  v59.fields.x = ScaledUVOffset.fields.x;
  v59.fields.y = ScaledUVOffset.fields.y;
  UnityEngine_Material__SetVector((UnityEngine_Material_o *)MainTexture, (System_String_o *)StringLiteral_16987/*"_ScaledUVOffset"*/, v59, 0);
  v27 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v28);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v27 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v27, (System_String_o *)StringLiteral_16979/*"_Saturation"*/, *((float *)MainTexture + 57), 0);
  v29 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v30);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v29 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v29, (System_String_o *)StringLiteral_16826/*"_Contrast"*/, *((float *)MainTexture + 58), 0);
  v31 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v32);
  if ( !MainTexture )
    goto LABEL_56;
  v33 = *((float *)MainTexture + 18);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v4);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v31 )
    goto LABEL_56;
  v60.fields.z = 0.0;
  v60.fields.w = 0.0;
  v60.fields.x = v33;
  v60.fields.y = *((float *)MainTexture + 19);
  UnityEngine_Material__SetVector(v31, (System_String_o *)StringLiteral_16878/*"_FullscreenUVScale"*/, v60, 0);
  v34 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v35);
  if ( !MainTexture )
    goto LABEL_56;
  v36 = *((float *)MainTexture + 20);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v4);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v34 )
    goto LABEL_56;
  v61.fields.z = 0.0;
  v61.fields.w = 0.0;
  v61.fields.x = v36;
  v61.fields.y = *((float *)MainTexture + 21);
  UnityEngine_Material__SetVector(v34, (System_String_o *)StringLiteral_16877/*"_FullscreenUVOffset"*/, v61, 0);
  v37 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v38);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v37 )
    goto LABEL_56;
  v62.fields.w = 0.0;
  v62.fields.y = *((float *)MainTexture + 44);
  v62.fields.z = *((float *)MainTexture + 45);
  v62.fields.x = *((float *)MainTexture + 43);
  UnityEngine_Material__SetVector(v37, (System_String_o *)StringLiteral_16934/*"_Offset"*/, v62, 0);
  v39 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v40);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v39 )
    goto LABEL_56;
  v63.fields.w = 0.0;
  v63.fields.y = *((float *)MainTexture + 47);
  v63.fields.z = *((float *)MainTexture + 48);
  v63.fields.x = *((float *)MainTexture + 46);
  UnityEngine_Material__SetVector(v39, (System_String_o *)StringLiteral_16934/*"_Offset"*/, v63, 0);
  v41 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v42);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v41 )
    goto LABEL_56;
  v64.fields.w = 0.0;
  v64.fields.y = *((float *)MainTexture + 50);
  v64.fields.z = *((float *)MainTexture + 51);
  v64.fields.x = *((float *)MainTexture + 49);
  UnityEngine_Material__SetVector(v41, (System_String_o *)StringLiteral_16934/*"_Offset"*/, v64, 0);
  v43 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v44);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v43 )
    goto LABEL_56;
  v65.fields.w = 0.0;
  v65.fields.y = *((float *)MainTexture + 35);
  v65.fields.z = *((float *)MainTexture + 36);
  v65.fields.x = *((float *)MainTexture + 34);
  UnityEngine_Material__SetVector(v43, (System_String_o *)StringLiteral_16980/*"_Scale"*/, v65, 0);
  v45 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v46);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v45 )
    goto LABEL_56;
  v66.fields.w = 0.0;
  v66.fields.y = *((float *)MainTexture + 38);
  v66.fields.z = *((float *)MainTexture + 39);
  v66.fields.x = *((float *)MainTexture + 37);
  UnityEngine_Material__SetVector(v45, (System_String_o *)StringLiteral_16980/*"_Scale"*/, v66, 0);
  v47 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v48);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v47 )
    goto LABEL_56;
  v67.fields.w = 0.0;
  v67.fields.y = *((float *)MainTexture + 41);
  v67.fields.z = *((float *)MainTexture + 42);
  v67.fields.x = *((float *)MainTexture + 40);
  UnityEngine_Material__SetVector(v47, (System_String_o *)StringLiteral_16980/*"_Scale"*/, v67, 0);
  materialGaussianBloom = this->fields.materialGaussianBloom;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v50);
  if ( !MainTexture
    || !materialGaussianBloom
    || (UnityEngine_Material__SetFloat(
          materialGaussianBloom,
          (System_String_o *)StringLiteral_16997/*"_Sigma"*/,
          this->fields.sigmaMultiplication * *((float *)MainTexture + 52),
          0),
        v51 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v52)) == 0)
    || !v51
    || (UnityEngine_Material__SetFloat(
          v51,
          (System_String_o *)StringLiteral_16898/*"_Intensity"*/,
          this->fields.intensityMultiplication * (float)((float)(100.0 - *((float *)MainTexture + 54)) / 100.0),
          0),
        v53 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v54)) == 0)
    || !v53 )
  {
LABEL_56:
    sub_2213CDC(MainTexture, v4);
  }
  UnityEngine_Material__SetInt(v53, (System_String_o *)StringLiteral_16904/*"_KernelSize"*/, *((_DWORD *)MainTexture + 53), 0);
}


void OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(
        OutlineEffectMain_GaussianBloom_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_2213CDC(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0);
}


System_String_o *OutlineEffectMain_GaussianBloom__get_CommandBufferName(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596BD9C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10473/*"Outline CommandBuffer - {0}"*/);
    byte_596BD9C = 1;
  }
  InstanceID = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)this, 0);
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &InstanceID);
  return System_String__Format((System_String_o *)StringLiteral_10473/*"Outline CommandBuffer - {0}"*/, v3, 0);
}


OutlineEffectSettings_o *OutlineEffectMain_GaussianBloom__get_Settings(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *settings; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  OutlineEffectSettings_c *v7; // x0

  if ( (byte_596BD9D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OutlineEffectSettings_TypeInfo);
    byte_596BD9D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(settings, 0, 0) )
    return this->fields.settings;
  v7 = OutlineEffectSettings_TypeInfo;
  if ( !*(&OutlineEffectSettings_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v5, v6);
  return OutlineEffectSettings__get_Default((const MethodInfo *)v7);
}