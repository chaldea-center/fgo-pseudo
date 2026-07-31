void EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593882B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
    byte_593882B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointEntity_o *EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938829 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
    byte_5938829 = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
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

  if ( (byte_593882A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
    byte_593882A = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}