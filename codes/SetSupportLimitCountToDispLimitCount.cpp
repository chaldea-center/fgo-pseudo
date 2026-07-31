void SetSupportLimitCountToDispLimitCount___ctor(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  this->fields.isUnifySetting = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSupportLimitCountToDispLimitCount__Init(SetSupportLimitCountToDispLimitCount_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_59334C9 & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334C9 = 1;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  this->fields.isUnifySetting = !OptionManager__GetSupportLimitCountToDispLimitCountSetting(0);
  SetSupportLimitCountToDispLimitCount__SetDisplayValue(this, v4);
}


void SetSupportLimitCountToDispLimitCount__OnClickSetSupportLimitCountToDispLimitCount(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t isUnifySetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_59334CC & 1) == 0 )
  {
    sub_21FFC50(&Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__);
    byte_59334CC = 1;
  }
  v3 = Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__;
  isUnifySetting = this->fields.isUnifySetting;
  if ( (*((_BYTE *)Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isUnifySetting, 0, 0);
  this->fields.isUnifySetting ^= 1u;
  SetSupportLimitCountToDispLimitCount__SetDisplayValue(this, v6);
}


void SetSupportLimitCountToDispLimitCount__Reflection(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isUnifySetting; // w19

  if ( (byte_59334CB & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334CB = 1;
  }
  isUnifySetting = this->fields.isUnifySetting;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetSupportLimitCountToDispLimitCountSetting(!isUnifySetting, 0);
}


void SetSupportLimitCountToDispLimitCount__SetDisplayValue(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_59334CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334CA = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_21FFECC(0, method);
  v4 = &StringLiteral_18236/*"btn_off"*/;
  if ( this->fields.isUnifySetting )
    v4 = &StringLiteral_18237/*"btn_on"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}