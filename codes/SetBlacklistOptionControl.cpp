void __fastcall SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *blackListExpLabel; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4AFD125 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_9577/*"OPTION_BLACKLIST_EXPLANATION"*/, v3);
    byte_4AFD125 = 1;
  }
  blackListExpLabel = this->fields.blackListExpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9577/*"OPTION_BLACKLIST_EXPLANATION"*/, 0LL);
  if ( !blackListExpLabel )
    sub_1BC3264(v5, v6);
  UILabel__set_text(blackListExpLabel, v5, 0LL);
}


void __fastcall SetBlacklistOptionControl__onClickOpenButton(
        SetBlacklistOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4AFD126 & 1) == 0 )
  {
    sub_1BC3008(&Method_SetBlacklistOptionControl_onClickOpenButton__, method);
    sub_1BC3008(&StringLiteral_3405/*"CLICK_BLACKLIST"*/, v3);
    byte_4AFD126 = 1;
  }
  v4 = Method_SetBlacklistOptionControl_onClickOpenButton__;
  if ( (*((_BYTE *)Method_SetBlacklistOptionControl_onClickOpenButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_SetBlacklistOptionControl_onClickOpenButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BC3264(0LL, v6);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3405/*"CLICK_BLACKLIST"*/, 0LL);
}