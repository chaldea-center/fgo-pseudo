void __fastcall UserEventRaceEntity___ctor(UserEventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBBD6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBBD6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventRaceEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  if ( (byte_49BBBD5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_49BBBD5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           termId,
           (const MethodInfo_2F002F8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventRaceEntity__CreatePrimaryKey(
        UserEventRaceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaceEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.termId, v2);
}