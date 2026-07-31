void TreasureDvcDetailEntity___ctor(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393FF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59393FF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t TreasureDvcDetailEntity__CreatePrimaryKey(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *TreasureDvcDetailEntity__getDetail(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_59393FD & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59393FD = 1;
  }
  detail = this->fields.detail;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detail, 0, 0);
}


System_String_o *TreasureDvcDetailEntity__getDetailShort(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_59393FE & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59393FE = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detailShort, 0, 0);
}