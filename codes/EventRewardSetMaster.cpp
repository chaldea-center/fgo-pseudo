void __fastcall EventRewardSetMaster___ctor(EventRewardSetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438EC5F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
    byte_438EC5F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    139,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSetEntity_o *__fastcall EventRewardSetMaster__GetEntity(
        EventRewardSetMaster_o *this,
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438EC5D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
    byte_438EC5D = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&id);
  return (EventRewardSetEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSetMaster__TryGetEntity(
        EventRewardSetMaster_o *this,
        EventRewardSetEntity_o **entity,
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438EC5E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
    byte_438EC5E = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
}