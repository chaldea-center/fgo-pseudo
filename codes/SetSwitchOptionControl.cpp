void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *friendDispBtn; // x20
  System_String_o *v7; // x0
  UILabel_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4218A69 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9808/*"OPTION_FRIEND_DISP_EXPLANATION"*/, v4);
    sub_B0D8A4(&StringLiteral_9805/*"OPTION_FIREND_DISP"*/, v5);
    byte_4218A69 = 1;
  }
  friendDispBtn = (UILabel_o *)this->fields.friendDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9805/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !friendDispBtn
    || (UILabel__set_text(friendDispBtn, v7, 0LL),
        v8 = *(UILabel_o **)&this->fields.isFriendDisp,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9808/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !v8) )
  {
    sub_B0D97C(v7);
  }
  UILabel__set_text(v8, v7, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v9);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *friendDispInfoLb; // x0
  char v6; // w8

  if ( (byte_4218A6C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, v3);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v4);
    byte_4218A6C = 1;
  }
  if ( !LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    friendDispInfoLb = this->fields.friendDispInfoLb;
    if ( friendDispInfoLb )
    {
      UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17057/*"btn_on"*/, 0LL);
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(friendDispInfoLb);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  friendDispInfoLb = this->fields.friendDispInfoLb;
  if ( !friendDispInfoLb )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17056/*"btn_off"*/, 0LL);
  v6 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v6;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_4218A6A & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4218A6A = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetFriendImageLimitCount(klass_low != 0, 0LL);
}


void __fastcall SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *friendDispInfoLb; // x0
  __int64 *v5; // x8

  if ( (byte_4218A6B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_4218A6B = 1;
  }
  friendDispInfoLb = this->fields.friendDispInfoLb;
  if ( !friendDispInfoLb )
    sub_B0D97C(0LL);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)*v5, 0LL);
}