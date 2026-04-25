void EventExpeditionPieceEntity___ctor(EventExpeditionPieceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E049C1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E049C1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventExpeditionPieceEntity__CreatePK(int64_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4E049C0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4E049C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_3202638 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *EventExpeditionPieceEntity__CreatePrimaryKey(
        EventExpeditionPieceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionPieceEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}