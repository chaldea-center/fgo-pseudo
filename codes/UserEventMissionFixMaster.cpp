void __fastcall UserEventMissionFixMaster___ctor(UserEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67882 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__, method);
    byte_4B67882 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    246,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionFixEntity_o *__fastcall UserEventMissionFixMaster__GetEntity(
        UserEventMissionFixMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67880 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__,
      userId);
    byte_4B67880 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionFixEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionFixEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionFixMaster__TryGetEntity(
        UserEventMissionFixMaster_o *this,
        UserEventMissionFixEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67881 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__,
      entity);
    byte_4B67881 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionFixEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
}