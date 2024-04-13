void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *friendDispBtn; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *v17; // x20
  const MethodInfo *v18; // x1

  if ( (byte_42ECEF9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9884/*"OPTION_FRIEND_DISP_EXPLANATION"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9881/*"OPTION_FIREND_DISP"*/, v11, v12, v13);
    byte_42ECEF9 = 1;
  }
  friendDispBtn = (UILabel_o *)this->fields.friendDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9881/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !friendDispBtn
    || (UILabel__set_text(friendDispBtn, v15, 0LL),
        v17 = *(UILabel_o **)&this->fields.isFriendDisp,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9884/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !v17) )
  {
    sub_B5D69C(v15, v16);
  }
  UILabel__set_text(v17, v15, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v18);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  struct UILabel_o *friendDispInfoLb; // x0
  char v13; // w8

  if ( (byte_42ECEFC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42ECEFC = 1;
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
      UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17215/*"btn_on"*/, 0LL);
      v13 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(friendDispInfoLb, v11);
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
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)StringLiteral_17214/*"btn_off"*/, 0LL);
  v13 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v13;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w19

  if ( (byte_42ECEFA & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEFA = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *friendDispInfoLb; // x0
  __int64 *v9; // x8

  if ( (byte_42ECEFB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42ECEFB = 1;
  }
  friendDispInfoLb = this->fields.friendDispInfoLb;
  if ( !friendDispInfoLb )
    sub_B5D69C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)friendDispInfoLb, (System_String_o *)*v9, 0LL);
}