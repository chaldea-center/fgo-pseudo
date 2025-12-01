void EventRewardSetEntity___ctor(EventRewardSetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7527 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7527 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardSetEntity__CreatePK(
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4CC7526 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC7526 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           rewardSetType,
           eventId,
           id,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventRewardSetEntity__CreatePrimaryKey(EventRewardSetEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSetEntity__CreatePK(this->fields.rewardSetType, this->fields.eventId, this->fields.id, v2);
}