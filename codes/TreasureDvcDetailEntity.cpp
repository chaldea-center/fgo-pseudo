void __fastcall TreasureDvcDetailEntity___ctor(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D1C5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1D1C5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcDetailEntity__CreatePrimaryKey(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall TreasureDvcDetailEntity__getDetail(
        TreasureDvcDetailEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *detail; // x19

  if ( (byte_4B1D1C3 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    byte_4B1D1C3 = 1;
  }
  detail = this->fields.detail;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
}


System_String_o *__fastcall TreasureDvcDetailEntity__getDetailShort(
        TreasureDvcDetailEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *detailShort; // x19

  if ( (byte_4B1D1C4 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    byte_4B1D1C4 = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detailShort, 0, 0LL);
}