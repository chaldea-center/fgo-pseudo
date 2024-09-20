void __fastcall SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *svtRandDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *svtRandDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4A5673A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9707/*"OPTION_SVT_RAND_DISP"*/);
    sub_1B885B0(&StringLiteral_9706/*"OPTION_SVT_EXPLANATION"*/);
    byte_4A5673A = 1;
  }
  svtRandDispTitle = this->fields.svtRandDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9707/*"OPTION_SVT_RAND_DISP"*/, 0LL);
  if ( !svtRandDispTitle
    || (UILabel__set_text(svtRandDispTitle, v4, 0LL),
        svtRandDispInfoLb = this->fields.svtRandDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9706/*"OPTION_SVT_EXPLANATION"*/, 0LL),
        !svtRandDispInfoLb) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(svtRandDispInfoLb, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSvtRand = OptionManager__GetSvtRand(0LL);
  SetSvtRandOptionControl__setDispValue(this, v7);
}


void __fastcall SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5673D & 1) == 0 )
  {
    sub_1B885B0(&Method_SetSvtRandOptionControl_OnChangeBtn__);
    byte_4A5673D = 1;
  }
  v3 = Method_SetSvtRandOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetSvtRandOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetSvtRandOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isSvtRand, 0LL);
  this->fields.isSvtRand ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v5);
}


void __fastcall SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSvtRand; // w19

  if ( (byte_4A5673C & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5673C = 1;
  }
  isSvtRand = this->fields.isSvtRand;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSvtRand(isSvtRand, 0LL);
}


void __fastcall SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *svtRandDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4A5673B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A5673B = 1;
  }
  svtRandDispBtn = this->fields.svtRandDispBtn;
  if ( !svtRandDispBtn )
    sub_1B8880C(0LL, method);
  if ( this->fields.isSvtRand )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UIButton__set_normalSprite(svtRandDispBtn, (System_String_o *)*v4, 0LL);
}