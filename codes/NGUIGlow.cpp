void NGUIGlow___ctor(NGUIGlow_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.downSample = 2;
  *(_OWORD *)&this->fields.pingPongTimeMultiplier = xmmword_C0F7A0;
  this->fields.quality = 35;
  *(_QWORD *)&this->fields.glowColor.fields.b = 0x3F80000000000000LL;
  this->fields.colorStrength = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NGUIGlow__ApplyBloom(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rt; // x20
  const MethodInfo *v4; // x1
  float time; // s0
  float pingPongLength; // s9
  float pingPongTimeMultiplier; // s10
  UISprite_o *maskSprite; // x21
  UnityEngine_ComputeShader_o *glowCompute; // x22
  UnityEngine_Material_o *glowMaterial; // x23
  float v11; // s8
  NGUIGlowTextureGenerator_o *v12; // x20
  const MethodInfo *v13; // x4
  __int64 v14; // x0
  const MethodInfo *v15; // x2
  float v16; // s1
  float v17; // s2
  float v18; // s0
  bool v19; // nf
  float v20; // s0
  UnityEngine_RenderTexture_o *v21; // x19
  const MethodInfo *v22; // x2

  if ( (byte_4C46A4F & 1) == 0 )
  {
    sub_1C37058(&NGUIGlowTextureGenerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A4F = 1;
  }
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(rt, 0, 0) )
  {
    NGUIGlow__AutoInitialize(this, v4);
    time = UnityEngine_Time__get_time(0);
    pingPongTimeMultiplier = this->fields.pingPongTimeMultiplier;
    pingPongLength = this->fields.pingPongLength;
    maskSprite = this->fields.maskSprite;
    glowCompute = this->fields.glowCompute;
    glowMaterial = this->fields.glowMaterial;
    v11 = time;
    v12 = (NGUIGlowTextureGenerator_o *)sub_1C372A4(NGUIGlowTextureGenerator_TypeInfo);
    NGUIGlowTextureGenerator___ctor(v12, maskSprite, glowCompute, glowMaterial, v13);
    if ( !v12 )
      sub_1C372B4(v14);
    v16 = pingPongLength + pingPongLength;
    v12->fields.downSample = this->fields.downSample;
    v17 = floorf((float)(v11 * pingPongTimeMultiplier) / (float)(pingPongLength + pingPongLength));
    v18 = (float)(v11 * pingPongTimeMultiplier) - (float)((float)(pingPongLength + pingPongLength) * v17);
    v12->fields.glowColor = this->fields.glowColor;
    if ( v18 <= (float)(pingPongLength + pingPongLength) )
      v16 = (float)(v11 * pingPongTimeMultiplier) - (float)((float)(pingPongLength + pingPongLength) * v17);
    v19 = v18 < 0.0;
    v12->fields.sigma = this->fields.sigma;
    v20 = 0.0;
    if ( !v19 )
      v20 = v16;
    v12->fields.intensity = (float)(pingPongLength - vabds_f32(v20, pingPongLength)) + this->fields.intensity;
    v12->fields.kernelSize = this->fields.quality;
    v12->fields.colorStrength = this->fields.colorStrength;
    v21 = this->fields.rt;
    NGUIGlowTextureGenerator__ComputeCreateGlowTexture(v12, v21, v15);
    NGUIGlowTextureGenerator__ComputeGaussianBloom(v12, v21, v22);
  }
}


void NGUIGlow__AutoInitialize(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *glowCompute; // x21
  Il2CppObject *object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_glowMaterial; // x19
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_Material_o *glowMaterial; // t1
  UnityEngine_Shader_o *v10; // x20
  UnityEngine_Material_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C46A50 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ComputeShader___);
    sub_1C37058(&StringLiteral_7328/*"Hidden/TwoPassGaussianBlur"*/);
    sub_1C37058(&StringLiteral_12838/*"Shaders/NGUIGlowCompute"*/);
    byte_4C46A50 = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(glowCompute, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_12838/*"Shaders/NGUIGlowCompute"*/,
               (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ComputeShader___);
    this->fields.glowCompute = (struct UnityEngine_ComputeShader_o *)object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.glowCompute, (int32_t)object, v5, v6);
  }
  glowMaterial = this->fields.glowMaterial;
  p_glowMaterial = (CGThumbnailListItem_o *)&this->fields.glowMaterial;
  v8 = (UnityEngine_Object_o *)glowMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    v10 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7328/*"Hidden/TwoPassGaussianBlur"*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
    {
      v11 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v11, v10, 0);
      p_glowMaterial->klass = (CGThumbnailListItem_c *)v11;
      sub_1C36FFC(p_glowMaterial, (int32_t)v11, v12, v13);
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v10, 0);
    }
  }
}


void NGUIGlow__CleanUp(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_RenderTexture_o **p_rt; // x20
  UnityEngine_Object_o *rt; // x21
  UnityEngine_RenderTexture_o *active; // x0
  UnityEngine_RenderTexture_o *v6; // x21
  UnityEngine_Object_o *v7; // x22
  UnityEngine_RenderTexture_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Material_o **p_glowMaterial; // x20
  UnityEngine_Object_o *glowMaterial; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o **p_glowCompute; // x19
  UnityEngine_Object_o *v17; // x20
  struct UnityEngine_ComputeShader_o *glowCompute; // t1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C46A51 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A51 = 1;
  }
  p_rt = &this->fields.rt;
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rt, 0, 0) )
  {
    active = UnityEngine_RenderTexture__get_active(0);
    v6 = *p_rt;
    v7 = (UnityEngine_Object_o *)active;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v7, (UnityEngine_Object_o *)v6, 0) )
      UnityEngine_RenderTexture__set_active(0, 0);
    if ( !*p_rt )
      sub_1C372B4(0);
    UnityEngine_RenderTexture__Release(*p_rt, 0);
    v8 = *p_rt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v8, 0);
    *p_rt = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rt, 0, v9, v10);
  }
  p_glowMaterial = &this->fields.glowMaterial;
  glowMaterial = (UnityEngine_Object_o *)this->fields.glowMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(glowMaterial, 0, 0) )
  {
    v13 = (UnityEngine_Object_o *)*p_glowMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v13, 0);
    *p_glowMaterial = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.glowMaterial, 0, v14, v15);
  }
  glowCompute = this->fields.glowCompute;
  p_glowCompute = (UnityEngine_Object_o **)&this->fields.glowCompute;
  v17 = (UnityEngine_Object_o *)glowCompute;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    UnityEngine_Resources__UnloadAsset(*p_glowCompute, 0);
    *p_glowCompute = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_glowCompute, 0, v19, v20);
  }
}


void NGUIGlow__OnValidate(NGUIGlow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C46A4D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    byte_4C46A4D = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
    NGUIGlow__UpdateTexture(this, v3);
}


// attributes: thunk
void NGUIGlow__Update(NGUIGlow_o *this, const MethodInfo *method)
{
  NGUIGlow__ApplyBloom(this, method);
}


void NGUIGlow__UpdateTexture(NGUIGlow_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  const MethodInfo *v4; // x1
  struct UITexture_o *v5; // x0
  const MethodInfo *v6; // x2
  struct UITexture_o *v7; // x8
  struct UnityEngine_RenderTexture_o *NewRenderTexture; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4C46A4E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A4E = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
  {
    NGUIGlow__CleanUp(this, v4);
    v7 = this->fields.texture;
    if ( !v7
      || (NewRenderTexture = NGUIGlowTextureGenerator__CreateNewRenderTexture(v7->fields.mWidth, v7->fields.mHeight, v6),
          this->fields.rt = NewRenderTexture,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rt, (int32_t)NewRenderTexture, v9, v10),
          NGUIGlow__ApplyBloom(this, v11),
          (v5 = this->fields.texture) == 0) )
    {
      sub_1C372B4(v5);
    }
    ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v5->klass->vtable._27_set_mainTexture.methodPtr)(
      v5,
      this->fields.rt,
      v5->klass->vtable._27_set_mainTexture.method);
  }
}