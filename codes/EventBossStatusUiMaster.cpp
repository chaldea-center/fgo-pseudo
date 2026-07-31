void EventBossStatusUiMaster___ctor(EventBossStatusUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593854A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
    byte_593854A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    296,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBossStatusUiEntity_o *EventBossStatusUiMaster__GetEntity(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938548 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
    byte_5938548 = 1;
  }
  PK = (Il2CppObject *)EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventBossStatusUiEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__GetEntity__);
}


EventBossStatusUiEntity_o *EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
        EventBossStatusUiMaster_o *this,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  EventBossStatusUiEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  EventBossStatusUiMaster__TryGetEntity(this, &entity, eventId, index, v4);
  return entity;
}


// local variable allocation has failed, the output may be wrong!
bool EventBossStatusUiMaster__TryGetEntity(
        EventBossStatusUiMaster_o *this,
        EventBossStatusUiEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938549 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
    byte_5938549 = 1;
  }
  PK = (Il2CppObject *)EventBossStatusUiEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventBossStatusUiMaster__EventBossStatusUiEntity__string__TryGetEntity__);
}