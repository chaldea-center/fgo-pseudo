void __fastcall SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSpoilerProtectionControl__Init(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *btnTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_49FA186 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&OptionManager_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_9661/*"OPTION_SPOILER_PROTECTION_INFO"*/, v4);
    sub_1B64A00(&StringLiteral_9662/*"OPTION_SPOILER_PROTECTION_TITLE"*/, v5);
    byte_49FA186 = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9662/*"OPTION_SPOILER_PROTECTION_TITLE"*/, 0LL);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9661/*"OPTION_SPOILER_PROTECTION_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1B64C5C(v7, v8);
  }
  UILabel__set_text(infoLabel, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v10);
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

  if ( (byte_49FA189 & 1) == 0 )
  {
    sub_1B64A00(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__, method);
    byte_49FA189 = 1;
  }
  v3 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  v6 = !isSpoilerSetting;
  OverwriteAssetSoundName__PlaySystemSe(v5, v6, 0LL);
  this->fields.isSpoilerSetting = v6;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void __fastcall SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_49FA188 & 1) == 0 )
  {
    sub_1B64A00(&OptionManager_TypeInfo, method);
    byte_49FA188 = 1;
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
  __int64 v3; // x1
  UIButton_o *settingBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49FA187 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17459/*"btn_on"*/, method);
    sub_1B64A00(&StringLiteral_17458/*"btn_off"*/, v3);
    byte_49FA187 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1B64C5C(0LL, method);
  if ( this->fields.isSpoilerSetting )
    v5 = &StringLiteral_17458/*"btn_off"*/;
  else
    v5 = &StringLiteral_17459/*"btn_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v5, 0LL);
}