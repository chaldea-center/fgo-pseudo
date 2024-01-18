void __fastcall TotalEventPointEntity___ctor(TotalEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189941 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189941 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TotalEventPointEntity__CreatePK(
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4189940 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&id);
    byte_4189940 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           id,
           groupId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall TotalEventPointEntity__CreatePrimaryKey(
        TotalEventPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TotalEventPointEntity__CreatePK(this->fields.eventId, this->fields.id, this->fields.groupId, v2);
}