void __fastcall SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *switchButton; // x20
  System_String_o *v7; // x0
  UILabel_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FC3CA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9755/*"OPTION_FRIEND_MESSAGE_DISP"*/, v4);
    sub_B16FFC(&StringLiteral_9756/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, v5);
    byte_40FC3CA = 1;
  }
  switchButton = (UILabel_o *)this->fields.switchButton;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9755/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0LL);
  if ( !switchButton
    || (UILabel__set_text(switchButton, v7, 0LL),
        v8 = *(UILabel_o **)&this->fields.isDisp,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9756/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetMessageDisp(0LL);
  SetMessageDispOptionControl__setDispValue(this, v10);
}


void __fastcall SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  int32_t klass_low; // w20
  const MethodInfo *v4; // x1

  if ( (byte_40FC3CD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC3CD = 1;
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

  if ( (byte_40FC3CC & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC3CC = 1;
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
  __int64 v3; // x1
  struct UILabel_o *infoLb; // x0
  __int64 *v5; // x8

  if ( (byte_40FC3CB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, method);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v3);
    byte_40FC3CB = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !infoLb )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940/*"btn_on"*/;
  else
    v5 = &StringLiteral_16939/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)infoLb, (System_String_o *)*v5, 0LL);
}