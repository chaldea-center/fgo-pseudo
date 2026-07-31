void TweenRenderVolume___ctor(TweenRenderVolume_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.from = _D0;
  UITweener___ctor((UITweener_o *)this, 0);
}


TweenRenderVolume_o *TweenRenderVolume__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        float targetVolume,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1
  TweenRenderVolume_o *v9; // x19
  float value; // s0
  TweenRenderVolume_o *result; // x0

  if ( (byte_5939EC6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenRenderVolume___);
    byte_5939EC6 = 1;
  }
  v7 = UITweener__Begin_object_(go, duration, (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenRenderVolume___);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v9 = (TweenRenderVolume_o *)v7;
  value = TweenRenderVolume__get_value((TweenRenderVolume_o *)v7, v8);
  result = v9;
  v9->fields.from = value;
  v9->fields.to = targetVolume;
  return result;
}


void TweenRenderVolume__Cache(TweenRenderVolume_o *this, const MethodInfo *method)
{
  const MethodInfo_37ED7E0 *v3; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5939EC3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
    byte_5939EC3 = 1;
  }
  v3 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITweenRenderer___;
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v3);
  this->fields.mTweenRenderer = (struct UITweenRenderer_o *)Component_object;
  sub_21FFBF4(
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
void TweenRenderVolume__OnUpdate(TweenRenderVolume_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  TweenRenderVolume__set_value(
    this,
    (float)((float)(1.0 - factor) * this->fields.from) + (float)(this->fields.to * factor),
    (const MethodInfo *)isFinished);
}


void TweenRenderVolume__SetEndToCurrentValue(TweenRenderVolume_o *this, const MethodInfo *method)
{
  this->fields.to = TweenRenderVolume__get_value(this, method);
}


void TweenRenderVolume__SetStartToCurrentValue(TweenRenderVolume_o *this, const MethodInfo *method)
{
  this->fields.from = TweenRenderVolume__get_value(this, method);
}


float TweenRenderVolume__get_value(TweenRenderVolume_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v4; // x1
  struct UITweenRenderer_o *v5; // x0
  float result; // s0

  if ( (byte_5939EC4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939EC4 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
    return 0.0;
  v5 = this->fields.mTweenRenderer;
  if ( !v5 )
    sub_21FFECC(0, v4);
  ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *))v5->klass->vtable._42_GetTweenVolume.methodPtr)(
    v5,
    v5->klass->vtable._42_GetTweenVolume.method);
  return result;
}


// attributes: thunk
float TweenRenderVolume__get_volume(TweenRenderVolume_o *this, const MethodInfo *method)
{
  return TweenRenderVolume__get_value(this, method);
}


void TweenRenderVolume__set_value(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v6; // x1
  struct UITweenRenderer_o *v7; // x0

  if ( (byte_5939EC5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939EC5 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v7 = this->fields.mTweenRenderer;
    if ( !v7 )
      sub_21FFECC(0, v6);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *, float))v7->klass->vtable._41_SetTweenVolume.methodPtr)(
      v7,
      v7->klass->vtable._41_SetTweenVolume.method,
      value);
  }
}


// attributes: thunk
void TweenRenderVolume__set_volume(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  TweenRenderVolume__set_value(this, value, method);
}