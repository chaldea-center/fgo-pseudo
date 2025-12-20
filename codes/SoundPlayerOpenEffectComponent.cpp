void SoundPlayerOpenEffectComponent___ctor(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D27E56 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    byte_4D27E56 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.animEndCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animEndCallback,
    (int32_t)callback,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.changeUiCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.changeUiCallback,
    (int32_t)callback,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.playIconAnimCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.playIconAnimCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}