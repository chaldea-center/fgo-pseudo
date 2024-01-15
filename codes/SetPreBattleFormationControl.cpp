void __fastcall SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *v6; // x20
  System_String_o *v7; // x0
  UILabel_o *infoLabel; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FC3EB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9763/*"OPTION_PREBATTLEFORMATION_DISP"*/, v4);
    sub_B16FFC(&StringLiteral_9764/*"OPTION_PREBATTLEFORMATION_INFO"*/, v5);
    byte_40FC3EB = 1;
  }
  v6 = *(UILabel_o **)&this->fields.isPreBattleFormationSetting;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9764/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0LL);
  if ( !v6
    || (UILabel__set_text(v6, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9763/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0LL),
        !infoLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(infoLabel, v9, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetPreBattleFormationSetting(0LL);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v10);
}


void __fastcall SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FC3EE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC3EE = 1;
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
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v3);
}


void __fastcall SetPreBattleFormationControl__Reflection(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_40FC3ED & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC3ED = 1;
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
  __int64 v3; // x1
  struct UILabel_o *btnTitle; // x0
  __int64 *v5; // x8

  if ( (byte_40FC3EC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, method);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v3);
    byte_40FC3EC = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !btnTitle )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940/*"btn_on"*/;
  else
    v5 = &StringLiteral_16939/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)btnTitle, (System_String_o *)*v5, 0LL);
}