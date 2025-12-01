void EventBoardGameTokenRewardEntity___ctor(EventBoardGameTokenRewardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC728B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC728B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBoardGameTokenRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4CC728A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC728A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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