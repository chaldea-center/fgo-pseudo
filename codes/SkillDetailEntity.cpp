void __fastcall SkillDetailEntity___ctor(SkillDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F91FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F91FA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillDetailEntity__CreatePrimaryKey(SkillDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall SkillDetailEntity__getDetail(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_40F91F8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F91F8 = 1;
  }
  detail = this->fields.detail;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__ReplaceCommonTag(detail, 1, 0LL);
}


System_String_o *__fastcall SkillDetailEntity__getDetailShort(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_40F91F9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F91F9 = 1;
  }
  detailShort = this->fields.detailShort;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__ReplaceCommonTag(detailShort, 1, 0LL);
}