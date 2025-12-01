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
  TweenVolume_o *v7; // x0
  const MethodInfo *v8; // x1
  TweenVolume_o *v9; // x19

  if ( (byte_4CCBCFA & 1) == 0 )
  {
    sub_1C713B0(&Method_UITweener_Begin_TweenVolume___);
    byte_4CCBCFA = 1;
  }
  v7 = (TweenVolume_o *)UITweener__Begin_object_(
                          go,
                          duration,
                          (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenVolume___);
  if ( !v7 )
    sub_1C71608(0, v8);
  v9 = v7;
  v7->fields.from = TweenVolume__get_value(v7, v8);
  v9->fields.to = targetVolume;
  return v9;
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
    sub_1C71608(v5, v6);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *v19; // x21

  if ( (byte_4CCBCF7 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_AudioSource___);
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_14631/*"TweenVolume needs an AudioSource to work with"*/);
    byte_4CCBCF7 = 1;
  }
  mSource = (UnityEngine_Object_o *)this->fields.mSource;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mSource, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_AudioSource___);
    this->fields.mSource = (struct UnityEngine_AudioSource_o *)Component_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mSource,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (UnityEngine_Object_o *)this->fields.mSource;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      v12 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_AudioSource___);
      this->fields.mSource = (struct UnityEngine_AudioSource_o *)v12;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSource, (int32_t)v12, v13, v14, v15, v16, v17, v18);
      v19 = (UnityEngine_Object_o *)this->fields.mSource;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v19, 0, 0) )
      {
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError_71536300((Il2CppObject *)StringLiteral_14631/*"TweenVolume needs an AudioSource to work with"*/, (UnityEngine_Object_o *)this, 0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      }
    }
  }
  return this->fields.mSource;
}


float TweenVolume__get_value(TweenVolume_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *audioSource; // x20
  __int64 v4; // x1
  UnityEngine_AudioSource_o *mSource; // x0

  if ( (byte_4CCBCF8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBCF8 = 1;
  }
  audioSource = (UnityEngine_Object_o *)TweenVolume__get_audioSource(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(audioSource, 0, 0) )
    return 0.0;
  mSource = this->fields.mSource;
  if ( !mSource )
    sub_1C71608(0, v4);
  return UnityEngine_AudioSource__get_volume(mSource, 0);
}


// attributes: thunk
float TweenVolume__get_volume(TweenVolume_o *this, const MethodInfo *method)
{
  return TweenVolume__get_value(this, method);
}


void TweenVolume__set_value(TweenVolume_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *audioSource; // x20
  __int64 v6; // x1
  UnityEngine_AudioSource_o *mSource; // x0

  if ( (byte_4CCBCF9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBCF9 = 1;
  }
  audioSource = (UnityEngine_Object_o *)TweenVolume__get_audioSource(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(audioSource, 0, 0) )
  {
    mSource = this->fields.mSource;
    if ( !mSource )
      sub_1C71608(0, v6);
    UnityEngine_AudioSource__set_volume(mSource, value, 0);
  }
}


// attributes: thunk
void TweenVolume__set_volume(TweenVolume_o *this, float value, const MethodInfo *method)
{
  TweenVolume__set_value(this, value, method);
}