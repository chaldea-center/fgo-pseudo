void EventServantFatigueEntity___ctor(EventServantFatigueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC754E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC754E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantFatigueEntity__CreatePK(
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CC754D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC754D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           svtId,
           priority,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventServantFatigueEntity__CreatePrimaryKey(
        EventServantFatigueEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventServantFatigueEntity__CreatePK(this->fields.eventId, this->fields.svtId, this->fields.priority, v2);
}