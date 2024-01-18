void __fastcall SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *friendCostumeDispBtn; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_418BC43 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9783/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, v4);
    sub_B2C35C(&StringLiteral_9782/*"OPTION_FRIEND_COSTUME_DISP"*/, v5);
    byte_418BC43 = 1;
  }
  friendCostumeDispBtn = (UILabel_o *)this->fields.friendCostumeDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9782/*"OPTION_FRIEND_COSTUME_DISP"*/, 0LL);
  if ( !friendCostumeDispBtn
    || (UILabel__set_text(friendCostumeDispBtn, v7, 0LL),
        v9 = *(UILabel_o **)&this->fields.isFriendCostumeDisp,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9783/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0LL),
        !v9) )
  {
    sub_B2C434(v7, v8);
  }
  UILabel__set_text(v9, v7, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetFriendCostume(0LL);
  SetSwitch2OptionControl__setFriendDispValue(this, v10);
}


void __fastcall SetSwitch2OptionControl__OnFriendDispChangeBtn(
        SetSwitch2OptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UILabel_o *friendCostumeDispInfoLb; // x0
  char v7; // w8

  if ( (byte_418BC46 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_418BC46 = 1;
  }
  if ( !LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb;
    if ( friendCostumeDispInfoLb )
    {
      UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)StringLiteral_17006/*"btn_on"*/, 0LL);
      v7 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(friendCostumeDispInfoLb, v5);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb;
  if ( !friendCostumeDispInfoLb )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)StringLiteral_17005/*"btn_off"*/, 0LL);
  v7 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v7;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_418BC44 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC44 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetFriendCostume(klass_low != 0, 0LL);
}


void __fastcall SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *friendCostumeDispInfoLb; // x0
  __int64 *v5; // x8

  if ( (byte_418BC45 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418BC45 = 1;
  }
  friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb;
  if ( !friendCostumeDispInfoLb )
    sub_B2C434(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)*v5, 0LL);
}