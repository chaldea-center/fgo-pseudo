void __fastcall SetSpoilerProtectionControl___ctor(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  this->fields.isSpoilerSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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

  if ( (byte_4C1D22D & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&OptionManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_9897/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, v4);
    sub_1C3B764(&StringLiteral_9898/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, v5);
    byte_4C1D22D = 1;
  }
  btnTitle = this->fields.btnTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9898/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_MESSAGE"*/, 0LL);
  if ( !btnTitle
    || (UILabel__set_text(btnTitle, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9897/*"PARTY_ORGANIZATION_CONFIRM_EMPTY_DECK_MEMBER_DECIDE"*/, 0LL),
        !infoLabel) )
  {
    sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C1D230 & 1) == 0 )
  {
    sub_1C3B764(&Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__, method);
    byte_4C1D230 = 1;
  }
  v3 = Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__;
  isSpoilerSetting = this->fields.isSpoilerSetting;
  if ( (*((_BYTE *)Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_SetSpoilerProtectionControl_OnClickSpoilerProtection__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  v6 = !isSpoilerSetting;
  OverwriteAssetSoundName__PlaySystemSe(v5, v6, 0, 0LL);
  this->fields.isSpoilerSetting = v6;
  SetSpoilerProtectionControl__SetSpoilerProtectionDispValue(this, v7);
}


void __fastcall SetSpoilerProtectionControl__Reflection(SetSpoilerProtectionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSpoilerSetting; // w19

  if ( (byte_4C1D22F & 1) == 0 )
  {
    sub_1C3B764(&OptionManager_TypeInfo, method);
    byte_4C1D22F = 1;
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

  if ( (byte_4C1D22E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17864/*"confirm_subscription_price_change"*/, method);
    sub_1C3B764(&StringLiteral_17863/*"confidence"*/, v3);
    byte_4C1D22E = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1C3B9C0(0LL, method);
  if ( this->fields.isSpoilerSetting )
    v5 = &StringLiteral_17863/*"confidence"*/;
  else
    v5 = &StringLiteral_17864/*"confirm_subscription_price_change"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v5, 0LL);
}