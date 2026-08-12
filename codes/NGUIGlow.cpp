void NGUIGlow___ctor(NGUIGlow_o *this, const MethodInfo *method)
{
  this->fields.downSample = 2;
  *(_QWORD *)&this->fields.sigma = 0x3F80000041200000LL;
  this->fields.quality = 35;
  *(_OWORD *)&this->fields.pingPongTimeMultiplier = xmmword_E9BCD0;
  this->fields.colorStrength = 1.0;
  *(_QWORD *)&this->fields.glowColor.fields.b = 0x3F80000000000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NGUIGlow__ApplyBloom(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *rt; // x20
  const MethodInfo *v5; // x1
  float time; // s0
  float pingPongLength; // s9
  float pingPongTimeMultiplier; // s10
  float v9; // s8
  UnityEngine_ComputeShader_o *glowCompute; // x22
  UnityEngine_Material_o *glowMaterial; // x23
  UISprite_o *maskSprite; // x21
  __int64 v13; // x20
  const MethodInfo *v14; // x4
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  float v18; // s1
  float v19; // s0
  float v20; // s0
  float sigma; // s1
  float intensity; // s2
  float v23; // s0
  float colorStrength; // s2
  UnityEngine_RenderTexture_o *v25; // x19
  const MethodInfo *v26; // x2

  if ( (byte_596A137 & 1) == 0 )
  {
    sub_2213A60(&NGUIGlowTextureGenerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A137 = 1;
  }
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(rt, 0, 0) )
  {
    NGUIGlow__AutoInitialize(this, v5);
    time = UnityEngine_Time__get_time(0);
    pingPongTimeMultiplier = this->fields.pingPongTimeMultiplier;
    pingPongLength = this->fields.pingPongLength;
    v9 = time;
    glowCompute = this->fields.glowCompute;
    glowMaterial = this->fields.glowMaterial;
    maskSprite = this->fields.maskSprite;
    v13 = sub_2213CCC(NGUIGlowTextureGenerator_TypeInfo);
    NGUIGlowTextureGenerator___ctor((NGUIGlowTextureGenerator_o *)v13, maskSprite, glowCompute, glowMaterial, v14);
    if ( !v13 )
      sub_2213CDC(v15, v16);
    v18 = pingPongLength + pingPongLength;
    *(_DWORD *)(v13 + 64) = this->fields.downSample;
    v19 = (float)(v9 * pingPongTimeMultiplier)
        - (float)((float)(pingPongLength + pingPongLength)
                * floorf((float)(v9 * pingPongTimeMultiplier) / (float)(pingPongLength + pingPongLength)));
    if ( v19 <= (float)(pingPongLength + pingPongLength) )
      v18 = v19;
    if ( v19 >= 0.0 )
      v20 = v18;
    else
      v20 = 0.0;
    *(struct UnityEngine_Color_o *)(v13 + 84) = this->fields.glowColor;
    sigma = this->fields.sigma;
    intensity = this->fields.intensity;
    *(_DWORD *)(v13 + 76) = this->fields.quality;
    *(float *)(v13 + 68) = sigma;
    v23 = (float)(pingPongLength - vabds_f32(v20, pingPongLength)) + intensity;
    colorStrength = this->fields.colorStrength;
    v25 = this->fields.rt;
    *(float *)(v13 + 80) = colorStrength;
    *(float *)(v13 + 72) = v23;
    NGUIGlowTextureGenerator__ComputeCreateGlowTexture((NGUIGlowTextureGenerator_o *)v13, v25, v17);
    NGUIGlowTextureGenerator__ComputeGaussianBloom((NGUIGlowTextureGenerator_o *)v13, v25, v26);
  }
}


void NGUIGlow__AutoInitialize(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *glowCompute; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MissionNaviTransitionBoardItem_o *p_glowMaterial; // x19
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_Material_o *glowMaterial; // t1
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Shader_o *v19; // x20
  UnityEngine_Material_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596A138 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_ComputeShader___);
    sub_2213A60(&StringLiteral_7641/*"Hidden/TwoPassGaussianBlur"*/);
    sub_2213A60(&StringLiteral_13380/*"Shaders/NGUIGlowCompute"*/);
    byte_596A138 = 1;
  }
  glowCompute = (UnityEngine_Object_o *)this->fields.glowCompute;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(glowCompute, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_13380/*"Shaders/NGUIGlowCompute"*/,
               (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_ComputeShader___);
    this->fields.glowCompute = (struct UnityEngine_ComputeShader_o *)object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.glowCompute,
      (int32_t)object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  glowMaterial = this->fields.glowMaterial;
  p_glowMaterial = (MissionNaviTransitionBoardItem_o *)&this->fields.glowMaterial;
  v15 = (UnityEngine_Object_o *)glowMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
  {
    v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7641/*"Hidden/TwoPassGaussianBlur"*/, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      v20 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v20, v19, 0);
      p_glowMaterial->klass = (MissionNaviTransitionBoardItem_c *)v20;
      sub_2213A04(p_glowMaterial, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v19, 0);
    }
  }
}


