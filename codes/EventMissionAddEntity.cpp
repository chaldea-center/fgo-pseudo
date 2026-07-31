void EventMissionAddEntity___ctor(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59387B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59387B6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionAddEntity__CreatePK(int32_t missionId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_59387B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59387B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           missionId,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventMissionAddEntity__CreatePrimaryKey(EventMissionAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionAddEntity__CreatePK(this->fields.missionId, this->fields.priority, v2);
}