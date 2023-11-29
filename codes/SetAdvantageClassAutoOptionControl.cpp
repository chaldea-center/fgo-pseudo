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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  System_String_o *v7; // x0
  UILabel_o *switchButton; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_40FC31C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9746, v4);
    sub_B16FFC(&StringLiteral_9745, v5);
    byte_40FC31C = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9745, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v7, 0LL),
        switchButton = (UILabel_o *)this->fields.switchButton,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9746, 0LL),
        !switchButton) )
  {
    sub_B170D4();
  }
  UILabel__set_text(switchButton, v9, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetAdvantageClassAuto(0LL);
  SetAdvantageClassAutoOptionControl__RefreshDisplay(this, v10);
}


void __fastcall SetAdvantageClassAutoOptionControl__OnClickButton(
        SetAdvantageClassAutoOptionControl_o *this,
        const MethodInfo *method)
{
  SetAdvantageClassAutoOptionControl_c *klass; // x9
  int v4; // w20
  const MethodInfo *v5; // x1

  if ( (byte_40FC31E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC31E = 1;
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

  if ( (byte_40FC31F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC31F = 1;
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
  __int64 v3; // x1
  UIButton_o *v4; // x0
  __int64 *v5; // x8

  if ( (byte_40FC31D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC31D = 1;
  }
  v4 = *(UIButton_o **)&this->fields.flag;
  if ( !v4 )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite(v4, (System_String_o *)*v5, 0LL);
}