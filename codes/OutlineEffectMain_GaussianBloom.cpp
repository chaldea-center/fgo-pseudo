void __fastcall OutlineEffectMain_GaussianBloom___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49F805E & 1) == 0 )
  {
    sub_1B640C8(&OutlineEffectMain_GaussianBloom_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3224/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/, v2);
    byte_49F805E = 1;
  }
  OutlineEffectMain_GaussianBloom_TypeInfo->static_fields->NPCameraPath = (struct System_String_o *)StringLiteral_3224/*"BattleScene/Performance/Ground/RootCameraPrefab/CameraObject/BackCamera/MiddleCamera"*/;
  sub_1B6406C(OutlineEffectMain_GaussianBloom_TypeInfo->static_fields);
}


void __fastcall OutlineEffectMain_GaussianBloom___ctor(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F805D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3965/*"Cameras/BattleCamera"*/, method);
    byte_49F805D = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.alphaMultiplication = _D0;
  this->fields.intensityMultiplication = 1.0;
  this->fields.EditorCameraPath = (struct System_String_o *)StringLiteral_3965/*"Cameras/BattleCamera"*/;
  sub_1B6406C(&this->fields.EditorCameraPath);
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
  const MethodInfo *v2; // x3
  UnityEngine_Object_o *materialLUT; // x22
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  UnityEngine_ComputeBuffer_o *tinyPolygonVertexBuffer; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_49F805C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F805C = 1;
  }
  OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v2);
  materialLUT = (UnityEngine_Object_o *)this->fields.materialLUT;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialLUT, 0LL, 0LL) )
  {
    OutlineEffectUtility__RemoveOutlineMaterialFromSharedMaterials(this->fields.smr, this->fields.materialLUT, v6);
    OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v7);
  }
  tinyPolygonVertexBuffer = this->fields.tinyPolygonVertexBuffer;
  if ( tinyPolygonVertexBuffer )
  {
    UnityEngine_ComputeBuffer__Dispose(tinyPolygonVertexBuffer, 0LL);
    this->fields.tinyPolygonVertexBuffer = 0LL;
    sub_1B6406C(&this->fields.tinyPolygonVertexBuffer);
  }
  OutlineEffectUtility__DestroyCommandBuffer(&this->fields.outlineCmd, v5);
  OutlineEffectUtility__DestroyRenderTexture(&this->fields.outlineRT, v9);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v10);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialGaussianBloom, v11);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialLUT, v12);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteBlue, v13);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteGreen, v14);
  OutlineEffectUtility__DestroyMaterial(&this->fields.materialSilhouetteRed, v15);
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
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x19
  const MethodInfo *v5; // x1
  bool v6; // w21
  UnityEngine_SkinnedMeshRenderer_o *smr; // x0
  UnityEngine_Rendering_CommandBuffer_o *outlineCmd; // x22
  UnityEngine_Rendering_CommandBuffer_o *v9; // x22
  UnityEngine_Texture_o *outlineRT; // x23
  UnityEngine_Rendering_CommandBuffer_o *v11; // x22
  UnityEngine_Rendering_CommandBuffer_o *v12; // x22
  UnityEngine_Material_o *materialGaussianBloom; // x3
  UnityEngine_Rendering_CommandBuffer_o *v14; // x22
  UnityEngine_Material_o *v15; // x3
  UnityEngine_Rendering_CommandBuffer_o *v16; // x22
  const MethodInfo *v17; // x3
  bool isPlaying; // w20
  __int128 v19[2]; // [xsp+0h] [xbp-700h] BYREF
  __int64 v20; // [xsp+20h] [xbp-6E0h]
  __int128 v21[2]; // [xsp+30h] [xbp-6D0h] BYREF
  __int64 v22; // [xsp+50h] [xbp-6B0h]
  __int128 v23[2]; // [xsp+58h] [xbp-6A8h] BYREF
  __int64 v24; // [xsp+78h] [xbp-688h]
  __int128 v25; // [xsp+80h] [xbp-680h] BYREF
  __int128 v26; // [xsp+90h] [xbp-670h]
  __int64 v27; // [xsp+A0h] [xbp-660h]
  __int128 v28[2]; // [xsp+B0h] [xbp-650h] BYREF
  __int64 v29; // [xsp+D0h] [xbp-630h]
  __int128 v30[2]; // [xsp+E0h] [xbp-620h] BYREF
  __int64 v31; // [xsp+100h] [xbp-600h]
  __int128 v32; // [xsp+110h] [xbp-5F0h] BYREF
  __int128 v33; // [xsp+120h] [xbp-5E0h]
  __int64 v34; // [xsp+130h] [xbp-5D0h]
  __int128 v35; // [xsp+140h] [xbp-5C0h] BYREF
  __int128 v36; // [xsp+150h] [xbp-5B0h]
  __int64 v37; // [xsp+160h] [xbp-5A0h]
  __int128 v38[2]; // [xsp+170h] [xbp-590h] BYREF
  __int64 v39; // [xsp+190h] [xbp-570h]
  __int128 v40[2]; // [xsp+1A0h] [xbp-560h] BYREF
  __int64 v41; // [xsp+1C0h] [xbp-540h]
  __int128 v42; // [xsp+1D0h] [xbp-530h] BYREF
  __int128 v43; // [xsp+1E0h] [xbp-520h]
  __int64 v44; // [xsp+1F0h] [xbp-510h]
  __int128 v45; // [xsp+200h] [xbp-500h] BYREF
  __int128 v46; // [xsp+210h] [xbp-4F0h]
  __int64 v47; // [xsp+220h] [xbp-4E0h]
  __int128 v48[2]; // [xsp+230h] [xbp-4D0h] BYREF
  __int64 v49; // [xsp+250h] [xbp-4B0h]
  __int128 v50; // [xsp+260h] [xbp-4A0h] BYREF
  __int128 v51; // [xsp+270h] [xbp-490h]
  __int64 v52; // [xsp+280h] [xbp-480h]
  __int128 v53[2]; // [xsp+290h] [xbp-470h] BYREF
  __int64 v54; // [xsp+2B0h] [xbp-450h]
  __int128 v55; // [xsp+2C0h] [xbp-440h] BYREF
  __int128 v56; // [xsp+2D0h] [xbp-430h]
  __int64 v57; // [xsp+2E0h] [xbp-420h]
  __int128 v58; // [xsp+2F0h] [xbp-410h]
  __int128 v59; // [xsp+300h] [xbp-400h]
  __int64 v60; // [xsp+310h] [xbp-3F0h]
  UnityEngine_RenderTextureDescriptor_o v61; // [xsp+320h] [xbp-3E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v62; // [xsp+360h] [xbp-3A0h]
  UnityEngine_RenderTextureDescriptor_o v63; // [xsp+3A0h] [xbp-360h] BYREF
  UnityEngine_RenderTextureDescriptor_o v64; // [xsp+3E0h] [xbp-320h]
  UnityEngine_RenderTextureDescriptor_o v65; // [xsp+420h] [xbp-2E0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v66; // [xsp+460h] [xbp-2A0h] BYREF
  __int128 v67[2]; // [xsp+4A0h] [xbp-260h] BYREF
  __int64 v68; // [xsp+4C0h] [xbp-240h]
  __int128 v69; // [xsp+4D0h] [xbp-230h]
  __int128 v70; // [xsp+4E0h] [xbp-220h]
  __int64 v71; // [xsp+4F0h] [xbp-210h]
  UnityEngine_Matrix4x4_o v72; // [xsp+500h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v73; // [xsp+540h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v74; // [xsp+580h] [xbp-180h]
  UnityEngine_Matrix4x4_o v75; // [xsp+5C0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v76; // [xsp+600h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v77; // [xsp+640h] [xbp-C0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v78; // [xsp+680h] [xbp-80h]
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8057 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8057 = 1;
  }
  if ( this->fields.outlineCmd )
  {
    settings = (UnityEngine_Object_o *)this->fields.settings;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality(settings, 0LL, 0LL);
    if ( v6 )
      settings = (UnityEngine_Object_o *)OutlineEffectMain_GaussianBloom__get_Settings(this, v5);
    OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(this, v5);
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
      (UnityEngine_RenderTextureDescriptor_o *)&v77,
      (UnityEngine_RenderTexture_o *)smr,
      0LL);
    *(_OWORD *)&v78.fields._width_k__BackingField = *(_OWORD *)&v77.fields.m00;
    *(_OWORD *)&v78.fields._mipCount_k__BackingField = *(_OWORD *)&v77.fields.m01;
    *(_OWORD *)&v78.fields._dimension_k__BackingField = *(_OWORD *)&v77.fields.m02;
    v78.fields._memoryless_k__BackingField = LODWORD(v77.fields.m03);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_worldToCameraMatrix(&v76, (UnityEngine_Camera_o *)smr, 0LL);
    v77 = v76;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Camera__get_projectionMatrix(&v75, (UnityEngine_Camera_o *)smr, 0LL);
    v76 = v75;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v75 = v77;
    v74 = v76;
    if ( !smr )
      goto LABEL_41;
    v73 = v75;
    v72 = v74;
    UnityEngine_Rendering_CommandBuffer__SetViewProjectionMatrices(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      &v73,
      &v72,
      0LL);
    outlineCmd = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191772(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v66,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v69 = *(_OWORD *)&v66.fields._width_k__BackingField;
    v70 = *(_OWORD *)&v66.fields._mipCount_k__BackingField;
    v71 = *(_QWORD *)&v66.fields._dimension_k__BackingField;
    if ( !outlineCmd )
      goto LABEL_41;
    v67[0] = v69;
    v67[1] = v70;
    v68 = v71;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      outlineCmd,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v67,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v79.fields.r = 0.0;
    v79.fields.g = 0.0;
    v79.fields.b = 0.0;
    v79.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_69195020(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v79,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_69196820(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteRed,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_69196820(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteGreen,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    UnityEngine_Rendering_CommandBuffer__DrawRenderer_69196820(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      (UnityEngine_Renderer_o *)this->fields.smr,
      this->fields.materialSilhouetteBlue,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v66 = v78;
    if ( !smr )
      goto LABEL_41;
    v65 = v66;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_69194608(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      10000,
      &v65,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v64 = v78;
    if ( !smr )
      goto LABEL_41;
    v63 = v64;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_69194608(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      20000,
      &v63,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    v62 = v78;
    if ( !smr )
      goto LABEL_41;
    v61 = v62;
    UnityEngine_Rendering_CommandBuffer__GetTemporaryRT_69194608(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      30000,
      &v61,
      0LL);
    v9 = this->fields.outlineCmd;
    outlineRT = (UnityEngine_Texture_o *)this->fields.outlineRT;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v55,
                                                 10000,
                                                 0LL);
    v58 = v55;
    v59 = v56;
    v60 = v57;
    if ( !v9 )
      goto LABEL_41;
    v53[0] = v58;
    v53[1] = v59;
    v54 = v60;
    UnityEngine_Rendering_CommandBuffer__Blit(v9, outlineRT, (UnityEngine_Rendering_RenderTargetIdentifier_o *)v53, 0LL);
    v11 = this->fields.outlineCmd;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191772(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v50,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v55 = v50;
    v56 = v51;
    v57 = v52;
    if ( !v11 )
      goto LABEL_41;
    v48[0] = v55;
    v48[1] = v56;
    v49 = v57;
    UnityEngine_Rendering_CommandBuffer__SetRenderTarget(
      v11,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v48,
      0LL);
    smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.outlineCmd;
    if ( !smr )
      goto LABEL_41;
    v80.fields.r = 0.0;
    v80.fields.g = 0.0;
    v80.fields.b = 0.0;
    v80.fields.a = 0.0;
    UnityEngine_Rendering_CommandBuffer__ClearRenderTarget_69195020(
      (UnityEngine_Rendering_CommandBuffer_o *)smr,
      1,
      1,
      v80,
      0LL);
    v12 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v45,
      10000,
      0LL);
    v52 = v47;
    v50 = v45;
    v51 = v46;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v42,
                                                 20000,
                                                 0LL);
    v45 = v42;
    v46 = v43;
    v47 = v44;
    if ( !v12 )
      goto LABEL_41;
    materialGaussianBloom = this->fields.materialGaussianBloom;
    v40[0] = v50;
    v40[1] = v51;
    v41 = v52;
    v38[0] = v45;
    v38[1] = v46;
    v39 = v47;
    UnityEngine_Rendering_CommandBuffer__Blit_69197112(
      v12,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v40,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v38,
      materialGaussianBloom,
      0,
      0LL);
    v14 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v35,
      20000,
      0LL);
    v44 = v37;
    v42 = v35;
    v43 = v36;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v32,
                                                 30000,
                                                 0LL);
    v35 = v32;
    v36 = v33;
    v37 = v34;
    if ( !v14 )
      goto LABEL_41;
    v15 = this->fields.materialGaussianBloom;
    v30[0] = v42;
    v30[1] = v43;
    v31 = v44;
    v28[0] = v35;
    v28[1] = v36;
    v29 = v37;
    UnityEngine_Rendering_CommandBuffer__Blit_69197112(
      v14,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v30,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v28,
      v15,
      1,
      0LL);
    v16 = this->fields.outlineCmd;
    UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191744(
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)&v25,
      30000,
      0LL);
    v32 = v25;
    v33 = v26;
    v34 = v27;
    smr = (UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_69191772(
                                                 (UnityEngine_Rendering_RenderTargetIdentifier_o *)v23,
                                                 (UnityEngine_Texture_o *)this->fields.outlineRT,
                                                 0LL);
    v25 = v23[0];
    v26 = v23[1];
    v27 = v24;
    if ( !v16 )
      goto LABEL_41;
    v21[0] = v32;
    v21[1] = v33;
    v22 = v34;
    v19[0] = v25;
    v19[1] = v26;
    v20 = v27;
    UnityEngine_Rendering_CommandBuffer__Blit_69196972(
      v16,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v21,
      (UnityEngine_Rendering_RenderTargetIdentifier_o *)v19,
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
          OutlineEffectMain_GaussianBloom__RemoveCommandBuffer(this, 16, this->fields.outlineCmd, v17),
          (smr = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.camera) == 0LL) )
    {
LABEL_41:
      sub_1B64324(smr);
    }
    UnityEngine_Camera__AddCommandBuffer((UnityEngine_Camera_o *)smr, 16, this->fields.outlineCmd, 0LL);
    if ( v6 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      isPlaying = UnityEngine_Application__get_isPlaying(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( isPlaying )
        UnityEngine_Object__Destroy_69127736(settings, 0LL);
      else
        UnityEngine_Object__DestroyImmediate_69127924(settings, 0LL);
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
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_49F8056 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22470/*"please play!!"*/, v3);
    byte_49F8056 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
  {
    if ( this->fields.setup )
    {
      this->fields.setup = 0;
      OutlineEffectMain_GaussianBloom__SetActive(this, 1, v4);
    }
  }
  else
  {
    this->fields.message = (struct System_String_o *)StringLiteral_22470/*"please play!!"*/;
    sub_1B6406C(&this->fields.message);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Camera_o *camera; // x0
  System_Collections_Generic_IEnumerable_T__o *CommandBuffers; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w23
  System_String_o *name; // x24
  System_String_o *v22; // x0
  UnityEngine_Camera_o *v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8058 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__, *(_QWORD *)&cameraEvent);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_CommandBuffer__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandBuffer___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandBuffer__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandBuffer__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_CommandBuffer__TypeInfo, v14);
    byte_49F8058 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( cmd )
  {
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    CommandBuffers = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Camera__GetCommandBuffers(
                                                                      camera,
                                                                      cameraEvent,
                                                                      0LL);
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_CommandBuffer__TypeInfo,
                                                         v17,
                                                         v18);
    System_Collections_Generic_List_object____ctor_55234504(
      v19,
      CommandBuffers,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_CommandBuffer___ctor__);
    if ( !v19 )
      goto LABEL_19;
    v20 = v19->fields._size - 1;
    if ( v20 >= 0 )
    {
      while ( 1 )
      {
        camera = (UnityEngine_Camera_o *)System_Collections_Generic_List_object___get_Item(
                                           v19,
                                           v20,
                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CommandBuffer__get_Item__);
        if ( !camera )
          break;
        name = UnityEngine_Rendering_CommandBuffer__get_name((UnityEngine_Rendering_CommandBuffer_o *)camera, 0LL);
        v22 = UnityEngine_Rendering_CommandBuffer__get_name(cmd, 0LL);
        if ( System_String__op_Equality(name, v22, 0LL) )
          System_Collections_Generic_List_object___RemoveAt(
            v19,
            v20,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_CommandBuffer__RemoveAt__);
        if ( --v20 < 0 )
          goto LABEL_11;
      }
LABEL_19:
      sub_1B64324(camera);
    }
LABEL_11:
    camera = this->fields.camera;
    if ( !camera )
      goto LABEL_19;
    UnityEngine_Camera__RemoveCommandBuffers(camera, cameraEvent, 0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v19,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_CommandBuffer__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__MoveNext__) )
    {
      v23 = this->fields.camera;
      if ( !v23 )
        sub_1B64324(0LL);
      UnityEngine_Camera__AddCommandBuffer(
        v23,
        cameraEvent,
        (UnityEngine_Rendering_CommandBuffer_o *)v24.fields._current,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_CommandBuffer__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x20
  __int64 *v20; // x8
  struct UnityEngine_SkinnedMeshRenderer_o **p_smr; // x20
  UnityEngine_Object_o *smr; // x21
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v24; // x2
  struct System_String_o **p_message; // x19
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *normalDatas; // x20
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  System_String_o *EditorCameraPath; // x20
  OutlineEffectMain_GaussianBloom_c *v37; // x0
  const MethodInfo *v38; // x1
  System_String_o *CommandBufferName; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  System_String_o *message; // t1

  if ( (byte_49F8059 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&OutlineEffectMain_GaussianBloom_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_10048/*"OutlineEffectMaterialLUT"*/, v5);
    sub_1B640C8(&StringLiteral_19298/*"failed to get SkinnedMeshRenderer component from parent"*/, v6);
    sub_1B640C8(&StringLiteral_22371/*"parent is null. please attach this component to object with parent"*/, v7);
    sub_1B640C8(&StringLiteral_4955/*"Custom/TwoPassGaussianBloom"*/, v8);
    sub_1B640C8(&StringLiteral_10049/*"OutlineEffectShaderColorSilhouette_B"*/, v9);
    sub_1B640C8(&StringLiteral_23565/*"success"*/, v10);
    sub_1B640C8(&StringLiteral_4928/*"Custom/OutlineEffectShaderLUT"*/, v11);
    sub_1B640C8(&StringLiteral_10053/*"OutlineRenderTexture"*/, v12);
    sub_1B640C8(&StringLiteral_4927/*"Custom/OutlineEffectShaderColorSilhouette"*/, v13);
    sub_1B640C8(&StringLiteral_10050/*"OutlineEffectShaderColorSilhouette_G"*/, v14);
    sub_1B640C8(&StringLiteral_10052/*"OutlineEffectTwoPassGaussianBloom"*/, v15);
    sub_1B640C8(&StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/, v16);
    sub_1B640C8(&StringLiteral_10051/*"OutlineEffectShaderColorSilhouette_R"*/, v17);
    byte_49F8059 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_30;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(parent, 0LL, 0LL) )
  {
    v20 = &StringLiteral_22371/*"parent is null. please attach this component to object with parent"*/;
LABEL_19:
    this->fields.message = (struct System_String_o *)*v20;
    p_message = &this->fields.message;
LABEL_20:
    sub_1B6406C(p_message);
    return;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_30;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  this->fields.smr = (struct UnityEngine_SkinnedMeshRenderer_o *)UnityEngine_Component__GetComponent_object_(
                                                                   (UnityEngine_Component_o *)transform,
                                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
  p_smr = &this->fields.smr;
  sub_1B6406C(&this->fields.smr);
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v20 = &StringLiteral_19298/*"failed to get SkinnedMeshRenderer component from parent"*/;
    goto LABEL_19;
  }
  transform = (UnityEngine_Transform_o *)*p_smr;
  if ( !*p_smr )
LABEL_30:
    sub_1B64324(transform);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(
                                         (UnityEngine_SkinnedMeshRenderer_o *)transform,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v20 = &StringLiteral_23157/*"sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_19;
  }
  OutlineEffectUtility__CreateShader(&this->fields.shaderLUTAsset, (System_String_o *)StringLiteral_4928/*"Custom/OutlineEffectShaderLUT"*/, v24);
  OutlineEffectUtility__CreateShader(&this->fields.shaderColorSilhouette, (System_String_o *)StringLiteral_4927/*"Custom/OutlineEffectShaderColorSilhouette"*/, v26);
  OutlineEffectUtility__CreateShader(&this->fields.shaderGaussianBloom, (System_String_o *)StringLiteral_4955/*"Custom/TwoPassGaussianBloom"*/, v27);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialLUT,
    this->fields.shaderLUTAsset,
    (System_String_o *)StringLiteral_10048/*"OutlineEffectMaterialLUT"*/,
    v28);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteRed,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10051/*"OutlineEffectShaderColorSilhouette_R"*/,
    v29);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteGreen,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10050/*"OutlineEffectShaderColorSilhouette_G"*/,
    v30);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialSilhouetteBlue,
    this->fields.shaderColorSilhouette,
    (System_String_o *)StringLiteral_10049/*"OutlineEffectShaderColorSilhouette_B"*/,
    v31);
  OutlineEffectUtility__CreateMaterial(
    &this->fields.materialGaussianBloom,
    this->fields.shaderGaussianBloom,
    (System_String_o *)StringLiteral_10052/*"OutlineEffectTwoPassGaussianBloom"*/,
    v32);
  normalDatas = (UnityEngine_Object_o *)this->fields.normalDatas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(normalDatas, 0LL, 0LL) )
    OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(this, v34);
  EditorCameraPath = this->fields.EditorCameraPath;
  v37 = OutlineEffectMain_GaussianBloom_TypeInfo;
  if ( !OutlineEffectMain_GaussianBloom_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OutlineEffectMain_GaussianBloom_TypeInfo);
    v37 = OutlineEffectMain_GaussianBloom_TypeInfo;
  }
  this->fields.camera = OutlineEffectUtility__GetCamera(EditorCameraPath, v37->static_fields->NPCameraPath, v35);
  sub_1B6406C(&this->fields.camera);
  CommandBufferName = OutlineEffectMain_GaussianBloom__get_CommandBufferName(this, v38);
  OutlineEffectUtility__InstantiateCommandBuffer(&this->fields.outlineCmd, CommandBufferName, v40);
  OutlineEffectUtility__InstantiateRenderTexture(
    &this->fields.outlineRT,
    1024,
    1024,
    (System_String_o *)StringLiteral_10053/*"OutlineRenderTexture"*/,
    v41);
  OutlineEffectUtility__RemoveNullMaterials(this->fields.smr, v42);
  message = this->fields.message;
  p_message = &this->fields.message;
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    *p_message = (struct System_String_o *)StringLiteral_23565/*"success"*/;
    goto LABEL_20;
  }
}


