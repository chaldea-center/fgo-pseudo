void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v7; // x0
  UILabel_o *friendDispInfoLb; // x20
  const MethodInfo *v9; // x1

  if ( (byte_49F7A82 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_9616/*"OPTION_FRIEND_DISP_EXPLANATION"*/, v4);
    sub_1B640C8(&StringLiteral_9613/*"OPTION_FIREND_DISP"*/, v5);
    byte_49F7A82 = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9613/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v7, 0LL),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9616/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !friendDispInfoLb) )
  {
    sub_1B64324(v7);
  }
  UILabel__set_text(friendDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v9);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isFriendDisp; // w20
  System_Reflection_MethodBase_o *v7; // x0
  UIButton_o *friendDispBtn; // x0
  __int64 *v9; // x8
  bool v10; // w20

  if ( (byte_49F7A85 & 1) == 0 )
  {
    sub_1B640C8(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F7A85 = 1;
  }
  v5 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  isFriendDisp = this->fields.isFriendDisp;
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !isFriendDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v9 = &StringLiteral_17456/*"btn_on"*/;
      v10 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(friendDispBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_11;
  v9 = &StringLiteral_17455/*"btn_off"*/;
  v10 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v9, 0LL);
  this->fields.isFriendDisp = v10;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendDisp; // w19

  if ( (byte_49F7A83 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A83 = 1;
  }
  isFriendDisp = this->fields.isFriendDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendImageLimitCount(isFriendDisp, 0LL);
}


void __fastcall SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *friendDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A84 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A84 = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    sub_1B64324(0LL);
  if ( this->fields.isFriendDisp )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v5, 0LL);
}