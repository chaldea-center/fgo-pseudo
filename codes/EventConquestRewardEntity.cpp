void EventConquestRewardEntity___ctor(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE5AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE5AF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.objectNum = 0;
  *(_OWORD *)&this->fields.eventId = xmmword_CF50F0;
}


System_String_o *EventConquestRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  if ( (byte_4CEE5B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CEE5B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           questId,
           objectType,
           objectId,
           (const MethodInfo_316EECC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventConquestRewardEntity__CreatePrimaryKey(
        EventConquestRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventConquestRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.questId,
           this->fields.objectType,
           this->fields.objectId,
           v2);
}