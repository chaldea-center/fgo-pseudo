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

  if ( (byte_4C1D23D & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&OptionManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_9902/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, v4);
    sub_1C3B764(&StringLiteral_9901/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, v5);
    byte_4C1D23D = 1;
  }
  tdPlaySpeedDispTitle = this->fields.tdPlaySpeedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9901/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_MESSAGE"*/, 0LL);
  if ( !tdPlaySpeedDispTitle
    || (UILabel__set_text(tdPlaySpeedDispTitle, v7, 0LL),
        tdPlaySpeedDispInfoLb = this->fields.tdPlaySpeedDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9902/*"PARTY_ORGANIZATION_CONFIRM_FATIGURE_SERVANT_TITLE"*/, 0LL),
        !tdPlaySpeedDispInfoLb) )
  {
    sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C1D240 & 1) == 0 )
  {
    sub_1C3B764(&Method_SetTDPlaySpeedControl_OnChangeBtn__, method);
    byte_4C1D240 = 1;
  }
  v3 = Method_SetTDPlaySpeedControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetTDPlaySpeedControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_SetTDPlaySpeedControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.isTDPlaySpeed, 0, 0LL);
  this->fields.isTDPlaySpeed ^= 1u;
  SetTDPlaySpeedControl__setDispValue(this, v5);
}


void __fastcall SetTDPlaySpeedControl__Reflection(SetTDPlaySpeedControl_o *this, const MethodInfo *method)
{
  _BOOL4 isTDPlaySpeed; // w19

  if ( (byte_4C1D23F & 1) == 0 )
  {
    sub_1C3B764(&OptionManager_TypeInfo, method);
    byte_4C1D23F = 1;
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

  if ( (byte_4C1D23E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17864/*"confirm_subscription_price_change"*/, method);
    sub_1C3B764(&StringLiteral_17863/*"confidence"*/, v3);
    byte_4C1D23E = 1;
  }
  tdPlaySpeedDispBtn = this->fields.tdPlaySpeedDispBtn;
  if ( !tdPlaySpeedDispBtn )
    sub_1C3B9C0(0LL, method);
  if ( this->fields.isTDPlaySpeed )
    v5 = &StringLiteral_17863/*"confidence"*/;
  else
    v5 = &StringLiteral_17864/*"confirm_subscription_price_change"*/;
  UIButton__set_normalSprite(tdPlaySpeedDispBtn, (System_String_o *)*v5, 0LL);
}