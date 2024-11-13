void __fastcall OutlineEffectMain_GaussianBloom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B11D46 & 1) == 0 )
  {
    sub_1BCA7E0(&OutlineEffectMain_GaussianBloom_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3269/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/, v3, v4);
    byte_4B11D46 = 1;
  }
  OutlineEffectMain_GaussianBloom_TypeInfo->static_fields->NPCameraPath = (struct System_String_o *)StringLiteral_3269/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/;
  sub_1BCA784(OutlineEffectMain_GaussianBloom_TypeInfo->static_fields, StringLiteral_3269/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/);
}


void __fastcall OutlineEffectMain_GaussianBloom___ctor(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v9; // x1

  if ( (byte_4B11D45 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4054/*"Cameras/BattleCamera"*/, method, v2);
    byte_4B11D45 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
  this->fields.intensityMultiplication = 1.0;
  v9 = StringLiteral_4054/*"Cameras/BattleCamera"*/;
  this->fields.EditorCameraPath = (struct System_String_o *)StringLiteral_4054/*"Cameras/BattleCamera"*/;
  sub_1BCA784(&this->fields.EditorCameraPath, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OutlineEffectMain_GaussianBloom__Awake(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.intensityMultiplication = 1.0;
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
}


void __fastcall OutlineEffectMain_GaussianBloom__CleanUp(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UnityEngine_Object_o *materialLUT; // x22
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4B11D44 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11D44 = 1;
  }
  OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v3);
  materialLUT = (UnityEngine_Object_o *)this->fields.materialLUT;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(materialLUT, 0LL, 0LL) )
  {
    OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(this->fields.smr, this->fields.materialLUT, v8);
    OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v9);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(tinyPolygonVertexBuffer, 0LL);
    this->fields.tinyPolygonVertexBuffer = 0LL;
    sub_1BCA784(&this->fields.tinyPolygonVertexBuffer, 0LL);
  }
  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, v7);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v11);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v12);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialGaussianBloom, v13);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v14);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteBlue, v15);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteGreen, v16);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteRed, v17);
}


void __fastcall OutlineEffectMain_GaussianBloom__DestroyOutlineCamera(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, method);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v3);
}


