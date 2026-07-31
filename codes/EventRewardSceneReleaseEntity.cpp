void EventRewardSceneReleaseEntity___ctor(EventRewardSceneReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388CB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59388CB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardSceneReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_59388CA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59388CA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           condType,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventRewardSceneReleaseEntity__CreatePrimaryKey(
        EventRewardSceneReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSceneReleaseEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.condType, v2);
}