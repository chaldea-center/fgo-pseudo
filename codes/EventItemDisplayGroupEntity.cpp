void EventItemDisplayGroupEntity___ctor(EventItemDisplayGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE661 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE661 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventItemDisplayGroupEntity__CreatePK(int32_t eventId, int32_t groupIndex, const MethodInfo *method)
{
  if ( (byte_4CEE660 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE660 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           groupIndex,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventItemDisplayGroupEntity__CreatePrimaryKey(
        EventItemDisplayGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventItemDisplayGroupEntity__CreatePK(this->fields.eventId, this->fields.groupIndex, v2);
}