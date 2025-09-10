void EventRandomMissionEntity___ctor(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C273B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C273B7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRandomMissionEntity__CreatePK(int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4C273B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C273B6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           missionId,
           (const MethodInfo_30CC96C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *EventRandomMissionEntity__CreatePrimaryKey(EventRandomMissionEntity_o *this, const MethodInfo *method)
{
  return EventRandomMissionEntity__CreatePK(this->fields.missionId, method);
}