void __fastcall OutlineEffectMain_GaussianBloom__GenerateBloomLookUpTexture(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *settings; // x19
  const MethodInfo *v7; // x1
  bool v8; // w21
  __int64 v9; // x1
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Rendering_CommandBuffer_o *outlineCmd; // x22
  UnityEngine_Rendering_CommandBuffer_o *v12; // x22
  UnityEngine_Texture_o *outlineRT; // x23
  UnityEngine_Rendering_CommandBuffer_o *v14; // x22
  UnityEngine_Rendering_CommandBuffer_o *v15; // x22
  UnityEngine_Material_o *materialGaussianBloom; // x3
  UnityEngine_Rendering_CommandBuffer_o *v17; // x22
  UnityEngine_Material_o *v18; // x3
  UnityEngine_Rendering_CommandBuffer_o *v19; // x22
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  __int64 v22; // x1
  bool isPlaying; // w20
  __int128 v24[2]; // [xsp+0h] [xbp-700h] BYREF
  __int64 v25; // [xsp+20h] [xbp-6E0h]
  __int128 v26[2]; // [xsp+30h] [xbp-6D0h] BYREF
  __int64 v27; // [xsp+50h] [xbp-6B0h]
  __int128 v28[2]; // [xsp+58h] [xbp-6A8h] BYREF
  __int64 v29; // [xsp+78h] [xbp-688h]
  __int128 v30; // [xsp+80h] [xbp-680h] BYREF
  __int128 v31; // [xsp+90h] [xbp-670h]
  __int64 v32; // [xsp+A0h] [xbp-660h]
  __int128 v33[2]; // [xsp+B0h] [xbp-650h] BYREF
  __int64 v34; // [xsp+D0h] [xbp-630h]
  __int128 v35[2]; // [xsp+E0h] [xbp-620h] BYREF
  __int64 v36; // [xsp+100h] [xbp-600h]
  __int128 v37; // [xsp+110h] [xbp-5F0h] BYREF
  __int128 v38; // [xsp+120h] [xbp-5E0h]
  __int64 v39; // [xsp+130h] [xbp-5D0h]
  __int128 v40; // [xsp+140h] [xbp-5C0h] BYREF
  __int128 v41; // [xsp+150h] [xbp-5B0h]
  __int64 v42; // [xsp+160h] [xbp-5A0h]
  __int128 v43[2]; // [xsp+170h] [xbp-590h] BYREF
  __int64 v44; // [xsp+190h] [xbp-570h]
  __int128 v45[2]; // [xsp+1A0h] [xbp-560h] BYREF
  __int64 v46; // [xsp+1C0h] [xbp-540h]
  __int128 v47; // [xsp+1D0h] [xbp-530h] BYREF
  __int128 v48; // [xsp+1E0h] [xbp-520h]
  __int64 v49; // [xsp+1F0h] [xbp-510h]
  __int128 v50; // [xsp+200h] [xbp-500h] BYREF
  __int128 v51; // [xsp+210h] [xbp-4F0h]
  __int64 v52; // [xsp+220h] [xbp-4E0h]
  __int128 v53[2]; // [xsp+230h] [xbp-4D0h] BYREF
  __int64 v54; // [xsp+250h] [xbp-4B0h]
  __int128 v55; // [xsp+260h] [xbp-4A0h] BYREF
  __int128 v56; // [xsp+270h] [xbp-490h]
  __int64 v57; // [xsp+280h] [xbp-480h]
  __int128 v58[2]; // [xsp+290h] [xbp-470h] BYREF
  __int64 v59; // [xsp+2B0h] [xbp-450h]
  __int128 v60; // [xsp+2C0h] [xbp-440h] BYREF
  __int128 v61; // [xsp+2D0h] [xbp-430h]
  __int64 v62; // [xsp+2E0h] [xbp-420h]
  __int128 v63; // [xsp+2F0h] [xbp-410h]
  __int128 v64; // [xsp+300h] [xbp-400h]
  __int64 v65; // [xsp+310h] [xbp-3F0h]
  UnityEngine_RenderTextureDescriptor_o v66; // [xsp+320h] [xbp-3E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v67; // [xsp+360h] [xbp-3A0h]
  UnityEngine_RenderTextureDescriptor_o v68; // [xsp+3A0h] [xbp-360h] BYREF
  UnityEngine_RenderTextureDescriptor_o v69; // [xsp+3E0h] [xbp-320h]
  UnityEngine_RenderTextureDescriptor_o v70; // [xsp+420h] [xbp-2E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v71; // [xsp+460h] [xbp-2A0h] BYREF
  __int128 v72[2]; // [xsp+4A0h] [xbp-260h] BYREF
  __int64 v73; // [xsp+4C0h] [xbp-240h]
  __int128 v74; // [xsp+4D0h] [xbp-230h]
  __int128 v75; // [xsp+4E0h] [xbp-220h]
  __int64 v76; // [xsp+4F0h] [xbp-210h]
  UnityEngine_Matrix4x4_o v77; // [xsp+500h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v78; // [xsp+540h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v79; // [xsp+580h] [xbp-180h]
  UnityEngine_Matrix4x4_o v80; // [xsp+5C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v81; // [xsp+600h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v82; // [xsp+640h] [xbp-C0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v83; // [xsp+680h] [xbp-80h]
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11D3F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11D3F = 1;
  }
  if ( this->fields.outlineCmd )
  {
    settings = (UnityEngine_Object_o *)this->fields.settings;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v8 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
    if ( v8 )
      settings = (UnityEngine_Object_o *)OutlineEffectMain_GaussianBloom__get_Settings(this, v7);
    OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(this, v7);
    smr = this->fields.smr;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_SkinnedMeshRenderer__set_forceMatrixRecalculationPerRender(smr, 1, 0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__Clear((UnityEngine_Rendering_CommandBuffer_o *)smr, 0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineRT;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_RenderTexture__get_descriptor(
      (UnityEngine_RenderTextureDescriptor_o *)&v82,
      (UnityEngine_RenderTexture_o *)smr,
      0LL);
    *(_OWORD *)&v83.fields._width_k__BackingField = *(_OWORD *)&v82.fields.m00;
    *(_OWORD *)&v83.fields._mipCount_k__BackingField = *(_OWORD *)&v82.fields.m01;
    *(_OWORD *)&v83.fields._dimension_k__BackingField = *(_OWORD *)&v82.fields.m02;
    v83.fields._memoryless_k__BackingField = LODWORD(v82.fields.m03);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_worldToCameraMatrix(&v81, (UnityEngine_Camera_o *)smr, 0LL);
    v82 = v81;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_projectionMatrix(&v80, (UnityEngine_Camera_o *)smr, 0LL);
    v81 = v80;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v80 = v82;
    v79 = v81;
    if ( !smr )
      goto LABEL_41;
    v78 = v80;
    v77 = v79;
    UnityEngine_Rendering_CommandBuffer__SetViewProjectionMatrices(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      &v78,
      &v77,
      0LL);
    outlineCmd = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218240(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v71,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v74 = *(_OWORD *)&v71.fields._width_k__BackingField;
    v75 = *(_OWORD *)&v71.fields._mipCount_k__BackingField;
    v76 = *(_QWORD *)&v71.fields._dimension_k__BackingField;
    if ( !outlineCmd )
      goto LABEL_41;
    v72[0] = v74;
    v72[1] = v75;
    v73 = v76;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      outlineCmd,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v72,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v84.fields.r = 0.0;
    v84.fields.g = 0.0;
    v84.fields.b = 0.0;
    v84.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70221488(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v84,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_70223288(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteRed,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_70223288(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteGreen,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_70223288(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteBlue,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v71 = v83;
    if ( !smr )
      goto LABEL_41;
    v70 = v71;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70221076(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      10000,
      &v70,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v69 = v83;
    if ( !smr )
      goto LABEL_41;
    v68 = v69;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70221076(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      20000,
      &v68,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v67 = v83;
    if ( !smr )
      goto LABEL_41;
    v66 = v67;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_70221076(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      30000,
      &v66,
      0LL);
    v12 = this->fields.outlineCmd;
    outlineRT = (UnityEngine_Texture_o *)this->fields.outlineRT;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v60,
                                                 10000,
                                                 0LL);
    v63 = v60;
    v64 = v61;
    v65 = v62;
    if ( !v12 )
      goto LABEL_41;
    v58[0] = v63;
    v58[1] = v64;
    v59 = v65;
    UnityEngine_Rendering_CommandBuffer__Blit(
      v12,
      outlineRT,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v58,
      0LL);
    v14 = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218240(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v55,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v60 = v55;
    v61 = v56;
    v62 = v57;
    if ( !v14 )
      goto LABEL_41;
    v53[0] = v60;
    v53[1] = v61;
    v54 = v62;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v14,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v53,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v85.fields.r = 0.0;
    v85.fields.g = 0.0;
    v85.fields.b = 0.0;
    v85.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_70221488(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v85,
      0LL);
    v15 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v50,
      10000,
      0LL);
    v57 = v52;
    v55 = v50;
    v56 = v51;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v47,
                                                 20000,
                                                 0LL);
    v50 = v47;
    v51 = v48;
    v52 = v49;
    if ( !v15 )
      goto LABEL_41;
    materialGaussianBloom = this->fields.materialGaussianBloom;
    v45[0] = v55;
    v45[1] = v56;
    v46 = v57;
    v43[0] = v50;
    v43[1] = v51;
    v44 = v52;
    UnityEngine_Rendering_CommandBuffer__Blit_70223580(
      v15,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v45,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v43,
      materialGaussianBloom,
      0,
      0LL);
    v17 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v40,
      20000,
      0LL);
    v49 = v42;
    v47 = v40;
    v48 = v41;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v37,
                                                 30000,
                                                 0LL);
    v40 = v37;
    v41 = v38;
    v42 = v39;
    if ( !v17 )
      goto LABEL_41;
    v18 = this->fields.materialGaussianBloom;
    v35[0] = v47;
    v35[1] = v48;
    v36 = v49;
    v33[0] = v40;
    v33[1] = v41;
    v34 = v42;
    UnityEngine_Rendering_CommandBuffer__Blit_70223580(
      v17,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v35,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v33,
      v18,
      1,
      0LL);
    v19 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218212(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v30,
      30000,
      0LL);
    v37 = v30;
    v38 = v31;
    v39 = v32;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_70218240(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)v28,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v30 = v28[0];
    v31 = v28[1];
    v32 = v29;
    if ( !v19 )
      goto LABEL_41;
    v26[0] = v37;
    v26[1] = v38;
    v27 = v39;
    v24[0] = v30;
    v24[1] = v31;
    v25 = v32;
    UnityEngine_Rendering_CommandBuffer__Blit_70223440(
      v19,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v26,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v24,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            10000,
            0LL),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd) == 0LL)
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            20000,
            0LL),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd) == 0LL)
      || (UnityEngine_Rendering_CommandBuffer__ReleaseTemporaryRT(
            (UnityEngine_Rendering_CommandBuffer_o *)smr,
            30000,
            0LL),
          OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v20),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera) == 0LL) )
    {
LABEL_41:
      sub_1BCAA3C(smr, v9);
    }
    UnityEngine_Camera__AddCommandBuffer((UnityEngine_Camera_o *)smr, 16, this->fields.outlineCmd, 0LL);
    if ( v8 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v21);
      isPlaying = UnityEngine_Application__get_isPlaying(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( isPlaying )
        UnityEngine_Object__Destroy_70154244(settings, 0LL);
      else
        UnityEngine_Object__DestroyImmediate_70154432(settings, 0LL);
    }
  }
}


