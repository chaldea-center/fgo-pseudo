void EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C773 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
    byte_4D2C773 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    90,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C771 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
    byte_4D2C771 = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_345FF78 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *EventCombineMaster__GetTargetEntitiyList(
        EventCombineMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  EventCombineEntity_o *result; // x0

  if ( (byte_4D2C774 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventCombineEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventCombineEntity__get_Item__);
    byte_4D2C774 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventCombineEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventCombineEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v8,
                                         (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventCombineEntity__get_Item__);
      if ( result && (targetType < 1 || result->fields.target == targetType) )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_13:
    sub_1C942F0(list, *(_QWORD *)&targetType);
  }
  return 0;
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

  if ( (byte_4D2C772 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
    byte_4D2C772 = 1;
  }
  PK = (Il2CppObject *)EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}