void __fastcall SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
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
  UILabel_o *tdPlaySpeedDispBtn; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *v17; // x20
  const MethodInfo *v18; // x1

  if ( (byte_42ECEFD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9924/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9923/*"OPTION_TD_PLAY_SPEED_DISP"*/, v11, v12, v13);
    byte_42ECEFD = 1;
  }
  tdPlaySpeedDispBtn = (UILabel_o *)this->fields.tdPlaySpeedDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9923/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0LL);
  if ( !tdPlaySpeedDispBtn
    || (UILabel__set_text(tdPlaySpeedDispBtn, v15, 0LL),
        v17 = *(UILabel_o **)&this->fields.isTDPlaySpeed,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9924/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v18);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w20
  const MethodInfo *v6; // x1

  if ( (byte_42ECF00 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF00 = 1;
  }
  v5 = LOBYTE(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v5, 0LL);
  LOBYTE(this[1].klass) ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v6);
}


void __fastcall SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w19

  if ( (byte_42ECEFF & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEFF = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *tdPlaySpeedDispInfoLb; // x0
  __int64 *v9; // x8

  if ( (byte_42ECEFE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42ECEFE = 1;
  }
  tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb;
  if ( !tdPlaySpeedDispInfoLb )
    sub_B5D69C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v9 = &StringLiteral_17214/*"btn_off"*/;
  else
    v9 = &StringLiteral_17215/*"btn_on"*/;
  UIButton__set_normalSprite((UIButton_o *)tdPlaySpeedDispInfoLb, (System_String_o *)*v9, 0LL);
}