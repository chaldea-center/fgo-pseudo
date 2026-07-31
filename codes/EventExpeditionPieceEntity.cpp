void EventExpeditionPieceEntity___ctor(EventExpeditionPieceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593861A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593861A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventExpeditionPieceEntity__CreatePK(int64_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938619 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5938619 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *EventExpeditionPieceEntity__CreatePrimaryKey(
        EventExpeditionPieceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionPieceEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}