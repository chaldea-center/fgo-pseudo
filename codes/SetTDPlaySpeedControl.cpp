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
  UILabel_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FF32D & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9788, v4);
    sub_B16FFC(&StringLiteral_9787, v5);
    byte_40FF32D = 1;
  }
  tdPlaySpeedDispBtn = (UILabel_o *)this->fields.tdPlaySpeedDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9787, 0LL);
  if ( !tdPlaySpeedDispBtn
    || (UILabel__set_text(tdPlaySpeedDispBtn, v7, 0LL),
        v8 = *(UILabel_o **)&this->fields.isTDPlaySpeed,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9788, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v10);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int v3; // w20
  const MethodInfo *v4; // x1

  if ( (byte_40FF330 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FF330 = 1;
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

  if ( (byte_40FF32F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF32F = 1;
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

  if ( (byte_40FF32E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FF32E = 1;
  }
  tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb;
  if ( !tdPlaySpeedDispInfoLb )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16939;
  else
    v5 = &StringLiteral_16940;
  UIButton__set_normalSprite((UIButton_o *)tdPlaySpeedDispInfoLb, (System_String_o *)*v5, 0LL);
}