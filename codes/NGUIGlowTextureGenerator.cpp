void NGUIGlowTextureGenerator___ctor(
        NGUIGlowTextureGenerator_o *this,
        UISprite_o *maskSprite,
        UnityEngine_ComputeShader_o *glowCompute,
        UnityEngine_Material_o *glowMaterial,
        const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_glowMaterial; // x19

  if ( (byte_4D26532 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16311/*"_KernelSize"*/);
    sub_1C94098(&StringLiteral_16229/*"_Color"*/);
    sub_1C94098(&StringLiteral_16305/*"_Intensity"*/);
    sub_1C94098(&StringLiteral_16234/*"_ColorStrength"*/);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    byte_4D26532 = 1;
  }
  this->fields.downSample = 1;
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.colorStrength = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.maskSprite = maskSprite;
  sub_1C9403C(&this->fields, maskSprite);
  this->fields.glowCompute = glowCompute;
  sub_1C9403C(&this->fields.glowCompute, glowCompute);
  this->fields.glowMaterial = glowMaterial;
  p_glowMaterial = &this->fields.glowMaterial;
  sub_1C9403C(p_glowMaterial, glowMaterial);
  *((_DWORD *)p_glowMaterial + 2) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16403/*"_Sigma"*/, 0);
  *((_DWORD *)p_glowMaterial + 3) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16305/*"_Intensity"*/, 0);
  *((_DWORD *)p_glowMaterial + 4) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16311/*"_KernelSize"*/, 0);
  *((_DWORD *)p_glowMaterial + 5) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16229/*"_Color"*/, 0);
  *((_DWORD *)p_glowMaterial + 6) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16234/*"_ColorStrength"*/, 0);
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
  __int64 v7; // x1
  __int64 Kernel; // x0
  int32_t v9; // w21
  UnityEngine_ComputeShader_o *v10; // x22
  float v11; // s8
  float v12; // s8
  unsigned int v13; // w10
  int32_t v14; // w23
  int v15; // w24
  float v16; // s0
  int32_t v17; // w3
  int32_t v18; // w21
  UISpriteData_o *AtlasSprite; // x0
  UnityEngine_ComputeShader_o *v20; // x23
  int *v21; // x22
  int v22; // w8
  UnityEngine_ComputeShader_o *v23; // x23
  int v24; // w8
  UnityEngine_ComputeShader_o *v25; // x20
  float v26; // s8
  float v27; // s8
  unsigned int v28; // w10
  int32_t v29; // w22
  int v30; // w19
  float v31; // s0
  int32_t v32; // w3

  if ( (byte_4D26534 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&float___TypeInfo);
    sub_1C94098(&StringLiteral_3937/*"CSMain"*/);
    sub_1C94098(&StringLiteral_11430/*"Result"*/);
    sub_1C94098(&StringLiteral_9837/*"Offset"*/);
    sub_1C94098(&StringLiteral_7709/*"InputTexture"*/);
    sub_1C94098(&StringLiteral_12944/*"Size"*/);
    sub_1C94098(&StringLiteral_4498/*"ClearColor"*/);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    byte_4D26534 = 1;
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
                     (System_String_o *)StringLiteral_4498/*"ClearColor"*/,
                     0);
          if ( this->fields.glowCompute )
          {
            v9 = Kernel;
            UnityEngine_ComputeShader__SetTexture_72118568(
              this->fields.glowCompute,
              Kernel,
              (System_String_o *)StringLiteral_11430/*"Result"*/,
              (UnityEngine_Texture_o *)renderTexture,
              0);
            if ( renderTexture )
            {
              v10 = this->fields.glowCompute;
              v11 = (float)((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                             renderTexture,
                             renderTexture->klass->vtable._4_get_width.method);
              if ( !byte_4D265B8 )
              {
                sub_1C94098(&System_Math_TypeInfo);
                byte_4D265B8 = 1;
              }
              v12 = v11 * 0.125;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v13 = vcvtps_s32_f32(v12);
              if ( ceilf(v12) == INFINITY )
                v14 = 0x80000000;
              else
                v14 = v13;
              v15 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                      renderTexture,
                      renderTexture->klass->vtable._6_get_height.method);
              if ( !byte_4D265B8 )
              {
                sub_1C94098(&System_Math_TypeInfo);
                byte_4D265B8 = 1;
              }
              Kernel = (__int64)System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              if ( v10 )
              {
                v16 = ceilf((float)v15 * 0.125);
                v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
                UnityEngine_ComputeShader__Dispatch(v10, v9, v14, v17, 1, 0);
                Kernel = (__int64)this->fields.glowCompute;
                if ( Kernel )
                {
                  Kernel = UnityEngine_ComputeShader__FindKernel(
                             (UnityEngine_ComputeShader_o *)Kernel,
                             (System_String_o *)StringLiteral_3937/*"CSMain"*/,
                             0);
                  if ( this->fields.glowCompute )
                  {
                    v18 = Kernel;
                    UnityEngine_ComputeShader__SetTexture_72118568(
                      this->fields.glowCompute,
                      Kernel,
                      (System_String_o *)StringLiteral_11430/*"Result"*/,
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
                                            (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
                                            0);
                        if ( this->fields.glowCompute )
                        {
                          UnityEngine_ComputeShader__SetTexture_72118568(
                            this->fields.glowCompute,
                            v18,
                            (System_String_o *)StringLiteral_7709/*"InputTexture"*/,
                            (UnityEngine_Texture_o *)Kernel,
                            0);
                          Kernel = (__int64)this->fields.maskSprite;
                          if ( Kernel )
                          {
                            AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)Kernel, 0);
                            if ( AtlasSprite )
                            {
                              v20 = this->fields.glowCompute;
                              v21 = (int *)AtlasSprite;
                              Kernel = sub_1C94140(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v22 = *(_DWORD *)(Kernel + 24);
                              if ( !v22 )
                                goto LABEL_64;
                              *(float *)(Kernel + 32) = (float)v21[6];
                              if ( v22 == 1 )
                                goto LABEL_64;
                              *(float *)(Kernel + 36) = (float)v21[7];
                              if ( !v20 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v20,
                                (System_String_o *)StringLiteral_9837/*"Offset"*/,
                                (System_Single_array *)Kernel,
                                0);
                              v23 = this->fields.glowCompute;
                              Kernel = sub_1C94140(float___TypeInfo, 2);
                              if ( !Kernel )
                                goto LABEL_63;
                              v24 = *(_DWORD *)(Kernel + 24);
                              if ( !v24 || (*(float *)(Kernel + 32) = (float)v21[8], v24 == 1) )
LABEL_64:
                                sub_1C942F8(Kernel);
                              *(float *)(Kernel + 36) = (float)v21[9];
                              if ( !v23 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v23,
                                (System_String_o *)StringLiteral_12944/*"Size"*/,
                                (System_Single_array *)Kernel,
                                0);
                            }
                            v25 = this->fields.glowCompute;
                            v26 = (float)((int (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._4_get_width.methodPtr)(
                                           renderTexture,
                                           renderTexture->klass->vtable._4_get_width.method);
                            if ( !byte_4D265B8 )
                            {
                              sub_1C94098(&System_Math_TypeInfo);
                              byte_4D265B8 = 1;
                            }
                            v27 = v26 * 0.125;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v28 = vcvtps_s32_f32(v27);
                            if ( ceilf(v27) == INFINITY )
                              v29 = 0x80000000;
                            else
                              v29 = v28;
                            v30 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, const MethodInfo *))renderTexture->klass->vtable._6_get_height.methodPtr)(
                                    renderTexture,
                                    renderTexture->klass->vtable._6_get_height.method);
                            if ( !byte_4D265B8 )
                            {
                              sub_1C94098(&System_Math_TypeInfo);
                              byte_4D265B8 = 1;
                            }
                            Kernel = (__int64)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            if ( v25 )
                            {
                              v31 = ceilf((float)v30 * 0.125);
                              if ( v31 == INFINITY )
                                v32 = 0x80000000;
                              else
                                v32 = (int)v31;
                              UnityEngine_ComputeShader__Dispatch(v25, v18, v29, v32, 1, 0);
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
        sub_1C942F0(Kernel, v7);
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

  if ( (byte_4D26535 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Graphics_TypeInfo);
    byte_4D26535 = 1;
  }
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial )
    goto LABEL_12;
  UnityEngine_Material__SetFloat_71980040(glowMaterial, this->fields.SigmaProperty, this->fields.sigma, 0);
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial
    || (UnityEngine_Material__SetFloat_71980040(
          glowMaterial,
          this->fields.IntensityProperty,
          this->fields.intensityPingPong + this->fields.intensity,
          0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetInt_71979828(glowMaterial, this->fields.KernelSizeProperty, this->fields.kernelSize, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetColor_71974436(glowMaterial, this->fields.GlowColorProperty, this->fields.glowColor, 0),
        (glowMaterial = this->fields.glowMaterial) == 0)
    || (UnityEngine_Material__SetFloat_71980040(
          glowMaterial,
          this->fields.ColorStrengthProperty,
          this->fields.colorStrength,
          0),
        !renderTexture) )
  {
LABEL_12:
    sub_1C942F0(glowMaterial, renderTexture);
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
  UnityEngine_Graphics__Blit_71955736((UnityEngine_Texture_o *)renderTexture, v9, v11, 1, 0);
  UnityEngine_Graphics__Blit_71955736((UnityEngine_Texture_o *)v9, v12, this->fields.glowMaterial, 0, 0);
  UnityEngine_Graphics__Blit_71955736((UnityEngine_Texture_o *)v12, v9, this->fields.glowMaterial, 1, 0);
  UnityEngine_Graphics__Blit_71955736((UnityEngine_Texture_o *)v9, Temporary, this->fields.glowMaterial, 2, 0);
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
  __int64 v7; // x1

  if ( (byte_4D26533 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_RenderTexture_TypeInfo);
    sub_1C94098(&StringLiteral_7131/*"Glow NGUITexture"*/);
    byte_4D26533 = 1;
  }
  v5 = (UnityEngine_RenderTexture_o *)sub_1C942E4(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_72017332(v5, width, height, 0, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  UnityEngine_RenderTexture__set_enableRandomWrite(v5, 1, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v5, (System_String_o *)StringLiteral_7131/*"Glow NGUITexture"*/, 0);
  UnityEngine_RenderTexture__Create(v5, 0);
  return v5;
}