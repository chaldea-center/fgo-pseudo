void __fastcall UserEventMissionFixEntity___ctor(UserEventMissionFixEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1566 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1566 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventMissionFixEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_42B1565 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B1565 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventMissionFixEntity__CreatePrimaryKey(
        UserEventMissionFixEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventMissionFixEntity__CreatePK(this->fields.userId, this->fields.missionId, v2);
}


int32_t __fastcall UserEventMissionFixEntity__getProgressType(
        UserEventMissionFixEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.progressType;
}