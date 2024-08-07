void __fastcall TreasureDvcDetailEntity___ctor(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF58D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FF58D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_49FF58B & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    byte_49FF58B = 1;
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

  if ( (byte_49FF58C & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    byte_49FF58C = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detailShort, 0, 0LL);
}