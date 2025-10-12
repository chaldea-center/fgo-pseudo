void SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v4; // x0
  UILabel_o *friendDispInfoLb; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C32A4E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9666/*"OPTION_FRIEND_DISP_EXPLANATION"*/);
    sub_1C32C20(&StringLiteral_9663/*"OPTION_FIREND_DISP"*/);
    byte_4C32A4E = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9663/*"OPTION_FIREND_DISP"*/, 0);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v4, 0),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9666/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0),
        !friendDispInfoLb) )
  {
    sub_1C32E7C(v4);
  }
  UILabel__set_text(friendDispInfoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0);
  SetSwitchOptionControl__setFriendDispValue(this, v6);
}


void SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isFriendDisp; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UIButton_o *friendDispBtn; // x0
  __int64 *v7; // x8
  bool v8; // w20

  if ( (byte_4C32A51 & 1) == 0 )
  {
    sub_1C32C20(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32A51 = 1;
  }
  v3 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  isFriendDisp = this->fields.isFriendDisp;
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  if ( !isFriendDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v7 = &StringLiteral_17505/*"btn_on"*/;
      v8 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C32E7C(friendDispBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_11;
  v7 = &StringLiteral_17504/*"btn_off"*/;
  v8 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v7, 0);
  this->fields.isFriendDisp = v8;
}


void SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendDisp; // w19

  if ( (byte_4C32A4F & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32A4F = 1;
  }
  isFriendDisp = this->fields.isFriendDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendImageLimitCount(isFriendDisp, 0);
}


void SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *friendDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C32A50 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32A50 = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    sub_1C32E7C(0);
  if ( this->fields.isFriendDisp )
    v4 = &StringLiteral_17505/*"btn_on"*/;
  else
    v4 = &StringLiteral_17504/*"btn_off"*/;
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v4, 0);
}