void NGUIGlow__CleanUp(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_RenderTexture_o **p_rt; // x20
  UnityEngine_Object_o *rt; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_RenderTexture_o *active; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_RenderTexture_o *v11; // x21
  UnityEngine_Object_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_RenderTexture_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UnityEngine_Material_o **p_glowMaterial; // x20
  UnityEngine_Object_o *glowMaterial; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Object_o **p_glowCompute; // x19
  UnityEngine_Object_o *v35; // x20
  struct UnityEngine_ComputeShader_o *glowCompute; // t1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_596A139 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A139 = 1;
  }
  p_rt = &this->fields.rt;
  rt = (UnityEngine_Object_o *)this->fields.rt;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(rt, 0, 0) )
  {
    active = UnityEngine_RenderTexture__get_active(0);
    v11 = *p_rt;
    v12 = (UnityEngine_Object_o *)active;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Equality(v12, (UnityEngine_Object_o *)v11, 0) )
      UnityEngine_RenderTexture__set_active(0, 0);
    if ( !*p_rt )
      sub_2213CDC(0, v13);
    UnityEngine_RenderTexture__Release(*p_rt, 0);
    v16 = *p_rt;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v16, 0);
    *p_rt = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rt, 0, v17, v18, v19, v20, v21, v22);
  }
  p_glowMaterial = &this->fields.glowMaterial;
  glowMaterial = (UnityEngine_Object_o *)this->fields.glowMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(glowMaterial, 0, 0) )
  {
    v27 = (UnityEngine_Object_o *)*p_glowMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
    UnityEngine_Object__Destroy_83459800(v27, 0);
    *p_glowMaterial = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.glowMaterial, 0, v28, v29, v30, v31, v32, v33);
  }
  glowCompute = this->fields.glowCompute;
  p_glowCompute = (UnityEngine_Object_o **)&this->fields.glowCompute;
  v35 = (UnityEngine_Object_o *)glowCompute;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
  {
    UnityEngine_Resources__UnloadAsset(*p_glowCompute, 0);
    *p_glowCompute = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_glowCompute, 0, v37, v38, v39, v40, v41, v42);
  }
}


void NGUIGlow__OnValidate(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_596A135 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_596A135 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  if ( UnityEngine_Application__get_isPlaying(0) )
    NGUIGlow__UpdateTexture(this, v4);
}


// attributes: thunk
void NGUIGlow__Update(NGUIGlow_o *this, const MethodInfo *method)
{
  NGUIGlow__ApplyBloom(this, method);
}


void NGUIGlow__UpdateTexture(NGUIGlow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *texture; // x20
  const MethodInfo *v5; // x1
  struct UITexture_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UITexture_o *v9; // x8
  struct UnityEngine_RenderTexture_o *NewRenderTexture; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  if ( (byte_596A136 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A136 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(texture, 0, 0) )
  {
    NGUIGlow__CleanUp(this, v5);
    v9 = this->fields.texture;
    if ( !v9
      || (NewRenderTexture = NGUIGlowTextureGenerator__CreateNewRenderTexture(v9->fields.mWidth, v9->fields.mHeight, v8),
          this->fields.rt = NewRenderTexture,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.rt,
            (int32_t)NewRenderTexture,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          NGUIGlow__ApplyBloom(this, v17),
          (v6 = this->fields.texture) == 0) )
    {
      sub_2213CDC(v6, v7);
    }
    ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_RenderTexture_o *, const MethodInfo *))v6->klass->vtable._27_set_mainTexture.methodPtr)(
      v6,
      this->fields.rt,
      v6->klass->vtable._27_set_mainTexture.method);
  }
}