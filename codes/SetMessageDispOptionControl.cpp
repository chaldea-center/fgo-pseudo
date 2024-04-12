void __fastcall SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *switchButton; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42B2FB3 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9843/*"OPTION_FRIEND_MESSAGE_DISP"*/);
    sub_B52984(&StringLiteral_9844/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/);
    byte_42B2FB3 = 1;
  }
  switchButton = (UILabel_o *)this->fields.switchButton;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9843/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0LL);
  if ( !switchButton
    || (UILabel__set_text(switchButton, v4, 0LL),
        v6 = *(UILabel_o **)&this->fields.isDisp,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9844/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetMessageDisp(0LL);
  SetMessageDispOptionControl__setDispValue(this, v7);
}


void __fastcall SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  int32_t klass_low; // w20
  const MethodInfo *v4; // x1

  if ( (byte_42B2FB6 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2FB6 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(klass_low, 0LL);
  LOBYTE(this[1].klass) ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v4);
}


void __fastcall SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_42B2FB5 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B2FB5 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetMessageDisp(klass_low != 0, 0LL);
}


void __fastcall SetMessageDispOptionControl__setDispValue(
        SetMessageDispOptionControl_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *infoLb; // x0
  __int64 *v4; // x8

  if ( (byte_42B2FB4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B2FB4 = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !infoLb )
    sub_B52A5C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)infoLb, (System_String_o *)*v4, 0LL);
}