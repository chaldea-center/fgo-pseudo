void SetAutoSelectPartyOptionControl___ctor(SetAutoSelectPartyOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetAutoSelectPartyOptionControl__Init(SetAutoSelectPartyOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *infoLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_596B581 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10059/*"OPTION_AUTO_SELECT_PARTY_INFO"*/);
    sub_2213A60(&StringLiteral_10058/*"OPTION_AUTO_SELECT_PARTY"*/);
    byte_596B581 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10058/*"OPTION_AUTO_SELECT_PARTY"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v5, 0),
        infoLabel = this->fields.infoLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10059/*"OPTION_AUTO_SELECT_PARTY_INFO"*/, 0),
        !infoLabel) )
  {
    sub_2213CDC(v5, v6);
  }
  UILabel__set_text(infoLabel, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.flag = OptionManager__GetAutoSelectParty(0);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v10);
}


void SetAutoSelectPartyOptionControl__OnClickButton(SetAutoSelectPartyOptionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x10
  _QWORD *v5; // x0
  _BOOL4 flag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_596B583 & 1) == 0 )
  {
    sub_2213A60(&Method_SetAutoSelectPartyOptionControl_OnClickButton__);
    byte_596B583 = 1;
  }
  methodPtr = this->klass->vtable._5_Reflection.methodPtr;
  v3 = this->klass->vtable._5_Reflection.method;
  this->fields.flag ^= 1u;
  ((void (__fastcall *)(SetAutoSelectPartyOptionControl_o *, const MethodInfo *))methodPtr)(this, v3);
  v5 = Method_SetAutoSelectPartyOptionControl_OnClickButton__;
  flag = this->fields.flag;
  if ( (*((_BYTE *)Method_SetAutoSelectPartyOptionControl_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_SetAutoSelectPartyOptionControl_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !flag, 0, 0);
  SetAutoSelectPartyOptionControl__RefreshDisplay(this, v8);
}


void SetAutoSelectPartyOptionControl__Reflection(SetAutoSelectPartyOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 flag; // w19

  if ( (byte_596B584 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B584 = 1;
  }
  flag = this->fields.flag;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetAutoSelectParty(flag, 0);
}


void SetAutoSelectPartyOptionControl__RefreshDisplay(SetAutoSelectPartyOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_596B582 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B582 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.flag )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
}