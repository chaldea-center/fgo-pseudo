void __fastcall SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *dispTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v10; // x1

  if ( (byte_49F9B30 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&OptionManager_TypeInfo, v3);
    sub_1B64870(&StringLiteral_9618/*"OPTION_FRIEND_MESSAGE_DISP"*/, v4);
    sub_1B64870(&StringLiteral_9619/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, v5);
    byte_49F9B30 = 1;
  }
  dispTitle = this->fields.dispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9618/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0LL);
  if ( !dispTitle
    || (UILabel__set_text(dispTitle, v7, 0LL),
        infoLb = this->fields.infoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9619/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0LL),
        !infoLb) )
  {
    sub_1B64ACC(v7, v8);
  }
  UILabel__set_text(infoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isDisp = OptionManager__GetMessageDisp(0LL);
  SetMessageDispOptionControl__setDispValue(this, v10);
}


void __fastcall SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F9B33 & 1) == 0 )
  {
    sub_1B64870(&Method_SetMessageDispOptionControl_OnChangeBtn__, method);
    byte_49F9B33 = 1;
  }
  v3 = Method_SetMessageDispOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetMessageDispOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64888(Method_SetMessageDispOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isDisp, 0LL);
  this->fields.isDisp ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v5);
}


void __fastcall SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isDisp; // w19

  if ( (byte_49F9B32 & 1) == 0 )
  {
    sub_1B64870(&OptionManager_TypeInfo, method);
    byte_49F9B32 = 1;
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
  __int64 v3; // x1
  UIButton_o *switchButton; // x0
  __int64 *v5; // x8

  if ( (byte_49F9B31 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17458/*"btn_on"*/, method);
    sub_1B64870(&StringLiteral_17457/*"btn_off"*/, v3);
    byte_49F9B31 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1B64ACC(0LL, method);
  if ( this->fields.isDisp )
    v5 = &StringLiteral_17458/*"btn_on"*/;
  else
    v5 = &StringLiteral_17457/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v5, 0LL);
}