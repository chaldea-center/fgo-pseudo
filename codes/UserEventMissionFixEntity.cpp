void __fastcall UserEventMissionFixEntity___ctor(UserEventMissionFixEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22C85 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22C85 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventMissionFixEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4C22C84 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&missionId);
    byte_4C22C84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_2FEE494 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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