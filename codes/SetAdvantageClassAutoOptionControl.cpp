void __fastcall SetAdvantageClassAutoOptionControl___ctor(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetAdvantageClassAutoOptionControl__Init(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *infoLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *switchButton; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42B3378 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9834/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/);
    sub_B52984(&StringLiteral_9833/*"OPTION_ADVANTAGE_CLASS_AUTO"*/);
    byte_42B3378 = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9833/*"OPTION_ADVANTAGE_CLASS_AUTO"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v4, 0LL),
        switchButton = (UILabel_o *)this->fields.switchButton,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9834/*"OPTION_ADVANTAGE_CLASS_AUTO_INFO"*/, 0LL),
        !switchButton) )
  {
    sub_B52A5C(v4, v5);
  }
  UILabel__set_text(switchButton, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetAdvantageClassAuto(0LL);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAdvantageClassAutoOptionControl__OnClickButton(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  SetAdvantageClassAutoOptionControl_c *klass; // x9
  int v4; // w20
  const MethodInfo *v5; // x1

  if ( (byte_42B337A & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B337A = 1;
  }
  klass = this->klass;
  LOBYTE(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetAdvantageClassAutoOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = LOBYTE(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v4, 0LL);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v5);
}


void __fastcall SetAdvantageClassAutoOptionControl__Reflection(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_42B337B & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B337B = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetAdvantageClassAuto(klass_low != 0, 0LL);
}


void __fastcall SetAdvantageClassAutoOptionControl__RefreshDisplay(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *v3; // x0
  __int64 *v4; // x8

  if ( (byte_42B3379 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B3379 = 1;
  }
  v3 = *(UIButton_o **)&this->fields.flag;
  if ( !v3 )
    sub_B52A5C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite(v3, (System_String_o *)*v4, 0LL);
}