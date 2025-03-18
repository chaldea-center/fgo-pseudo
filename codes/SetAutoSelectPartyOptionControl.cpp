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

  if ( (byte_4C1D1EB & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&OptionManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_9848/*"OverwritePopupColor"*/, v4);
    sub_1C3B764(&StringLiteral_9847/*"OverwriteMotion_{0}"*/, v5);
    byte_4C1D1EB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9847/*"OverwriteMotion_{0}"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        infoLabel = this->fields.infoLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9848/*"OverwritePopupColor"*/, 0LL),
        !infoLabel) )
  {
    sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C1D1ED & 1) == 0 )
  {
    sub_1C3B764(&Method_SetAutoSelectPartyOptionControl_OnClickButton__, method);
    byte_4C1D1ED = 1;
  }
  klass = this->klass;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoSelectPartyOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetAutoSelectPartyOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoSelectPartyOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_SetAutoSelectPartyOptionControl_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !flag, 0, 0LL);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetAutoSelectPartyOptionControl__Reflection(
        SetAutoSelectPartyOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 flag; // w19

  if ( (byte_4C1D1EE & 1) == 0 )
  {
    sub_1C3B764(&OptionManager_TypeInfo, method);
    byte_4C1D1EE = 1;
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

  if ( (byte_4C1D1EC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17864/*"confirm_subscription_price_change"*/, method);
    sub_1C3B764(&StringLiteral_17863/*"confidence"*/, v3);
    byte_4C1D1EC = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1C3B9C0(0LL, method);
  if ( this->fields.flag )
    v5 = &StringLiteral_17864/*"confirm_subscription_price_change"*/;
  else
    v5 = &StringLiteral_17863/*"confidence"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v5, 0LL);
}