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
  UILabel_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FF325 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9753, v4);
    sub_B16FFC(&StringLiteral_9752, v5);
    byte_40FF325 = 1;
  }
  friendCostumeDispBtn = (UILabel_o *)this->fields.friendCostumeDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9752, 0LL);
  if ( !friendCostumeDispBtn
    || (UILabel__set_text(friendCostumeDispBtn, v7, 0LL),
        v8 = *(UILabel_o **)&this->fields.isFriendCostumeDisp,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9753, 0LL),
        !v8) )
  {
    sub_B170D4();
  }
  UILabel__set_text(v8, v9, 0LL);
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
  struct UILabel_o *v5; // x0
  char v6; // w8
  struct UILabel_o *friendCostumeDispInfoLb; // x0

  if ( (byte_40FF328 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940, v3);
    sub_B16FFC(&StringLiteral_16939, v4);
    byte_40FF328 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)StringLiteral_16940, 0LL);
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = this->fields.friendCostumeDispInfoLb;
  if ( !v5 )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)v5, (System_String_o *)StringLiteral_16939, 0LL);
  v6 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v6;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_40FF326 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF326 = 1;
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

  if ( (byte_40FF327 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FF327 = 1;
  }
  friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb;
  if ( !friendCostumeDispInfoLb )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite((UIButton_o *)friendCostumeDispInfoLb, (System_String_o *)*v5, 0LL);
}