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
  float g; // s10
  float r; // s11
  TweenRendererColor_o *v10; // x0
  const MethodInfo *v11; // x1
  TweenRendererColor_o *v12; // x19

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_5972095 & 1) == 0 )
  {
    sub_2213A60(&Method_UITweener_Begin_TweenRendererColor___);
    byte_5972095 = 1;
  }
  v10 = (TweenRendererColor_o *)UITweener__Begin_object_(
                                  go,
                                  duration,
                                  (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenRendererColor___);
  if ( !v10 )
    sub_2213CDC(0, v11);
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
  const MethodInfo_3820CA8 *v3; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5972092 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
    byte_5972092 = 1;
  }
  v3 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITweenRenderer___;
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  this->fields.mTweenRenderer = (struct UITweenRenderer_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTweenRenderer,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void TweenRendererColor__OnUpdate(TweenRendererColor_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v4; // s1

  v4 = 1.0;
  if ( factor <= 1.0 )
    v4 = factor;
  if ( factor < 0.0 )
    v4 = 0.0;
  TweenRendererColor__set_value(
    this,
    (UnityEngine_Color_o)vaddq_f32(
                           (float32x4_t)this->fields.from,
                           vmulq_n_f32(vsubq_f32((float32x4_t)this->fields.to, (float32x4_t)this->fields.from), v4)),
    (const MethodInfo *)isFinished);
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
  UnityEngine_Color_o v10; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972093 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972093 = 1;
  }
  if ( !this->fields.mCached )
    TweenRendererColor__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v5 = this->fields.mTweenRenderer;
    if ( !v5 )
      sub_2213CDC(0, v4);
    v10 = ((UnityEngine_Color_o (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *))v5->klass->vtable._40_GetTweenColor.methodPtr)(
            v5,
            v5->klass->vtable._40_GetTweenColor.method);
    result.fields.r = v10.fields.r;
    result.fields.g = v10.fields.g;
    result.fields.b = v10.fields.b;
    result.fields.a = v10.fields.a;
  }
  else
  {
    result.fields.r = 0.0;
    result.fields.g = 0.0;
    result.fields.b = 0.0;
    result.fields.a = 1.0;
  }
  return result;
}


// attributes: thunk
void TweenRendererColor__set_color(TweenRendererColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  TweenRendererColor__set_value(this, value, method);
}


void TweenRendererColor__set_value(TweenRendererColor_o *this, UnityEngine_Color_o value, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v9; // x1
  struct UITweenRenderer_o *v10; // x0

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_5972094 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972094 = 1;
  }
  if ( !this->fields.mCached )
    TweenRendererColor__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v10 = this->fields.mTweenRenderer;
    if ( !v10 )
      sub_2213CDC(0, v9);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *, float, float, float, float))v10->klass->vtable._39_SetTweenColor.methodPtr)(
      v10,
      v10->klass->vtable._39_SetTweenColor.method,
      r,
      g,
      b,
      a);
  }
}