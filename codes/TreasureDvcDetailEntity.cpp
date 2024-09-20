void __fastcall TreasureDvcDetailEntity___ctor(TreasureDvcDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5BCC7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4A5BCC5 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5BCC5 = 1;
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

  if ( (byte_4A5BCC6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5BCC6 = 1;
  }
  detailShort = this->fields.detailShort;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceCommonTag(detailShort, 0, 0LL);
}