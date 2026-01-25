void EventMissionActionAddEntity___ctor(EventMissionActionAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE68E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE68E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionActionAddEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4CEE68D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEE68D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventMissionActionAddEntity__CreatePrimaryKey(
        EventMissionActionAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventMissionActionAddEntity__CreatePK(
           this->fields.missionId,
           this->fields.missionProgressType,
           this->fields.id,
           v2);
}


int32_t EventMissionActionAddEntity__GetMissionActionType(
        EventMissionActionAddEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.missionActionType;
}


bool EventMissionActionAddEntity__isSafeType(EventMissionActionAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionActionType == 7;
}