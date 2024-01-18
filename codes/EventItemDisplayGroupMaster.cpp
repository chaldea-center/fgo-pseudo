void __fastcall EventItemDisplayGroupMaster___ctor(EventItemDisplayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188D43 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__, method);
    byte_4188D43 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    163,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayGroupEntity_o *__fastcall EventItemDisplayGroupMaster__GetEntity(
        EventItemDisplayGroupMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188D41 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4188D41 = 1;
  }
  PK = EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&groupIndex);
  return (EventItemDisplayGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
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

  if ( (byte_4188D42 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__,
      entity);
    byte_4188D42 = 1;
  }
  PK = EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
}