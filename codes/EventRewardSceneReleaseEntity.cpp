void EventRewardSceneReleaseEntity___ctor(EventRewardSceneReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C273F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C273F1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardSceneReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_4C273F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C273F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           condType,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventRewardSceneReleaseEntity__CreatePrimaryKey(
        EventRewardSceneReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSceneReleaseEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.condType, v2);
}