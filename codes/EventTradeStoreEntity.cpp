void EventTradeStoreEntity___ctor(EventTradeStoreEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938958 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938958 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTradeStoreEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938957 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938957 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventTradeStoreEntity__CreatePrimaryKey(EventTradeStoreEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTradeStoreEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}