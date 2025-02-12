void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2EC6 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC2EC6 = 1;
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
  System_Action_o *v7; // x20

  if ( (byte_4BC2EC5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MstExpInfoComponent_Close__, v3);
    sub_1C1ABD4(&Method_MstExpInfoComponent_EndClose__, v4);
    byte_4BC2EC5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_MstExpInfoComponent_Close__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    this->fields.isButtonEnable = 0;
    v7 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  System_Action_o *v7; // x20

  if ( (byte_4BC2EC4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_1C1ABD4(&Method_MstExpInfoComponent_OnClickClose__, v4);
    byte_4BC2EC4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_MstExpInfoComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    this->fields.isButtonEnable = 0;
    v7 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v12; // x1
  UILabel_o *expInfoLb; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_Action_o *v18; // x20
  int64_t v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC2EC3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, exp);
    sub_1C1ABD4(&long_TypeInfo, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_MstExpInfoComponent_EndOpen__, v7);
    sub_1C1ABD4(&StringLiteral_25393/*"{0:N0}"*/, v8);
    sub_1C1ABD4(&StringLiteral_8720/*"MASTER_TOTAL_EXP"*/, v9);
    byte_4BC2EC3 = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v11, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v19 = exp,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v14, v15, v16),
        v11 = System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v17, 0LL),
        !expInfoLb) )
  {
    sub_1C1AE30(v11, v12);
  }
  UILabel__set_text(expInfoLb, v11, 0LL);
  this->fields.isButtonEnable = 0;
  v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
}