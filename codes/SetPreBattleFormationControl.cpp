void SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  this->fields.isPreBattleFormationSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  UILabel_o *infoLabel; // x20
  System_String_o *v4; // x0
  UILabel_o *btnTitle; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C32A1D & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9675/*"OPTION_PREBATTLEFORMATION_DISP"*/);
    sub_1C32C20(&StringLiteral_9676/*"OPTION_PREBATTLEFORMATION_INFO"*/);
    byte_4C32A1D = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9676/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v4, 0),
        btnTitle = this->fields.btnTitle,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9675/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0),
        !btnTitle) )
  {
    sub_1C32E7C(v4);
  }
  UILabel__set_text(btnTitle, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isPreBattleFormationSetting = OptionManager__GetPreBattleFormationSetting(0);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v6);
}


void SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t isPreBattleFormationSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C32A20 & 1) == 0 )
  {
    sub_1C32C20(&Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
    byte_4C32A20 = 1;
  }
  v3 = Method_SetPreBattleFormationControl_OnClickPreBattleFormation__;
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( (*((_BYTE *)Method_SetPreBattleFormationControl_OnClickPreBattleFormation__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isPreBattleFormationSetting, 0, 0);
  this->fields.isPreBattleFormationSetting = isPreBattleFormationSetting ^ 1;
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v6);
}


void SetPreBattleFormationControl__Reflection(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  _BOOL4 isPreBattleFormationSetting; // w19

  if ( (byte_4C32A1F & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32A1F = 1;
  }
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetPreBattleFormationSetting(isPreBattleFormationSetting, 0);
}


void SetPreBattleFormationControl__SetPreBattleFormationDispValue(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C32A1E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C32A1E = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1C32E7C(0);
  if ( this->fields.isPreBattleFormationSetting )
    v4 = &StringLiteral_17505/*"btn_on"*/;
  else
    v4 = &StringLiteral_17504/*"btn_off"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}