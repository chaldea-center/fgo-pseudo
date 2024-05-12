void __fastcall UserEventRandomMissionEntity___ctor(UserEventRandomMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389CB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389CB5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventRandomMissionEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4389CB4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4389CB4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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