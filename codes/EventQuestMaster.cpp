void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC4B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__, method);
    byte_49FC4B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
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
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *Master_object; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x24
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  EventQuestMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x25
  System_Func_object__int__o *_9__4_0; // x26
  Il2CppObject *v33; // x27
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  System_Object_array *v41; // x25
  int v42; // w26
  int v43; // w27
  int32_t *v44; // x20
  int32_t v45; // w8
  int32_t v46; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int64_t checkTimea; // [xsp+8h] [xbp-68h]

  if ( (byte_49FC4BA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___, v14);
    sub_1B640C8(&System_Func_EventQuestEntity__int__TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B640C8(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__, v21);
    sub_1B640C8(&EventQuestMaster___c_TypeInfo, v22);
    byte_49FC4BA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
  v30 = EventQuestMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  checkTimea = checkTime;
  if ( !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v30 = EventQuestMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v30->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = EventQuestMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventQuestEntity__int__TypeInfo, v28, v29);
    System_Func_object__int____ctor(
      _9__4_0,
      v33,
      Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__,
      0LL);
    static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventQuestEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          v37,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
  if ( !v38 )
    goto LABEL_33;
  v40 = *(_QWORD *)&v38->max_length;
  v41 = v38;
  v42 = v40 - 1;
  if ( (int)v40 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = (int32_t *)v41->m_Items[v43];
      if ( !v44 )
        break;
      v45 = v44[5];
      if ( !v45 && !v44[6] || v45 == questId && ((v46 = v44[6]) == 0 || v46 == phase) )
      {
        if ( !v26 )
          break;
        v39 = (unsigned int)v44[4];
        if ( v44[7] )
        {
          v38 = (System_Object_array *)System_Collections_Generic_List_int___Contains(
                                         v26,
                                         v39,
                                         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)v38 & 1) != 0 )
            v38 = (System_Object_array *)System_Collections_Generic_List_int___Remove(
                                           v26,
                                           v44[4],
                                           (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v26->fields._items;
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v26,
              v39,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v26->fields._size = size + 1;
            items->m_Items[size + 1] = v39;
          }
        }
      }
      if ( v42 == v43 )
        goto LABEL_31;
      if ( ++v43 >= v41->max_length )
        sub_1B6432C(v38, v39);
    }
LABEL_33:
    sub_1B64324(v38);
  }
LABEL_31:
  if ( !Master_object )
    goto LABEL_33;
  return EventMaster__GetEnabledEntityListFromIds((EventMaster_o *)Master_object, type, v26, checkTimea, 0LL);
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

  if ( (byte_49FC4B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_49FC4B6 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30D41FC *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
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

  if ( (byte_49FC4B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventQuestEntity_TypeInfo, v6);
    byte_49FC4B9 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                       (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1B64324(result);
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
  System_Collections_Generic_HashSet_int__o *v22; // x25
  int v23; // w24
  const MethodInfo *v24; // x6
  int32_t current; // w25
  _BOOL8 IsEventNotIncluded; // x0
  const MethodInfo_2E7122C *v27; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC4BC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49FC4BC = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
        v27 = (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v27);
      }
    }
LABEL_22:
    sub_1B64324(Instance);
  }
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&questPhase);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v22 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v22 )
    goto LABEL_22;
  v23 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v30,
    v22,
    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v31,
            (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v31.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v31.fields._current,
                           questId,
                           questPhase,
                           12,
                           nowTime,
                           v24);
    if ( v23 == current || !IsEventNotIncluded )
    {
      if ( !v20 )
        sub_1B64324(IsEventNotIncluded);
      System_Collections_Generic_HashSet_int___Add(
        v20,
        current,
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v31,
    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v27 = (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___;
  EventValUpEventIdHash = v20;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
           v27);
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
        sub_1B6432C(EnabledEventCampaignForQuest, v9);
      v12 = EnabledEventCampaignForQuest->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.id != eventId && max_length != ++v11 )
        continue;
      return v11 >= max_length;
    }
LABEL_12:
    sub_1B64324(EnabledEventCampaignForQuest);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v19; // w23
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 methodPtr_low; // x10
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FC4BB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&EventQuestEntity_TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_49FC4BB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v19 & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      methodPtr_low = LOBYTE(EventQuestEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) == EventQuestEntity_TypeInfo
        && v24[4] == eventId
        && v24[5] == questId )
      {
        v26 = v24[6];
        if ( !v26 || v26 == phase )
          goto LABEL_27;
      }
    }
  }
  v19 = 0;
LABEL_27:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_31;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_31:
    v30 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v19 & 1;
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

  if ( (byte_49FC4B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__, entity);
    byte_49FC4B7 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC4BD & 1) == 0 )
  {
    sub_1B640C8(&EventQuestMaster___c_TypeInfo, v1);
    byte_49FC4BD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventQuestMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall EventQuestMaster___c___ctor(EventQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventQuestMaster___c___GetEnabledEventCampaignForQuest_b__4_0(
        EventQuestMaster___c_o *this,
        EventQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.isExcepted;
}