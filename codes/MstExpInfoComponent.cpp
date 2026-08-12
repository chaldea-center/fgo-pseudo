void MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B645 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B645 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596B644 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MstExpInfoComponent_Close__);
    sub_2213A60(&Method_MstExpInfoComponent_EndClose__);
    byte_596B644 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MstExpInfoComponent_Close__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.isButtonEnable = 0;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596B643 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MstExpInfoComponent_EndClose__);
    sub_2213A60(&Method_MstExpInfoComponent_OnClickClose__);
    byte_596B643 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MstExpInfoComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = System_Action_TypeInfo;
    this->fields.isButtonEnable = 0;
    v6 = (System_Action_o *)sub_2213CCC(v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *expInfoLb; // x21
  Il2CppObject *v9; // x0
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596B642 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MstExpInfoComponent_EndOpen__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_8937/*"MASTER_TOTAL_EXP"*/);
    byte_596B642 = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, exp, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8937/*"MASTER_TOTAL_EXP"*/, 0);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v6, 0),
        expInfoLb = this->fields.expInfoLb,
        v12 = exp,
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v12),
        v6 = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v9, 0),
        !expInfoLb) )
  {
    sub_2213CDC(v6, v7);
  }
  UILabel__set_text(expInfoLb, v6, 0);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
}