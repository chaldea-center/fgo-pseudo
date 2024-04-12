void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *friendDispBtn; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42B4570 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9842/*"OPTION_FRIEND_DISP_EXPLANATION"*/);
    sub_B52984(&StringLiteral_9839/*"OPTION_FIREND_DISP"*/);
    byte_42B4570 = 1;
  }
  friendDispBtn = (UILabel_o *)this->fields.friendDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9839/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !friendDispBtn
    || (UILabel__set_text(friendDispBtn, v4, 0LL),
        v6 = *(UILabel_o **)&this->fields.isFriendDisp,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9842/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !v6) )
  {
    sub_B52A5C(v4, v5);
  }
  UILabel__set_text(v6, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v7);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *friendDispInfoLb; // x0
  char v5; // w8

  if ( (byte_42B4573 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B4573 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17124/*"btn_on"*/, 0LL);
      v5 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B52A5C(friendDispInfoLb, v3);
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
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17123/*"btn_off"*/, 0LL);
  v5 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v5;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_42B4571 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4571 = 1;
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
  struct UILabel_o *friendDispInfoLb; // x0
  __int64 *v4; // x8

  if ( (byte_42B4572 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B4572 = 1;
  }
  friendDispInfoLb = this->fields.friendDispInfoLb;
  if ( !friendDispInfoLb )
    sub_B52A5C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)*v4, 0LL);
}