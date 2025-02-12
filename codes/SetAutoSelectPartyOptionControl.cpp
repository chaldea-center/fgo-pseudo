void __fastcall SetAutoSelectPartyOptionControl___ctor(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetAutoSelectPartyOptionControl__Init(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *infoLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4BC2E0A & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&OptionManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_9842/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, v4);
    sub_1C1ABD4(&StringLiteral_9841/*"OPTION_AUTO_SELECT_PARTY"*/, v5);
    byte_4BC2E0A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9841/*"OPTION_AUTO_SELECT_PARTY"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9842/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, 0LL),
        !infoLabel) )
  {
    sub_1C1AE30(v7, v8);
  }
  UILabel__set_text(infoLabel, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.flag = OptionManager__GetAutoSelectParty(0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v10);
}


void __fastcall SetAutoSelectPartyOptionControl__OnClickButton(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  SetAutoSelectPartyOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BC2E0C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SetAutoSelectPartyOptionControl_OnClickButton__, method);
    byte_4BC2E0C = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoSelectPartyOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetAutoSelectPartyOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoSelectPartyOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_SetAutoSelectPartyOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0, 0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoSelectPartyOptionControl__Reflection(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4BC2E0D & 1) == 0 )
  {
    sub_1C1ABD4(&OptionManager_TypeInfo, method);
    byte_4BC2E0D = 1;
  }
  flag = this->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetAutoSelectParty(flag, 0LL);
}


void __fastcall SetAutoSelectPartyOptionControl__RefreshDisplay(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *switchButton; // x0
  __int64 *v5; // x8

  if ( (byte_4BC2E0B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17806/*"btn_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17805/*"btn_off"*/, v3);
    byte_4BC2E0B = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1C1AE30(0LL, method);
  if ( this->fields.flag )
    v5 = &StringLiteral_17806/*"btn_on"*/;
  else
    v5 = &StringLiteral_17805/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v5, 0LL);
}