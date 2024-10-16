void __fastcall EventBoardGameTokenRewardEntity___ctor(
        EventBoardGameTokenRewardEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB5C07 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5C07 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBoardGameTokenRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4AB5C06 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_4AB5C06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventBoardGameTokenRewardEntity__CreatePrimaryKey(
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