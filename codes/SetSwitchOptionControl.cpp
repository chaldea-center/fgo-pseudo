void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *friendDispInfoLb; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B11664 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9794/*"OPTION_FRIEND_DISP_EXPLANATION"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9791/*"OPTION_FIREND_DISP"*/, v8, v9);
    byte_4B11664 = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9791/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v11, 0LL),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9794/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !friendDispInfoLb) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(friendDispInfoLb, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v15);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isFriendDisp; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *friendDispBtn; // x0
  __int64 *v13; // x8
  bool v14; // w20

  if ( (byte_4B11667 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B11667 = 1;
  }
  v8 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  isFriendDisp = this->fields.isFriendDisp;
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isFriendDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(friendDispBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v13, 0LL);
  this->fields.isFriendDisp = v14;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isFriendDisp; // w19

  if ( (byte_4B11665 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11665 = 1;
  }
  isFriendDisp = this->fields.isFriendDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetFriendImageLimitCount(isFriendDisp, 0LL);
}


void __fastcall SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *friendDispBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11666 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11666 = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isFriendDisp )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v7, 0LL);
}