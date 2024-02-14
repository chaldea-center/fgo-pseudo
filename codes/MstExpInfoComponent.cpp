void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42123AD & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42123AD = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_42123AC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123AC = 1;
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
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_42123AB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MstExpInfoComponent_EndClose__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42123AB = 1;
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
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
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
  UILabel_o *expInfoLb; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42123AA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, exp);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_MstExpInfoComponent_EndOpen__, v7);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v8);
    sub_B0D8A4(&StringLiteral_8675/*"MASTER_TOTAL_EXP"*/, v9);
    byte_42123AA = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v11, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v17 = exp,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17),
        v11 = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v13, 0LL),
        !expInfoLb) )
  {
    sub_B0D97C(v11);
  }
  UILabel__set_text(expInfoLb, v11, 0LL);
  this->fields.isButtonEnable = 0;
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}