void __fastcall OutlineEffectMain_GaussianBloom__SetupSkinnedMeshRenderer(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *smr; // x20
  __int64 *v6; // x8
  UnityEngine_SkinnedMeshRenderer_o *v7; // x0
  UnityEngine_Object_o *sharedMesh; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_49F805A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12669/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v3);
    sub_1B640C8(&StringLiteral_12668/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/, v4);
    byte_49F805A = 1;
  }
  smr = (UnityEngine_Object_o *)this->fields.smr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(smr, 0LL, 0LL) )
  {
    v6 = &StringLiteral_12668/*"SetupSkinnedMeshRenderer -> SkinnedMeshRenderer is null"*/;
LABEL_12:
    this->fields.message = (struct System_String_o *)*v6;
    sub_1B6406C(&this->fields.message);
    return;
  }
  v7 = this->fields.smr;
  if ( !v7 )
    sub_1B64324(0LL);
  sharedMesh = (UnityEngine_Object_o *)UnityEngine_SkinnedMeshRenderer__get_sharedMesh(v7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMesh, 0LL, 0LL) )
  {
    v6 = &StringLiteral_12669/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/;
    goto LABEL_12;
  }
  OutlineEffectUtility__InsertOutlineMaterialToSharedMaterialsAtLastIndex(
    this->fields.smr,
    this->fields.materialLUT,
    v9);
  OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(this, (UnityEngine_Mesh_o *)sharedMesh, v10);
}


