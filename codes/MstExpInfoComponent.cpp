void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49F7AEF & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7AEF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F7AEE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MstExpInfoComponent_Close__, v3);
    sub_1B640C8(&Method_MstExpInfoComponent_EndClose__, v4);
    byte_49F7AEE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MstExpInfoComponent_Close__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F7AED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_1B640C8(&Method_MstExpInfoComponent_OnClickClose__, v4);
    byte_49F7AED = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_MstExpInfoComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


void __fastcall MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v11; // x0
  UILabel_o *expInfoLb; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  int64_t v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7AEC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, exp);
    sub_1B640C8(&long_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_MstExpInfoComponent_EndOpen__, v7);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v8);
    sub_1B640C8(&StringLiteral_8506/*"MASTER_TOTAL_EXP"*/, v9);
    byte_49F7AEC = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8506/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v11, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v17 = exp,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17),
        v11 = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v13, 0LL),
        !expInfoLb) )
  {
    sub_1B64324(v11);
  }
  UILabel__set_text(expInfoLb, v11, 0LL);
  this->fields.isButtonEnable = 0;
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}