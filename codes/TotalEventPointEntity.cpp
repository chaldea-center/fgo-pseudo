void __fastcall TotalEventPointEntity___ctor(TotalEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B22DF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B22DF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TotalEventPointEntity__CreatePK(
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_42B22DE & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B22DE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           id,
           groupId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall TotalEventPointEntity__CreatePrimaryKey(
        TotalEventPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TotalEventPointEntity__CreatePK(this->fields.eventId, this->fields.id, this->fields.groupId, v2);
}