void __fastcall SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
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
  UILabel_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v18; // x1

  if ( (byte_42EBA9C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9893/*"OPTION_PREBATTLEFORMATION_DISP"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9894/*"OPTION_PREBATTLEFORMATION_INFO"*/, v11, v12, v13);
    byte_42EBA9C = 1;
  }
  v14 = *(UILabel_o **)&this->fields.isPreBattleFormationSetting;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9894/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0LL);
  if ( !v14
    || (UILabel__set_text(v14, v15, 0LL),
        infoLabel = this->fields.infoLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9893/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0LL),
        !infoLabel) )
  {
    sub_B5D69C(v15, v16);
  }
  UILabel__set_text(infoLabel, v15, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetPreBattleFormationSetting(0LL);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v18);
}


void __fastcall SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EBA9F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA9F = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    LOBYTE(this[1].klass) = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    LOBYTE(this[1].klass) = 1;
  }
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v5);
}


void __fastcall SetPreBattleFormationControl__Reflection(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w19

  if ( (byte_42EBA9E & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA9E = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetPreBattleFormationSetting(klass_low != 0, 0LL);
}


void __fastcall SetPreBattleFormationControl__SetPreBattleFormationDispValue(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *btnTitle; // x0
  __int64 *v9; // x8

  if ( (byte_42EBA9D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EBA9D = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !btnTitle )
    sub_B5D69C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)btnTitle, (System_String_o *)*v9, 0LL);
}