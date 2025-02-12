void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4777 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__, method);
    byte_4BB4777 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
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
  PartyOrganizationUtility_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  PartyOrganizationUtility_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x25
  EventQuestMaster___c_c *v28; // x8
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v30; // x28
  struct EventQuestMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const char *namespaze; // x8
  int v46; // w26
  int v47; // w27
  int32_t *v48; // x20
  int32_t v49; // w8
  int32_t v50; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10

  if ( (byte_4BB4779 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___, v12);
    sub_1C13D24(&System_Func_EventQuestEntity__int__TypeInfo, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1C13D24(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__, v19);
    sub_1C13D24(&EventQuestMaster___c_TypeInfo, v20);
    byte_4BB4779 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (PartyOrganizationUtility_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (PartyOrganizationUtility_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_2FB7F8C *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
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
      _9__6_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v30,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0LL);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v27,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (PartyOrganizationUtility_c *)System_Linq_Enumerable__ToArray_object_(
                                                                                 v38,
                                                                                 (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_1C13CC8(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int64_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  v46 = (_DWORD)namespaze - 1;
  if ( (int)namespaze >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      v48 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v47);
      if ( !v48 )
        break;
      v49 = v48[5];
      if ( !v49 && !v48[6] || v49 == questId && ((v50 = v48[6]) == 0 || v50 == phase) )
      {
        if ( !v22 )
          break;
        v24 = (unsigned int)v48[4];
        if ( v48[7] )
        {
          v23 = System_Collections_Generic_List_int___Contains(
                  v22,
                  v24,
                  (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v23 )
            v23 = System_Collections_Generic_List_int___Remove(
                    v22,
                    v48[4],
                    (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          items = v22->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v22,
              v24,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v22->fields._size = size + 1;
            items->m_Items[size + 1] = v24;
          }
        }
      }
      if ( v46 == v47 )
        goto LABEL_32;
      if ( (unsigned int)++v47 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_1C13F88(v23, v24);
    }
LABEL_34:
    sub_1C13F80(v23, v24);
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

  if ( (byte_4BB4775 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4BB4775 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_323D0DC *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22

  if ( (byte_4BB4778 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__, v5);
    byte_4BB4778 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                       (System_Collections_ObjectModel_Collection_T__o *)result,
                                       v9,
                                       (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.questId == questId )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1C13F80(result, *(_QWORD *)&questId);
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
  const MethodInfo_2FC8B9C *v29; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB477B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestGroupMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v17);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BB477B = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
        v29 = (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___;
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 v29);
      }
    }
LABEL_22:
    sub_1C13F80(Instance, v22);
  }
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_22;
  v23 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, nowTime, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v23 )
    goto LABEL_22;
  v24 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v32,
    v23,
    (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v33,
            (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
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
        sub_1C13F80(IsEventNotIncluded, v28);
      System_Collections_Generic_HashSet_int___Add(
        v20,
        current,
        (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v33,
    (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v29 = (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___;
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
        sub_1C13F88(EnabledEventCampaignForQuest, v9);
      v12 = EnabledEventCampaignForQuest->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.id != eventId && max_length != ++v11 )
        continue;
      return v11 >= max_length;
    }
LABEL_12:
    sub_1C13F80(EnabledEventCampaignForQuest, v9);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v19; // w24
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BB477A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&System_IDisposable_TypeInfo, v9);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo, v10);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v11);
    byte_4BB477A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v13);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventQuestEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo )
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
      v23 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      if ( v24[4] == eventId && v24[5] == questId )
      {
        v25 = v24[6];
        if ( !v25 || v25 == phase )
          goto LABEL_25;
      }
    }
  }
  v19 = 0;
LABEL_25:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v19 & 1;
}


void __fastcall EventQuestMaster__OnListChangedImplementation(
        EventQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x0
  System_NotImplementedException_o *v9; // x19
  __int64 v10; // x0

  if ( !e )
    sub_1C13F80(this, 0LL);
  if ( e->fields._action > 4u )
  {
    v8 = sub_1C13D38(&System_NotImplementedException_TypeInfo);
    v9 = (System_NotImplementedException_o *)sub_1C13F70(v8);
    System_NotImplementedException___ctor(v9, 0LL);
    v10 = sub_1C13D38(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_1C13E4C(v9, v10);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BB4776 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__, entity);
    byte_4BB4776 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB477C & 1) == 0 )
  {
    sub_1C13D24(&EventQuestMaster___c_TypeInfo, v1);
    byte_4BB477C = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventQuestMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return x->fields.isExcepted;
}