void __fastcall EventBoardGameTokenRewardMaster___ctor(
        EventBoardGameTokenRewardMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A221 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__,
      method);
    byte_418A221 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    306,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenRewardEntity_o *__fastcall EventBoardGameTokenRewardMaster__GetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A21F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A21F = 1;
  }
  PK = EventBoardGameTokenRewardEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBoardGameTokenRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_24E4520 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBoardGameTokenRewardMaster__TryGetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        EventBoardGameTokenRewardEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A220 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__,
      entity);
    byte_418A220 = 1;
  }
  PK = EventBoardGameTokenRewardEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__);
}