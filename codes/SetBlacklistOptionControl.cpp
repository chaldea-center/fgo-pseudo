void __fastcall SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *blackListParent; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_438DA03 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9955/*"OPTION_BLACKLIST_EXPLANATION"*/);
    byte_438DA03 = 1;
  }
  blackListParent = this->fields.blackListParent;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9955/*"OPTION_BLACKLIST_EXPLANATION"*/, 0LL);
  if ( !blackListParent )
    sub_B7769C(v4, v5);
  UILabel__set_text((UILabel_o *)blackListParent, v4, 0LL);
}


void __fastcall SetBlacklistOptionControl__onClickOpenButton(
        SetBlacklistOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *blackListExpLabel; // x0

  if ( (byte_438DA04 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_3164/*"CLICK_BLACKLIST"*/);
    byte_438DA04 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  blackListExpLabel = (PlayMakerFSM_o *)this->fields.blackListExpLabel;
  if ( !blackListExpLabel )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(blackListExpLabel, (System_String_o *)StringLiteral_3164/*"CLICK_BLACKLIST"*/, 0LL);
}