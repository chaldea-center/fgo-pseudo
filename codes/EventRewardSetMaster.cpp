void __fastcall EventRewardSetMaster___ctor(EventRewardSetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A948 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__, method);
    byte_418A948 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    138,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
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

  if ( (byte_418A946 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__,
      *(_QWORD *)&rewardSetType);
    byte_418A946 = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&id);
  return (EventRewardSetEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
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

  if ( (byte_418A947 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__, entity);
    byte_418A947 = 1;
  }
  PK = EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
}