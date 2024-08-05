void __fastcall EventExpeditionPieceEntity___ctor(EventExpeditionPieceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE494 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE494 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventExpeditionPieceEntity__CreatePK(
        int64_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_49FE493 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&idx);
    byte_49FE493 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_2E399F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall EventExpeditionPieceEntity__CreatePrimaryKey(
        EventExpeditionPieceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionPieceEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}