void SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  this->fields.isPreBattleFormationSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *infoLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *btnTitle; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_596B5A3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10074/*"OPTION_PREBATTLEFORMATION_DISP"*/);
    sub_2213A60(&StringLiteral_10075/*"OPTION_PREBATTLEFORMATION_INFO"*/);
    byte_596B5A3 = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10075/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v5, 0),
        btnTitle = this->fields.btnTitle,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10074/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0),
        !btnTitle) )
  {
    sub_2213CDC(v5, v6);
  }
  UILabel__set_text(btnTitle, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isPreBattleFormationSetting = OptionManager__GetPreBattleFormationSetting(0);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v10);
}


void SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t isPreBattleFormationSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596B5A6 & 1) == 0 )
  {
    sub_2213A60(&Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
    byte_596B5A6 = 1;
  }
  v3 = Method_SetPreBattleFormationControl_OnClickPreBattleFormation__;
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( (*((_BYTE *)Method_SetPreBattleFormationControl_OnClickPreBattleFormation__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isPreBattleFormationSetting, 0, 0);
  this->fields.isPreBattleFormationSetting = isPreBattleFormationSetting ^ 1;
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v6);
}


void SetPreBattleFormationControl__Reflection(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isPreBattleFormationSetting; // w19

  if ( (byte_596B5A5 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5A5 = 1;
  }
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetPreBattleFormationSetting(isPreBattleFormationSetting, 0);
}


void SetPreBattleFormationControl__SetPreBattleFormationDispValue(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_596B5A4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5A4 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !this->fields.isPreBattleFormationSetting )
  {
    if ( settingBtn )
    {
      v4 = &StringLiteral_18274/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(settingBtn, method);
  }
  if ( !settingBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18275/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}