void SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *dispTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *infoLb; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_593348A & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10053/*"OPTION_FRIEND_MESSAGE_DISP"*/);
    sub_21FFC50(&StringLiteral_10054/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/);
    byte_593348A = 1;
  }
  dispTitle = this->fields.dispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10053/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0);
  if ( !dispTitle
    || (UILabel__set_text(dispTitle, v5, 0),
        infoLb = this->fields.infoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10054/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0),
        !infoLb) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(infoLb, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isDisp = OptionManager__GetMessageDisp(0);
  SetMessageDispOptionControl__setDispValue(this, v10);
}


void SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_593348D & 1) == 0 )
  {
    sub_21FFC50(&Method_SetMessageDispOptionControl_OnChangeBtn__);
    byte_593348D = 1;
  }
  v3 = Method_SetMessageDispOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetMessageDispOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetMessageDispOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isDisp, 0, 0);
  this->fields.isDisp ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v5);
}


void SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDisp; // w19

  if ( (byte_593348C & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_593348C = 1;
  }
  isDisp = this->fields.isDisp;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetMessageDisp(isDisp, 0);
}


void SetMessageDispOptionControl__setDispValue(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_593348B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_593348B = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !this->fields.isDisp )
  {
    if ( switchButton )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(switchButton, method);
  }
  if ( !switchButton )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
}