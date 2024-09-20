void __fastcall SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *dispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A56700 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9662/*"OPTION_FRIEND_MESSAGE_DISP"*/);
    sub_1B885B0(&StringLiteral_9663/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/);
    byte_4A56700 = 1;
  }
  dispTitle = this->fields.dispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9662/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0LL);
  if ( !dispTitle
    || (UILabel__set_text(dispTitle, v4, 0LL),
        infoLb = this->fields.infoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9663/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0LL),
        !infoLb) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(infoLb, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isDisp = OptionManager__GetMessageDisp(0LL);
  SetMessageDispOptionControl__setDispValue(this, v7);
}


void __fastcall SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56703 & 1) == 0 )
  {
    sub_1B885B0(&Method_SetMessageDispOptionControl_OnChangeBtn__);
    byte_4A56703 = 1;
  }
  v3 = Method_SetMessageDispOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetMessageDispOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetMessageDispOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isDisp, 0LL);
  this->fields.isDisp ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v5);
}


void __fastcall SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isDisp; // w19

  if ( (byte_4A56702 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A56702 = 1;
  }
  isDisp = this->fields.isDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetMessageDisp(isDisp, 0LL);
}


void __fastcall SetMessageDispOptionControl__setDispValue(
        SetMessageDispOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_4A56701 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A56701 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1B8880C(0LL, method);
  if ( this->fields.isDisp )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0LL);
}