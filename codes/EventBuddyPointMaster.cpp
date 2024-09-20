void __fastcall EventBuddyPointMaster___ctor(EventBuddyPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B050 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
    byte_4A5B050 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    399,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string___ctor__);
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

  if ( (byte_4A5B04E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
    byte_4A5B04E = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questPhase);
  return (EventBuddyPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBuddyPointEntity_o *__fastcall EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
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
  __int64 methodPtr_low; // x10
  int v14; // w8
  int v15; // w8

  if ( (byte_4A5B051 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventBuddyPointEntity_TypeInfo);
    byte_4A5B051 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v12,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      v14 = *((_DWORD *)list + 5);
      if ( v14 >= 1 && v14 == questId )
      {
        v15 = *((_DWORD *)list + 6);
        if ( v15 >= 1 && v15 == questPhase )
        {
          v10 = (EventBuddyPointEntity_o *)list;
          break;
        }
        if ( !v15 )
          v10 = (EventBuddyPointEntity_o *)list;
      }
      else if ( !v14 )
      {
        v11 = (EventBuddyPointEntity_o *)list;
      }
    }
    list = this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_21;
  }
  if ( v10 )
    return v10;
  else
    return v11;
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

  if ( (byte_4A5B04F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
    byte_4A5B04F = 1;
  }
  PK = (Il2CppObject *)EventBuddyPointEntity__CreatePK(eventId, questId, questPhase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventBuddyPointMaster__EventBuddyPointEntity__string__TryGetEntity__);
}