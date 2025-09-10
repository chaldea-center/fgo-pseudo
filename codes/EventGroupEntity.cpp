void EventGroupEntity___ctor(EventGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2728B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2728B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventGroupEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C2728A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2728A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventGroupEntity__CreatePrimaryKey(EventGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventGroupEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}