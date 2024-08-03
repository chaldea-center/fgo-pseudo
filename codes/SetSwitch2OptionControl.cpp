void __fastcall SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendCostumeDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *firnedCostumeDispTitle; // x20
  System_String_o *v7; // x0
  UILabel_o *friendCostumeDispInfoLb; // x20
  const MethodInfo *v9; // x1

  if ( (byte_49F7A7E & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_9615/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, v4);
    sub_1B640C8(&StringLiteral_9614/*"OPTION_FRIEND_COSTUME_DISP"*/, v5);
    byte_49F7A7E = 1;
  }
  firnedCostumeDispTitle = this->fields.firnedCostumeDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9614/*"OPTION_FRIEND_COSTUME_DISP"*/, 0LL);
  if ( !firnedCostumeDispTitle
    || (UILabel__set_text(firnedCostumeDispTitle, v7, 0LL),
        friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9615/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0LL),
        !friendCostumeDispInfoLb) )
  {
    sub_1B64324(v7);
  }
  UILabel__set_text(friendCostumeDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendCostumeDisp = OptionManager__GetFriendCostume(0LL);
  SetSwitch2OptionControl__setFriendDispValue(this, v9);
}


void __fastcall SetSwitch2OptionControl__OnFriendDispChangeBtn(
        SetSwitch2OptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isFriendCostumeDisp; // w20
  System_Reflection_MethodBase_o *v7; // x0
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v9; // x8
  bool v10; // w20

  if ( (byte_49F7A81 & 1) == 0 )
  {
    sub_1B640C8(&Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F7A81 = 1;
  }
  v5 = Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__;
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !isFriendCostumeDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
    if ( friendCostumeDispBtn )
    {
      v9 = &StringLiteral_17456/*"btn_on"*/;
      v10 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(friendCostumeDispBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    goto LABEL_11;
  v9 = &StringLiteral_17455/*"btn_off"*/;
  v10 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v9, 0LL);
  this->fields.isFriendCostumeDisp = v10;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendCostumeDisp; // w19

  if ( (byte_49F7A7F & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A7F = 1;
  }
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendCostume(isFriendCostumeDisp, 0LL);
}


void __fastcall SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A80 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A80 = 1;
  }
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    sub_1B64324(0LL);
  if ( this->fields.isFriendCostumeDisp )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v5, 0LL);
}