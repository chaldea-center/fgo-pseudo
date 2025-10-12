void MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C32ABC & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C32ABC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C32ABB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MstExpInfoComponent_Close__);
    sub_1C32C20(&Method_MstExpInfoComponent_EndClose__);
    byte_4C32ABB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_MstExpInfoComponent_Close__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MstExpInfoComponent__EndClose(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void MstExpInfoComponent__EndOpen(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void MstExpInfoComponent__OnClickClose(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C32ABA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MstExpInfoComponent_EndClose__);
    sub_1C32C20(&Method_MstExpInfoComponent_OnClickClose__);
    byte_4C32ABA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_MstExpInfoComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v6; // x0
  UILabel_o *expInfoLb; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  System_Action_o *v15; // x20
  int64_t v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C32AB9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_MstExpInfoComponent_EndOpen__);
    sub_1C32C20(&StringLiteral_25087/*"{0:N0}"*/);
    sub_1C32C20(&StringLiteral_8573/*"MASTER_TOTAL_EXP"*/);
    byte_4C32AB9 = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8573/*"MASTER_TOTAL_EXP"*/, 0);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v6, 0),
        expInfoLb = this->fields.expInfoLb,
        v16 = exp,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v8, v9, v10, v11, v12, v13),
        v6 = System_String__Format((System_String_o *)StringLiteral_25087/*"{0:N0}"*/, v14, 0),
        !expInfoLb) )
  {
    sub_1C32E7C(v6);
  }
  UILabel__set_text(expInfoLb, v6, 0);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}