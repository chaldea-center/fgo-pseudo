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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *infoLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *switchButton; // x20
  const MethodInfo *v10; // x1

  if ( (byte_418B172 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9778/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, v4);
    sub_B2C35C(&StringLiteral_9777/*"OPTION_AUTO_SELECT_PARTY"*/, v5);
    byte_418B172 = 1;
  }
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9777/*"OPTION_AUTO_SELECT_PARTY"*/, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v7, 0LL),
        switchButton = (UILabel_o *)this->fields.switchButton,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9778/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, 0LL),
        !switchButton) )
  {
    sub_B2C434(v7, v8);
  }
  UILabel__set_text(switchButton, v7, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetAutoSelectParty(0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v10);
}


void __fastcall SetAutoSelectPartyOptionControl__OnClickButton(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  SetAutoSelectPartyOptionControl_c *klass; // x9
  int v4; // w20
  const MethodInfo *v5; // x1

  if ( (byte_418B174 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B174 = 1;
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

  if ( (byte_418B175 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418B175 = 1;
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
  __int64 v3; // x1
  UIButton_o *v4; // x0
  __int64 *v5; // x8

  if ( (byte_418B173 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418B173 = 1;
  }
  v4 = *(UIButton_o **)&this->fields.flag;
  if ( !v4 )
    sub_B2C434(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite(v4, (System_String_o *)*v5, 0LL);
}