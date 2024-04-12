void __fastcall EventItemDisplayGroupMaster___ctor(EventItemDisplayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B112E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
    byte_42B112E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    164,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayGroupEntity_o *__fastcall EventItemDisplayGroupMaster__GetEntity(
        EventItemDisplayGroupMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B112C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
    byte_42B112C = 1;
  }
  PK = EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&groupIndex);
  return (EventItemDisplayGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemDisplayGroupMaster__TryGetEntity(
        EventItemDisplayGroupMaster_o *this,
        EventItemDisplayGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B112D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
    byte_42B112D = 1;
  }
  PK = EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
}