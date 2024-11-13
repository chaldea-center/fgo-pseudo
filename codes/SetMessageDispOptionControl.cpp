void __fastcall SetMessageDispOptionControl___ctor(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetMessageDispOptionControl__Init(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *dispTitle; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *infoLb; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B11622 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9795/*"OPTION_FRIEND_MESSAGE_DISP"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9796/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, v8, v9);
    byte_4B11622 = 1;
  }
  dispTitle = this->fields.dispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9795/*"OPTION_FRIEND_MESSAGE_DISP"*/, 0LL);
  if ( !dispTitle
    || (UILabel__set_text(dispTitle, v11, 0LL),
        infoLb = this->fields.infoLb,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9796/*"OPTION_FRIEND_MESSAGE_EXPLANATION"*/, 0LL),
        !infoLb) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(infoLb, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.isDisp = OptionManager__GetMessageDisp(0LL);
  SetMessageDispOptionControl__setDispValue(this, v15);
}


void __fastcall SetMessageDispOptionControl__OnChangeBtn(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11625 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetMessageDispOptionControl_OnChangeBtn__, method, v2);
    byte_4B11625 = 1;
  }
  v4 = Method_SetMessageDispOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetMessageDispOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SetMessageDispOptionControl_OnChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.isDisp, 0LL);
  this->fields.isDisp ^= 1u;
  SetMessageDispOptionControl__setDispValue(this, v6);
}


void __fastcall SetMessageDispOptionControl__Reflection(SetMessageDispOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDisp; // w19

  if ( (byte_4B11624 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11624 = 1;
  }
  isDisp = this->fields.isDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetMessageDisp(isDisp, 0LL);
}


void __fastcall SetMessageDispOptionControl__setDispValue(
        SetMessageDispOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *switchButton; // x0
  __int64 *v7; // x8

  if ( (byte_4B11623 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11623 = 1;
  }
  switchButton = this->fields.switchButton;
  if ( !switchButton )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isDisp )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(switchButton, (System_String_o *)*v7, 0LL);
}