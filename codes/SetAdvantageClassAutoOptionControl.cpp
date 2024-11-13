void __fastcall SetAdvantageClassAutoOptionControl___ctor(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetAdvantageClassAutoOptionControl__Init(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *infoLabel; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B1160E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9784/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9783/*"OPTION_ADVANTAGE_CLASS_AUTO"*/, v8, v9);
    byte_4B1160E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9783/*"OPTION_ADVANTAGE_CLASS_AUTO"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v11, 0LL),
        infoLabel = this->fields.infoLabel,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9784/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(infoLabel, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.flag = OptionManager__GetAdvantageClassAuto(0LL);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v15);
}


void __fastcall SetAdvantageClassAutoOptionControl__OnClickButton(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetAdvantageClassAutoOptionControl_c *klass; // x9
  _QWORD *v5; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11610 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetAdvantageClassAutoOptionControl_OnClickButton__, method, v2);
    byte_4B11610 = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAdvantageClassAutoOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v5 = Method_SetAdvantageClassAutoOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAdvantageClassAutoOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_SetAdvantageClassAutoOptionControl_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !flag, 0LL);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v8);
}


void __fastcall SetAdvantageClassAutoOptionControl__Reflection(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 flag; // w19

  if ( (byte_4B11611 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11611 = 1;
  }
  flag = this->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetAdvantageClassAuto(flag, 0LL);
}


void __fastcall SetAdvantageClassAutoOptionControl__RefreshDisplay(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *switchButton; // x0
  __int64 *v7; // x8

  if ( (byte_4B1160F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1160F = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.flag )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v7, 0LL);
}