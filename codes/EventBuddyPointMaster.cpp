void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7989 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__, method);
    byte_4BC7989 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    403,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntity(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7987 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC7987 = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_324D130 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
        EventBuddyPointMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *list; // x0
  EventBuddyPointEntity_o *v11; // x25
  EventBuddyPointEntity_o *v12; // x24
  int32_t v13; // w23
  int v14; // w8
  int v15; // w8

  if ( (byte_4BC798A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__, v9);
    byte_4BC798A = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C1AE30(list, *(_QWORD *)&eventId);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v13,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventBuddyPointEntity__get_Item__);
    if ( !list )
      goto LABEL_19;
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v14 = *((_DWORD *)list + 5);
      if ( v14 >= 1 && v14 == questId )
      {
        v15 = *((_DWORD *)list + 6);
        if ( v15 >= 1 && v15 == questPhase )
        {
          v11 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v15 )
          v11 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v14 )
      {
        v12 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_19;
  }
  if ( v11 )
    return v11;
  else
    return v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointMaster__TryGetEntity(
        EventBuddyPointMaster_o *this,
        EventBuddyPointEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7988 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__, entity);
    byte_4BC7988 = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}