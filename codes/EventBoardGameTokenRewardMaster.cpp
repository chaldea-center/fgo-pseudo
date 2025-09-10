void EventBoardGameTokenRewardMaster___ctor(EventBoardGameTokenRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2716B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__);
    byte_4C2716B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    314,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenRewardEntity_o *EventBoardGameTokenRewardMaster__GetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27169 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__);
    byte_4C27169 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenRewardEntity__CreatePK(
                         eventId,
                         questId,
                         questPhase,
                         *(const MethodInfo **)&questPhase);
  return (EventBoardGameTokenRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_338C850 *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventBoardGameTokenRewardMaster__TryGetEntity(
        EventBoardGameTokenRewardMaster_o *this,
        EventBoardGameTokenRewardEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2716A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__);
    byte_4C2716A = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenRewardEntity__CreatePK(
                         eventId,
                         questId,
                         questPhase,
                         *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventBoardGameTokenRewardMaster__EventBoardGameTokenRewardEntity__string__TryGetEntity__);
}