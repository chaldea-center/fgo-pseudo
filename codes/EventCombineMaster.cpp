void EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938592 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
    byte_5938592 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    90,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938590 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
    byte_5938590 = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventCombineMaster__TryGetEntity(
        EventCombineMaster_o *this,
        EventCombineEntity_o **entity,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938591 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
    byte_5938591 = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}