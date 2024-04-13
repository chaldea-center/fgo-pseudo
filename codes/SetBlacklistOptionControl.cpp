void __fastcall SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_GameObject_o *blackListParent; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_42EBA07 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9880/*"OPTION_BLACKLIST_EXPLANATION"*/, v5, v6, v7);
    byte_42EBA07 = 1;
  }
  blackListParent = this->fields.blackListParent;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9880/*"OPTION_BLACKLIST_EXPLANATION"*/, 0LL);
  if ( !blackListParent )
    sub_B5D69C(v9, v10);
  UILabel__set_text((UILabel_o *)blackListParent, v9, 0LL);
}


void __fastcall SetBlacklistOptionControl__onClickOpenButton(
        SetBlacklistOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  PlayMakerFSM_o *blackListExpLabel; // x0

  if ( (byte_42EBA08 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3105/*"CLICK_BLACKLIST"*/, v5, v6, v7);
    byte_42EBA08 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  blackListExpLabel = (PlayMakerFSM_o *)this->fields.blackListExpLabel;
  if ( !blackListExpLabel )
    sub_B5D69C(0LL, v8);
  PlayMakerFSM__SendEvent(blackListExpLabel, (System_String_o *)StringLiteral_3105/*"CLICK_BLACKLIST"*/, 0LL);
}