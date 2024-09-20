void __fastcall WarGroupEntity___ctor(WarGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C1D0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarGroupEntity__CreatePK(
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  if ( (byte_4A5C1CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5C1CF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           warId,
           questAfterClear,
           questType,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall WarGroupEntity__CreatePrimaryKey(WarGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarGroupEntity__CreatePK(
           this->fields.id,
           this->fields.warId,
           this->fields.questAfterClear,
           this->fields.questType,
           v2);
}