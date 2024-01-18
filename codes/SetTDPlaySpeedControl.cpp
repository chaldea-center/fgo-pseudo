void __fastcall SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *tdPlaySpeedDispBtn; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_418BC4B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9818/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, v4);
    sub_B2C35C(&StringLiteral_9817/*"OPTION_TD_PLAY_SPEED_DISP"*/, v5);
    byte_418BC4B = 1;
  }
  tdPlaySpeedDispBtn = (UILabel_o *)this->fields.tdPlaySpeedDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9817/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0LL);
  if ( !tdPlaySpeedDispBtn
    || (UILabel__set_text(tdPlaySpeedDispBtn, v7, 0LL),
        v9 = *(UILabel_o **)&this->fields.isTDPlaySpeed,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9818/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v10);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int v3; // w20
  const MethodInfo *v4; // x1

  if ( (byte_418BC4E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418BC4E = 1;
  }
  v3 = LOBYTE(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v3, 0LL);
  LOBYTE(this[1].klass) ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v4);
}


void __fastcall SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_418BC4D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC4D = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetTDPlaySpeed(klass_low != 0, 0LL);
}


void __fastcall SetTDPlaySpeedControl__setDispValue(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *tdPlaySpeedDispInfoLb; // x0
  __int64 *v5; // x8

  if ( (byte_418BC4C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418BC4C = 1;
  }
  tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb;
  if ( !tdPlaySpeedDispInfoLb )
    sub_B2C434(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17005/*"btn_off"*/;
  else
    v5 = &StringLiteral_17006/*"btn_on"*/;
  UIButton__set_normalSprite((UIButton_o *)tdPlaySpeedDispInfoLb, (System_String_o *)*v5, 0LL);
}