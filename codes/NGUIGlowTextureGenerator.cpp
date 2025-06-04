void __fastcall NGUIGlowTextureGenerator___ctor(
        NGUIGlowTextureGenerator_o *this,
        UISprite_o *maskSprite,
        UnityEngine_ComputeShader_o *glowCompute,
        UnityEngine_Material_o *glowMaterial,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UnityEngine_Material_o **p_glowMaterial; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B05C56 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16106/*"_KernelSize"*/, maskSprite);
    sub_1BC3008(&StringLiteral_16025/*"_Color"*/, v9);
    sub_1BC3008(&StringLiteral_16100/*"_Intensity"*/, v10);
    sub_1BC3008(&StringLiteral_16030/*"_ColorStrength"*/, v11);
    sub_1BC3008(&StringLiteral_16197/*"_Sigma"*/, v12);
    byte_4B05C56 = 1;
  }
  this->fields.downSample = 1;
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.colorStrength = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.maskSprite = maskSprite;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)maskSprite, v13, v14);
  this->fields.glowCompute = glowCompute;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.glowCompute, (int32_t)glowCompute, v15, v16);
  this->fields.glowMaterial = glowMaterial;
  p_glowMaterial = &this->fields.glowMaterial;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_glowMaterial, (int32_t)glowMaterial, v18, v19);
  *((_DWORD *)p_glowMaterial + 2) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16197/*"_Sigma"*/, 0LL);
  *((_DWORD *)p_glowMaterial + 3) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16100/*"_Intensity"*/, 0LL);
  *((_DWORD *)p_glowMaterial + 4) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16106/*"_KernelSize"*/, 0LL);
  *((_DWORD *)p_glowMaterial + 5) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16025/*"_Color"*/, 0LL);
  *((_DWORD *)p_glowMaterial + 6) = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16030/*"_ColorStrength"*/, 0LL);
}


void __fastcall NGUIGlowTextureGenerator__ApplyBloom(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  NGUIGlowTextureGenerator__ComputeCreateGlowTexture(this, renderTexture, method);
  NGUIGlowTextureGenerator__ComputeGaussianBloom(this, renderTexture, v5);
}


