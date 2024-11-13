void __fastcall SetSvtRandOptionControl___ctor(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetSvtRandOptionControl__Init(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *svtRandDispTitle; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *svtRandDispInfoLb; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B1165C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9840/*"OPTION_SVT_RAND_DISP"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9839/*"OPTION_SVT_EXPLANATION"*/, v8, v9);
    byte_4B1165C = 1;
  }
  svtRandDispTitle = this->fields.svtRandDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9840/*"OPTION_SVT_RAND_DISP"*/, 0LL);
  if ( !svtRandDispTitle
    || (UILabel__set_text(svtRandDispTitle, v11, 0LL),
        svtRandDispInfoLb = this->fields.svtRandDispInfoLb,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9839/*"OPTION_SVT_EXPLANATION"*/, 0LL),
        !svtRandDispInfoLb) )
  {
    sub_1BCAA3C(v11, v12);
  }
  UILabel__set_text(svtRandDispInfoLb, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14);
  this->fields.isSvtRand = OptionManager__GetSvtRand(0LL);
  SetSvtRandOptionControl__setDispValue(this, v15);
}


void __fastcall SetSvtRandOptionControl__OnChangeBtn(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1165F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetSvtRandOptionControl_OnChangeBtn__, method, v2);
    byte_4B1165F = 1;
  }
  v4 = Method_SetSvtRandOptionControl_OnChangeBtn__;
  if ( (*((_BYTE *)Method_SetSvtRandOptionControl_OnChangeBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SetSvtRandOptionControl_OnChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.isSvtRand, 0LL);
  this->fields.isSvtRand ^= 1u;
  SetSvtRandOptionControl__setDispValue(this, v6);
}


void __fastcall SetSvtRandOptionControl__Reflection(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isSvtRand; // w19

  if ( (byte_4B1165E & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1165E = 1;
  }
  isSvtRand = this->fields.isSvtRand;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetSvtRand(isSvtRand, 0LL);
}


void __fastcall SetSvtRandOptionControl__setDispValue(SetSvtRandOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *svtRandDispBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B1165D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1165D = 1;
  }
  svtRandDispBtn = this->fields.svtRandDispBtn;
  if ( !svtRandDispBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isSvtRand )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(svtRandDispBtn, (System_String_o *)*v7, 0LL);
}