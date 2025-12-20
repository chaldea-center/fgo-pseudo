void EventBoardGameTokenRewardEntity___ctor(EventBoardGameTokenRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C700 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C700 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBoardGameTokenRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4D2C6FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2C6FF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventBoardGameTokenRewardEntity__CreatePrimaryKey(
        EventBoardGameTokenRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBoardGameTokenRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.questId,
           this->fields.questPhase,
           v2);
}