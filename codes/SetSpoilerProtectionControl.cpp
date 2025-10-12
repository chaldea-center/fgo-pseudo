void SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  UILabel_o *btnTitle; // x20
  System_String_o *v4; // x0
  UILabel_o *infoLabel; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C32A42 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9709/*"OPTION_SPOILER_PROTECTION_INFO"*/);
    sub_1C32C20(&StringLiteral_9710/*"OPTION_SPOILER_PROTECTION_TITLE"*/);
    byte_4C32A42 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v4, 0),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9709/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0),
        !infoLabel) )
  {
    sub_1C32E7C(v4);
  }
  UILabel__set_text(infoLabel, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSpoilerSetting = OptionManager__GetSpoilerSetting(0);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v6);
}


void SetSpoilerProtectionControl__OnClickSpoilerProtection(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isSpoilerSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  int v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C32A45 & 1) == 0 )
  {
    sub_1C32C20(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
    byte_4C32A45 = 1;
  }
  v3 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  v6 = !isSpoilerSetting;
  OverwriteAssetSoundName__PlaySystemSe(v5, v6, 0, 0);
  this->fields.isSpoilerSetting = v6;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_4C32A44 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32A44 = 1;
  }
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSpoilerSetting(isSpoilerSetting, 0);
}


void SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(
        SetSpoilerProtectionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C32A43 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32A43 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1C32E7C(0);
  if ( this->fields.isSpoilerSetting )
    v4 = &StringLiteral_17504/*"btn_off"*/;
  else
    v4 = &StringLiteral_17505/*"btn_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}