void SetBlacklistOptionControl___ctor(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetBlacklistOptionControl__Init(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *blackListExpLabel; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4DFF95C & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_9739/*"OPTION_BLACKLIST_EXPLANATION"*/);
    byte_4DFF95C = 1;
  }
  blackListExpLabel = this->fields.blackListExpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9739/*"OPTION_BLACKLIST_EXPLANATION"*/, 0);
  if ( !blackListExpLabel )
    sub_1CE6958(v4, v5);
  UILabel__set_text(blackListExpLabel, v4, 0);
}


void SetBlacklistOptionControl__onClickOpenButton(SetBlacklistOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4DFF95D & 1) == 0 )
  {
    sub_1CE6700(&Method_SetBlacklistOptionControl_onClickOpenButton__);
    sub_1CE6700(&StringLiteral_3465/*"CLICK_BLACKLIST"*/);
    byte_4DFF95D = 1;
  }
  v3 = Method_SetBlacklistOptionControl_onClickOpenButton__;
  if ( (*((_BYTE *)Method_SetBlacklistOptionControl_onClickOpenButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1CE6718(Method_SetBlacklistOptionControl_onClickOpenButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1CE6958(0, v5);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3465/*"CLICK_BLACKLIST"*/, 0);
}