void __fastcall NGUIGlowTextureGenerator__ComputeCreateGlowTexture(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *glowCompute; // x21
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v15; // x1
  __int64 Kernel; // x0
  int32_t v17; // w21
  UnityEngine_ComputeShader_o *v18; // x22
  __int64 v19; // x1
  float v20; // s8
  float v21; // s8
  unsigned int v22; // w10
  int32_t v23; // w23
  int v24; // w24
  float v25; // s0
  int32_t v26; // w3
  int32_t v27; // w21
  UISpriteData_o *AtlasSprite; // x0
  UnityEngine_ComputeShader_o *v29; // x23
  int *v30; // x22
  int v31; // w8
  __int64 v32; // x2
  UnityEngine_ComputeShader_o *v33; // x23
  int v34; // w8
  UnityEngine_ComputeShader_o *v35; // x20
  __int64 v36; // x1
  float v37; // s8
  float v38; // s8
  unsigned int v39; // w10
  int32_t v40; // w22
  int v41; // w19
  float v42; // s0
  int32_t v43; // w3

  if ( (byte_4B05C58 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, renderTexture);
    sub_1BC3008(&float___TypeInfo, v5);
    sub_1BC3008(&StringLiteral_3893/*"CSMain"*/, v6);
    sub_1BC3008(&StringLiteral_11269/*"Result"*/, v7);
    sub_1BC3008(&StringLiteral_9728/*"Offset"*/, v8);
    sub_1BC3008(&StringLiteral_7614/*"InputTexture"*/, v9);
    sub_1BC3008(&StringLiteral_12765/*"Size"*/, v10);
    sub_1BC3008(&StringLiteral_4456/*"ClearColor"*/, v11);
    sub_1BC3008(&StringLiteral_16121/*"_MaskTex"*/, v12);
    byte_4B05C58 = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(glowCompute, 0LL, 0LL) )
  {
    maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderTexture, 0LL, 0LL) )
      {
        Kernel = (__int64)this->fields.glowCompute;
        if ( Kernel )
        {
          Kernel = UnityEngine_ComputeShader__FindKernel(
                     (UnityEngine_ComputeShader_o *)Kernel,
                     (System_String_o *)StringLiteral_4456/*"ClearColor"*/,
                     0LL);
          if ( this->fields.glowCompute )
          {
            v17 = Kernel;
            UnityEngine_ComputeShader__SetTexture_70041816(
              this->fields.glowCompute,
              Kernel,
              (System_String_o *)StringLiteral_11269/*"Result"*/,
              (UnityEngine_Texture_o *)renderTexture,
              0LL);
            if ( renderTexture )
            {
              v18 = this->fields.glowCompute;
              v20 = (float)((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._4_get_width.method)(
                             renderTexture,
                             renderTexture->klass->vtable._5_set_width.methodPtr);
              if ( !byte_4AFC46F )
              {
                sub_1BC3008(&System_Math_TypeInfo, v19);
                byte_4AFC46F = 1;
              }
              v21 = v20 * 0.125;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v22 = vcvtps_s32_f32(v21);
              if ( ceilf(v21) == INFINITY )
                v23 = 0x80000000;
              else
                v23 = v22;
              v24 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._6_get_height.method)(
                      renderTexture,
                      renderTexture->klass->vtable._7_set_height.methodPtr);
              if ( !byte_4AFC46F )
              {
                sub_1BC3008(&System_Math_TypeInfo, v15);
                byte_4AFC46F = 1;
              }
              Kernel = (__int64)System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              if ( v18 )
              {
                v25 = ceilf((float)v24 * 0.125);
                v26 = v25 == INFINITY ? 0x80000000 : (int)v25;
                UnityEngine_ComputeShader__Dispatch(v18, v17, v23, v26, 1, 0LL);
                Kernel = (__int64)this->fields.glowCompute;
                if ( Kernel )
                {
                  Kernel = UnityEngine_ComputeShader__FindKernel(
                             (UnityEngine_ComputeShader_o *)Kernel,
                             (System_String_o *)StringLiteral_3893/*"CSMain"*/,
                             0LL);
                  if ( this->fields.glowCompute )
                  {
                    v27 = Kernel;
                    UnityEngine_ComputeShader__SetTexture_70041816(
                      this->fields.glowCompute,
                      Kernel,
                      (System_String_o *)StringLiteral_11269/*"Result"*/,
                      (UnityEngine_Texture_o *)renderTexture,
                      0LL);
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
                                            (System_String_o *)StringLiteral_16121/*"_MaskTex"*/,
                                            0LL);
                        if ( this->fields.glowCompute )
                        {
                          UnityEngine_ComputeShader__SetTexture_70041816(
                            this->fields.glowCompute,
                            v27,
                            (System_String_o *)StringLiteral_7614/*"InputTexture"*/,
                            (UnityEngine_Texture_o *)Kernel,
                            0LL);
                          Kernel = (__int64)this->fields.maskSprite;
                          if ( Kernel )
                          {
                            AtlasSprite = UISprite__GetAtlasSprite((UISprite_o *)Kernel, 0LL);
                            if ( AtlasSprite )
                            {
                              v29 = this->fields.glowCompute;
                              v30 = (int *)AtlasSprite;
                              Kernel = sub_1BC30B0(float___TypeInfo, 2LL);
                              if ( !Kernel )
                                goto LABEL_63;
                              v31 = *(_DWORD *)(Kernel + 24);
                              v32 = Kernel;
                              if ( !v31 )
                                goto LABEL_64;
                              *(float *)(Kernel + 32) = (float)v30[6];
                              if ( v31 == 1 )
                                goto LABEL_64;
                              *(float *)(Kernel + 36) = (float)v30[7];
                              if ( !v29 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v29,
                                (System_String_o *)StringLiteral_9728/*"Offset"*/,
                                (System_Single_array *)Kernel,
                                0LL);
                              v33 = this->fields.glowCompute;
                              Kernel = sub_1BC30B0(float___TypeInfo, 2LL);
                              if ( !Kernel )
                                goto LABEL_63;
                              v34 = *(_DWORD *)(Kernel + 24);
                              v32 = Kernel;
                              if ( !v34 || (*(float *)(Kernel + 32) = (float)v30[8], v34 == 1) )
LABEL_64:
                                sub_1BC326C(Kernel, v15, v32);
                              *(float *)(Kernel + 36) = (float)v30[9];
                              if ( !v33 )
                                goto LABEL_63;
                              UnityEngine_ComputeShader__SetFloats(
                                v33,
                                (System_String_o *)StringLiteral_12765/*"Size"*/,
                                (System_Single_array *)Kernel,
                                0LL);
                            }
                            v35 = this->fields.glowCompute;
                            v37 = (float)((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._4_get_width.method)(
                                           renderTexture,
                                           renderTexture->klass->vtable._5_set_width.methodPtr);
                            if ( !byte_4AFC46F )
                            {
                              sub_1BC3008(&System_Math_TypeInfo, v36);
                              byte_4AFC46F = 1;
                            }
                            v38 = v37 * 0.125;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v39 = vcvtps_s32_f32(v38);
                            if ( ceilf(v38) == INFINITY )
                              v40 = 0x80000000;
                            else
                              v40 = v39;
                            v41 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._6_get_height.method)(
                                    renderTexture,
                                    renderTexture->klass->vtable._7_set_height.methodPtr);
                            if ( !byte_4AFC46F )
                            {
                              sub_1BC3008(&System_Math_TypeInfo, v15);
                              byte_4AFC46F = 1;
                            }
                            Kernel = (__int64)System_Math_TypeInfo;
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            if ( v35 )
                            {
                              v42 = ceilf((float)v41 * 0.125);
                              if ( v42 == INFINITY )
                                v43 = 0x80000000;
                              else
                                v43 = (int)v42;
                              UnityEngine_ComputeShader__Dispatch(v35, v27, v40, v43, 1, 0LL);
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
        sub_1BC3264(Kernel, v15);
      }
    }
  }
}


void __fastcall NGUIGlowTextureGenerator__ComputeGaussianBloom(
        NGUIGlowTextureGenerator_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  UnityEngine_Material_o *glowMaterial; // x0
  int v6; // w25
  int v7; // w26
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

  if ( (byte_4B05C59 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Graphics_TypeInfo, renderTexture);
    byte_4B05C59 = 1;
  }
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial )
    goto LABEL_12;
  UnityEngine_Material__SetFloat_69904032(glowMaterial, this->fields.SigmaProperty, this->fields.sigma, 0LL);
  glowMaterial = this->fields.glowMaterial;
  if ( !glowMaterial
    || (UnityEngine_Material__SetFloat_69904032(
          glowMaterial,
          this->fields.IntensityProperty,
          this->fields.intensityPingPong + this->fields.intensity,
          0LL),
        (glowMaterial = this->fields.glowMaterial) == 0LL)
    || (UnityEngine_Material__SetInt_69903820(
          glowMaterial,
          this->fields.KernelSizeProperty,
          this->fields.kernelSize,
          0LL),
        (glowMaterial = this->fields.glowMaterial) == 0LL)
    || (UnityEngine_Material__SetColor_69898428(
          glowMaterial,
          this->fields.GlowColorProperty,
          this->fields.glowColor,
          0LL),
        (glowMaterial = this->fields.glowMaterial) == 0LL)
    || (UnityEngine_Material__SetFloat_69904032(
          glowMaterial,
          this->fields.ColorStrengthProperty,
          this->fields.colorStrength,
          0LL),
        !renderTexture) )
  {
LABEL_12:
    sub_1BC3264(glowMaterial, renderTexture);
  }
  v6 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._4_get_width.method)(
         renderTexture,
         renderTexture->klass->vtable._5_set_width.methodPtr)
     / this->fields.downSample;
  v7 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))renderTexture->klass->vtable._6_get_height.method)(
         renderTexture,
         renderTexture->klass->vtable._7_set_height.methodPtr)
     / this->fields.downSample;
  UnityEngine_RenderTexture__get_descriptor(&v16, renderTexture, 0LL);
  v17 = *(_OWORD *)&v16.fields._msaaSamples_k__BackingField;
  v18[0] = *(_OWORD *)&v16.fields._stencilFormat_k__BackingField;
  *(_OWORD *)((char *)v18 + 12) = *(_OWORD *)&v16.fields._shadowSamplingMode_k__BackingField;
  UnityEngine_RenderTexture__get_descriptor(&v16, renderTexture, 0LL);
  v15 = v16;
  Temporary = UnityEngine_RenderTexture__GetTemporary(&v15, 0LL);
  v14.fields._width_k__BackingField = v6;
  v14.fields._height_k__BackingField = v7;
  *(_OWORD *)&v14.fields._msaaSamples_k__BackingField = v17;
  *(_OWORD *)&v14.fields._stencilFormat_k__BackingField = v18[0];
  *(_OWORD *)&v14.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v18 + 12);
  v9 = UnityEngine_RenderTexture__GetTemporary(&v14, 0LL);
  v13.fields._width_k__BackingField = v6;
  v13.fields._height_k__BackingField = v7;
  *(_OWORD *)&v13.fields._msaaSamples_k__BackingField = v17;
  *(_OWORD *)&v13.fields._stencilFormat_k__BackingField = v18[0];
  *(_OWORD *)&v13.fields._shadowSamplingMode_k__BackingField = *(_OWORD *)((char *)v18 + 12);
  v10 = UnityEngine_RenderTexture__GetTemporary(&v13, 0LL);
  v11 = this->fields.glowMaterial;
  v12 = v10;
  if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
  UnityEngine_Graphics__Blit_69879824((UnityEngine_Texture_o *)renderTexture, v9, v11, 1, 0LL);
  UnityEngine_Graphics__Blit_69879824((UnityEngine_Texture_o *)v9, v12, this->fields.glowMaterial, 0, 0LL);
  UnityEngine_Graphics__Blit_69879824((UnityEngine_Texture_o *)v12, v9, this->fields.glowMaterial, 1, 0LL);
  UnityEngine_Graphics__Blit_69879824((UnityEngine_Texture_o *)v9, Temporary, this->fields.glowMaterial, 2, 0LL);
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)Temporary, renderTexture, 0LL);
  UnityEngine_RenderTexture__ReleaseTemporary(v9, 0LL);
  UnityEngine_RenderTexture__ReleaseTemporary(v12, 0LL);
  UnityEngine_RenderTexture__ReleaseTemporary(Temporary, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_RenderTexture_o *__fastcall NGUIGlowTextureGenerator__CreateNewRenderTexture(
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_RenderTexture_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B05C57 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_RenderTexture_TypeInfo, *(_QWORD *)&height);
    sub_1BC3008(&StringLiteral_7051/*"Glow NGUITexture"*/, v5);
    byte_4B05C57 = 1;
  }
  v6 = (UnityEngine_RenderTexture_o *)sub_1BC3254(UnityEngine_RenderTexture_TypeInfo);
  UnityEngine_RenderTexture___ctor_69941292(v6, width, height, 0, 0LL);
  if ( !v6 )
    sub_1BC3264(v7, v8);
  UnityEngine_RenderTexture__set_enableRandomWrite(v6, 1, 0LL);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)StringLiteral_7051/*"Glow NGUITexture"*/, 0LL);
  UnityEngine_RenderTexture__Create(v6, 0LL);
  return v6;
}