void SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *svtRandDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *svtRandDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4D2B981 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9768/*"OPTION_SVT_RAND_DISP"*/);
    sub_1C93AD4(&StringLiteral_9767/*"OPTION_SVT_EXPLANATION"*/);
    byte_4D2B981 = 1;
  }
  svtRandDispTitle = this->fields.svtRandDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9768/*"OPTION_SVT_RAND_DISP"*/, 0);
  if ( !svtRandDispTitle
    || (UILabel__set_text(svtRandDispTitle, v4, 0),
        svtRandDispInfoLb = this->fields.svtRandDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9767/*"OPTION_SVT_EXPLANATION"*/, 0),
        !svtRandDispInfoLb) )
  {
    sub_1C93D2C(v4, v5);
  }
  UILabel__set_text(svtRandDispInfoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSvtRand = OptionManager__GetSvtRand(0);
  SetSvtRandOptionControl__setDispValue(this, v7);
}


void SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2B984 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SetSvtRandOptionControl_OnChangeBtn__);
    byte_4D2B984 = 1;
  }
  v3 = Method_SetSvtRandOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetSvtRandOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_SetSvtRandOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isSvtRand, 0, 0);
  this->fields.isSvtRand ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v5);
}


void SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSvtRand; // w19

  if ( (byte_4D2B983 & 1) == 0 )
  {
    sub_1C93AD4(&OptionManager_TypeInfo);
    byte_4D2B983 = 1;
  }
  isSvtRand = this->fields.isSvtRand;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSvtRand(isSvtRand, 0);
}


void SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *svtRandDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4D2B982 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2B982 = 1;
  }
  svtRandDispBtn = this->fields.svtRandDispBtn;
  if ( !svtRandDispBtn )
    sub_1C93D2C(0, method);
  if ( this->fields.isSvtRand )
    v4 = &StringLiteral_17638/*"btn_on"*/;
  else
    v4 = &StringLiteral_17637/*"btn_off"*/;
  UIButton__set_normalSprite(svtRandDispBtn, (System_String_o *)*v4, 0);
}