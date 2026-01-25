void TweenRendererColor___ctor(TweenRendererColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.from = _Q0;
  this->fields.to = _Q0;
  UITweener___ctor((UITweener_o *)this, 0);
}


TweenRendererColor_o *TweenRendererColor__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s12
  TweenRendererColor_o *v10; // x0
  const MethodInfo *v11; // x1
  TweenRendererColor_o *v12; // x19

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4CEFDF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UITweener_Begin_TweenRendererColor___);
    byte_4CEFDF6 = 1;
  }
  v10 = (TweenRendererColor_o *)UITweener__Begin_object_(
                                  go,
                                  duration,
                                  (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenRendererColor___);
  if ( !v10 )
    sub_1C7BD40(0, v11);
  v12 = v10;
  v10->fields.from = TweenRendererColor__get_value(v10, v11);
  v12->fields.to.fields.r = r;
  v12->fields.to.fields.g = g;
  v12->fields.to.fields.b = b;
  v12->fields.to.fields.a = a;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v12, 1.0, 1, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 0, 0);
  }
  return v12;
}


void TweenRendererColor__Cache(TweenRendererColor_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEFDF3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
    byte_4CEFDF3 = 1;
  }
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
  this->fields.mTweenRenderer = (struct UITweenRenderer_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mTweenRenderer,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void TweenRendererColor__OnUpdate(TweenRendererColor_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  bool v4; // nf
  float v5; // s0
  UnityEngine_Color_o v6; // q0 OVERLAPPED
  float g; // s1
  __int64 v8; // kr00_8

  v4 = factor < 0.0;
  v5 = fminf(factor, 1.0);
  if ( v4 )
    v5 = 0.0;
  v6 = (UnityEngine_Color_o)vaddq_f32(
                              (float32x4_t)this->fields.from,
                              vmulq_n_f32(vsubq_f32((float32x4_t)this->fields.to, (float32x4_t)this->fields.from), v5));
  g = v6.fields.g;
  v8 = *(_QWORD *)&v6.fields.b;
  TweenRendererColor__set_value(this, v6, (const MethodInfo *)isFinished);
}


void TweenRendererColor__SetCurrentValueToEnd(TweenRendererColor_o *this, const MethodInfo *method)
{
  TweenRendererColor__set_value(this, this->fields.to, method);
}


void TweenRendererColor__SetCurrentValueToStart(TweenRendererColor_o *this, const MethodInfo *method)
{
  TweenRendererColor__set_value(this, this->fields.from, method);
}


void TweenRendererColor__SetEndToCurrentValue(TweenRendererColor_o *this, const MethodInfo *method)
{
  this->fields.to = TweenRendererColor__get_value(this, method);
}


void TweenRendererColor__SetStartToCurrentValue(TweenRendererColor_o *this, const MethodInfo *method)
{
  this->fields.from = TweenRendererColor__get_value(this, method);
}


// attributes: thunk
UnityEngine_Color_o TweenRendererColor__get_color(TweenRendererColor_o *this, const MethodInfo *method)
{
  return TweenRendererColor__get_value(this, method);
}


UnityEngine_Color_o TweenRendererColor__get_value(TweenRendererColor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v4; // x1
  struct UITweenRenderer_o *v5; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEFDF4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDF4 = 1;
  }
  if ( !this->fields.mCached )
    TweenRendererColor__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v5 = this->fields.mTweenRenderer;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *))v5->klass->vtable._40_GetTweenColor.methodPtr)(
      v5,
      v5->klass->vtable._40_GetTweenColor.method);
  }
  else
  {
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 1.0;
  }
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


// attributes: thunk
void TweenRendererColor__set_color(TweenRendererColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  TweenRendererColor__set_value(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void TweenRendererColor__set_value(TweenRendererColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v9; // x1
  struct UITweenRenderer_o *v10; // x0

  v3 = *(long double *)&value.fields.a;
  v4 = *(long double *)&value.fields.b;
  v5 = *(long double *)&value.fields.g;
  if ( (byte_4CEFDF5 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDF5 = 1;
  }
  if ( !this->fields.mCached )
    TweenRendererColor__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v10 = this->fields.mTweenRenderer;
    if ( !v10 )
      sub_1C7BD40(0, v9);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *, long double, long double, long double, long double))v10->klass->vtable._39_SetTweenColor.methodPtr)(
      v10,
      v10->klass->vtable._39_SetTweenColor.method,
      *(long double *)&value,
      v5,
      v4,
      v3);
  }
}