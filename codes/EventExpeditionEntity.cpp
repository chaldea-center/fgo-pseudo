void EventExpeditionEntity___ctor(EventExpeditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27250 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27250 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventExpeditionEntity__CreatePK(int64_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C2724F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C2724F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           eventId,
           idx,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *EventExpeditionEntity__CreatePrimaryKey(EventExpeditionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventExpeditionEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}