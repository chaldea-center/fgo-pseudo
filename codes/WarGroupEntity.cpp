void __fastcall WarGroupEntity___ctor(WarGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBFC4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBFC4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarGroupEntity__CreatePK(
        int32_t id,
        int32_t warId,
        int32_t questAfterClear,
        int32_t questType,
        const MethodInfo *method)
{
  if ( (byte_49BBFC3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&warId);
    byte_49BBFC3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           warId,
           questAfterClear,
           questType,
           (const MethodInfo_2F005FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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