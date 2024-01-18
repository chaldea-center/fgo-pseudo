void __fastcall EventRewardExtraMaster___ctor(EventRewardExtraMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184860 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__, method);
    byte_4184860 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    131,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardExtraEntity_o *__fastcall EventRewardExtraMaster__GetEntity(
        EventRewardExtraMaster_o *this,
        int32_t eventId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418485E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418485E = 1;
  }
  PK = EventRewardExtraEntity__CreatePK(eventId, point, (const MethodInfo *)point);
  return (EventRewardExtraEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardExtraMaster__TryGetEntity(
        EventRewardExtraMaster_o *this,
        EventRewardExtraEntity_o **entity,
        int32_t eventId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418485F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__, entity);
    byte_418485F = 1;
  }
  PK = EventRewardExtraEntity__CreatePK(eventId, point, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__);
}