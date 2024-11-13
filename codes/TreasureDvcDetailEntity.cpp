void __fastcall TreasureDvcDetailEntity___ctor(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16D7C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureDvcDetailEntity__CreatePrimaryKey(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall TreasureDvcDetailEntity__getDetail(
        TreasureDvcDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *detail; // x19

  if ( (byte_4B16D7A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B16D7A = 1;
  }
  detail = this->fields.detail;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detail, 0, 0LL);
}


System_String_o *__fastcall TreasureDvcDetailEntity__getDetailShort(
        TreasureDvcDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *detailShort; // x19

  if ( (byte_4B16D7B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B16D7B = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__ReplaceCommonTag(detailShort, 0, 0LL);
}