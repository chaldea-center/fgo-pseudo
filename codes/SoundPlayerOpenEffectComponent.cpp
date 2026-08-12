void SoundPlayerOpenEffectComponent___ctor(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BD39 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_596BD39 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method, v2);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void SoundPlayerOpenEffectComponent__animEndFunc(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0);
}


void SoundPlayerOpenEffectComponent__changeUIFunc(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *changeUiCallback; // x0

  changeUiCallback = this->fields.changeUiCallback;
  if ( changeUiCallback )
    ActionExtensions__Call(changeUiCallback, 0);
}


void SoundPlayerOpenEffectComponent__playIconAnimFunc(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *playIconAnimCallback; // x0

  playIconAnimCallback = this->fields.playIconAnimCallback;
  if ( playIconAnimCallback )
    ActionExtensions__Call(playIconAnimCallback, 0);
}


void SoundPlayerOpenEffectComponent__setAnimEndCallback(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.animEndCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SoundPlayerOpenEffectComponent__setChangeUiCallback(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.changeUiCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeUiCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SoundPlayerOpenEffectComponent__setPlayIconAnimCallBack(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.playIconAnimCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playIconAnimCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}