void __fastcall SoundPlayerOpenEffectComponent___ctor(SoundPlayerOpenEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7F3F & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectComponent_TypeInfo);
    byte_4BD7F3F = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall SoundPlayerOpenEffectComponent__animEndFunc(
        SoundPlayerOpenEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0LL);
}


void __fastcall SoundPlayerOpenEffectComponent__changeUIFunc(
        SoundPlayerOpenEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *changeUiCallback; // x0

  changeUiCallback = this->fields.changeUiCallback;
  if ( changeUiCallback )
    ActionExtensions__Call(changeUiCallback, 0LL);
}


void __fastcall SoundPlayerOpenEffectComponent__playIconAnimFunc(
        SoundPlayerOpenEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *playIconAnimCallback; // x0

  playIconAnimCallback = this->fields.playIconAnimCallback;
  if ( playIconAnimCallback )
    ActionExtensions__Call(playIconAnimCallback, 0LL);
}


void __fastcall SoundPlayerOpenEffectComponent__setAnimEndCallback(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.animEndCallback = callback;
  sub_1C21DDC(&this->fields.animEndCallback, callback);
}


void __fastcall SoundPlayerOpenEffectComponent__setChangeUiCallback(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.changeUiCallback = callback;
  sub_1C21DDC(&this->fields.changeUiCallback, callback);
}


void __fastcall SoundPlayerOpenEffectComponent__setPlayIconAnimCallBack(
        SoundPlayerOpenEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.playIconAnimCallback = callback;
  sub_1C21DDC(&this->fields.playIconAnimCallback, callback);
}