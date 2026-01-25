void EventQuestCooltimeMaster___ctor(EventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE730 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string___ctor__);
    byte_4CEE730 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    322,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestCooltimeEntity_o *EventQuestCooltimeMaster__GetEntity(
        EventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE72E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__GetEntity__);
    byte_4CEE72E = 1;
  }
  PK = (Il2CppObject *)EventQuestCooltimeEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventQuestCooltimeMaster__TryGetEntity(
        EventQuestCooltimeMaster_o *this,
        EventQuestCooltimeEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE72F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__TryGetEntity__);
    byte_4CEE72F = 1;
  }
  PK = (Il2CppObject *)EventQuestCooltimeEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__TryGetEntity__);
}