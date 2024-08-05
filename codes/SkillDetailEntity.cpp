void __fastcall SkillDetailEntity___ctor(SkillDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE0F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FEE0F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillDetailEntity__CreatePrimaryKey(SkillDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall SkillDetailEntity__getDetail(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_49FEE0D & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    byte_49FEE0D = 1;
  }
  detail = this->fields.detail;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detail, 1, 0LL);
}


System_String_o *__fastcall SkillDetailEntity__getDetailShort(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_49FEE0E & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    byte_49FEE0E = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detailShort, 1, 0LL);
}