void SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *friendDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4CB1300 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9663/*"OPTION_FRIEND_DISP_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_9660/*"OPTION_FIREND_DISP"*/);
    byte_4CB1300 = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9660/*"OPTION_FIREND_DISP"*/, 0);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v4, 0),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9663/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0),
        !friendDispInfoLb) )
  {
    sub_1C6BC60(v4, v5);
  }
  UILabel__set_text(friendDispInfoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0);
  SetSwitchOptionControl__setFriendDispValue(this, v7);
}


void SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isFriendDisp; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIButton_o *friendDispBtn; // x0
  __int64 *v8; // x8
  bool v9; // w20

  if ( (byte_4CB1303 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB1303 = 1;
  }
  v3 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  isFriendDisp = this->fields.isFriendDisp;
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  if ( !isFriendDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v8 = &StringLiteral_17522/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C6BC60(friendDispBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17521/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v8, 0);
  this->fields.isFriendDisp = v9;
}


void SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendDisp; // w19

  if ( (byte_4CB1301 & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB1301 = 1;
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

  if ( (byte_4CB1302 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB1302 = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    sub_1C6BC60(0, method);
  if ( this->fields.isFriendDisp )
    v4 = &StringLiteral_17522/*"btn_on"*/;
  else
    v4 = &StringLiteral_17521/*"btn_off"*/;
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v4, 0);
}