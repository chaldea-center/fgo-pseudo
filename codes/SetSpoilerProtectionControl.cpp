void SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *btnTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *infoLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_59334C5 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10095/*"OPTION_SPOILER_PROTECTION_INFO"*/);
    sub_21FFC50(&StringLiteral_10096/*"OPTION_SPOILER_PROTECTION_TITLE"*/);
    byte_59334C5 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10096/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v5, 0),
        infoLabel = this->fields.infoLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10095/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0),
        !infoLabel) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(infoLabel, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isSpoilerSetting = OptionManager__GetSpoilerSetting(0);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v10);
}


void SetSpoilerProtectionControl__OnClickSpoilerProtection(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isSpoilerSetting; // w20
  int v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_59334C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
    byte_59334C8 = 1;
  }
  v3 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v5 = !isSpoilerSetting;
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
  this->fields.isSpoilerSetting = v5;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_59334C7 & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334C7 = 1;
  }
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetSpoilerSetting(isSpoilerSetting, 0);
}


void SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_59334C6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334C6 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !this->fields.isSpoilerSetting )
  {
    if ( settingBtn )
    {
      v4 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(settingBtn, method);
  }
  if ( !settingBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18236/*"btn_off"*/;
LABEL_8:
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}