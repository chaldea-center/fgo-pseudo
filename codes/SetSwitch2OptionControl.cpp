void __fastcall SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *friendCostumeDispBtn; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4356314 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&StringLiteral_9899/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/);
    sub_B70694(&StringLiteral_9898/*"OPTION_FRIEND_COSTUME_DISP"*/);
    byte_4356314 = 1;
  }
  friendCostumeDispBtn = (UILabel_o *)this->fields.friendCostumeDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9898/*"OPTION_FRIEND_COSTUME_DISP"*/, 0LL);
  if ( !friendCostumeDispBtn
    || (UILabel__set_text(friendCostumeDispBtn, v4, 0LL),
        v6 = *(UILabel_o **)&this->fields.isFriendCostumeDisp,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9899/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0LL),
        !v6) )
  {
    sub_B7076C(v4, v5);
  }
  UILabel__set_text(v6, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetFriendCostume(0LL);
  SetSwitch2OptionControl__setFriendDispValue(this, v7);
}


void __fastcall SetSwitch2OptionControl__OnFriendDispChangeBtn(
        SetSwitch2OptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *friendCostumeDispInfoLb; // x0
  char v5; // w8

  if ( (byte_4356317 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4356317 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)StringLiteral_17262/*"btn_on"*/, 0LL);
      v5 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(friendCostumeDispInfoLb, v3);
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
  UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)StringLiteral_17261/*"btn_off"*/, 0LL);
  v5 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v5;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_4356315 & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4356315 = 1;
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
  struct UILabel_o *friendCostumeDispInfoLb; // x0
  __int64 *v4; // x8

  if ( (byte_4356316 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4356316 = 1;
  }
  friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb;
  if ( !friendCostumeDispInfoLb )
    sub_B7076C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)*v4, 0LL);
}