void __fastcall OutlineEffectMain_GaussianBloom__UploadMaterialSettingsToGPU(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  char *MainTexture; // x0
  UnityEngine_Texture_o *v20; // x20
  UnityEngine_Material_o *materialSilhouetteRed; // x21
  const MethodInfo *v22; // x1
  UnityEngine_Material_o *materialSilhouetteBlue; // x21
  const MethodInfo *v24; // x1
  UnityEngine_Material_o *materialSilhouetteGreen; // x20
  const MethodInfo *v26; // x1
  UnityEngine_Material_o *materialLUT; // x20
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  float v30; // s8
  UnityEngine_Material_o *v31; // x20
  const MethodInfo *v32; // x1
  UnityEngine_Material_o *v33; // x20
  const MethodInfo *v34; // x1
  UnityEngine_Material_o *v35; // x20
  const MethodInfo *v36; // x1
  UnityEngine_Material_o *v37; // x20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x0
  UnityEngine_Vector2_o ScaledScreenResolution; // kr00_8
  const MethodInfo *v41; // x0
  UnityEngine_Vector2_o ScaledUVOffset; // kr08_8
  UnityEngine_Material_o *v43; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Material_o *v45; // x20
  const MethodInfo *v46; // x1
  UnityEngine_Material_o *v47; // x20
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  float v50; // s8
  UnityEngine_Material_o *v51; // x20
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  float v54; // s8
  UnityEngine_Material_o *v55; // x20
  const MethodInfo *v56; // x1
  UnityEngine_Material_o *v57; // x20
  const MethodInfo *v58; // x1
  UnityEngine_Material_o *v59; // x20
  const MethodInfo *v60; // x1
  UnityEngine_Material_o *v61; // x20
  const MethodInfo *v62; // x1
  UnityEngine_Material_o *v63; // x20
  const MethodInfo *v64; // x1
  UnityEngine_Material_o *v65; // x20
  const MethodInfo *v66; // x1
  UnityEngine_Material_o *materialGaussianBloom; // x20
  const MethodInfo *v68; // x1
  UnityEngine_Material_o *v69; // x20
  const MethodInfo *v70; // x1
  UnityEngine_Material_o *v71; // x20
  const MethodInfo *v72; // x1
  UnityEngine_Vector4_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F805B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16330/*"_VertexScale"*/, method);
    sub_1B640C8(&StringLiteral_16183/*"_KernelSize"*/, v3);
    sub_1B640C8(&StringLiteral_16185/*"_LUTTex"*/, v4);
    sub_1B640C8(&StringLiteral_16177/*"_Intensity"*/, v5);
    sub_1B640C8(&StringLiteral_16097/*"_ClipFade"*/, v6);
    sub_1B640C8(&StringLiteral_16260/*"_ScaledScreenResolution"*/, v7);
    sub_1B640C8(&StringLiteral_16159/*"_FullscreenUVScale"*/, v8);
    sub_1B640C8(&StringLiteral_16223/*"_OutlineThickness"*/, v9);
    sub_1B640C8(&StringLiteral_16254/*"_Scale"*/, v10);
    sub_1B640C8(&StringLiteral_16270/*"_Sigma"*/, v11);
    sub_1B640C8(&StringLiteral_16158/*"_FullscreenUVOffset"*/, v12);
    sub_1B640C8(&StringLiteral_16261/*"_ScaledUVOffset"*/, v13);
    sub_1B640C8(&StringLiteral_16327/*"_VertexOffset"*/, v14);
    sub_1B640C8(&StringLiteral_16211/*"_Offset"*/, v15);
    sub_1B640C8(&StringLiteral_16116/*"_Contrast"*/, v16);
    sub_1B640C8(&StringLiteral_16253/*"_Saturation"*/, v17);
    sub_1B640C8(&StringLiteral_16069/*"_AlphaSettings"*/, v18);
    byte_49F805B = 1;
  }
  MainTexture = (char *)OutlineEffectUtility__GetMainTexture(this->fields.smr, method);
  if ( !this->fields.materialLUT )
    goto LABEL_56;
  v20 = (UnityEngine_Texture_o *)MainTexture;
  UnityEngine_Material__set_mainTexture(this->fields.materialLUT, (UnityEngine_Texture_o *)MainTexture, 0LL);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16185/*"_LUTTex"*/,
    (UnityEngine_Texture_o *)this->fields.outlineRT,
    0LL);
  MainTexture = (char *)this->fields.materialSilhouetteRed;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v20, 0LL);
  materialSilhouetteRed = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v22);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteRed )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteRed, *(UnityEngine_Color_o *)(MainTexture + 88), 0LL);
  MainTexture = (char *)this->fields.materialSilhouetteBlue;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v20, 0LL);
  materialSilhouetteBlue = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v24);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteBlue )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteBlue, *(UnityEngine_Color_o *)(MainTexture + 120), 0LL);
  MainTexture = (char *)this->fields.materialSilhouetteGreen;
  if ( !MainTexture )
    goto LABEL_56;
  UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)MainTexture, v20, 0LL);
  materialSilhouetteGreen = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v26);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialSilhouetteGreen )
    goto LABEL_56;
  UnityEngine_Material__set_color(materialSilhouetteGreen, *(UnityEngine_Color_o *)(MainTexture + 104), 0LL);
  materialLUT = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v28);
  if ( !MainTexture )
    goto LABEL_56;
  v30 = *((float *)MainTexture + 55);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v29);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !materialLUT )
    goto LABEL_56;
  v73.fields.z = this->fields.alphaMultiplication;
  v73.fields.y = *((float *)MainTexture + 56);
  v73.fields.w = 0.0;
  v73.fields.x = v30;
  UnityEngine_Material__SetVector(materialLUT, (System_String_o *)StringLiteral_16069/*"_AlphaSettings"*/, v73, 0LL);
  v31 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v32);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v31 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v31, (System_String_o *)StringLiteral_16223/*"_OutlineThickness"*/, *((float *)MainTexture + 8), 0LL);
  v33 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v34);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v33 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v33, (System_String_o *)StringLiteral_16097/*"_ClipFade"*/, *((float *)MainTexture + 10), 0LL);
  v35 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v36);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v35 )
    goto LABEL_56;
  v74.fields.y = *((float *)MainTexture + 13);
  v74.fields.z = *((float *)MainTexture + 14);
  v74.fields.x = *((float *)MainTexture + 12);
  v74.fields.w = 0.0;
  UnityEngine_Material__SetVector(v35, (System_String_o *)StringLiteral_16330/*"_VertexScale"*/, v74, 0LL);
  v37 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v38);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v37 )
    goto LABEL_56;
  v75.fields.y = *((float *)MainTexture + 16);
  v75.fields.z = *((float *)MainTexture + 17);
  v75.fields.x = *((float *)MainTexture + 15);
  v75.fields.w = 0.0;
  UnityEngine_Material__SetVector(v37, (System_String_o *)StringLiteral_16327/*"_VertexOffset"*/, v75, 0LL);
  ScaledScreenResolution = OutlineEffectUtility__GetScaledScreenResolution(v39);
  ScaledUVOffset = OutlineEffectUtility__GetScaledUVOffset(v41);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v76.fields.z = 0.0;
  v76.fields.w = 0.0;
  v76.fields.x = ScaledScreenResolution.fields.x;
  v76.fields.y = ScaledScreenResolution.fields.y;
  UnityEngine_Material__SetVector(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16260/*"_ScaledScreenResolution"*/,
    v76,
    0LL);
  MainTexture = (char *)this->fields.materialLUT;
  if ( !MainTexture )
    goto LABEL_56;
  v77.fields.z = 0.0;
  v77.fields.w = 0.0;
  v77.fields.x = ScaledUVOffset.fields.x;
  v77.fields.y = ScaledUVOffset.fields.y;
  UnityEngine_Material__SetVector(
    (UnityEngine_Material_o *)MainTexture,
    (System_String_o *)StringLiteral_16261/*"_ScaledUVOffset"*/,
    v77,
    0LL);
  v43 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v44);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v43 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v43, (System_String_o *)StringLiteral_16253/*"_Saturation"*/, *((float *)MainTexture + 57), 0LL);
  v45 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v46);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v45 )
    goto LABEL_56;
  UnityEngine_Material__SetFloat(v45, (System_String_o *)StringLiteral_16116/*"_Contrast"*/, *((float *)MainTexture + 58), 0LL);
  v47 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v48);
  if ( !MainTexture )
    goto LABEL_56;
  v50 = *((float *)MainTexture + 18);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v49);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v47 )
    goto LABEL_56;
  v78.fields.y = *((float *)MainTexture + 19);
  v78.fields.z = 0.0;
  v78.fields.w = 0.0;
  v78.fields.x = v50;
  UnityEngine_Material__SetVector(v47, (System_String_o *)StringLiteral_16159/*"_FullscreenUVScale"*/, v78, 0LL);
  v51 = this->fields.materialLUT;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v52);
  if ( !MainTexture )
    goto LABEL_56;
  v54 = *((float *)MainTexture + 20);
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v53);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v51 )
    goto LABEL_56;
  v79.fields.y = *((float *)MainTexture + 21);
  v79.fields.z = 0.0;
  v79.fields.w = 0.0;
  v79.fields.x = v54;
  UnityEngine_Material__SetVector(v51, (System_String_o *)StringLiteral_16158/*"_FullscreenUVOffset"*/, v79, 0LL);
  v55 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v56);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v55 )
    goto LABEL_56;
  v80.fields.y = *((float *)MainTexture + 44);
  v80.fields.z = *((float *)MainTexture + 45);
  v80.fields.x = *((float *)MainTexture + 43);
  v80.fields.w = 0.0;
  UnityEngine_Material__SetVector(v55, (System_String_o *)StringLiteral_16211/*"_Offset"*/, v80, 0LL);
  v57 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v58);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v57 )
    goto LABEL_56;
  v81.fields.y = *((float *)MainTexture + 47);
  v81.fields.z = *((float *)MainTexture + 48);
  v81.fields.x = *((float *)MainTexture + 46);
  v81.fields.w = 0.0;
  UnityEngine_Material__SetVector(v57, (System_String_o *)StringLiteral_16211/*"_Offset"*/, v81, 0LL);
  v59 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v60);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v59 )
    goto LABEL_56;
  v82.fields.y = *((float *)MainTexture + 50);
  v82.fields.z = *((float *)MainTexture + 51);
  v82.fields.x = *((float *)MainTexture + 49);
  v82.fields.w = 0.0;
  UnityEngine_Material__SetVector(v59, (System_String_o *)StringLiteral_16211/*"_Offset"*/, v82, 0LL);
  v61 = this->fields.materialSilhouetteRed;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v62);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v61 )
    goto LABEL_56;
  v83.fields.y = *((float *)MainTexture + 35);
  v83.fields.z = *((float *)MainTexture + 36);
  v83.fields.x = *((float *)MainTexture + 34);
  v83.fields.w = 0.0;
  UnityEngine_Material__SetVector(v61, (System_String_o *)StringLiteral_16254/*"_Scale"*/, v83, 0LL);
  v63 = this->fields.materialSilhouetteGreen;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v64);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v63 )
    goto LABEL_56;
  v84.fields.y = *((float *)MainTexture + 38);
  v84.fields.z = *((float *)MainTexture + 39);
  v84.fields.x = *((float *)MainTexture + 37);
  v84.fields.w = 0.0;
  UnityEngine_Material__SetVector(v63, (System_String_o *)StringLiteral_16254/*"_Scale"*/, v84, 0LL);
  v65 = this->fields.materialSilhouetteBlue;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v66);
  if ( !MainTexture )
    goto LABEL_56;
  if ( !v65 )
    goto LABEL_56;
  v85.fields.y = *((float *)MainTexture + 41);
  v85.fields.z = *((float *)MainTexture + 42);
  v85.fields.x = *((float *)MainTexture + 40);
  v85.fields.w = 0.0;
  UnityEngine_Material__SetVector(v65, (System_String_o *)StringLiteral_16254/*"_Scale"*/, v85, 0LL);
  materialGaussianBloom = this->fields.materialGaussianBloom;
  MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v68);
  if ( !MainTexture
    || !materialGaussianBloom
    || (UnityEngine_Material__SetFloat(
          materialGaussianBloom,
          (System_String_o *)StringLiteral_16270/*"_Sigma"*/,
          this->fields.sigmaMultiplication * *((float *)MainTexture + 52),
          0LL),
        v69 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v70)) == 0LL)
    || !v69
    || (UnityEngine_Material__SetFloat(
          v69,
          (System_String_o *)StringLiteral_16177/*"_Intensity"*/,
          this->fields.intensityMultiplication * (float)((float)(100.0 - *((float *)MainTexture + 54)) / 100.0),
          0LL),
        v71 = this->fields.materialGaussianBloom,
        (MainTexture = (char *)OutlineEffectMain_GaussianBloom__get_Settings(this, v72)) == 0LL)
    || !v71 )
  {
LABEL_56:
    sub_1B64324(MainTexture);
  }
  UnityEngine_Material__SetInt(v71, (System_String_o *)StringLiteral_16183/*"_KernelSize"*/, *((_DWORD *)MainTexture + 53), 0LL);
}


