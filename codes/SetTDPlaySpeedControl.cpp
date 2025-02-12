void __fastcall SetTDPlaySpeedControl___ctor(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetTDPlaySpeedControl__Init(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *tdPlaySpeedDispTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *tdPlaySpeedDispInfoLb; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4BAFAB3 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&OptionManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_9890/*"OPTION_SMOOTHNESS_BUTTON_2"*/, v4);
    sub_1C13D24(&StringLiteral_9889/*"OPTION_SMOOTHNESS_BUTTON_1"*/, v5);
    byte_4BAFAB3 = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9889/*"OPTION_SMOOTHNESS_BUTTON_1"*/, 0LL);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v7, 0LL),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9890/*"OPTION_SMOOTHNESS_BUTTON_2"*/, 0LL),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_1C13F80(v7, v8);
  }
  UILabel__set_text(tdPlaySpeedDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isTDPlaySpeed = OptionManager__GetTDPlaySpeed(0LL);
  SetTDPlaySpeedControl__setDispValue(this, v10);
}


void __fastcall SetTDPlaySpeedControl__OnChangeBtn(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BAFAB6 & 1) == 0 )
  {
    sub_1C13D24(&Method_SetTDPlaySpeedControl_OnChangeBtn__, method);
    byte_4BAFAB6 = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0, 0LL);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void __fastcall SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_4BAFAB5 & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    byte_4BAFAB5 = 1;
  }
  isTDPlaySpeed = this->fields.isTDPlaySpeed;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetTDPlaySpeed(isTDPlaySpeed, 0LL);
}


void __fastcall SetTDPlaySpeedControl__setDispValue(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *tdPlaySpeedDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4BAFAB4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17792/*"btn_getreward"*/, method);
    sub_1C13D24(&StringLiteral_17791/*"btn_filter_on"*/, v3);
    byte_4BAFAB4 = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !tdPlaySpeedDispBtn )
    sub_1C13F80(0LL, method);
  if ( this->fields.isTDPlaySpeed )
    v5 = &StringLiteral_17791/*"btn_filter_on"*/;
  else
    v5 = &StringLiteral_17792/*"btn_getreward"*/;
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v5, 0LL);
}