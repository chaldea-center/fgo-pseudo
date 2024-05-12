void __fastcall SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UILabel_o *tdPlaySpeedDispBtn; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_438F99A & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_9999/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_9998/*"OPTION_TD_PLAY_SPEED_DISP"*/);
    byte_438F99A = 1;
  }
  tdPlaySpeedDispBtn = (UILabel_o *)this->fields.tdPlaySpeedDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9998/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0LL);
  if ( !tdPlaySpeedDispBtn
    || (UILabel__set_text(tdPlaySpeedDispBtn, v4, 0LL),
        v6 = *(UILabel_o **)&this->fields.isTDPlaySpeed,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9999/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0LL),
        !v6) )
  {
    sub_B7769C(v4, v5);
  }
  UILabel__set_text(v6, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v7);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int v3; // w20
  const MethodInfo *v4; // x1

  if ( (byte_438F99D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F99D = 1;
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

  if ( (byte_438F99C & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    byte_438F99C = 1;
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
  struct UILabel_o *tdPlaySpeedDispInfoLb; // x0
  __int64 *v4; // x8

  if ( (byte_438F99B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17345/*"btn_on"*/);
    sub_B775C4(&StringLiteral_17344/*"btn_off"*/);
    byte_438F99B = 1;
  }
  tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb;
  if ( !tdPlaySpeedDispInfoLb )
    sub_B7769C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17344/*"btn_off"*/;
  else
    v4 = &StringLiteral_17345/*"btn_on"*/;
  UIButton__set_normalSprite((UIButton_o *)tdPlaySpeedDispInfoLb, (System_String_o *)*v4, 0LL);
}