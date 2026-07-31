void UserEventMissionFixMaster___ctor(UserEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939522 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
    byte_5939522 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionFixEntity_o *UserEventMissionFixMaster__GetEntity(
        UserEventMissionFixMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939520 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
    byte_5939520 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionFixEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionFixEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
}


bool UserEventMissionFixMaster__TryGetEntity(
        UserEventMissionFixMaster_o *this,
        UserEventMissionFixEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939521 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
    byte_5939521 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionFixEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
}