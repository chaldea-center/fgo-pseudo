void NGUIGlowTextureGenerator___ctor(
        NGUIGlowTextureGenerator_o *this,
        UISprite_o *maskSprite,
        UnityEngine_ComputeShader_o *glowCompute,
        UnityEngine_Material_o *glowMaterial,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_Material_o **p_glowMaterial; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C46A52 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16254/*"_KernelSize"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16248/*"_Intensity"*/);
    sub_1C37058(&StringLiteral_16178/*"_ColorStrength"*/);
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    byte_4C46A52 = 1;
  }
  this->fields.downSample = 1;
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.colorStrength = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maskSprite = maskSprite;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)maskSprite, v9, v10);
  this->fields.glowCompute = glowCompute;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.glowCompute, (int32_t)glowCompute, v11, v12);
  this->fields.glowMaterial = glowMaterial;
  p_glowMaterial = &this->fields.glowMaterial;
  sub_1C36FFC((CGThumbnailListItem_o *)p_glowMaterial, (int32_t)glowMaterial, v14, v15);
  *((_DWORD *)p_glowMaterial + 2) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16345/*"_Sigma"*/, 0);
  *((_DWORD *)p_glowMaterial + 3) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16248/*"_Intensity"*/, 0);
  *((_DWORD *)p_glowMaterial + 4) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16254/*"_KernelSize"*/, 0);
  *((_DWORD *)p_glowMaterial + 5) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16173/*"_Color"*/, 0);
  *((_DWORD *)p_glowMaterial + 6) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16178/*"_ColorStrength"*/, 0);
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
  UnityEngine_Object_o *maskSprite; // x21
  __int64 Kernel; // x0
  int32_t v8; // w21
  UnityEngine_ComputeShader_o *v9; // x22
  float v10; // s8
  float v11; // s8
  unsigned int v12; // w10
  int32_t v13; // w23
  int v14; // w24
  float v15; // s0
  int32_t v16; // w3
  int32_t v17; // w21
  UISpriteData_o *AtlasSprite; // x0
  UnityEngine_ComputeShader_o *v19; // x23
  int *v20; // x22
  int v21; // w8
  UnityEngine_ComputeShader_o *v22; // x23
  int v23; // w8
  UnityEngine_ComputeShader_o *v24; // x20
  float v25; // s8
  float v26; // s8
  unsigned int v27; // w10
  int32_t v28; // w22
  int v29; // w19
  float v30; // s0
  int32_t v31; // w3

  if ( (byte_4C46A54 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float___TypeInfo);
    sub_1C37058(&StringLiteral_3932/*"CSMain"*/);
    sub_1C37058(&StringLiteral_11384/*"Result"*/);
    sub_1C37058(&StringLiteral_9816/*"Offset"*/);
    sub_1C37058(&StringLiteral_7692/*"InputTexture"*/);
    sub_1C37058(&StringLiteral_12890/*"Size"*/);
    sub_1C37058(&StringLiteral_4495/*"ClearColor"*/);
    sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C46A54 = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(glowCompute, 0, 0) )
  {
    maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderTexture, 0, 0) )
      {
        Kernel = (__int64)this->fields.glowCompute;
        if ( Kernel )
        {
          Kernel = UnityEngine_ComputeShader__FindKernel(
                     (UnityEngine_ComputeShader_o *)Kernel,
                     (System_String_o *)StringLiteral_4495/*"ClearColor"*/,
                     0);
          if ( this->fields.glowCompute )
          {
            v8 = Kernel;
            UnityEngine_ComputeShader__SetTexture_71274268(
              this->fields.glowCompute,
              Kernel,
              (System_String_o *)StringLiteral_11384/*"Result"*/,
              (UnityEngine_Texture_o *)renderTexture,
              0);
            if ( renderTexture )
            {
              v9 = this->fields.glowCompute;
              v10 = (float)((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                             renderTexture,
                             renderTexture->klass->vtable._4_get_width.method);
              if ( !byte_4C3CFE8 )
              {
                sub_1C37058(&System_Math_TypeInfo);
                byte_4C3CFE8 = 1;
              }
              v11 = v10 * 0.125;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v12 = vcvtps_s32_f32(v11);
              if ( ceilf(v11) == INFINITY )
                v13 = 0x80000000;
              else
                v13 = v12;
              v14 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                      renderTexture,
                      renderTexture->klass->vtable._6_get_height.method);
              if ( !byte_4C3CFE8 )
              {
                sub_1C37058(&System_Math_TypeInfo);
                byte_4C3CFE8 = 1;
              }
              Kernel = (__int64)System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              if ( v9 )
              {
                v15 = ceilf((float)v14 * 0.125);
                v16 = v15 == INFINITY ? 0x80000000 : (int)v15;
                UnityEngine_ComputeShader__Dispatch(v9, v8, v13, v16, 1, 0);
                Kernel = (__int64)this->fields.glowCompute;
                if ( Kernel )
                {
                  Kernel = UnityEngine_ComputeShader__FindKernel(
                             (UnityEngine_ComputeShader_o *)Kernel,
                             (System_String_o *)StringLiteral_3932/*"CSMain"*/,
                             0);
                  if ( this->fields.glowCompute )
                  {
                    v17 = Kernel;
                    UnityEngine_ComputeShader__SetTexture_71274268(
                      this->fields.glowCompute,
                      Kernel,
                      (System_String_o *)StringLiteral_11384/*"Result"*/,
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
                                            (System_String_o *)StringLiteral_16269/*"_MaskTex"*/,
                                            0);
                        if ( this->fields.glowCompute )
                        {
                          UnityEngine_ComputeShader__SetTexture_71274268(
                            this->fields.glowCompute,
                            v17,
                            (System_String_o *)StringLiteral_7692/*"InputTexture"*/,
                            (UnityEngine_Texture_o *)Kernel,
                            0);
                          Kernel = (__int64)this->fields.maskSprite;
                          if ( Kernel )
                          {
                            AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)Kernel, 0);
                            if ( AtlasSprite )
                            {
                              v19 = this->fields.glowCompute;
                              v20 = (int *)AtlasSprite;
                              Kernel = sub_1C37100(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v21 = *(_DWORD *)(Kernel + 24);
                              if ( !v21 )
                                goto LABEL_64;
                              *(float *)(Kernel + 32) = (float)v20[6];
                              if ( v21 == 1 )
                                goto LABEL_64;
                              *(float *)(Kernel + 36) = (float)v20[7];
                              if ( !v19 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v19,
                                (System_String_o *)StringLiteral_9816/*"Offset"*/,
                                (System_Single_array *)Kernel,
                                0);
                              v22 = this->fields.glowCompute;
                              Kernel = sub_1C37100(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v23 = *(_DWORD *)(Kernel + 24);
                              if ( !v23 || (*(float *)(Kernel + 32) = (float)v20[8], v23 == 1) )
LABEL_64:
                                sub_1C372BC(Kernel);
                              *(float *)(Kernel + 36) = (float)v20[9];
                              if ( !v22 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v22,
                                (System_String_o *)StringLiteral_12890/*"Size"*/,
                                (System_Single_array *)Kernel,
                                0);
                            }
                            v24 = this->fields.glowCompute;
                            v25 = (float)((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                                           renderTexture,
                                           renderTexture->klass->vtable._4_get_width.method);
                            if ( !byte_4C3CFE8 )
                            {
                              sub_1C37058(&System_Math_TypeInfo);
                              byte_4C3CFE8 = 1;
                            }
                            v26 = v25 * 0.125;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v27 = vcvtps_s32_f32(v26);
                            if ( ceilf(v26) == INFINITY )
                              v28 = 0x80000000;
                            else
                              v28 = v27;
                            v29 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                                    renderTexture,
                                    renderTexture->klass->vtable._6_get_height.method);
                            if ( !byte_4C3CFE8 )
                            {
                              sub_1C37058(&System_Math_TypeInfo);
                              byte_4C3CFE8 = 1;
                            }
                            Kernel = (__int64)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            if ( v24 )
                            {
                              v30 = ceilf((float)v29 * 0.125);
                              if ( v30 == INFINITY )
                                v31 = 0x80000000;
                              else
                                v31 = (int)v30;
                              UnityEngine_ComputeShader__Dispatch(v24, v17, v28, v31, 1, 0);
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
        sub_1C372B4(Kernel);
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
  UnityEngine_Material_o *v11; // x24
  UnityEngine_RenderTexture_o *v12; // x23
  UnityEngine_RenderTextureDescriptor_o v13; // [xsp+0h] [xbp-160h] BYREF
  UnityEngine_RenderTextureDescriptor_o v14; // [xsp+38h] [xbp-128h] BYREF
  UnityEngine_RenderTextureDescriptor_o v15; // [xsp+70h] [xbp-F0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v16; // [xsp+A8h] [xbp-B8h] BYREF
  __int128 v17; // [xsp+E0h] [xbp-80h]
  _OWORD v18[2]; // [xsp+F0h] [xbp-70h]

  if ( (byte_4C46A55 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    byte_4C46A55 = 1;
  }
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial )
    goto LABEL_12;
  UnityEngine_Material__SetFloat_71136484(glowMaterial, this->fields.SigmaProperty, this->fields.sigma, 0);
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial
    || (UnityEngine_Material__SetFloat_71136484(
          glowMaterial,
          this->fields.IntensityProperty,
          this->fields.intensityPingPong + this->fields.intensity,
          0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetInt_71136272(glowMaterial, this->fields.KernelSizeProperty, this->fields.kernelSize, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetColor_71130880(glowMaterial, this->fields.GlowColorProperty, this->fields.glowColor, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetFloat_71136484(
          glowMaterial,
          this->fields.ColorStrengthProperty,
          this->fields.colorStrength,
          0),
        !renderTexture) )
  {
LABEL_12:
    sub_1C372B4(glowMaterial);
  }
  v6 = ((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
         renderTexture,
         renderTexture->klass->vtable._4_get_width.method)
     / this->fields.downSample;
  v7 = ((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
         renderTexture,
         renderTexture->klass->vtable._6_get_height.method)
     / this->fields.downSample;
  UnityEngine_RenderTexture__get_descriptor(&v16, renderTexture, 0);
  v17 = *(_OWORD *)&v16.fields._msaaSamples_k__BackingField;
  v18[0] = *(_OWORD *)&v16.fields._stencilFormat_k__BackingField;
  *(_OWORD *)((char *)v18 + 12) = *(_OWORD *)&v16.fields._shadowSamplingMode_k__BackingField;
  UnityEngine_RenderTexture__get_descriptor(&v16, renderTexture, 0);
  v15 = v16;
  Temporary = UnityEngine_RenderTexture__GetTemporary(&v15, 0);
  v14.fields._width_k__BackingField = v6;
  v14.fields._height_k__BackingField = v7;
  *(_OWORD *)&v14.fields._msaaSamples_k__BackingField = v17;
  *(_OWORD *)&v14.fields._stencilFormat_k__BackingField = v18[0];
  *(_OWORD *)&v14.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v18 + 12);
  v9 = UnityEngine_RenderTexture__GetTemporary(&v14, 0);
  v13.fields._width_k__BackingField = v6;
  v13.fields._height_k__BackingField = v7;
  *(_OWORD *)&v13.fields._msaaSamples_k__BackingField = v17;
  *(_OWORD *)&v13.fields._stencilFormat_k__BackingField = v18[0];
  *(_OWORD *)&v13.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v18 + 12);
  v10 = UnityEngine_RenderTexture__GetTemporary(&v13, 0);
  v11 = this->fields.glowMaterial;
  v12 = v10;
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_71112276((UnityEngine_Texture_o *)renderTexture, v9, v11, 1, 0);
  UnityEngine_Graphics__Blit_71112276((UnityEngine_Texture_o *)v9, v12, this->fields.glowMaterial, 0, 0);
  UnityEngine_Graphics__Blit_71112276((UnityEngine_Texture_o *)v12, v9, this->fields.glowMaterial, 1, 0);
  UnityEngine_Graphics__Blit_71112276((UnityEngine_Texture_o *)v9, Temporary, this->fields.glowMaterial, 2, 0);
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)Temporary, renderTexture, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(v9, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(v12, 0);
  UnityEngine_RenderTexture__ReleaseTemporary(Temporary, 0);
}


UnityEngine_RenderTexture_o *NGUIGlowTextureGenerator__CreateNewRenderTexture(
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o *v5; // x19
  __int64 v6; // x0

  if ( (byte_4C46A53 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C37058(&StringLiteral_7119/*"Glow NGUITexture"*/);
    byte_4C46A53 = 1;
  }
  v5 = (UnityEngine_RenderTexture_o *)sub_1C372A4(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_71173744(v5, width, height, 0, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  UnityEngine_RenderTexture__set_enableRandomWrite(v5, 1, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v5, (System_String_o *)StringLiteral_7119/*"Glow NGUITexture"*/, 0);
  UnityEngine_RenderTexture__Create(v5, 0);
  return v5;
}