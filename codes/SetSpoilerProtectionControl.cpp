void __fastcall SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *btnTitle; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *infoLabel; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B11658 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9837/*"OPTION_SPOILER_PROTECTION_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9838/*"OPTION_SPOILER_PROTECTION_TITLE"*/, v8, v9);
    byte_4B11658 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9838/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0LL);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v11, 0LL),
        infoLabel = this->fields.infoLabel,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9837/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(infoLabel, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.isSpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v15);
}


void __fastcall SetSpoilerProtectionControl__OnClickSpoilerProtection(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  _BOOL4 isSpoilerSetting; // w20
  System_Reflection_MethodBase_o *v6; // x0
  int v7; // w20
  const MethodInfo *v8; // x1

  if ( (byte_4B1165B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__, method, v2);
    byte_4B1165B = 1;
  }
  v4 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  v7 = !isSpoilerSetting;
  OverwriteAssetSoundName__PlaySystemSe(v6, v7, 0LL);
  this->fields.isSpoilerSetting = v7;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v8);
}


void __fastcall SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_4B1165A & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1165A = 1;
  }
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetSpoilerSetting(isSpoilerSetting, 0LL);
}


void __fastcall SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *settingBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11659 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11659 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isSpoilerSetting )
    v7 = &StringLiteral_17702/*"btn_off"*/;
  else
    v7 = &StringLiteral_17703/*"btn_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v7, 0LL);
}