// attributes: thunk
void __fastcall OutlineEffectMain_GaussianBloom__LateUpdate(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__GenerateBloomLookUpTexture(this, method);
}


// attributes: thunk
void __fastcall OutlineEffectMain_GaussianBloom__OnDisable(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__CleanUp(this, method);
}


// attributes: thunk
void __fastcall OutlineEffectMain_GaussianBloom__OnEnable(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  OutlineEffectMain_GaussianBloom__Setup(this, method);
}


void __fastcall OutlineEffectMain_GaussianBloom__OnValidate(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x2
  __int64 v7; // x1

  if ( (byte_4B11D3E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22803/*"please play!!"*/, v4, v5);
    byte_4B11D3E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    if ( this->fields.setup )
    {
      this->fields.setup = 0;
      OutlineEffectMain_GaussianBloom__SetActive(this, 1, v6);
    }
  }
  else
  {
    v7 = StringLiteral_22803/*"please play!!"*/;
    this->fields.message = (struct System_String_o *)StringLiteral_22803/*"please play!!"*/;
    sub_1BCA784(&this->fields.message, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(
        OutlineEffectMain_GaussianBloom_o *this,
        int32_t cameraEvent,
        UnityEngine_Rendering_CommandBuffer_o *cmd,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Camera_o *camera; // x0
  System_Collections_Generic_IEnumerable_T__o *CommandBuffers; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x22
  int32_t v29; // w23
  System_String_o *name; // x24
  System_String_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Camera_o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11D40 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__,
      *(_QWORD *)&cameraEvent,
      cmd);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandBuffer___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandBuffer__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommandBuffer__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_CommandBuffer__TypeInfo, v21, v22);
    byte_4B11D40 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( cmd )
  {
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    CommandBuffers = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Camera__GetCommandBuffers(
                                                                      camera,
                                                                      cameraEvent,
                                                                      0LL);
    v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_CommandBuffer__TypeInfo,
                                                         v25,
                                                         v26,
                                                         v27);
    System_Collections_Generic_List_object____ctor_56235344(
      v28,
      CommandBuffers,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    if ( !v28 )
      goto LABEL_19;
    v29 = v28->fields._size - 1;
    if ( v29 >= 0 )
    {
      while ( 1 )
      {
        camera = (UnityEngine_Camera_o *)System_Collections_Generic_List_object___get_Item(
                                           v28,
                                           v29,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
        if ( !camera )
          break;
        name = UnityEngine_Rendering_CommandBuffer__get_name((UnityEngine_Rendering_CommandBuffer_o *)camera, 0LL);
        v31 = UnityEngine_Rendering_CommandBuffer__get_name(cmd, 0LL);
        if ( System_String__op_Equality(name, v31, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v28,
            v29,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
        if ( --v29 < 0 )
          goto LABEL_11;
      }
LABEL_19:
      sub_1BCAA3C(camera, *(_QWORD *)&cameraEvent);
    }
LABEL_11:
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    UnityEngine_Camera__RemoveCommandBuffers(camera, cameraEvent, 0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v28,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__) )
    {
      v33 = this->fields.camera;
      if ( !v33 )
        sub_1BCAA3C(0LL, v32);
      UnityEngine_Camera__AddCommandBuffer(
        v33,
        cameraEvent,
        (UnityEngine_Rendering_CommandBuffer_o *)v34.fields._current,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
  }
}


void __fastcall OutlineEffectMain_GaussianBloom__SetActive(
        OutlineEffectMain_GaussianBloom_o *this,
        bool value,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
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


void __fastcall OutlineEffectMain_GaussianBloom__Setup(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  UnityEngine_Object_o *parent; // x20
  __int64 *v38; // x8
  Il2CppObject *Component_object; // x0
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  __int64 v41; // x1
  UnityEngine_Object_o *smr; // x21
  __int64 v43; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v45; // x2
  struct System_String_o *v46; // x1
  struct System_String_o **p_message; // x19
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  System_String_o *EditorCameraPath; // x20
  OutlineEffectMain_GaussianBloom_c *v60; // x0
  struct UnityEngine_Camera_o *Camera; // x0
  const MethodInfo *v62; // x1
  System_String_o *CommandBufferName; // x0
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x4
  const MethodInfo *v66; // x1
  System_String_o *message; // t1

  if ( (byte_4B11D41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&OutlineEffectMain_GaussianBloom_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_10230/*"OutlineEffectMaterialLUT"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19577/*"failed to get SkinnedMeshRenderer component from parent"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22704/*"parent is null. please attach this component to object with parent"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5051/*"Custom/TwoPassGaussianBloom"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10231/*"OutlineEffectShaderColorSilhouette_B"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_23910/*"success"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_5020/*"Custom/OutlineEffectShaderLUT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_10235/*"OutlineRenderTexture"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_5019/*"Custom/OutlineEffectShaderColorSilhouette"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_10232/*"OutlineEffectShaderColorSilhouette_G"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_10234/*"OutlineEffectTwoPassGaussianBloom"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_10233/*"OutlineEffectShaderColorSilhouette_R"*/, v32, v33);
    byte_4B11D41 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_30;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v38 = &StringLiteral_22704/*"parent is null. please attach this component to object with parent"*/;
LABEL_19:
    v46 = (struct System_String_o *)*v38;
    this->fields.message = (struct System_String_o *)*v38;
    p_message = &this->fields.message;
LABEL_20:
    sub_1BCA784(p_message, v46);
    return;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_30;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)Component_object;
  p_smr = &this->fields.smr;
  sub_1BCA784(&this->fields.smr, Component_object);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v38 = &StringLiteral_19577/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_19;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_30:
    sub_1BCAA3C(transform, v35);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v38 = &StringLiteral_23499/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_19;
  }
  OutlineEffectUtility__CreateShader(&this->fields.shaderLUTAsset, (System_String_o *)StringLiteral_5020/*"Custom/OutlineEffectShaderLUT"*/, v45);
  OutlineEffectUtility__CreateShader(&this->fields.shaderColorSilhouette, (System_String_o *)StringLiteral_5019/*"Custom/OutlineEffectShaderColorSilhouette"*/, v48);
  OutlineEffectUtility__CreateShader(&this->fields.shaderGaussianBloom, (System_String_o *)StringLiteral_5051/*"Custom/TwoPassGaussianBloom"*/, v49);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialLUT,
    this->fields.shaderLUTAsset,
    (System_String_o *)StringLiteral_10230/*"OutlineEffectMaterialLUT"*/,
    v50);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteRed,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10233/*"OutlineEffectShaderColorSilhouette_R"*/,
    v51);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteGreen,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10232/*"OutlineEffectShaderColorSilhouette_G"*/,
    v52);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteBlue,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10231/*"OutlineEffectShaderColorSilhouette_B"*/,
    v53);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialGaussianBloom,
    this->fields.shaderGaussianBloom,
    (System_String_o *)StringLiteral_10234/*"OutlineEffectTwoPassGaussianBloom"*/,
    v54);
  normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
  if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
    OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(this, v57);
  EditorCameraPath = this->fields.EditorCameraPath;
  v60 = OutlineEffectMain_GaussianBloom_TypeInfo;
  if ( !OutlineEffectMain_GaussianBloom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectMain_GaussianBloom_TypeInfo, v57);
    v60 = OutlineEffectMain_GaussianBloom_TypeInfo;
  }
  Camera = OutlineEffectUtility__GetCamera(EditorCameraPath, v60->static_fields->NPCameraPath, v58);
  this->fields.camera = Camera;
  sub_1BCA784(&this->fields.camera, Camera);
  CommandBufferName = OutlineEffectMain_GaussianBloom__get_CommandBufferName(this, v62);
  OutlineEffectUtility__InstantiateCommandBuffer(&this->fields.outlineCmd, CommandBufferName, v64);
  OutlineEffectUtility__InstantiateRenderTexture(
    &this->fields.outlineRT,
    1024,
    1024,
    (System_String_o *)StringLiteral_10235/*"OutlineRenderTexture"*/,
    v65);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v66);
  message = this->fields.message;
  p_message = &this->fields.message;
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v46 = (struct System_String_o *)StringLiteral_23910/*"success"*/;
    *p_message = (struct System_String_o *)StringLiteral_23910/*"success"*/;
    goto LABEL_20;
  }
}


