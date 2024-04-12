void __fastcall EventBoardGameTokenRewardEntity___ctor(
        EventBoardGameTokenRewardEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B268C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B268C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBoardGameTokenRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42B268B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B268B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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