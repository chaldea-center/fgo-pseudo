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

  if ( (byte_596B5E1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10113/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10112/*"OPTION_TD_PLAY_SPEED_DISP"*/);
    byte_596B5E1 = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10112/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v5, 0),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_2213CDC(v5, v6);
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

  if ( (byte_596B5E4 & 1) == 0 )
  {
    sub_2213A60(&Method_SetTDPlaySpeedControl_OnChangeBtn__);
    byte_596B5E4 = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0, 0);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_596B5E3 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5E3 = 1;
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

  if ( (byte_596B5E2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5E2 = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !this->fields.isTDPlaySpeed )
  {
    if ( tdPlaySpeedDispBtn )
    {
      v4 = &StringLiteral_18275/*"btn_on"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(tdPlaySpeedDispBtn, method);
  }
  if ( !tdPlaySpeedDispBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18274/*"btn_off"*/;
LABEL_8:
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v4, 0);
}