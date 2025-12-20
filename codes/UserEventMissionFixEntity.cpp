void UserEventMissionFixEntity___ctor(UserEventMissionFixEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D6B0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D6B0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventMissionFixEntity__CreatePK(int64_t userId, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4D2D6AF & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D2D6AF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_319A3C4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserEventMissionFixEntity__CreatePrimaryKey(
        UserEventMissionFixEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventMissionFixEntity__CreatePK(this->fields.userId, this->fields.missionId, v2);
}


int32_t UserEventMissionFixEntity__getProgressType(UserEventMissionFixEntity_o *this, const MethodInfo *method)
{
  return this->fields.progressType;
}