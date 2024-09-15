void __fastcall SetPreBattleFormationControl___ctor(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  this->fields.isPreBattleFormationSetting = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetPreBattleFormationControl__Init(SetPreBattleFormationControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *btnTitle; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4A29505 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&OptionManager_TypeInfo, v3);
    sub_1B761C0(&StringLiteral_9667/*"OPTION_PREBATTLEFORMATION_DISP"*/, v4);
    sub_1B761C0(&StringLiteral_9668/*"OPTION_PREBATTLEFORMATION_INFO"*/, v5);
    byte_4A29505 = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"OPTION_PREBATTLEFORMATION_INFO"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v7, 0LL),
        btnTitle = this->fields.btnTitle,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"OPTION_PREBATTLEFORMATION_DISP"*/, 0LL),
        !btnTitle) )
  {
    sub_1B7641C(v7, v8);
  }
  UILabel__set_text(btnTitle, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isPreBattleFormationSetting = OptionManager__GetPreBattleFormationSetting(0LL);
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v10);
}


void __fastcall SetPreBattleFormationControl__OnClickPreBattleFormation(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isPreBattleFormationSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A29508 & 1) == 0 )
  {
    sub_1B761C0(&Method_SetPreBattleFormationControl_OnClickPreBattleFormation__, method);
    byte_4A29508 = 1;
  }
  v3 = Method_SetPreBattleFormationControl_OnClickPreBattleFormation__;
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( (*((_BYTE *)Method_SetPreBattleFormationControl_OnClickPreBattleFormation__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B761D8(Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isPreBattleFormationSetting, 0LL);
  this->fields.isPreBattleFormationSetting = !isPreBattleFormationSetting;
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v6);
}


void __fastcall SetPreBattleFormationControl__Reflection(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 isPreBattleFormationSetting; // w19

  if ( (byte_4A29507 & 1) == 0 )
  {
    sub_1B761C0(&OptionManager_TypeInfo, method);
    byte_4A29507 = 1;
  }
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetPreBattleFormationSetting(isPreBattleFormationSetting, 0LL);
}


void __fastcall SetPreBattleFormationControl__SetPreBattleFormationDispValue(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *settingBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4A29506 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17520/*"btn_on"*/, method);
    sub_1B761C0(&StringLiteral_17519/*"btn_off"*/, v3);
    byte_4A29506 = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1B7641C(0LL, method);
  if ( this->fields.isPreBattleFormationSetting )
    v5 = &StringLiteral_17520/*"btn_on"*/;
  else
    v5 = &StringLiteral_17519/*"btn_off"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v5, 0LL);
}