void __fastcall SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o *blackListParent; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_418B178 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9780/*"OPTION_BLACKLIST_EXPLANATION"*/, v3);
    byte_418B178 = 1;
  }
  blackListParent = this->fields.blackListParent;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9780/*"OPTION_BLACKLIST_EXPLANATION"*/, 0LL);
  if ( !blackListParent )
    sub_B2C434(v5, v6);
  UILabel__set_text((UILabel_o *)blackListParent, v5, 0LL);
}


void __fastcall SetBlacklistOptionControl__onClickOpenButton(
        SetBlacklistOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *blackListExpLabel; // x0

  if ( (byte_418B179 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3046/*"CLICK_BLACKLIST"*/, v3);
    byte_418B179 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  blackListExpLabel = (PlayMakerFSM_o *)this->fields.blackListExpLabel;
  if ( !blackListExpLabel )
    sub_B2C434(0LL, v4);
  PlayMakerFSM__SendEvent(blackListExpLabel, (System_String_o *)StringLiteral_3046/*"CLICK_BLACKLIST"*/, 0LL);
}