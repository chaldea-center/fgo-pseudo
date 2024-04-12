void __fastcall UserEventMissionFixMaster___ctor(UserEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1569 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
    byte_42B1569 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    241,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionFixEntity_o *__fastcall UserEventMissionFixMaster__GetEntity(
        UserEventMissionFixMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1567 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
    byte_42B1567 = 1;
  }
  PK = UserEventMissionFixEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionFixEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionFixMaster__TryGetEntity(
        UserEventMissionFixMaster_o *this,
        UserEventMissionFixEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1568 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
    byte_42B1568 = 1;
  }
  PK = UserEventMissionFixEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
}