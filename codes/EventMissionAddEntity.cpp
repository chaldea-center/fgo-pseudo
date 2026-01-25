void EventMissionAddEntity___ctor(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE6A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE6A2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionAddEntity__CreatePK(int32_t missionId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CEE6A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEE6A1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           missionId,
           priority,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventMissionAddEntity__CreatePrimaryKey(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionAddEntity__CreatePK(this->fields.missionId, this->fields.priority, v2);
}