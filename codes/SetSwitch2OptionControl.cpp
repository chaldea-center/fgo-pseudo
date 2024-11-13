void __fastcall SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendCostumeDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *firnedCostumeDispTitle; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *friendCostumeDispInfoLb; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B11660 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9793/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9792/*"OPTION_FRIEND_COSTUME_DISP"*/, v8, v9);
    byte_4B11660 = 1;
  }
  firnedCostumeDispTitle = this->fields.firnedCostumeDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9792/*"OPTION_FRIEND_COSTUME_DISP"*/, 0LL);
  if ( !firnedCostumeDispTitle
    || (UILabel__set_text(firnedCostumeDispTitle, v11, 0LL),
        friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9793/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0LL),
        !friendCostumeDispInfoLb) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(friendCostumeDispInfoLb, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.isFriendCostumeDisp = OptionManager__GetFriendCostume(0LL);
  SetSwitch2OptionControl__setFriendDispValue(this, v15);
}


void __fastcall SetSwitch2OptionControl__OnFriendDispChangeBtn(
        SetSwitch2OptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isFriendCostumeDisp; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v13; // x8
  bool v14; // w20

  if ( (byte_4B11663 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B11663 = 1;
  }
  v8 = Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__;
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isFriendCostumeDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
    if ( friendCostumeDispBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(friendCostumeDispBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v13, 0LL);
  this->fields.isFriendCostumeDisp = v14;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isFriendCostumeDisp; // w19

  if ( (byte_4B11661 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11661 = 1;
  }
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetFriendCostume(isFriendCostumeDisp, 0LL);
}


void __fastcall SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11662 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11662 = 1;
  }
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isFriendCostumeDisp )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v7, 0LL);
}