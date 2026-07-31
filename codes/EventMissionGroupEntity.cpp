void EventMissionGroupEntity___ctor(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A7A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A7A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionGroupEntity__CreatePK(int32_t id, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_5939A79 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A79 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           missionId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventMissionGroupEntity__CreatePrimaryKey(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionGroupEntity__CreatePK(this->fields.id, this->fields.missionId, v2);
}