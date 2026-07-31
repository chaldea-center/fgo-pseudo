void EventItemDisplayGroupMaster___ctor(EventItemDisplayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593865C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
    byte_593865C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayGroupEntity_o *EventItemDisplayGroupMaster__GetEntity(
        EventItemDisplayGroupMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593865A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
    byte_593865A = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&groupIndex);
  return (EventItemDisplayGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventItemDisplayGroupMaster__TryGetEntity(
        EventItemDisplayGroupMaster_o *this,
        EventItemDisplayGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593865B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
    byte_593865B = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
}