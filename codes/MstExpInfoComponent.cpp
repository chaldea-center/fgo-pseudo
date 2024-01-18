void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4185BC4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185BC4 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4185BC3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185BC3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4185BC2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185BC2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.isButtonEnable = 0;
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  Il2CppObject *v14; // x0
  System_Action_o *v15; // x20
  int64_t v16; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185BC1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, exp);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_MstExpInfoComponent_EndOpen__, v7);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v8);
    sub_B2C35C(&StringLiteral_8653/*"MASTER_TOTAL_EXP"*/, v9);
    byte_4185BC1 = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8653/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v11, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v16 = exp,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16),
        v11 = System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v14, 0LL),
        !expInfoLb) )
  {
    sub_B2C434(v11, v12);
  }
  UILabel__set_text(expInfoLb, v11, 0LL);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
}