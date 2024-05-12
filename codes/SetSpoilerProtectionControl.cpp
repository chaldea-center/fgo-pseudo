void __fastcall SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  UILabel_o *infoLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_438F98A & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_9994/*"OPTION_SPOILER_PROTECTION_INFO"*/);
    sub_B775C4(&StringLiteral_9995/*"OPTION_SPOILER_PROTECTION_TITLE"*/);
    byte_438F98A = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9995/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v4, 0LL),
        v6 = *(UILabel_o **)&this->fields.isSpoilerSetting,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9994/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0LL),
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
  LOBYTE(this[1].klass) = OptionManager__GetSpoilerSetting(0LL);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void __fastcall SetSpoilerProtectionControl__OnClickSpoilerProtection(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438F98D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F98D = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    LOBYTE(this[1].klass) = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    LOBYTE(this[1].klass) = 1;
  }
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v3);
}


void __fastcall SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_438F98C & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    byte_438F98C = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetSpoilerSetting(klass_low != 0, 0LL);
}


void __fastcall SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *btnTitle; // x0
  __int64 *v4; // x8

  if ( (byte_438F98B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17345/*"btn_on"*/);
    sub_B775C4(&StringLiteral_17344/*"btn_off"*/);
    byte_438F98B = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !btnTitle )
    sub_B7769C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17344/*"btn_off"*/;
  else
    v4 = &StringLiteral_17345/*"btn_on"*/;
  UIButton__set_normalSprite((UIButton_o *)btnTitle, (System_String_o *)*v4, 0LL);
}