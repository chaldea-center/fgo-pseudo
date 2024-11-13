void __fastcall SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *blackListExpLabel; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B1161A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9790/*"OPTION_BLACKLIST_EXPLANATION"*/, v4, v5);
    byte_4B1161A = 1;
  }
  blackListExpLabel = this->fields.blackListExpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9790/*"OPTION_BLACKLIST_EXPLANATION"*/, 0LL);
  if ( !blackListExpLabel )
    sub_1BCAA3C(v7, v8);
  UILabel__set_text(blackListExpLabel, v7, 0LL);
}


void __fastcall SetBlacklistOptionControl__onClickOpenButton(
        SetBlacklistOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B1161B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetBlacklistOptionControl_onClickOpenButton__, method, v2);
    sub_1BCA7E0(&StringLiteral_3557/*"CLICK_BLACKLIST"*/, v4, v5);
    byte_4B1161B = 1;
  }
  v6 = Method_SetBlacklistOptionControl_onClickOpenButton__;
  if ( (*((_BYTE *)Method_SetBlacklistOptionControl_onClickOpenButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SetBlacklistOptionControl_onClickOpenButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, v8);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3557/*"CLICK_BLACKLIST"*/, 0LL);
}