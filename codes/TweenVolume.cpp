void TweenVolume___ctor(TweenVolume_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.from = _D0;
  UITweener___ctor((UITweener_o *)this, method);
}


TweenVolume_o *TweenVolume__Begin(
        UnityEngine_GameObject_o *go,
        float duration,
        float targetVolume,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1
  TweenVolume_o *v9; // x19
  float value; // s0
  TweenVolume_o *result; // x0

  if ( (byte_593CF29 & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenVolume___);
    byte_593CF29 = 1;
  }
  v7 = UITweener__Begin_object_(go, duration, (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenVolume___);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v9 = (TweenVolume_o *)v7;
  value = TweenVolume__get_value((TweenVolume_o *)v7, v8);
  result = v9;
  v9->fields.from = value;
  v9->fields.to = targetVolume;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void TweenVolume__OnUpdate(TweenVolume_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_AudioSource_o *mSource; // x19
  float volume; // s0

  TweenVolume__set_value(
    this,
    (float)((float)(1.0 - factor) * this->fields.from) + (float)(this->fields.to * factor),
    (const MethodInfo *)isFinished);
  mSource = this->fields.mSource;
  if ( !mSource )
    sub_21FFECC(v5, v6);
  volume = UnityEngine_AudioSource__get_volume(mSource, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mSource, volume > 0.01, 0);
}


void TweenVolume__SetEndToCurrentValue(TweenVolume_o *this, const MethodInfo *method)
{
  this->fields.to = TweenVolume__get_value(this, method);
}


void TweenVolume__SetStartToCurrentValue(TweenVolume_o *this, const MethodInfo *method)
{
  this->fields.from = TweenVolume__get_value(this, method);
}


UnityEngine_AudioSource_o *TweenVolume__get_audioSource(TweenVolume_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSource; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x1

  if ( (byte_593CF26 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_AudioSource___);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_15198/*"TweenVolume needs an AudioSource to work with"*/);
    byte_593CF26 = 1;
  }
  mSource = (UnityEngine_Object_o *)this->fields.mSource;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mSource, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_AudioSource___);
    this->fields.mSource = (struct UnityEngine_AudioSource_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSource,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v12 = (UnityEngine_Object_o *)this->fields.mSource;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
    {
      v13 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_AudioSource___);
      this->fields.mSource = (struct UnityEngine_AudioSource_o *)v13;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mSource, (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v21 = (UnityEngine_Object_o *)this->fields.mSource;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Equality(v21, 0, 0) )
      {
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v22);
        UnityEngine_Debug__LogError_82995424((Il2CppObject *)StringLiteral_15198/*"TweenVolume needs an AudioSource to work with"*/, (UnityEngine_Object_o *)this, 0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      }
    }
  }
  return this->fields.mSource;
}


float TweenVolume__get_value(TweenVolume_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *audioSource; // x20
  __int64 v5; // x1
  UnityEngine_AudioSource_o *mSource; // x0

  if ( (byte_593CF27 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF27 = 1;
  }
  audioSource = (UnityEngine_Object_o *)TweenVolume__get_audioSource(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(audioSource, 0, 0) )
    return 0.0;
  mSource = this->fields.mSource;
  if ( !mSource )
    sub_21FFECC(0, v5);
  return UnityEngine_AudioSource__get_volume(mSource, 0);
}


// attributes: thunk
float TweenVolume__get_volume(TweenVolume_o *this, const MethodInfo *method)
{
  return TweenVolume__get_value(this, method);
}


void TweenVolume__set_value(TweenVolume_o *this, float value, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *audioSource; // x20
  __int64 v7; // x1
  UnityEngine_AudioSource_o *mSource; // x0

  if ( (byte_593CF28 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF28 = 1;
  }
  audioSource = (UnityEngine_Object_o *)TweenVolume__get_audioSource(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(audioSource, 0, 0) )
  {
    mSource = this->fields.mSource;
    if ( !mSource )
      sub_21FFECC(0, v7);
    UnityEngine_AudioSource__set_volume(mSource, value, 0);
  }
}


// attributes: thunk
void TweenVolume__set_volume(TweenVolume_o *this, float value, const MethodInfo *method)
{
  TweenVolume__set_value(this, value, method);
}