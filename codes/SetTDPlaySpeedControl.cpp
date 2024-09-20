void __fastcall SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UILabel_o *tdPlaySpeedDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *tdPlaySpeedDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A56746 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9709/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_9708/*"OPTION_TD_PLAY_SPEED_DISP"*/);
    byte_4A56746 = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9708/*"OPTION_TD_PLAY_SPEED_DISP"*/, 0LL);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v4, 0LL),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9709/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0LL),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(tdPlaySpeedDispInfoLb, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isTDPlaySpeed = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v7);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56749 & 1) == 0 )
  {
    sub_1B885B0(&Method_SetTDPlaySpeedControl_OnChangeBtn__);
    byte_4A56749 = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0LL);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void __fastcall SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_4A56748 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A56748 = 1;
  }
  isTDPlaySpeed = this->fields.isTDPlaySpeed;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetTDPlaySpeed(isTDPlaySpeed, 0LL);
}


void __fastcall SetTDPlaySpeedControl__setDispValue(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UIButton_o *tdPlaySpeedDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4A56747 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A56747 = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !tdPlaySpeedDispBtn )
    sub_1B8880C(0LL, method);
  if ( this->fields.isTDPlaySpeed )
    v4 = &StringLiteral_17525/*"btn_off"*/;
  else
    v4 = &StringLiteral_17526/*"btn_on"*/;
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v4, 0LL);
}