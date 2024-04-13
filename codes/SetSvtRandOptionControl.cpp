void __fastcall SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
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
  UILabel_o *svtRandDispBtn; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *v17; // x20
  const MethodInfo *v18; // x1

  if ( (byte_42ECEF1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9922/*"OPTION_SVT_RAND_DISP"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9921/*"OPTION_SVT_EXPLANATION"*/, v11, v12, v13);
    byte_42ECEF1 = 1;
  }
  svtRandDispBtn = (UILabel_o *)this->fields.svtRandDispBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9922/*"OPTION_SVT_RAND_DISP"*/, 0LL);
  if ( !svtRandDispBtn
    || (UILabel__set_text(svtRandDispBtn, v15, 0LL),
        v17 = *(UILabel_o **)&this->fields.isSvtRand,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9921/*"OPTION_SVT_EXPLANATION"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetSvtRand(0LL);
  SetSvtRandOptionControl__setDispValue(this, v18);
}


void __fastcall SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t klass_low; // w20
  const MethodInfo *v6; // x1

  if ( (byte_42ECEF4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEF4 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(klass_low, 0LL);
  LOBYTE(this[1].klass) ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v6);
}


void __fastcall SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w19

  if ( (byte_42ECEF3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEF3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *svtRandDispInfoLb; // x0
  __int64 *v9; // x8

  if ( (byte_42ECEF2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42ECEF2 = 1;
  }
  svtRandDispInfoLb = this->fields.svtRandDispInfoLb;
  if ( !svtRandDispInfoLb )
    sub_B5D69C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)svtRandDispInfoLb, (System_String_o *)*v9, 0LL);
}