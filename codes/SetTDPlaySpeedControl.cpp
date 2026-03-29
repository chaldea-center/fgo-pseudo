void SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UILabel_o *tdPlaySpeedDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *tdPlaySpeedDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4D2B98D & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9770/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_9769/*"OPTION_TD_PLAY_SPEED_DISP"*/);
    byte_4D2B98D = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9769/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v4, 0),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9770/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_1C93D2C(v4, v5);
  }
  UILabel__set_text(tdPlaySpeedDispInfoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isTDPlaySpeed = OptionManager__GetTDPlaySpeed(0);
  SetTDPlaySpeedControl__setDispValue(this, v7);
}


void SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2B990 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SetTDPlaySpeedControl_OnChangeBtn__);
    byte_4D2B990 = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0, 0);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_4D2B98F & 1) == 0 )
  {
    sub_1C93AD4(&OptionManager_TypeInfo);
    byte_4D2B98F = 1;
  }
  isTDPlaySpeed = this->fields.isTDPlaySpeed;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetTDPlaySpeed(isTDPlaySpeed, 0);
}


void SetTDPlaySpeedControl__setDispValue(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UIButton_o *tdPlaySpeedDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4D2B98E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2B98E = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !tdPlaySpeedDispBtn )
    sub_1C93D2C(0, method);
  if ( this->fields.isTDPlaySpeed )
    v4 = &StringLiteral_17637/*"btn_off"*/;
  else
    v4 = &StringLiteral_17638/*"btn_on"*/;
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v4, 0);
}