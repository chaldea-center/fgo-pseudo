void __fastcall EventRaceResultEntity___ctor(EventRaceResultEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B21D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B21D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRaceResultEntity__CreatePK(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4A5B21C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B21C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           termId,
           groupId,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRaceResultEntity__CreatePrimaryKey(
        EventRaceResultEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRaceResultEntity__CreatePK(this->fields.eventId, this->fields.termId, this->fields.groupId, v2);
}


int64_t __fastcall EventRaceResultEntity__GetRaceTime(
        EventRaceResultEntity_o *this,
        int64_t timeNow,
        const MethodInfo *method)
{
  int64_t endedAt; // x8

  endedAt = this->fields.endedAt;
  if ( endedAt >= timeNow )
    return 0LL;
  else
    return endedAt - this->fields.startedAt;
}