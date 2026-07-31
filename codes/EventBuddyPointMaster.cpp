void EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938550 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
    byte_5938550 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
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

  if ( (byte_593854E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
    byte_593854E = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  EventBuddyPointEntity_o *result; // x0
  EventBuddyPointEntity_o *v10; // x25
  EventBuddyPointEntity_o *v11; // x24
  int32_t v12; // w23
  int32_t v13; // w8
  int32_t v14; // w8

  if ( (byte_5938551 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__);
    byte_5938551 = 1;
  }
  result = (EventBuddyPointEntity_o *)this->fields.list;
  if ( !result )
LABEL_19:
    sub_21FFECC(result, *(_QWORD *)&eventId);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__) )
  {
    result = (EventBuddyPointEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_19;
    result = (EventBuddyPointEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v12,
                                          (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__);
    if ( !result )
      goto LABEL_19;
    if ( result->fields.eventId == eventId )
    {
      v13 = result->fields.questId;
      if ( v13 >= 1 && v13 == questId )
      {
        v14 = result->fields.questPhase;
        if ( v14 >= 1 && v14 == questPhase )
          goto LABEL_21;
        if ( !v14 )
          v10 = result;
      }
      else if ( !v13 )
      {
        v11 = result;
      }
    }
    result = (EventBuddyPointEntity_o *)this->fields.list;
    ++v12;
    if ( !result )
      goto LABEL_19;
  }
  result = v10;
LABEL_21:
  if ( !result )
    return v11;
  return result;
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

  if ( (byte_593854F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
    byte_593854F = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}