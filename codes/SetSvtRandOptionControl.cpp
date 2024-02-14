void __fastcall SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *svtRandDispBtn; // x20
  System_String_o *v7; // x0
  UILabel_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4218A61 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_9840/*"OPTION_SVT_RAND_DISP"*/, v4);
    sub_B0D8A4(&StringLiteral_9839/*"OPTION_SVT_EXPLANATION"*/, v5);
    byte_4218A61 = 1;
  }
  svtRandDispBtn = (UILabel_o *)this->fields.svtRandDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9840/*"OPTION_SVT_RAND_DISP"*/, 0LL);
  if ( !svtRandDispBtn
    || (UILabel__set_text(svtRandDispBtn, v7, 0LL),
        v8 = *(UILabel_o **)&this->fields.isSvtRand,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9839/*"OPTION_SVT_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetSvtRand(0LL);
  SetSvtRandOptionControl__setDispValue(this, v9);
}


void __fastcall SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  int32_t klass_low; // w20
  const MethodInfo *v4; // x1

  if ( (byte_4218A64 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4218A64 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(klass_low, 0LL);
  LOBYTE(this[1].klass) ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v4);
}


void __fastcall SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_4218A63 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4218A63 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetSvtRand(klass_low != 0, 0LL);
}


void __fastcall SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *svtRandDispInfoLb; // x0
  __int64 *v5; // x8

  if ( (byte_4218A62 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_4218A62 = 1;
  }
  svtRandDispInfoLb = this->fields.svtRandDispInfoLb;
  if ( !svtRandDispInfoLb )
    sub_B0D97C(0LL);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)svtRandDispInfoLb, (System_String_o *)*v5, 0LL);
}