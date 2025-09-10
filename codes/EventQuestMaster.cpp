void EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27375 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
    byte_4C27375 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


EventEntity_array *EventQuestMaster__GetEnabledEventCampaignForQuest(
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
  __int64 v13; // x2
  CGThumbnailListItem_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  CGThumbnailListItem_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x25
  EventQuestMaster___c_c *v17; // x8
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v19; // x28
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const char *namespaze; // x8
  int v27; // w26
  int v28; // w27
  int32_t *v29; // x20
  int32_t v30; // w8
  int32_t v31; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10

  if ( (byte_4C27377 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    sub_1C2D490(&System_Func_EventQuestEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__);
    sub_1C2D490(&EventQuestMaster___c_TypeInfo);
    byte_4C27377 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    v17 = EventQuestMaster___c_TypeInfo;
    if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
      v17 = EventQuestMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v17->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = EventQuestMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v19,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v21, v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v16,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_c *)System_Linq_Enumerable__ToArray_object_(
                                                                            v23,
                                                                            (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_1C2D434(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int32_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v24,
      v25);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  v27 = (_DWORD)namespaze - 1;
  if ( (int)namespaze >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v28);
      if ( !v29 )
        break;
      v30 = v29[5];
      if ( !v30 && !v29[6] || v30 == questId && ((v31 = v29[6]) == 0 || v31 == phase) )
      {
        if ( !v10 )
          break;
        v12 = (unsigned int)v29[4];
        if ( v29[7] )
        {
          v11 = System_Collections_Generic_List_int___Contains(
                  v10,
                  v12,
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v11 )
            v11 = System_Collections_Generic_List_int___Remove(
                    v10,
                    v29[4],
                    (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v10->fields._items;
          v33 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v12,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      if ( v27 == v28 )
        goto LABEL_32;
      if ( (unsigned int)++v28 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_1C2D6F4(v11, v12, v13);
    }
LABEL_34:
    sub_1C2D6EC(v11, v12);
  }
LABEL_32:
  if ( !Master_object )
    goto LABEL_34;
  return EventMaster__GetEnabledEntityListFromIds((EventMaster_o *)Master_object, type, v10, checkTime, 0);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *EventQuestMaster__GetEntity(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27373 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
    byte_4C27373 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_4C27376 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
    byte_4C27376 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
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
                                       (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.questId == questId )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C2D6EC(result, *(_QWORD *)&questId);
  }
  return 0;
}


System_Int32_array *EventQuestMaster__GetOngoingQuestTargetEventIds(
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
  const MethodInfo_310DE54 *v18; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C27379 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27379 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
        v18 = (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v18);
      }
    }
LABEL_22:
    sub_1C2D6EC(Instance, v11);
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v12 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0);
  if ( !v12 )
    goto LABEL_22;
  v13 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v21,
    v12,
    (const MethodInfo_363B308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3510488 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
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
        sub_1C2D6EC(IsEventNotIncluded, v17);
      System_Collections_Generic_HashSet_int___Add(
        v9,
        current,
        (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3510484 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v18 = (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___;
  EventValUpEventIdHash = v9;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
           v18);
}


bool EventQuestMaster__IsEventNotIncluded(
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
  __int64 v10; // x2
  int max_length; // w8
  int v12; // w9
  EventEntity_o *v13; // x10

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
    v12 = 0;
    while ( 1 )
    {
      if ( max_length == v12 )
        sub_1C2D6F4(EnabledEventCampaignForQuest, v9, v10);
      v13 = EnabledEventCampaignForQuest->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.id != eventId && max_length != ++v12 )
        continue;
      return v12 >= max_length;
    }
LABEL_12:
    sub_1C2D6EC(EnabledEventCampaignForQuest, v9);
  }
  v12 = 0;
  return v12 >= max_length;
}


bool EventQuestMaster__IsExistEvent(EventQuestMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  EventQuestMaster___c_c *v9; // x0
  System_Func_object__bool__o *_9__10_0; // x21
  Il2CppObject *v11; // x22
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21

  if ( (byte_4C2737A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_EventQuestEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventQuestEntity___);
    sub_1C2D490(&System_Func_EventQuestEntity__bool__TypeInfo);
    sub_1C2D490(&Method_EventQuestMaster___c__IsExistEvent_b__10_0__);
    sub_1C2D490(&Method_EventQuestMaster___c__DisplayClass10_0__IsExistEvent_b__1__);
    sub_1C2D490(&EventQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_1C2D490(&EventQuestMaster___c_TypeInfo);
    byte_4C2737A = 1;
  }
  v5 = sub_1C2D6DC(EventQuestMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  list = this->fields.list;
  v9 = EventQuestMaster___c_TypeInfo;
  if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v9 = EventQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v9->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventQuestMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v11, Method_EventQuestMaster___c__IsExistEvent_b__10_0__, 0);
    static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_EventQuestEntity__bool__o *)_9__10_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__10_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventQuestEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventQuestMaster___c__DisplayClass10_0__IsExistEvent_b__1__,
    0);
  return System_Linq_Enumerable__Any_object__51233692(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_30DC39C *)Method_System_Linq_Enumerable_Any_EventQuestEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool EventQuestMaster__IsExistQuest(
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
  __int64 v15; // x0
  char v16; // w24
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C27378 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C27378 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventQuestEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_16:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo, 0);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      if ( v21[4] == eventId && v21[5] == questId )
      {
        v22 = v21[6];
        if ( !v22 || v22 == phase )
          goto LABEL_25;
      }
    }
  }
  v16 = 0;
LABEL_25:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_29:
    v26 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v16 & 1;
}


void EventQuestMaster__OnListChangedImplementation(
        EventQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  System_NotImplementedException_o *v5; // x19
  __int64 v6; // x0

  if ( !e )
    sub_1C2D6EC(this, 0);
  if ( e->fields._action > 4u )
  {
    v4 = sub_1C2D4A4(&System_NotImplementedException_TypeInfo);
    v5 = (System_NotImplementedException_o *)sub_1C2D6DC(v4);
    System_NotImplementedException___ctor(v5, 0);
    v6 = sub_1C2D4A4(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_1C2D5B8(v5, v6);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache, 0, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
bool EventQuestMaster__TryGetEntity(
        EventQuestMaster_o *this,
        EventQuestEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27374 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
    byte_4C27374 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void EventQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2737B & 1) == 0 )
  {
    sub_1C2D490(&EventQuestMaster___c_TypeInfo);
    byte_4C2737B = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventQuestMaster___c___ctor(EventQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventQuestMaster___c___GetEnabledEventCampaignForQuest_b__6_0(
        EventQuestMaster___c_o *this,
        EventQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.isExcepted;
}


bool EventQuestMaster___c___IsExistEvent_b__10_0(
        EventQuestMaster___c_o *this,
        EventQuestEntity_o *entity,
        const MethodInfo *method)
{
  return entity != 0;
}


void EventQuestMaster___c__DisplayClass10_0___ctor(
        EventQuestMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventQuestMaster___c__DisplayClass10_0___IsExistEvent_b__1(
        EventQuestMaster___c__DisplayClass10_0_o *this,
        EventQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.eventId == this->fields.eventId;
}