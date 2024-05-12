void __fastcall NotEndEventMissionFixMaster___ctor(NotEndEventMissionFixMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BA85 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
    byte_438BA85 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    242,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
NotEndEventMissionFixEntity_o *__fastcall NotEndEventMissionFixMaster__GetEntity(
        NotEndEventMissionFixMaster_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438BA83 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
    byte_438BA83 = 1;
  }
  PK = NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&missionId);
  return (NotEndEventMissionFixEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall NotEndEventMissionFixMaster__TryGetEntity(
        NotEndEventMissionFixMaster_o *this,
        NotEndEventMissionFixEntity_o **entity,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438BA84 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
    byte_438BA84 = 1;
  }
  PK = NotEndEventMissionFixEntity__CreatePK(eventId, missionId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_NotEndEventMissionFixMaster__NotEndEventMissionFixEntity__string__TryGetEntity__);
}