void __fastcall OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *smr; // x20
  __int64 v9; // x1
  __int64 *v10; // x8
  UnityEngine_SkinnedMeshRenderer_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v14; // x2
  struct System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B11D42 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12889/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_12888/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/, v6, v7);
    byte_4B11D42 = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v10 = &StringLiteral_12888/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    v15 = (struct System_String_o *)*v10;
    this->fields.message = (struct System_String_o *)*v10;
    sub_1BCA784(&this->fields.message, v15);
    return;
  }
  v11 = this->fields.smr;
  if ( !v11 )
    sub_1BCAA3C(0LL, v9);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v11, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v10 = &StringLiteral_12889/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
    this->fields.smr,
    this->fields.materialLUT,
    v14);
  OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v16);
}


void __fastcall OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  char *MainTexture; // x0
  const MethodInfo *v37; // x1
  UnityEngine_Texture_o *v38; // x20
  UnityEngine_Material_o *materialSilhouetteRed; // x21
  const MethodInfo *v40; // x1
  UnityEngine_Material_o *materialSilhouetteBlue; // x21
  const MethodInfo *v42; // x1
  UnityEngine_Material_o *materialSilhouetteGreen; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Material_o *materialLUT; // x20
  const MethodInfo *v46; // x1
  float v47; // s8
  UnityEngine_Material_o *v48; // x20
  const MethodInfo *v49; // x1
  UnityEngine_Material_o *v50; // x20
  const MethodInfo *v51; // x1
  UnityEngine_Material_o *v52; // x20
  const MethodInfo *v53; // x1
  UnityEngine_Material_o *v54; // x20
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x0
  UnityEngine_Vector2_o ScaledScreenResolution; // kr00_8
  const MethodInfo *v58; // x0
  UnityEngine_Vector2_o ScaledUVOffset; // kr08_8
  UnityEngine_Material_o *v60; // x20
  const MethodInfo *v61; // x1
  UnityEngine_Material_o *v62; // x20
  const MethodInfo *v63; // x1
  UnityEngine_Material_o *v64; // x20
  const MethodInfo *v65; // x1
  float v66; // s8
  UnityEngine_Material_o *v67; // x20
  const MethodInfo *v68; // x1
  float v69; // s8
  UnityEngine_Material_o *v70; // x20
  const MethodInfo *v71; // x1
  UnityEngine_Material_o *v72; // x20
  const MethodInfo *v73; // x1
  UnityEngine_Material_o *v74; // x20
  const MethodInfo *v75; // x1
  UnityEngine_Material_o *v76; // x20
  const MethodInfo *v77; // x1
  UnityEngine_Material_o *v78; // x20
  const MethodInfo *v79; // x1
  UnityEngine_Material_o *v80; // x20
  const MethodInfo *v81; // x1
  UnityEngine_Material_o *materialGaussianBloom; // x20
  const MethodInfo *v83; // x1
  UnityEngine_Material_o *v84; // x20
  const MethodInfo *v85; // x1
  UnityEngine_Material_o *v86; // x20
  const MethodInfo *v87; // x1
  UnityEngine_Vector4_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11D43 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16568/*"_VertexScale"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_16421/*"_KernelSize"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_16423/*"_LUTTex"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16415/*"_Intensity"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16333/*"_ClipFade"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16498/*"_ScaledScreenResolution"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16397/*"_FullscreenUVScale"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16461/*"_OutlineThickness"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16492/*"_Scale"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16508/*"_Sigma"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16396/*"_FullscreenUVOffset"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16499/*"_ScaledUVOffset"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_16565/*"_VertexOffset"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_16449/*"_Offset"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_16352/*"_Contrast"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_16491/*"_Saturation"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16305/*"_AlphaSettings"*/, v34, v35);
    byte_4B11D43 = 1;
  }
  MainTexture = (char *)OutlineEffectUtility__GetMainTexture(this->fields.smr, method);
  if ( !this->fields.materialLUT )
    goto LABEL_56;
  v38 = (UnityEngine_Texture_o *)MainTexture;
  UnityEngine_Material__set_mainTexture(this->fields.materialLUT, (UnityEngine_Texture_o *)MainTexture, 0LL);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16423/*"_LUTTex"*/,
    (UnityEngine_Texture_o *)this->fields.outlineRT,
    0LL);
  MainTexture = (char *)this->fields.materialSilhouetteRed;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v38, 0LL);
  materialSilhouetteRed = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v40);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteRed )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteRed, *(UnityEngine_Color_o *)(MainTexture + 88), 0LL);
  MainTexture = (char *)this->fields.materialSilhouetteBlue;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v38, 0LL);
  materialSilhouetteBlue = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v42);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteBlue )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteBlue, *(UnityEngine_Color_o *)(MainTexture + 120), 0LL);
  MainTexture = (char *)this->fields.materialSilhouetteGreen;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v38, 0LL);
  materialSilhouetteGreen = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v44);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteGreen )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteGreen, *(UnityEngine_Color_o *)(MainTexture + 104), 0LL);
  materialLUT = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v46);
  if ( !MainTexture )
    goto LABEL_56;
  v47 = *((float *)MainTexture + 55);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v37);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialLUT )
    goto LABEL_56;
  v88.fields.z = this->fields.alphaMultiplication;
  v88.fields.y = *((float *)MainTexture + 56);
  v88.fields.w = 0.0;
  v88.fields.x = v47;
  UnityEngine_Material__SetVector(materialLUT, (System_String_o *)StringLiteral_16305/*"_AlphaSettings"*/, v88, 0LL);
  v48 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v49);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v48 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v48, (System_String_o *)StringLiteral_16461/*"_OutlineThickness"*/, *((float *)MainTexture + 8), 0LL);
  v50 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v51);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v50 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v50, (System_String_o *)StringLiteral_16333/*"_ClipFade"*/, *((float *)MainTexture + 10), 0LL);
  v52 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v53);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v52 )
    goto LABEL_56;
  v89.fields.y = *((float *)MainTexture + 13);
  v89.fields.z = *((float *)MainTexture + 14);
  v89.fields.x = *((float *)MainTexture + 12);
  v89.fields.w = 0.0;
  UnityEngine_Material__SetVector(v52, (System_String_o *)StringLiteral_16568/*"_VertexScale"*/, v89, 0LL);
  v54 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v55);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v54 )
    goto LABEL_56;
  v90.fields.y = *((float *)MainTexture + 16);
  v90.fields.z = *((float *)MainTexture + 17);
  v90.fields.x = *((float *)MainTexture + 15);
  v90.fields.w = 0.0;
  UnityEngine_Material__SetVector(v54, (System_String_o *)StringLiteral_16565/*"_VertexOffset"*/, v90, 0LL);
  ScaledScreenResolution = OutlineEffectUtility__GetScaledScreenResolution(v56);
  ScaledUVOffset = OutlineEffectUtility__GetScaledUVOffset(v58);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v91.fields.z = 0.0;
  v91.fields.w = 0.0;
  v91.fields.x = ScaledScreenResolution.fields.x;
  v91.fields.y = ScaledScreenResolution.fields.y;
  UnityEngine_Material__SetVector(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16498/*"_ScaledScreenResolution"*/,
    v91,
    0LL);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v92.fields.z = 0.0;
  v92.fields.w = 0.0;
  v92.fields.x = ScaledUVOffset.fields.x;
  v92.fields.y = ScaledUVOffset.fields.y;
  UnityEngine_Material__SetVector(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16499/*"_ScaledUVOffset"*/,
    v92,
    0LL);
  v60 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v61);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v60 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v60, (System_String_o *)StringLiteral_16491/*"_Saturation"*/, *((float *)MainTexture + 57), 0LL);
  v62 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v63);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v62 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v62, (System_String_o *)StringLiteral_16352/*"_Contrast"*/, *((float *)MainTexture + 58), 0LL);
  v64 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v65);
  if ( !MainTexture )
    goto LABEL_56;
  v66 = *((float *)MainTexture + 18);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v37);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v64 )
    goto LABEL_56;
  v93.fields.y = *((float *)MainTexture + 19);
  v93.fields.z = 0.0;
  v93.fields.w = 0.0;
  v93.fields.x = v66;
  UnityEngine_Material__SetVector(v64, (System_String_o *)StringLiteral_16397/*"_FullscreenUVScale"*/, v93, 0LL);
  v67 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v68);
  if ( !MainTexture )
    goto LABEL_56;
  v69 = *((float *)MainTexture + 20);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v37);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v67 )
    goto LABEL_56;
  v94.fields.y = *((float *)MainTexture + 21);
  v94.fields.z = 0.0;
  v94.fields.w = 0.0;
  v94.fields.x = v69;
  UnityEngine_Material__SetVector(v67, (System_String_o *)StringLiteral_16396/*"_FullscreenUVOffset"*/, v94, 0LL);
  v70 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v71);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v70 )
    goto LABEL_56;
  v95.fields.y = *((float *)MainTexture + 44);
  v95.fields.z = *((float *)MainTexture + 45);
  v95.fields.x = *((float *)MainTexture + 43);
  v95.fields.w = 0.0;
  UnityEngine_Material__SetVector(v70, (System_String_o *)StringLiteral_16449/*"_Offset"*/, v95, 0LL);
  v72 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v73);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v72 )
    goto LABEL_56;
  v96.fields.y = *((float *)MainTexture + 47);
  v96.fields.z = *((float *)MainTexture + 48);
  v96.fields.x = *((float *)MainTexture + 46);
  v96.fields.w = 0.0;
  UnityEngine_Material__SetVector(v72, (System_String_o *)StringLiteral_16449/*"_Offset"*/, v96, 0LL);
  v74 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v75);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v74 )
    goto LABEL_56;
  v97.fields.y = *((float *)MainTexture + 50);
  v97.fields.z = *((float *)MainTexture + 51);
  v97.fields.x = *((float *)MainTexture + 49);
  v97.fields.w = 0.0;
  UnityEngine_Material__SetVector(v74, (System_String_o *)StringLiteral_16449/*"_Offset"*/, v97, 0LL);
  v76 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v77);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v76 )
    goto LABEL_56;
  v98.fields.y = *((float *)MainTexture + 35);
  v98.fields.z = *((float *)MainTexture + 36);
  v98.fields.x = *((float *)MainTexture + 34);
  v98.fields.w = 0.0;
  UnityEngine_Material__SetVector(v76, (System_String_o *)StringLiteral_16492/*"_Scale"*/, v98, 0LL);
  v78 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v79);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v78 )
    goto LABEL_56;
  v99.fields.y = *((float *)MainTexture + 38);
  v99.fields.z = *((float *)MainTexture + 39);
  v99.fields.x = *((float *)MainTexture + 37);
  v99.fields.w = 0.0;
  UnityEngine_Material__SetVector(v78, (System_String_o *)StringLiteral_16492/*"_Scale"*/, v99, 0LL);
  v80 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v81);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v80 )
    goto LABEL_56;
  v100.fields.y = *((float *)MainTexture + 41);
  v100.fields.z = *((float *)MainTexture + 42);
  v100.fields.x = *((float *)MainTexture + 40);
  v100.fields.w = 0.0;
  UnityEngine_Material__SetVector(v80, (System_String_o *)StringLiteral_16492/*"_Scale"*/, v100, 0LL);
  materialGaussianBloom = this->fields.materialGaussianBloom;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v83);
  if ( !MainTexture
    || !materialGaussianBloom
    || (UnityEngine_Material__SetFloat(
          materialGaussianBloom,
          (System_String_o *)StringLiteral_16508/*"_Sigma"*/,
          this->fields.sigmaMultiplication * *((float *)MainTexture + 52),
          0LL),
        v84 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v85)) == 0LL)
    || !v84
    || (UnityEngine_Material__SetFloat(
          v84,
          (System_String_o *)StringLiteral_16415/*"_Intensity"*/,
          this->fields.intensityMultiplication * (float)((float)(100.0 - *((float *)MainTexture + 54)) / 100.0),
          0LL),
        v86 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v87)) == 0LL)
    || !v86 )
  {
LABEL_56:
    sub_1BCAA3C(MainTexture, v37);
  }
  UnityEngine_Material__SetInt(v86, (System_String_o *)StringLiteral_16421/*"_KernelSize"*/, *((_DWORD *)MainTexture + 53), 0LL);
}


void __fastcall OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(
        OutlineEffectMain_GaussianBloom_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1BCAA3C(this, mesh);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


System_String_o *__fastcall OutlineEffectMain_GaussianBloom__get_CommandBufferName(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B11D3C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10228/*"Outline CommandBuffer - {0}"*/, v4, v5);
    byte_4B11D3C = 1;
  }
  InstanceID = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)this, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID);
  return System_String__Format((System_String_o *)StringLiteral_10228/*"Outline CommandBuffer - {0}"*/, v6, 0LL);
}


OutlineEffectSettings_o *__fastcall OutlineEffectMain_GaussianBloom__get_Settings(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *settings; // x20
  __int64 v7; // x1
  OutlineEffectSettings_c *v8; // x0

  if ( (byte_4B11D3D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&OutlineEffectSettings_TypeInfo, v4, v5);
    byte_4B11D3D = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
    return this->fields.settings;
  v8 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo, v7);
  return OutlineEffectSettings__get_Default((const MethodInfo *)v8);
}