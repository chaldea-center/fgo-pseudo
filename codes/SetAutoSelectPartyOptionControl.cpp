void __fastcall SetAutoSelectPartyOptionControl___ctor(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetAutoSelectPartyOptionControl__Init(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *infoLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *switchButton; // x20
  const MethodInfo *v7; // x1

  if ( (byte_435413F & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&StringLiteral_9894/*"OPTION_AUTO_SELECT_PARTY_INFO"*/);
    sub_B70694(&StringLiteral_9893/*"OPTION_AUTO_SELECT_PARTY"*/);
    byte_435413F = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9893/*"OPTION_AUTO_SELECT_PARTY"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v4, 0LL),
        switchButton = (UILabel_o *)this->fields.switchButton,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9894/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, 0LL),
        !switchButton) )
  {
    sub_B7076C(v4, v5);
  }
  UILabel__set_text(switchButton, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetAutoSelectParty(0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoSelectPartyOptionControl__OnClickButton(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  SetAutoSelectPartyOptionControl_c *klass; // x9
  int v4; // w20
  const MethodInfo *v5; // x1

  if ( (byte_4354141 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354141 = 1;
  }
  klass = this->klass;
  LOBYTE(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetAutoSelectPartyOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = LOBYTE(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v4, 0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v5);
}


void __fastcall SetAutoSelectPartyOptionControl__Reflection(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_4354142 & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4354142 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetAutoSelectParty(klass_low != 0, 0LL);
}


void __fastcall SetAutoSelectPartyOptionControl__RefreshDisplay(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *v3; // x0
  __int64 *v4; // x8

  if ( (byte_4354140 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4354140 = 1;
  }
  v3 = *(UIButton_o **)&this->fields.flag;
  if ( !v3 )
    sub_B7076C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UIButton__set_normalSprite(v3, (System_String_o *)*v4, 0LL);
}