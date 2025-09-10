void EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27355 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
    byte_4C27355 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointEntity_o *EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27353 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
    byte_4C27353 = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventPointMaster__TryGetEntity(
        EventPointMaster_o *this,
        EventPointEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27354 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
    byte_4C27354 = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}