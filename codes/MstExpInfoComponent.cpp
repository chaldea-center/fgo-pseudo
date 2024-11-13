void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B116D1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B116D1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B116D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstExpInfoComponent_Close__, v4, v5);
    sub_1BCA7E0(&Method_MstExpInfoComponent_EndClose__, v6, v7);
    byte_4B116D0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v8 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MstExpInfoComponent_Close__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MstExpInfoComponent__EndClose(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MstExpInfoComponent__EndOpen(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall MstExpInfoComponent__OnClickClose(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B116CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MstExpInfoComponent_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_MstExpInfoComponent_OnClickClose__, v6, v7);
    byte_4B116CF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v8 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MstExpInfoComponent_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *expInfoLb; // x21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20
  int64_t v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B116CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, exp, method);
    sub_1BCA7E0(&long_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_MstExpInfoComponent_EndOpen__, v9, v10);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_8672/*"MASTER_TOTAL_EXP"*/, v13, v14);
    byte_4B116CE = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, exp);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v16, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v24 = exp,
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24),
        v16 = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v19, 0LL),
        !expInfoLb) )
  {
    sub_1BCAA3C(v16, v17);
  }
  UILabel__set_text(expInfoLb, v16, 0LL);
  this->fields.isButtonEnable = 0;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
}