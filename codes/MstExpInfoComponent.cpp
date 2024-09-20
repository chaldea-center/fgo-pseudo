void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A567AF & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A567AF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A567AE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MstExpInfoComponent_Close__);
    sub_1B885B0(&Method_MstExpInfoComponent_EndClose__);
    byte_4A567AE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_Close__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_Close__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MstExpInfoComponent_Close__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A567AD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MstExpInfoComponent_EndClose__);
    sub_1B885B0(&Method_MstExpInfoComponent_OnClickClose__);
    byte_4A567AD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MstExpInfoComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MstExpInfoComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MstExpInfoComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *expInfoLb; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_Action_o *v13; // x20
  int64_t v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A567AC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_MstExpInfoComponent_EndOpen__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_8546/*"MASTER_TOTAL_EXP"*/);
    byte_4A567AC = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8546/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v6, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v14 = exp,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14, v9, v10, v11),
        v6 = System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v12, 0LL),
        !expInfoLb) )
  {
    sub_1B8880C(v6, v7);
  }
  UILabel__set_text(expInfoLb, v6, 0LL);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
}