void __fastcall OutlineEffectMain_GaussianBloom__UploadNormalsToMesh(
        OutlineEffectMain_GaussianBloom_o *this,
        UnityEngine_Mesh_o *mesh,
        const MethodInfo *method)
{
  struct OutlineEffectNormalDatas_o *normalDatas; // x8

  normalDatas = this->fields.normalDatas;
  if ( !normalDatas || !mesh )
    sub_1B64324(this);
  UnityEngine_Mesh__set_normals(mesh, normalDatas->fields.normals, 0LL);
}


System_String_o *__fastcall OutlineEffectMain_GaussianBloom__get_CommandBufferName(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t InstanceID; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F8054 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10046/*"Outline CommandBuffer - {0}"*/, v3);
    byte_49F8054 = 1;
  }
  InstanceID = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)this, 0LL);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &InstanceID);
  return System_String__Format((System_String_o *)StringLiteral_10046/*"Outline CommandBuffer - {0}"*/, v4, 0LL);
}


OutlineEffectSettings_o *__fastcall OutlineEffectMain_GaussianBloom__get_Settings(
        OutlineEffectMain_GaussianBloom_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *settings; // x20
  OutlineEffectSettings_c *v5; // x0

  if ( (byte_49F8055 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&OutlineEffectSettings_TypeInfo, v3);
    byte_49F8055 = 1;
  }
  settings = (UnityEngine_Object_o *)this->fields.settings;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(settings, 0LL, 0LL) )
    return this->fields.settings;
  v5 = OutlineEffectSettings_TypeInfo;
  if ( !OutlineEffectSettings_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OutlineEffectSettings_TypeInfo);
  return OutlineEffectSettings__get_Default((const MethodInfo *)v5);
}