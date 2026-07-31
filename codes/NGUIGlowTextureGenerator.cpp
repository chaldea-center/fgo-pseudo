void NGUIGlowTextureGenerator___ctor(
        NGUIGlowTextureGenerator_o *this,
        UISprite_o *maskSprite,
        UnityEngine_ComputeShader_o *glowCompute,
        UnityEngine_Material_o *glowMaterial,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_Material_o **p_glowMaterial; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w0
  System_String_o *v29; // x8
  int32_t v30; // w0
  System_String_o *v31; // x8
  int32_t v32; // w0
  System_String_o *v33; // x8
  int32_t v34; // w0
  System_String_o *v35; // x8

  if ( (byte_5931F9A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16869/*"_KernelSize"*/);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16863/*"_Intensity"*/);
    sub_21FFC50(&StringLiteral_16792/*"_ColorStrength"*/);
    sub_21FFC50(&StringLiteral_16962/*"_Sigma"*/);
    byte_5931F9A = 1;
  }
  this->fields.downSample = 1;
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.colorStrength = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maskSprite = maskSprite;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)maskSprite, v9, v10, v11, v12, v13, v14);
  this->fields.glowCompute = glowCompute;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.glowCompute,
    (int32_t)glowCompute,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.glowMaterial = glowMaterial;
  p_glowMaterial = &this->fields.glowMaterial;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_glowMaterial, (int32_t)glowMaterial, v22, v23, v24, v25, v26, v27);
  v28 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16962/*"_Sigma"*/, 0);
  v29 = (System_String_o *)StringLiteral_16863/*"_Intensity"*/;
  *((_DWORD *)p_glowMaterial + 2) = v28;
  v30 = UnityEngine_Shader__PropertyToID(v29, 0);
  v31 = (System_String_o *)StringLiteral_16869/*"_KernelSize"*/;
  *((_DWORD *)p_glowMaterial + 3) = v30;
  v32 = UnityEngine_Shader__PropertyToID(v31, 0);
  v33 = (System_String_o *)StringLiteral_16781/*"_Color"*/;
  *((_DWORD *)p_glowMaterial + 4) = v32;
  v34 = UnityEngine_Shader__PropertyToID(v33, 0);
  v35 = (System_String_o *)StringLiteral_16792/*"_ColorStrength"*/;
  *((_DWORD *)p_glowMaterial + 5) = v34;
  *((_DWORD *)p_glowMaterial + 6) = UnityEngine_Shader__PropertyToID(v35, 0);
}


void NGUIGlowTextureGenerator__ApplyBloom(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  NGUIGlowTextureGenerator__ComputeCreateGlowTexture(this, renderTexture, method);
  NGUIGlowTextureGenerator__ComputeGaussianBloom(this, renderTexture, v5);
}


