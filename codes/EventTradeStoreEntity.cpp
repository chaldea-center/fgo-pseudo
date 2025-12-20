void EventTradeStoreEntity___ctor(EventTradeStoreEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CB0C & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CB0C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTradeStoreEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2CB0B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CB0B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventTradeStoreEntity__CreatePrimaryKey(EventTradeStoreEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTradeStoreEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}