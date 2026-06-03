void SetSupportLimitCountToDispLimitCount___ctor(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  this->fields.isUnifySetting = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSupportLimitCountToDispLimitCount__Init(SetSupportLimitCountToDispLimitCount_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4E7259B & 1) == 0 )
  {
    sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E7259B = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isUnifySetting = !OptionManager__GetSupportLimitCountToDispLimitCountSetting(0);
  SetSupportLimitCountToDispLimitCount__SetDisplayValue(this, v3);
}


void SetSupportLimitCountToDispLimitCount__OnClickSetSupportLimitCountToDispLimitCount(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t isUnifySetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4E7259E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__);
    byte_4E7259E = 1;
  }
  v3 = Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__;
  isUnifySetting = this->fields.isUnifySetting;
  if ( (*((_BYTE *)Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_SetSupportLimitCountToDispLimitCount_OnClickSetSupportLimitCountToDispLimitCount__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isUnifySetting, 0, 0);
  this->fields.isUnifySetting ^= 1u;
  SetSupportLimitCountToDispLimitCount__SetDisplayValue(this, v6);
}


void SetSupportLimitCountToDispLimitCount__Reflection(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  _BOOL4 isUnifySetting; // w19

  if ( (byte_4E7259D & 1) == 0 )
  {
    sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E7259D = 1;
  }
  isUnifySetting = this->fields.isUnifySetting;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSupportLimitCountToDispLimitCountSetting(!isUnifySetting, 0);
}


void SetSupportLimitCountToDispLimitCount__SetDisplayValue(
        SetSupportLimitCountToDispLimitCount_o *this,
        const MethodInfo *method)
{
  UIButton_o *settingBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4E7259C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17768/*"btn_on"*/);
    sub_1D0F0B4(&StringLiteral_17767/*"btn_off"*/);
    byte_4E7259C = 1;
  }
  settingBtn = this->fields.settingBtn;
  if ( !settingBtn )
    sub_1D0F30C(0, method);
  if ( this->fields.isUnifySetting )
    v4 = &StringLiteral_17768/*"btn_on"*/;
  else
    v4 = &StringLiteral_17767/*"btn_off"*/;
  UIButton__set_normalSprite(settingBtn, (System_String_o *)*v4, 0);
}