void __fastcall SkillDetailEntity___ctor(SkillDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E85A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_int___ctor__, method);
    byte_4A2E85A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30FF580 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SkillDetailEntity__CreatePrimaryKey(SkillDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall SkillDetailEntity__getDetail(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_4A2E858 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    byte_4A2E858 = 1;
  }
  detail = this->fields.detail;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detail, 1, 0LL);
}


System_String_o *__fastcall SkillDetailEntity__getDetailShort(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_4A2E859 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    byte_4A2E859 = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detailShort, 1, 0LL);
}