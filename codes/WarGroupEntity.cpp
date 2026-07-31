void WarGroupEntity___ctor(WarGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A37 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A37 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarGroupEntity__CreatePK(
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  if ( (byte_5939A36 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5939A36 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           warId,
           questAfterClear,
           questType,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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