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

  if ( (byte_4CEFDFA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UITweener_Begin_TweenRenderVolume___);
    byte_4CEFDFA = 1;
  }
  v7 = (TweenRenderVolume_o *)UITweener__Begin_object_(
                                go,
                                duration,
                                (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenRenderVolume___);
  if ( !v7 )
    sub_1C7BD40(0, v8);
  v9 = v7;
  v7->fields.from = TweenRenderVolume__get_value(v7, v8);
  v9->fields.to = targetVolume;
  return v9;
}


void TweenRenderVolume__Cache(TweenRenderVolume_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEFDF7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UITweenRenderer___);
    byte_4CEFDF7 = 1;
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

  if ( (byte_4CEFDF8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDF8 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
    return 0.0;
  v5 = this->fields.mTweenRenderer;
  if ( !v5 )
    sub_1C7BD40(0, v4);
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


// local variable allocation has failed, the output may be wrong!
void TweenRenderVolume__set_value(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *mTweenRenderer; // x20
  __int64 v6; // x1
  struct UITweenRenderer_o *v7; // x0

  v3 = *(long double *)&value;
  if ( (byte_4CEFDF9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFDF9 = 1;
  }
  if ( !this->fields.mCached )
    TweenRenderVolume__Cache(this, method);
  mTweenRenderer = (UnityEngine_Object_o *)this->fields.mTweenRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTweenRenderer, 0, 0) )
  {
    v7 = this->fields.mTweenRenderer;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    ((void (__fastcall *)(struct UITweenRenderer_o *, const MethodInfo *, long double))v7->klass->vtable._41_SetTweenVolume.methodPtr)(
      v7,
      v7->klass->vtable._41_SetTweenVolume.method,
      v3);
  }
}


// attributes: thunk
void TweenRenderVolume__set_volume(TweenRenderVolume_o *this, float value, const MethodInfo *method)
{
  TweenRenderVolume__set_value(this, value, method);
}