void EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43063 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
    byte_4C43063 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
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
  CGThumbnailListItem_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  CGThumbnailListItem_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x25
  EventQuestMaster___c_c *v15; // x8
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v17; // x28
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const char *namespaze; // x8
  int v25; // w26
  int v26; // w27
  int32_t *v27; // x20
  int32_t v28; // w8
  int32_t v29; // w8
  int32_t v30; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4C43065 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    sub_1C37058(&System_Func_EventQuestEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__);
    sub_1C37058(&EventQuestMaster___c_TypeInfo);
    byte_4C43065 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    v15 = EventQuestMaster___c_TypeInfo;
    if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
      v15 = EventQuestMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v15->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = EventQuestMaster___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v17,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v14,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (CGThumbnailListItem_c *)System_Linq_Enumerable__ToArray_object_(
                                                                            v21,
                                                                            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_1C36FFC(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int32_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v22,
      v23);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  v25 = (_DWORD)namespaze - 1;
  if ( (int)namespaze >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v26);
      if ( !v27 )
        break;
      v28 = v27[5];
      if ( !v28 && !v27[6] || v28 == questId && ((v29 = v27[6]) == 0 || v29 == phase) )
      {
        if ( !v10 )
          break;
        v30 = v27[4];
        if ( v27[7] )
        {
          v11 = System_Collections_Generic_List_int___Contains(
                  v10,
                  v30,
                  (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v11 )
            v11 = System_Collections_Generic_List_int___Remove(
                    v10,
                    v27[4],
                    (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v10->fields._items;
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v30,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size] = v30;
          }
        }
      }
      if ( v25 == v26 )
        goto LABEL_32;
      if ( (unsigned int)++v26 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_1C372BC(v11);
    }
LABEL_34:
    sub_1C372B4(v11);
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

  if ( (byte_4C43061 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
    byte_4C43061 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


EventQuestEntity_o *EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_4C43064 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
    byte_4C43064 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
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
                                       (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.questId == questId )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_1C372B4(result);
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
  System_Collections_Generic_HashSet_int__o *v11; // x25
  int v12; // w24
  const MethodInfo *v13; // x6
  int32_t current; // w25
  _BOOL8 IsEventNotIncluded; // x0
  const MethodInfo_312715C *v16; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C43067 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43067 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
        v16 = (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v16);
      }
    }
LABEL_22:
    sub_1C372B4(Instance);
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v11 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0);
  if ( !v11 )
    goto LABEL_22;
  v12 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v19,
    v11,
    (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v20.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v20.fields._current,
                           questId,
                           questPhase,
                           12,
                           nowTime,
                           v13);
    if ( v12 == current || !IsEventNotIncluded )
    {
      if ( !v9 )
        sub_1C372B4(IsEventNotIncluded);
      System_Collections_Generic_HashSet_int___Add(
        v9,
        current,
        (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v16 = (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___;
  EventValUpEventIdHash = v9;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
           v16);
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
  int max_length; // w8
  int v10; // w9
  EventEntity_o *v11; // x10

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
    v10 = 0;
    while ( 1 )
    {
      if ( max_length == v10 )
        sub_1C372BC(EnabledEventCampaignForQuest);
      v11 = EnabledEventCampaignForQuest->m_Items[v10];
      if ( !v11 )
        break;
      if ( v11->fields.id != eventId && max_length != ++v10 )
        continue;
      return v10 >= max_length;
    }
LABEL_12:
    sub_1C372B4(EnabledEventCampaignForQuest);
  }
  v10 = 0;
  return v10 >= max_length;
}


bool EventQuestMaster__IsExistEvent(EventQuestMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  EventQuestMaster___c_c *v8; // x0
  System_Func_object__bool__o *_9__10_0; // x21
  Il2CppObject *v10; // x22
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4C43068 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_EventQuestEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventQuestEntity___);
    sub_1C37058(&System_Func_EventQuestEntity__bool__TypeInfo);
    sub_1C37058(&Method_EventQuestMaster___c__IsExistEvent_b__10_0__);
    sub_1C37058(&Method_EventQuestMaster___c__DisplayClass10_0__IsExistEvent_b__1__);
    sub_1C37058(&EventQuestMaster___c__DisplayClass10_0_TypeInfo);
    sub_1C37058(&EventQuestMaster___c_TypeInfo);
    byte_4C43068 = 1;
  }
  v5 = sub_1C372A4(EventQuestMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = eventId;
  list = this->fields.list;
  v8 = EventQuestMaster___c_TypeInfo;
  if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v8 = EventQuestMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v8->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventQuestMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v10, Method_EventQuestMaster___c__IsExistEvent_b__10_0__, 0);
    static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_EventQuestEntity__bool__o *)_9__10_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__10_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventQuestEntity___);
  v15 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventQuestMaster___c__DisplayClass10_0__IsExistEvent_b__1__,
    0);
  return System_Linq_Enumerable__Any_object__51336868(
           v14,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_EventQuestEntity___);
}


bool EventQuestMaster__IsExistQuest(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  char v15; // w24
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  _DWORD *v20; // x0
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C43066 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C43066 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventQuestEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo, 0);
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      if ( v20[4] == eventId && v20[5] == questId )
      {
        v21 = v20[6];
        if ( !v21 || v21 == phase )
          goto LABEL_25;
      }
    }
  }
  v15 = 0;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_29:
    v25 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
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
    sub_1C372B4(this);
  if ( e->fields._action > 4u )
  {
    v4 = sub_1C3706C(&System_NotImplementedException_TypeInfo);
    v5 = (System_NotImplementedException_o *)sub_1C372A4(v4);
    System_NotImplementedException___ctor(v5, 0);
    v6 = sub_1C3706C(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_1C37180(v5, v6);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache, 0, (int32_t)method, v3);
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

  if ( (byte_4C43062 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
    byte_4C43062 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void EventQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43069 & 1) == 0 )
  {
    sub_1C37058(&EventQuestMaster___c_TypeInfo);
    byte_4C43069 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventQuestMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return entity->fields.eventId == this->fields.eventId;
}