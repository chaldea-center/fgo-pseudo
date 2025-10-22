void SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *dispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C51D76 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9668/*"OPTION_FRIEND_MESSAGE_DISP"*/);
    sub_1C3E564(&StringLiteral_9669/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/);
    byte_4C51D76 = 1;
  }
  dispTitle = this->fields.dispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0);
  if ( !dispTitle
    || (UILabel__set_text(dispTitle, v4, 0),
        infoLb = this->fields.infoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9669/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0),
        !infoLb) )
  {
    sub_1C3E7C0(v4, v5);
  }
  UILabel__set_text(infoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isDisp = OptionManager__GetMessageDisp(0);
  SetMessageDispOptionControl__setDispValue(this, v7);
}


void SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C51D79 & 1) == 0 )
  {
    sub_1C3E564(&Method_SetMessageDispOptionControl_OnChangeBtn__);
    byte_4C51D79 = 1;
  }
  v3 = Method_SetMessageDispOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetMessageDispOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SetMessageDispOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isDisp, 0, 0);
  this->fields.isDisp ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v5);
}


void SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isDisp; // w19

  if ( (byte_4C51D78 & 1) == 0 )
  {
    sub_1C3E564(&OptionManager_TypeInfo);
    byte_4C51D78 = 1;
  }
  isDisp = this->fields.isDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetMessageDisp(isDisp, 0);
}


void SetMessageDispOptionControl__setDispValue(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *switchButton; // x0
  __int64 *v4; // x8

  if ( (byte_4C51D77 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17524/*"btn_on"*/);
    sub_1C3E564(&StringLiteral_17523/*"btn_off"*/);
    byte_4C51D77 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1C3E7C0(0, method);
  if ( this->fields.isDisp )
    v4 = &StringLiteral_17524/*"btn_on"*/;
  else
    v4 = &StringLiteral_17523/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v4, 0);
}