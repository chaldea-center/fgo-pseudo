void __fastcall SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  UILabel_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42B2FD5 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9851/*"OPTION_PREBATTLEFORMATION_DISP"*/);
    sub_B52984(&StringLiteral_9852/*"OPTION_PREBATTLEFORMATION_INFO"*/);
    byte_42B2FD5 = 1;
  }
  v3 = *(UILabel_o **)&this->fields.isPreBattleFormationSetting;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9852/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0LL);
  if ( !v3
    || (UILabel__set_text(v3, v4, 0LL),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9851/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0LL),
        !infoLabel) )
  {
    sub_B52A5C(v4, v5);
  }
  UILabel__set_text(infoLabel, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetPreBattleFormationSetting(0LL);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v7);
}


void __fastcall SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42B2FD8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2FD8 = 1;
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

  if ( (byte_42B2FD7 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B2FD7 = 1;
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
  struct UILabel_o *btnTitle; // x0
  __int64 *v4; // x8

  if ( (byte_42B2FD6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B2FD6 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !btnTitle )
    sub_B52A5C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)btnTitle, (System_String_o *)*v4, 0LL);
}