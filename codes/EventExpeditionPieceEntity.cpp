void __fastcall EventExpeditionPieceEntity___ctor(EventExpeditionPieceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A3C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A3C2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventExpeditionPieceEntity__CreatePK(
        int64_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418A3C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&idx);
    byte_418A3C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall EventExpeditionPieceEntity__CreatePrimaryKey(
        EventExpeditionPieceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionPieceEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}