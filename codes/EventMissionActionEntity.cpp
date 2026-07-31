void EventMissionActionEntity___ctor(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59387AC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59387AC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionActionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_59387AB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59387AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventMissionActionEntity__CreatePrimaryKey(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventMissionActionEntity__CreatePK(
           this->fields.missionId,
           this->fields.missionProgressType,
           this->fields.id,
           v2);
}


int32_t EventMissionActionEntity__GetMissionActionType(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionActionType;
}


bool EventMissionActionEntity__isSafeType(EventMissionActionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionActionType == 7;
}