void NGUIGlowTextureGenerator__ComputeCreateGlowTexture(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *glowCompute; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 Kernel; // x0
  int32_t v13; // w21
  UnityEngine_ComputeShader_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w23
  float v18; // s8
  unsigned int v19; // w9
  int32_t v20; // w23
  __int64 v21; // x2
  unsigned int v22; // w24
  float v23; // s0
  unsigned int v24; // w9
  int32_t v25; // w3
  int32_t v26; // w21
  UISpriteData_o *AtlasSprite; // x0
  int *v28; // x22
  UnityEngine_ComputeShader_o *v29; // x23
  int v30; // w8
  UnityEngine_ComputeShader_o *v31; // x23
  int v32; // w8
  UnityEngine_ComputeShader_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  unsigned int v36; // w22
  float v37; // s8
  unsigned int v38; // w9
  int32_t v39; // w22
  __int64 v40; // x2
  unsigned int v41; // w19
  float v42; // s0
  unsigned int v43; // w8
  int32_t v44; // w3

  if ( (byte_5931F9C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&StringLiteral_4071/*"CSMain"*/);
    sub_21FFC50(&StringLiteral_11858/*"Result"*/);
    sub_21FFC50(&StringLiteral_10202/*"Offset"*/);
    sub_21FFC50(&StringLiteral_8010/*"InputTexture"*/);
    sub_21FFC50(&StringLiteral_13407/*"Size"*/);
    sub_21FFC50(&StringLiteral_4660/*"ClearColor"*/);
    sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5931F9C = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderTexture, method);
  if ( !UnityEngine_Object__op_Equality(glowCompute, 0, 0) )
  {
    maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderTexture, 0, 0) )
      {
        Kernel = (__int64)this->fields.glowCompute;
        if ( Kernel )
        {
          Kernel = UnityEngine_ComputeShader__FindKernel(
                     (UnityEngine_ComputeShader_o *)Kernel,
                     (System_String_o *)StringLiteral_4660/*"ClearColor"*/,
                     0);
          if ( this->fields.glowCompute )
          {
            v13 = Kernel;
            UnityEngine_ComputeShader__SetTexture_83258172(
              this->fields.glowCompute,
              Kernel,
              (System_String_o *)StringLiteral_11858/*"Result"*/,
              (UnityEngine_Texture_o *)renderTexture,
              0);
            if ( renderTexture )
            {
              v14 = this->fields.glowCompute;
              v17 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                      renderTexture,
                      renderTexture->klass->vtable._4_get_width.method);
              if ( !byte_5931FBB )
              {
                sub_21FFC50(&System_Math_TypeInfo);
                byte_5931FBB = 1;
              }
              v18 = vcvts_n_f32_s32(v17, 3u);
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v16);
              v19 = vcvtps_s32_f32(v18);
              if ( ceilf(v18) == INFINITY )
                v20 = 0x80000000;
              else
                v20 = v19;
              v22 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                      renderTexture,
                      renderTexture->klass->vtable._6_get_height.method);
              if ( !byte_5931FBB )
              {
                sub_21FFC50(&System_Math_TypeInfo);
                byte_5931FBB = 1;
              }
              Kernel = (__int64)System_Math_TypeInfo;
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v21);
              if ( v14 )
              {
                v23 = vcvts_n_f32_s32(v22, 3u);
                v24 = vcvtps_s32_f32(v23);
                v25 = ceilf(v23) == INFINITY ? 0x80000000 : v24;
                UnityEngine_ComputeShader__Dispatch(v14, v13, v20, v25, 1, 0);
                Kernel = (__int64)this->fields.glowCompute;
                if ( Kernel )
                {
                  Kernel = UnityEngine_ComputeShader__FindKernel(
                             (UnityEngine_ComputeShader_o *)Kernel,
                             (System_String_o *)StringLiteral_4071/*"CSMain"*/,
                             0);
                  if ( this->fields.glowCompute )
                  {
                    v26 = Kernel;
                    UnityEngine_ComputeShader__SetTexture_83258172(
                      this->fields.glowCompute,
                      Kernel,
                      (System_String_o *)StringLiteral_11858/*"Result"*/,
                      (UnityEngine_Texture_o *)renderTexture,
                      0);
                    Kernel = (__int64)this->fields.maskSprite;
                    if ( Kernel )
                    {
                      Kernel = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Kernel + 696LL))(
                                 Kernel,
                                 *(_QWORD *)(*(_QWORD *)Kernel + 704LL));
                      if ( Kernel )
                      {
                        Kernel = (__int64)UnityEngine_Material__GetTexture(
                                            (UnityEngine_Material_o *)Kernel,
                                            (System_String_o *)StringLiteral_16884/*"_MaskTex"*/,
                                            0);
                        if ( this->fields.glowCompute )
                        {
                          UnityEngine_ComputeShader__SetTexture_83258172(
                            this->fields.glowCompute,
                            v26,
                            (System_String_o *)StringLiteral_8010/*"InputTexture"*/,
                            (UnityEngine_Texture_o *)Kernel,
                            0);
                          Kernel = (__int64)this->fields.maskSprite;
                          if ( Kernel )
                          {
                            AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)Kernel, 0);
                            if ( AtlasSprite )
                            {
                              v28 = (int *)AtlasSprite;
                              v29 = this->fields.glowCompute;
                              Kernel = sub_21FFD10(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v30 = *(_DWORD *)(Kernel + 24);
                              if ( !v30 )
                                goto LABEL_64;
                              *(float *)(Kernel + 32) = (float)v28[6];
                              if ( v30 == 1 )
                                goto LABEL_64;
                              *(float *)(Kernel + 36) = (float)v28[7];
                              if ( !v29 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v29,
                                (System_String_o *)StringLiteral_10202/*"Offset"*/,
                                (System_Single_array *)Kernel,
                                0);
                              v31 = this->fields.glowCompute;
                              Kernel = sub_21FFD10(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v32 = *(_DWORD *)(Kernel + 24);
                              if ( !v32 || (*(float *)(Kernel + 32) = (float)v28[8], v32 == 1) )
LABEL_64:
                                sub_21FFED4(Kernel);
                              *(float *)(Kernel + 36) = (float)v28[9];
                              if ( !v31 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v31,
                                (System_String_o *)StringLiteral_13407/*"Size"*/,
                                (System_Single_array *)Kernel,
                                0);
                            }
                            v33 = this->fields.glowCompute;
                            v36 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                                    renderTexture,
                                    renderTexture->klass->vtable._4_get_width.method);
                            if ( !byte_5931FBB )
                            {
                              sub_21FFC50(&System_Math_TypeInfo);
                              byte_5931FBB = 1;
                            }
                            v37 = vcvts_n_f32_s32(v36, 3u);
                            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v34, v35);
                            v38 = vcvtps_s32_f32(v37);
                            if ( ceilf(v37) == INFINITY )
                              v39 = 0x80000000;
                            else
                              v39 = v38;
                            v41 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                                    renderTexture,
                                    renderTexture->klass->vtable._6_get_height.method);
                            if ( !byte_5931FBB )
                            {
                              sub_21FFC50(&System_Math_TypeInfo);
                              byte_5931FBB = 1;
                            }
                            Kernel = (__int64)System_Math_TypeInfo;
                            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v40);
                            if ( v33 )
                            {
                              v42 = vcvts_n_f32_s32(v41, 3u);
                              v43 = vcvtps_s32_f32(v42);
                              if ( ceilf(v42) == INFINITY )
                                v44 = 0x80000000;
                              else
                                v44 = v43;
                              UnityEngine_ComputeShader__Dispatch(v33, v26, v39, v44, 1, 0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_63:
        sub_21FFECC(Kernel, v11);
      }
    }
  }
}


