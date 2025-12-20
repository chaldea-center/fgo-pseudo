void EventMissionGroupEntity___ctor(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DB46 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DB46 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionGroupEntity__CreatePK(int32_t id, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4D2DB45 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2DB45 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           missionId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventMissionGroupEntity__CreatePrimaryKey(EventMissionGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventMissionGroupEntity__CreatePK(this->fields.id, this->fields.missionId, v2);
}