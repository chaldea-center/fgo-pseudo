void __fastcall UserEventMissionFixMaster___ctor(UserEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__, method);
    byte_4188B7C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    240,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionFixEntity_o *__fastcall UserEventMissionFixMaster__GetEntity(
        UserEventMissionFixMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188B7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__, userId);
    byte_4188B7A = 1;
  }
  PK = UserEventMissionFixEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionFixEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionFixMaster__TryGetEntity(
        UserEventMissionFixMaster_o *this,
        UserEventMissionFixEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188B7B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__,
      entity);
    byte_4188B7B = 1;
  }
  PK = UserEventMissionFixEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventMissionFixMaster__UserEventMissionFixEntity__string__TryGetEntity__);
}