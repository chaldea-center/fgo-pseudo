void EventProgressValueEntity___ctor(EventProgressValueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7494 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7494 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventProgressValueEntity__CreatePK(int32_t eventId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CC7493 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC7493 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           priority,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventProgressValueEntity__CreatePrimaryKey(EventProgressValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventProgressValueEntity__CreatePK(this->fields.eventId, this->fields.priority, v2);
}