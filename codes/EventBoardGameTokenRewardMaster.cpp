void __fastcall EventBoardGameTokenRewardMaster___ctor(
        EventBoardGameTokenRewardMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB5C0A & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__,
      method);
    byte_4AB5C0A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    308,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenRewardEntity_o *__fastcall EventBoardGameTokenRewardMaster__GetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB5C08 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4AB5C08 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenRewardEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return (EventBoardGameTokenRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31640E8 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__);
}


bool __fastcall EventBoardGameTokenRewardMaster__TryGetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        EventBoardGameTokenRewardEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB5C09 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__,
      entity);
    byte_4AB5C09 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenRewardEntity__CreatePK(eventId, questId, questPhase, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__);
}