void SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *tdPlaySpeedDispTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *tdPlaySpeedDispInfoLb; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_59334D9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10100/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10099/*"OPTION_TD_PLAY_SPEED_DISP"*/);
    byte_59334D9 = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10099/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v5, 0),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10100/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(tdPlaySpeedDispInfoLb, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isTDPlaySpeed = OptionManager__GetTDPlaySpeed(0);
  SetTDPlaySpeedControl__setDispValue(this, v10);
}


void SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59334DC & 1) == 0 )
  {
    sub_21FFC50(&Method_SetTDPlaySpeedControl_OnChangeBtn__);
    byte_59334DC = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0, 0);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_59334DB & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334DB = 1;
  }
  isTDPlaySpeed = this->fields.isTDPlaySpeed;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetTDPlaySpeed(isTDPlaySpeed, 0);
}


void SetTDPlaySpeedControl__setDispValue(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UIButton_o *tdPlaySpeedDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_59334DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334DA = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !this->fields.isTDPlaySpeed )
  {
    if ( tdPlaySpeedDispBtn )
    {
      v4 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(tdPlaySpeedDispBtn, method);
  }
  if ( !tdPlaySpeedDispBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18236/*"btn_off"*/;
LABEL_8:
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v4, 0);
}