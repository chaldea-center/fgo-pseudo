void __fastcall EventRewardExtraMaster___ctor(EventRewardExtraMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387ECA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__);
    byte_4387ECA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    132,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__);
}


EventRewardExtraEntity_o *__fastcall EventRewardExtraMaster__GetEntity(
        EventRewardExtraMaster_o *this,
        int32_t eventId,
        int64_t point,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4387EC8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__);
    byte_4387EC8 = 1;
  }
  PK = EventRewardExtraEntity__CreatePK(eventId, point, (const MethodInfo *)point);
  return (EventRewardExtraEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__);
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

  if ( (byte_4387EC9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__);
    byte_4387EC9 = 1;
  }
  PK = EventRewardExtraEntity__CreatePK(eventId, point, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__);
}