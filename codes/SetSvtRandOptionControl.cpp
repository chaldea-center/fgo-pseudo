void SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *svtRandDispTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *svtRandDispInfoLb; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_59334CD & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10098/*"OPTION_SVT_RAND_DISP"*/);
    sub_21FFC50(&StringLiteral_10097/*"OPTION_SVT_EXPLANATION"*/);
    byte_59334CD = 1;
  }
  svtRandDispTitle = this->fields.svtRandDispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10098/*"OPTION_SVT_RAND_DISP"*/, 0);
  if ( !svtRandDispTitle
    || (UILabel__set_text(svtRandDispTitle, v5, 0),
        svtRandDispInfoLb = this->fields.svtRandDispInfoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10097/*"OPTION_SVT_EXPLANATION"*/, 0),
        !svtRandDispInfoLb) )
  {
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(svtRandDispInfoLb, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isSvtRand = OptionManager__GetSvtRand(0);
  SetSvtRandOptionControl__setDispValue(this, v10);
}


void SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59334D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetSvtRandOptionControl_OnChangeBtn__);
    byte_59334D0 = 1;
  }
  v3 = Method_SetSvtRandOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetSvtRandOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetSvtRandOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isSvtRand, 0, 0);
  this->fields.isSvtRand ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v5);
}


void SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isSvtRand; // w19

  if ( (byte_59334CF & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334CF = 1;
  }
  isSvtRand = this->fields.isSvtRand;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetSvtRand(isSvtRand, 0);
}


void SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *svtRandDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_59334CE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334CE = 1;
  }
  svtRandDispBtn = this->fields.svtRandDispBtn;
  if ( !this->fields.isSvtRand )
  {
    if ( svtRandDispBtn )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(svtRandDispBtn, method);
  }
  if ( !svtRandDispBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(svtRandDispBtn, (System_String_o *)*v4, 0);
}