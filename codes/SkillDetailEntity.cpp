void SkillDetailEntity___ctor(SkillDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939275 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939275 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t SkillDetailEntity__CreatePrimaryKey(SkillDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *SkillDetailEntity__getDetail(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_5939273 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5939273 = 1;
  }
  detail = this->fields.detail;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detail, 1, 0);
}


System_String_o *SkillDetailEntity__getDetailShort(SkillDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_5939274 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5939274 = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detailShort, 1, 0);
}