void __fastcall EventRewardSetMaster___ctor(EventRewardSetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B344E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
    byte_42B344E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    139,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
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

  if ( (byte_42B344C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
    byte_42B344C = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&id);
  return (EventRewardSetEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
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

  if ( (byte_42B344D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
    byte_42B344D = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
}