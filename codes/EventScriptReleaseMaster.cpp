void EventScriptReleaseMaster___ctor(EventScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE7CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
    byte_4CEE7CE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptReleaseEntity_o *EventScriptReleaseMaster__GetEntity(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE7CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
    byte_4CEE7CC = 1;
  }
  PK = (Il2CppObject *)EventScriptReleaseEntity__CreatePK(
                         eventId,
                         flagId,
                         type,
                         targetId,
                         *(const MethodInfo **)&targetId);
  return (EventScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventScriptReleaseMaster__TryGetEntity(
        EventScriptReleaseMaster_o *this,
        EventScriptReleaseEntity_o **entity,
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE7CD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
    byte_4CEE7CD = 1;
  }
  PK = (Il2CppObject *)EventScriptReleaseEntity__CreatePK(eventId, flagId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventScriptReleaseMaster__EventScriptReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventScriptReleaseMaster__isAvailable(
        EventScriptReleaseMaster_o *this,
        int32_t eventId,
        int32_t flag,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  char v10; // w25
  int32_t v11; // w23

  if ( (byte_4CEE7CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventScriptReleaseEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventScriptReleaseEntity__get_Item__);
    byte_4CEE7CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventScriptReleaseEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventScriptReleaseEntity__get_Item__);
      if ( !list )
        break;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == flag )
      {
        if ( !EventScriptReleaseEntity__isAvailable((EventScriptReleaseEntity_o *)list, *(const MethodInfo **)&eventId) )
          goto LABEL_14;
        v10 = 1;
      }
      if ( v9 == ++v11 )
        return v10 & 1;
    }
LABEL_16:
    sub_1C7BD40(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  v10 = 0;
  return v10 & 1;
}