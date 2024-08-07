void __fastcall UserEventRandomMissionEntity___ctor(UserEventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7A8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF7A8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventRandomMissionEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_49FF7A7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&missionId);
    byte_49FF7A7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventRandomMissionEntity__CreatePrimaryKey(
        UserEventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventRandomMissionEntity__CreatePK(this->fields.userId, this->fields.missionId, v2);
}


bool __fastcall UserEventRandomMissionEntity__IsInProgress(
        UserEventRandomMissionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.status == 1;
}