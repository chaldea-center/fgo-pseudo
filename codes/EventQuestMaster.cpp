void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FF12 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__, method);
    byte_4A6FF12 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventEntity_array *__fastcall EventQuestMaster__GetEnabledEventCampaignForQuest(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t checkTime,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_int__o *v22; // x24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  ServantStatusBattleListViewItem_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  ServantStatusBattleListViewItem_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x25
  EventQuestMaster___c_c *v28; // x8
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v30; // x28
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const char *namespaze; // x8
  int v38; // w26
  int v39; // w27
  int32_t *v40; // x20
  int32_t v41; // w8
  int32_t v42; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10

  if ( (byte_4A6FF14 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_1B90010(&DataManager_TypeInfo, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___, v12);
    sub_1B90010(&System_Func_EventQuestEntity__int__TypeInfo, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B90010(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__, v19);
    sub_1B90010(&EventQuestMaster___c_TypeInfo, v20);
    byte_4A6FF14 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    v28 = EventQuestMaster___c_TypeInfo;
    if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
      v28 = EventQuestMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v28->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = EventQuestMaster___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v30,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0LL);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v27,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (ServantStatusBattleListViewItem_c *)System_Linq_Enumerable__ToArray_object_(
                                                                                        v34,
                                                                                        (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_1B8FFB4(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int32_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v35,
      v36);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  v38 = (_DWORD)namespaze - 1;
  if ( (int)namespaze >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v39);
      if ( !v40 )
        break;
      v41 = v40[5];
      if ( !v41 && !v40[6] || v41 == questId && ((v42 = v40[6]) == 0 || v42 == phase) )
      {
        if ( !v22 )
          break;
        v24 = (unsigned int)v40[4];
        if ( v40[7] )
        {
          v23 = System_Collections_Generic_List_int___Contains(
                  v22,
                  v24,
                  (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v23 )
            v23 = System_Collections_Generic_List_int___Remove(
                    v22,
                    v40[4],
                    (const MethodInfo_34F4E98 *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v22->fields._items;
          v44 = Method_System_Collections_Generic_List_int__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v22,
              v24,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v22->fields._size = size + 1;
            items->m_Items[size + 1] = v24;
          }
        }
      }
      if ( v38 == v39 )
        goto LABEL_32;
      if ( (unsigned int)++v39 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_1B90274(v23, v24);
    }
LABEL_34:
    sub_1B9026C(v23, v24);
  }
LABEL_32:
  if ( !Master_object )
    goto LABEL_34;
  return EventMaster__GetEnabledEntityListFromIds((EventMaster_o *)Master_object, type, v22, checkTime, 0LL);
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

  if ( (byte_4A6FF10 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4A6FF10 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_312C900 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4A6FF13 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&EventQuestEntity_TypeInfo, v6);
    byte_4A6FF13 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v10,
                                       (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B9026C(result, *(_QWORD *)&questId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventQuestMaster__GetOngoingQuestTargetEventIds(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_HashSet_int__o *v20; // x23
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  System_Collections_Generic_HashSet_int__o *v23; // x25
  int v24; // w24
  const MethodInfo *v25; // x6
  int32_t current; // w25
  _BOOL8 IsEventNotIncluded; // x0
  __int64 v28; // x1
  const MethodInfo_2EC6DFC *v29; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A6FF16 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&questId);
    sub_1B90010(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1B90010(&DataManager_TypeInfo, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v16);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor__, v17);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A6FF16 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
        v29 = (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v29);
      }
    }
LABEL_22:
    sub_1B9026C(Instance, v22);
  }
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v23 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v23 )
    goto LABEL_22;
  v24 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v32,
    v23,
    (const MethodInfo_33C5F4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v33,
            (const MethodInfo_3285E1C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v33.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v33.fields._current,
                           questId,
                           questPhase,
                           12,
                           nowTime,
                           v25);
    if ( v24 == current || !IsEventNotIncluded )
    {
      if ( !v20 )
        sub_1B9026C(IsEventNotIncluded, v28);
      System_Collections_Generic_HashSet_int___Add(
        v20,
        current,
        (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v33,
    (const MethodInfo_3285E18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v29 = (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___;
  EventValUpEventIdHash = v20;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
           v29);
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
        sub_1B90274(EnabledEventCampaignForQuest, v9);
      v12 = EnabledEventCampaignForQuest->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.id != eventId && max_length != ++v11 )
        continue;
      return v11 >= max_length;
    }
LABEL_12:
    sub_1B9026C(EnabledEventCampaignForQuest, v9);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v20; // w23
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 methodPtr_low; // x10
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A6FF15 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B90010(&EventQuestEntity_TypeInfo, v9);
    sub_1B90010(&System_IDisposable_TypeInfo, v10);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4A6FF15 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v20 & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(EventQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) == EventQuestEntity_TypeInfo
        && v25[4] == eventId
        && v25[5] == questId )
      {
        v27 = v25[6];
        if ( !v27 || v27 == phase )
          goto LABEL_27;
      }
    }
  }
  v20 = 0;
LABEL_27:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v20 & 1;
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
    sub_1B9026C(this, 0LL);
  if ( e->fields._action > 4u )
  {
    v4 = sub_1B90024(&System_NotImplementedException_TypeInfo);
    v5 = (System_NotImplementedException_o *)sub_1B9025C(v4);
    System_NotImplementedException___ctor(v5, 0LL);
    v6 = sub_1B90024(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_1B90138(v5, v6);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0LL;
  sub_1B8FFB4(
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

  if ( (byte_4A6FF11 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__, entity);
    byte_4A6FF11 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FF17 & 1) == 0 )
  {
    sub_1B90010(&EventQuestMaster___c_TypeInfo, v1);
    byte_4A6FF17 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)EventQuestMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, 0LL);
  return x->fields.isExcepted;
}