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

  if ( (byte_4BAFA7E & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&OptionManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_9851/*"OPTION_NOTICE_AP"*/, v4);
    sub_1C13D24(&StringLiteral_9852/*"OPTION_NOTICE_ELSE"*/, v5);
    byte_4BAFA7E = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9852/*"OPTION_NOTICE_ELSE"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v7, 0LL),
        btnTitle = this->fields.btnTitle,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9851/*"OPTION_NOTICE_AP"*/, 0LL),
        !btnTitle) )
  {
    sub_1C13F80(v7, v8);
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

  if ( (byte_4BAFA81 & 1) == 0 )
  {
    sub_1C13D24(&Method_SetPreBattleFormationControl_OnClickPreBattleFormation__, method);
    byte_4BAFA81 = 1;
  }
  v3 = Method_SetPreBattleFormationControl_OnClickPreBattleFormation__;
  isPreBattleFormationSetting = this->fields.isPreBattleFormationSetting;
  if ( (*((_BYTE *)Method_SetPreBattleFormationControl_OnClickPreBattleFormation__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_SetPreBattleFormationControl_OnClickPreBattleFormation__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isPreBattleFormationSetting, 0, 0LL);
  this->fields.isPreBattleFormationSetting = !isPreBattleFormationSetting;
  SetPreBattleFormationControl__SetPreBattleFormationDispValue(this, v6);
}


void __fastcall SetPreBattleFormationControl__Reflection(
        SetPreBattleFormationControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 isPreBattleFormationSetting; // w19

  if ( (byte_4BAFA80 & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    byte_4BAFA80 = 1;
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

  if ( (byte_4BAFA7F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17792/*"btn_getreward"*/, method);
    sub_1C13D24(&StringLiteral_17791/*"btn_filter_on"*/, v3);
    byte_4BAFA7F = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1C13F80(0LL, method);
  if ( this->fields.isPreBattleFormationSetting )
    v5 = &StringLiteral_17792/*"btn_getreward"*/;
  else
    v5 = &StringLiteral_17791/*"btn_filter_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v5, 0LL);
}