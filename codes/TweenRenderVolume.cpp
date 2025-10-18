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
  TweenRenderVolume_o *v7; // x0
  const MethodInfo *v8; // x1
  TweenRenderVolume_o *v9; // x19

  if ( (byte_4C44786 & 1) == 0 )
  {
    sub_1C37058(&Method_UITweener_Begin_TweenRenderVolume___);
    byte_4C44786 = 1;
  }
  v7 = (TweenRenderVolume_o *)UITweener__Begin_object_(
                                go,
                                duration,
                                (const MethodInfo_31A3570 *)Method_UITweener_Begin_TweenRenderVolume___);
  if ( !v7 )
    sub_1C372B4(0);
  v9 = v7;
  v7->fields.from = TweenRenderVolume__get_value(v7, v8);
  v9->fields.to = targetVolume;
  return v9;
}


void TweenRenderVolume__Cache(TweenRenderVolume_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C44783 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
    byte_4C44783 = 1;
  }
  this->fields.mCached = 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
  this->fields.mTweenRenderer = (struct UITweenRenderer_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTweenRenderer, (int32_t)Component_object, v4, v5);
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
  struct UITweenRenderer_o *v4; // x0
  float result; // s0

  if ( (byte_4C44784 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44784 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
    return 0.0;
  v4 = this->fields.mTweenRenderer;
  if ( !v4 )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *))v4->klass->vtable._42_GetTweenVolume.methodPtr)(
    v4,
    v4->klass->vtable._42_GetTweenVolume.method);
  return result;
}


// attributes: thunk
float TweenRenderVolume__get_volume(TweenRenderVolume_o *this, const MethodInfo *method)
{
  return TweenRenderVolume__get_value(this, method);
}


// local variable allocation has failed, the output may be wrong!
void TweenRenderVolume__set_value(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *mTweenRenderer; // x20
  struct UITweenRenderer_o *v6; // x0

  v3 = *(long double *)&value;
  if ( (byte_4C44785 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44785 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v6 = this->fields.mTweenRenderer;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *, long double))v6->klass->vtable._41_SetTweenVolume.methodPtr)(
      v6,
      v6->klass->vtable._41_SetTweenVolume.method,
      v3);
  }
}


// attributes: thunk
void TweenRenderVolume__set_volume(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  TweenRenderVolume__set_value(this, value, method);
}