void __fastcall SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  UILabel_o *btnTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A56736 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9704/*"OPTION_SPOILER_PROTECTION_INFO"*/);
    sub_1B885B0(&StringLiteral_9705/*"OPTION_SPOILER_PROTECTION_TITLE"*/);
    byte_4A56736 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9705/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0LL);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v4, 0LL),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9704/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(infoLabel, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void __fastcall SetSpoilerProtectionControl__OnClickSpoilerProtection(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isSpoilerSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  int v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4A56739 & 1) == 0 )
  {
    sub_1B885B0(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
    byte_4A56739 = 1;
  }
  v3 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  v6 = !isSpoilerSetting;
  OverwriteAssetSoundName__PlaySystemSe(v5, v6, 0LL);
  this->fields.isSpoilerSetting = v6;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void __fastcall SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_4A56738 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A56738 = 1;
  }
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSpoilerSetting(isSpoilerSetting, 0LL);
}


void __fastcall SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4A56737 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A56737 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1B8880C(0LL, method);
  if ( this->fields.isSpoilerSetting )
    v4 = &StringLiteral_17525/*"btn_off"*/;
  else
    v4 = &StringLiteral_17526/*"btn_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0LL);
}