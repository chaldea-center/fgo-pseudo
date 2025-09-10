void SetAdvantageClassAutoOptionControl___ctor(SetAdvantageClassAutoOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetAdvantageClassAutoOptionControl__Init(SetAdvantageClassAutoOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C22329 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9651/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/);
    sub_1C2D490(&StringLiteral_9650/*"OPTION_ADVANTAGE_CLASS_AUTO"*/);
    byte_4C22329 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9650/*"OPTION_ADVANTAGE_CLASS_AUTO"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0),
        infoLabel = this->fields.infoLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9651/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/, 0),
        !infoLabel) )
  {
    sub_1C2D6EC(v4, v5);
  }
  UILabel__set_text(infoLabel, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.flag = OptionManager__GetAdvantageClassAuto(0);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v7);
}


void SetAdvantageClassAutoOptionControl__OnClickButton(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  SetAdvantageClassAutoOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C2232B & 1) == 0 )
  {
    sub_1C2D490(&Method_SetAdvantageClassAutoOptionControl_OnClickButton__);
    byte_4C2232B = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAdvantageClassAutoOptionControl_o *, const MethodInfo *))klass->vtable._5_Reflection.methodPtr)(
    this,
    klass->vtable._5_Reflection.method);
  v4 = Method_SetAdvantageClassAutoOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAdvantageClassAutoOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_SetAdvantageClassAutoOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0, 0);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v7);
}


void SetAdvantageClassAutoOptionControl__Reflection(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4C2232C & 1) == 0 )
  {
    sub_1C2D490(&OptionManager_TypeInfo);
    byte_4C2232C = 1;
  }
  flag = this->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetAdvantageClassAuto(flag, 0);
}


void SetAdvantageClassAutoOptionControl__RefreshDisplay(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_4C2232A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C2232A = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1C2D6EC(0, method);
  if ( this->fields.flag )
    v4 = &StringLiteral_17501/*"btn_on"*/;
  else
    v4 = &StringLiteral_17500/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
}