void NGUIGlowTextureGenerator__ComputeGaussianBloom(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  UnityEngine_Material_o *glowMaterial; // x0
  int32_t v6; // w25
  int32_t v7; // w26
  UnityEngine_RenderTexture_o *Temporary; // x21
  UnityEngine_RenderTexture_o *v9; // x22
  UnityEngine_RenderTexture_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_o *v13; // x24
  UnityEngine_RenderTexture_o *v14; // x23
  UnityEngine_RenderTextureDescriptor_o v15; // [xsp+8h] [xbp-158h] BYREF
  UnityEngine_RenderTextureDescriptor_o v16; // [xsp+3Ch] [xbp-124h] BYREF
  UnityEngine_RenderTextureDescriptor_o v17; // [xsp+70h] [xbp-F0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v18; // [xsp+ACh] [xbp-B4h] BYREF
  __int128 v19; // [xsp+E0h] [xbp-80h]
  _OWORD v20[2]; // [xsp+F0h] [xbp-70h] BYREF

  if ( (byte_5931F9D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Graphics_TypeInfo);
    byte_5931F9D = 1;
  }
  glowMaterial = this->fields.glowMaterial;
  v19 = 0u;
  memset(v20, 0, 28);
  if ( !glowMaterial )
    goto LABEL_12;
  UnityEngine_Material__SetFloat_83072080(glowMaterial, this->fields.SigmaProperty, this->fields.sigma, 0);
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial
    || (UnityEngine_Material__SetFloat_83072080(
          glowMaterial,
          this->fields.IntensityProperty,
          this->fields.intensityPingPong + this->fields.intensity,
          0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetInt_83072024(glowMaterial, this->fields.KernelSizeProperty, this->fields.kernelSize, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetColor_83062916(glowMaterial, this->fields.GlowColorProperty, this->fields.glowColor, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetFloat_83072080(
          glowMaterial,
          this->fields.ColorStrengthProperty,
          this->fields.colorStrength,
          0),
        !renderTexture) )
  {
LABEL_12:
    sub_21FFECC(glowMaterial, renderTexture);
  }
  v6 = ((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
         renderTexture,
         renderTexture->klass->vtable._4_get_width.method)
     / this->fields.downSample;
  v7 = ((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
         renderTexture,
         renderTexture->klass->vtable._6_get_height.method)
     / this->fields.downSample;
  UnityEngine_RenderTexture__get_descriptor(&v18, renderTexture, 0);
  v19 = *(_OWORD *)&v18.fields._msaaSamples_k__BackingField;
  v20[0] = *(_OWORD *)&v18.fields._stencilFormat_k__BackingField;
  *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)&v18.fields._shadowSamplingMode_k__BackingField;
  UnityEngine_RenderTexture__get_descriptor(&v18, renderTexture, 0);
  v17 = v18;
  Temporary = UnityEngine_RenderTexture__GetTemporary(&v17, 0);
  v16.fields._width_k__BackingField = v6;
  v16.fields._height_k__BackingField = v7;
  *(_OWORD *)&v16.fields._msaaSamples_k__BackingField = v19;
  *(_OWORD *)&v16.fields._stencilFormat_k__BackingField = v20[0];
  *(_OWORD *)&v16.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v20 + 12);
  v9 = UnityEngine_RenderTexture__GetTemporary(&v16, 0);
  v15.fields._width_k__BackingField = v6;
  v15.fields._height_k__BackingField = v7;
  *(_OWORD *)&v15.fields._msaaSamples_k__BackingField = v19;
  *(_OWORD *)&v15.fields._stencilFormat_k__BackingField = v20[0];
  *(_OWORD *)&v15.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v20 + 12);
  v10 = UnityEngine_RenderTexture__GetTemporary(&v15, 0);
  v13 = this->fields.glowMaterial;
  v14 = v10;
  if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v11, v12);
  UnityEngine_Graphics__Blit_83030508((UnityEngine_Texture_o *)renderTexture, v9, v13, 1, 0);
  UnityEngine_Graphics__Blit_83030508((UnityEngine_Texture_o *)v9, v14, this->fields.glowMaterial, 0, 0);
  UnityEngine_Graphics__Blit_83030508((UnityEngine_Texture_o *)v14, v9, this->fields.glowMaterial, 1, 0);
  UnityEngine_Graphics__Blit_83030508((UnityEngine_Texture_o *)v9, Temporary, this->fields.glowMaterial, 2, 0);
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)Temporary, renderTexture, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(v9, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(v14, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(Temporary, 0);
}


UnityEngine_RenderTexture_o *NGUIGlowTextureGenerator__CreateNewRenderTexture(
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5931F9B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_RenderTexture_TypeInfo);
    sub_21FFC50(&StringLiteral_7404/*"Glow NGUITexture"*/);
    byte_5931F9B = 1;
  }
  v5 = (UnityEngine_RenderTexture_o *)sub_21FFEBC(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_83127172(v5, width, height, 0, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  UnityEngine_RenderTexture__set_enableRandomWrite(v5, 1, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v5, (System_String_o *)StringLiteral_7404/*"Glow NGUITexture"*/, 0);
  UnityEngine_RenderTexture__Create(v5, 0);
  return v5;
}