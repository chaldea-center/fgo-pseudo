void WarGroupEntity___ctor(WarGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF89A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF89A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarGroupEntity__CreatePK(
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  if ( (byte_4CEF899 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CEF899 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           warId,
           questAfterClear,
           questType,
           (const MethodInfo_316EECC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *WarGroupEntity__CreatePrimaryKey(WarGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarGroupEntity__CreatePK(
           this->fields.id,
           this->fields.warId,
           this->fields.questAfterClear,
           this->fields.questType,
           v2);
}