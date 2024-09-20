void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B207 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
    byte_4A5B207 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


EventEntity_array *__fastcall EventQuestMaster__GetEnabledEventCampaignForQuest(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t checkTime,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_int__o *v10; // x24
  _BOOL8 v11; // x0
  __int64 v12; // x1
  ServantStatusBattleListViewItem_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  ServantStatusBattleListViewItem_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x25
  EventQuestMaster___c_c *v16; // x8
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v18; // x28
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const char *namespaze; // x8
  int v26; // w26
  int v27; // w27
  int32_t *v28; // x20
  int32_t v29; // w8
  int32_t v30; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4A5B209 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    sub_1B885B0(&System_Func_EventQuestEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__);
    sub_1B885B0(&EventQuestMaster___c_TypeInfo);
    byte_4A5B209 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    v16 = EventQuestMaster___c_TypeInfo;
    if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
      v16 = EventQuestMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v16->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = EventQuestMaster___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v18,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0LL);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v15,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_c *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v22,
                                                                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_1B88554(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int32_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v23,
      v24);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  v26 = (_DWORD)namespaze - 1;
  if ( (int)namespaze >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v27);
      if ( !v28 )
        break;
      v29 = v28[5];
      if ( !v29 && !v28[6] || v29 == questId && ((v30 = v28[6]) == 0 || v30 == phase) )
      {
        if ( !v10 )
          break;
        v12 = (unsigned int)v28[4];
        if ( v28[7] )
        {
          v11 = System_Collections_Generic_List_int___Contains(
                  v10,
                  v12,
                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v11 )
            v11 = System_Collections_Generic_List_int___Remove(
                    v10,
                    v28[4],
                    (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v10->fields._items;
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v12,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size + 1] = v12;
          }
        }
      }
      if ( v26 == v27 )
        goto LABEL_32;
      if ( (unsigned int)++v27 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_1B88814(v11, v12);
    }
LABEL_34:
    sub_1B8880C(v11, v12);
  }
LABEL_32:
  if ( !Master_object )
    goto LABEL_34;
  return EventMaster__GetEnabledEntityListFromIds((EventMaster_o *)Master_object, type, v10, checkTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetEntity(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B205 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
    byte_4A5B205 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B208 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventQuestEntity_TypeInfo);
    byte_4A5B208 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v8,
                                       (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      methodPtr_low = LOBYTE(EventQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventQuestEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventQuestEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.questId == questId )
        return result;
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(result, *(_QWORD *)&questId);
  }
  return 0LL;
}


System_Int32_array *__fastcall EventQuestMaster__GetOngoingQuestTargetEventIds(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x25
  int v13; // w24
  const MethodInfo *v14; // x6
  int32_t current; // w25
  _BOOL8 IsEventNotIncluded; // x0
  __int64 v17; // x1
  const MethodInfo_2EB854C *v18; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B20B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B20B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
        v18 = (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v18);
      }
    }
LABEL_22:
    sub_1B8880C(Instance, v11);
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v12 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v12 )
    goto LABEL_22;
  v13 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v21,
    v12,
    (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v22.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v22.fields._current,
                           questId,
                           questPhase,
                           12,
                           nowTime,
                           v14);
    if ( v13 == current || !IsEventNotIncluded )
    {
      if ( !v9 )
        sub_1B8880C(IsEventNotIncluded, v17);
      System_Collections_Generic_HashSet_int___Add(
        v9,
        current,
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v18 = (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___;
  EventValUpEventIdHash = v9;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
           v18);
}


bool __fastcall EventQuestMaster__IsEventNotIncluded(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        int32_t type,
        int64_t nowTime,
        const MethodInfo *method)
{
  EventEntity_array *EnabledEventCampaignForQuest; // x0
  __int64 v9; // x1
  int max_length; // w8
  int v11; // w9
  EventEntity_o *v12; // x10

  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   this,
                                   questId,
                                   questPhase,
                                   nowTime,
                                   type,
                                   (const MethodInfo *)nowTime);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_12;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( max_length == v11 )
        sub_1B88814(EnabledEventCampaignForQuest, v9);
      v12 = EnabledEventCampaignForQuest->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.id != eventId && max_length != ++v11 )
        continue;
      return v11 >= max_length;
    }
LABEL_12:
    sub_1B8880C(EnabledEventCampaignForQuest, v9);
  }
  v11 = 0;
  return v11 >= max_length;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventQuestMaster__IsExistQuest(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v16; // w23
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 methodPtr_low; // x10
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B20A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventQuestEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B20A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      methodPtr_low = LOBYTE(EventQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) == EventQuestEntity_TypeInfo
        && v21[4] == eventId
        && v21[5] == questId )
      {
        v23 = v21[6];
        if ( !v23 || v23 == phase )
          goto LABEL_27;
      }
    }
  }
  v16 = 0;
LABEL_27:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_31;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_31:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v16 & 1;
}


void __fastcall EventQuestMaster__OnListChangedImplementation(
        EventQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v4; // x0
  System_NotImplementedException_o *v5; // x19
  __int64 v6; // x0

  if ( !e )
    sub_1B8880C(this, 0LL);
  if ( e->fields._action > 4u )
  {
    v4 = sub_1B885C4(&System_NotImplementedException_TypeInfo);
    v5 = (System_NotImplementedException_o *)sub_1B887FC(v4);
    System_NotImplementedException___ctor(v5, 0LL);
    v6 = sub_1B885C4(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_1B886D8(v5, v6);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache,
    0,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventQuestMaster__TryGetEntity(
        EventQuestMaster_o *this,
        EventQuestEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B206 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
    byte_4A5B206 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B20C & 1) == 0 )
  {
    sub_1B885B0(&EventQuestMaster___c_TypeInfo);
    byte_4A5B20C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventQuestMaster___c___ctor(EventQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventQuestMaster___c___GetEnabledEventCampaignForQuest_b__6_0(
        EventQuestMaster___c_o *this,
        EventQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isExcepted;
}