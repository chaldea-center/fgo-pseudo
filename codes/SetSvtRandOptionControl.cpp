void __fastcall SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *svtRandDispTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *svtRandDispInfoLb; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4B61FB8 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&OptionManager_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_9863/*"OPTION_SVT_RAND_DISP"*/, v4);
    sub_1BE4ACC(&StringLiteral_9862/*"OPTION_SVT_EXPLANATION"*/, v5);
    byte_4B61FB8 = 1;
  }
  svtRandDispTitle = this->fields.svtRandDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9863/*"OPTION_SVT_RAND_DISP"*/, 0LL);
  if ( !svtRandDispTitle
    || (UILabel__set_text(svtRandDispTitle, v7, 0LL),
        svtRandDispInfoLb = this->fields.svtRandDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9862/*"OPTION_SVT_EXPLANATION"*/, 0LL),
        !svtRandDispInfoLb) )
  {
    sub_1BE4D28(v7, v8);
  }
  UILabel__set_text(svtRandDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isSvtRand = OptionManager__GetSvtRand(0LL);
  SetSvtRandOptionControl__setDispValue(this, v10);
}


void __fastcall SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B61FBB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SetSvtRandOptionControl_OnChangeBtn__, method);
    byte_4B61FBB = 1;
  }
  v3 = Method_SetSvtRandOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetSvtRandOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_SetSvtRandOptionControl_OnChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.isSvtRand, 0LL);
  this->fields.isSvtRand ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v5);
}


void __fastcall SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isSvtRand; // w19

  if ( (byte_4B61FBA & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, method);
    byte_4B61FBA = 1;
  }
  isSvtRand = this->fields.isSvtRand;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetSvtRand(isSvtRand, 0LL);
}


void __fastcall SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *svtRandDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4B61FB9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v3);
    byte_4B61FB9 = 1;
  }
  svtRandDispBtn = this->fields.svtRandDispBtn;
  if ( !svtRandDispBtn )
    sub_1BE4D28(0LL, method);
  if ( this->fields.isSvtRand )
    v5 = &StringLiteral_17750/*"btn_on"*/;
  else
    v5 = &StringLiteral_17749/*"btn_off"*/;
  UIButton__set_normalSprite(svtRandDispBtn, (System_String_o *)*v5, 0LL);
}