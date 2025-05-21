void __fastcall NGUIGlow___ctor(NGUIGlow_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.downSample = 2;
  *(_OWORD *)&this->fields.pingPongTimeMultiplier = xmmword_BEB950;
  this->fields.quality = 35;
  *(_QWORD *)&this->fields.glowColor.fields.b = 0x3F80000000000000LL;
  this->fields.colorStrength = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NGUIGlow__ApplyBloom(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *rt; // x20
  const MethodInfo *v5; // x1
  float time; // s0
  float pingPongLength; // s9
  float pingPongTimeMultiplier; // s10
  UISprite_o *maskSprite; // x21
  UnityEngine_ComputeShader_o *glowCompute; // x22
  UnityEngine_Material_o *glowMaterial; // x23
  float v12; // s8
  NGUIGlowTextureGenerator_o *v13; // x20
  const MethodInfo *v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  float v18; // s1
  float v19; // s2
  float v20; // s0
  bool v21; // nf
  float v22; // s0
  UnityEngine_RenderTexture_o *v23; // x19
  const MethodInfo *v24; // x2

  if ( (byte_4B48731 & 1) == 0 )
  {
    sub_1BDB878(&NGUIGlowTextureGenerator_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B48731 = 1;
  }
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rt, 0LL, 0LL) )
  {
    NGUIGlow__AutoInitialize(this, v5);
    time = UnityEngine_Time__get_time(0LL);
    pingPongTimeMultiplier = this->fields.pingPongTimeMultiplier;
    pingPongLength = this->fields.pingPongLength;
    maskSprite = this->fields.maskSprite;
    glowCompute = this->fields.glowCompute;
    glowMaterial = this->fields.glowMaterial;
    v12 = time;
    v13 = (NGUIGlowTextureGenerator_o *)sub_1BDBAC4(NGUIGlowTextureGenerator_TypeInfo);
    NGUIGlowTextureGenerator___ctor(v13, maskSprite, glowCompute, glowMaterial, v14);
    if ( !v13 )
      sub_1BDBAD4(v15, v16);
    v18 = pingPongLength + pingPongLength;
    v13->fields.downSample = this->fields.downSample;
    v19 = floorf((float)(v12 * pingPongTimeMultiplier) / (float)(pingPongLength + pingPongLength));
    v20 = (float)(v12 * pingPongTimeMultiplier) - (float)((float)(pingPongLength + pingPongLength) * v19);
    v13->fields.glowColor = this->fields.glowColor;
    if ( v20 <= (float)(pingPongLength + pingPongLength) )
      v18 = (float)(v12 * pingPongTimeMultiplier) - (float)((float)(pingPongLength + pingPongLength) * v19);
    v21 = v20 < 0.0;
    v13->fields.sigma = this->fields.sigma;
    v22 = 0.0;
    if ( !v21 )
      v22 = v18;
    v13->fields.intensity = (float)(pingPongLength - vabds_f32(v22, pingPongLength)) + this->fields.intensity;
    v13->fields.kernelSize = this->fields.quality;
    v13->fields.colorStrength = this->fields.colorStrength;
    v23 = this->fields.rt;
    NGUIGlowTextureGenerator__ComputeCreateGlowTexture(v13, v23, v17);
    NGUIGlowTextureGenerator__ComputeGaussianBloom(v13, v23, v24);
  }
}


void __fastcall NGUIGlow__AutoInitialize(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *glowCompute; // x21
  Il2CppObject *object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_glowMaterial; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Material_o *glowMaterial; // t1
  UnityEngine_Shader_o *v14; // x20
  UnityEngine_Material_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B48732 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Material_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ComputeShader___, v4);
    sub_1BDB878(&StringLiteral_7322/*"Hidden/TwoPassGaussianBlur"*/, v5);
    sub_1BDB878(&StringLiteral_12803/*"Shaders/NGUIGlowCompute"*/, v6);
    byte_4B48732 = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(glowCompute, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_12803/*"Shaders/NGUIGlowCompute"*/,
               (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ComputeShader___);
    this->fields.glowCompute = (struct UnityEngine_ComputeShader_o *)object;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.glowCompute, (int32_t)object, v9, v10);
  }
  glowMaterial = this->fields.glowMaterial;
  p_glowMaterial = (CGThumbnailListItem_o *)&this->fields.glowMaterial;
  v12 = (UnityEngine_Object_o *)glowMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
  {
    v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7322/*"Hidden/TwoPassGaussianBlur"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v15, v14, 0LL);
      p_glowMaterial->klass = (CGThumbnailListItem_c *)v15;
      sub_1BDB81C(p_glowMaterial, (int32_t)v15, v16, v17);
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v14, 0LL);
    }
  }
}


void __fastcall NGUIGlow__CleanUp(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_RenderTexture_o **p_rt; // x20
  UnityEngine_Object_o *rt; // x21
  __int64 v5; // x1
  UnityEngine_RenderTexture_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Material_o **p_glowMaterial; // x20
  UnityEngine_Object_o *glowMaterial; // x21
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o **p_glowCompute; // x19
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_ComputeShader_o *glowCompute; // t1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B48733 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48733 = 1;
  }
  p_rt = &this->fields.rt;
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rt, 0LL, 0LL) )
  {
    if ( !*p_rt )
      sub_1BDBAD4(0LL, v5);
    UnityEngine_RenderTexture__Release(*p_rt, 0LL);
    v6 = *p_rt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)v6, 0LL);
    *p_rt = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rt, 0, v7, v8);
  }
  p_glowMaterial = &this->fields.glowMaterial;
  glowMaterial = (UnityEngine_Object_o *)this->fields.glowMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(glowMaterial, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_glowMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v11, 0LL);
    *p_glowMaterial = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.glowMaterial, 0, v12, v13);
  }
  glowCompute = this->fields.glowCompute;
  p_glowCompute = (UnityEngine_Object_o **)&this->fields.glowCompute;
  v15 = (UnityEngine_Object_o *)glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    UnityEngine_Resources__UnloadAsset(*p_glowCompute, 0LL);
    *p_glowCompute = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_glowCompute, 0, v17, v18);
  }
}


void __fastcall NGUIGlow__OnValidate(NGUIGlow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B4872F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, method);
    byte_4B4872F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0LL) )
    NGUIGlow__UpdateTexture(this, v3);
}


// attributes: thunk
void __fastcall NGUIGlow__Update(NGUIGlow_o *this, const MethodInfo *method)
{
  NGUIGlow__ApplyBloom(this, method);
}


void __fastcall NGUIGlow__UpdateTexture(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  const MethodInfo *v4; // x1
  struct UITexture_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UITexture_o *v8; // x8
  struct UnityEngine_RenderTexture_o *NewRenderTexture; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4B48730 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48730 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
  {
    NGUIGlow__CleanUp(this, v4);
    v8 = this->fields.texture;
    if ( !v8
      || (NewRenderTexture = NGUIGlowTextureGenerator__CreateNewRenderTexture(v8->fields.mWidth, v8->fields.mHeight, v7),
          this->fields.rt = NewRenderTexture,
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.rt, (int32_t)NewRenderTexture, v10, v11),
          NGUIGlow__ApplyBloom(this, v12),
          (v5 = this->fields.texture) == 0LL) )
    {
      sub_1BDBAD4(v5, v6);
    }
    ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_RenderTexture_o *, Il2CppMethodPointer))v5->klass->vtable._27_set_mainTexture.method)(
      v5,
      this->fields.rt,
      v5->klass->vtable._28_get_shader.methodPtr);
  }
}