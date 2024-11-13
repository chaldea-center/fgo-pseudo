void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__, method, v2);
    byte_4B160DD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    399,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
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

  if ( (byte_4B160DB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&questId);
    byte_4B160DB = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *list; // x0
  EventBuddyPointEntity_o *v14; // x25
  EventBuddyPointEntity_o *v15; // x24
  int32_t v16; // w23
  __int64 methodPtr_low; // x10
  int v18; // w8
  int v19; // w8

  if ( (byte_4B160DE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventBuddyPointEntity_TypeInfo, v11, v12);
    byte_4B160DE = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_21:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v16,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_21;
    methodPtr_low = LOBYTE(EventBuddyPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventBuddyPointEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventBuddyPointEntity_TypeInfo )
    {
      goto LABEL_21;
    }
    if ( *((_DWORD *)list + 4) == eventId )
    {
      v18 = *((_DWORD *)list + 5);
      if ( v18 >= 1 && v18 == questId )
      {
        v19 = *((_DWORD *)list + 6);
        if ( v19 >= 1 && v19 == questPhase )
        {
          v14 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v19 )
          v14 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v18 )
      {
        v15 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_21;
  }
  if ( v14 )
    return v14;
  else
    return v15;
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

  if ( (byte_4B160DC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B160DC = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}