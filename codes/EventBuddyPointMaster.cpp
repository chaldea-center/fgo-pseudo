void EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42E8B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
    byte_4C42E8B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    405,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *EventBuddyPointMaster__GetEntity(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42E89 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
    byte_4C42E89 = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


EventBuddyPointEntity_o *EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *list; // x0
  EventBuddyPointEntity_o *v10; // x25
  EventBuddyPointEntity_o *v11; // x24
  int32_t v12; // w23
  int v13; // w8
  int v14; // w8

  if ( (byte_4C42E8C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__);
    byte_4C42E8C = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C372B4(list);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v12,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__);
    if ( !list )
      goto LABEL_19;
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v13 = *((_DWORD *)list + 5);
      if ( v13 >= 1 && v13 == questId )
      {
        v14 = *((_DWORD *)list + 6);
        if ( v14 >= 1 && v14 == questPhase )
        {
          v10 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v14 )
          v10 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v13 )
      {
        v11 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_19;
  }
  if ( v10 )
    return v10;
  else
    return v11;
}


// local variable allocation has failed, the output may be wrong!
bool EventBuddyPointMaster__TryGetEntity(
        EventBuddyPointMaster_o *this,
        EventBuddyPointEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42E8A & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
    byte_4C42E8A = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}