void SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *friendDispInfoLb; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_59334D5 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10052/*"OPTION_FRIEND_DISP_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10049/*"OPTION_FIREND_DISP"*/);
    byte_59334D5 = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10049/*"OPTION_FIREND_DISP"*/, 0);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v5, 0),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10052/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0),
        !friendDispInfoLb) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(friendDispInfoLb, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0);
  SetSwitchOptionControl__setFriendDispValue(this, v10);
}


void SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIButton_o *friendDispBtn; // x0
  bool v7; // w20
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_59334D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334D8 = 1;
  }
  v3 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  if ( !this->fields.isFriendDisp )
  {
    if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v7 = 1;
      v8 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(friendDispBtn, v5);
  }
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_13;
  v7 = 0;
  v8 = &StringLiteral_18236/*"btn_off"*/;
LABEL_12:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v8, 0);
  this->fields.isFriendDisp = v7;
}


void SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isFriendDisp; // w19

  if ( (byte_59334D6 & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334D6 = 1;
  }
  isFriendDisp = this->fields.isFriendDisp;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetFriendImageLimitCount(isFriendDisp, 0);
}


void SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *friendDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_59334D7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334D7 = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !this->fields.isFriendDisp )
  {
    if ( friendDispBtn )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(friendDispBtn, method);
  }
  if ( !friendDispBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v4, 0);
}