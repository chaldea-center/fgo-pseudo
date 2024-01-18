void __fastcall EventRandomMissionMaster___ctor(EventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418875E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__, method);
    byte_418875E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    394,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRandomMissionEntity_o *__fastcall EventRandomMissionMaster__GetEntity(
        EventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418875F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_418875F = 1;
  }
  PK = EventRandomMissionEntity__CreatePK(missionId, *(const MethodInfo **)&missionId);
  return (EventRandomMissionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__GetEntity__);
}


bool __fastcall EventRandomMissionMaster__TryGetEntity(
        EventRandomMissionMaster_o *this,
        EventRandomMissionEntity_o **entity,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188760 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_4188760 = 1;
  }
  PK = EventRandomMissionEntity__CreatePK(missionId, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRandomMissionMaster__EventRandomMissionEntity__string__TryGetEntity__);
}