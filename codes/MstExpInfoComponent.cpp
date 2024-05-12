void __fastcall MstExpInfoComponent___ctor(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_438A3FF & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438A3FF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MstExpInfoComponent__Close(MstExpInfoComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438A3FE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MstExpInfoComponent_EndClose__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A3FE = 1;
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
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
  System_Action_o *v3; // x20

  if ( (byte_438A3FD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_MstExpInfoComponent_EndClose__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A3FD = 1;
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
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_MstExpInfoComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
  }
}


void __fastcall MstExpInfoComponent__openExpInfo(MstExpInfoComponent_o *this, int64_t exp, const MethodInfo *method)
{
  UILabel_o *expInfoTitleLb; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *expInfoLb; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_Action_o *v11; // x20
  int64_t v12; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438A3FC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_MstExpInfoComponent_EndOpen__);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_8814/*"MASTER_TOTAL_EXP"*/);
    byte_438A3FC = 1;
  }
  expInfoTitleLb = this->fields.expInfoTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8814/*"MASTER_TOTAL_EXP"*/, 0LL);
  if ( !expInfoTitleLb
    || (UILabel__set_text(expInfoTitleLb, v6, 0LL),
        expInfoLb = this->fields.expInfoLb,
        v12 = exp,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12, v9),
        v6 = System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v10, 0LL),
        !expInfoLb) )
  {
    sub_B7769C(v6, v7);
  }
  UILabel__set_text(expInfoLb, v6, 0LL);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MstExpInfoComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
}