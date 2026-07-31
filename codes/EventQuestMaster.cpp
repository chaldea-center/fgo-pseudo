void EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593884B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
    byte_593884B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    86,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


System_Collections_Generic_HashSet_int__o *EventQuestMaster__GetAddPassiveCampaignsEventIds(
        EventQuestMaster_o *this,
        System_Int32_array *eventIds,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v8; // x19
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *AddPassiveCampaigns; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x22
  _BOOL8 IsPassiveCampaignApplicable; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5938850 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_21FFC50(&PartyOrganizationUtility_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5938850 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)eventIds,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    sub_21FFECC(Instance, v12);
  AddPassiveCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetAddPassiveCampaigns(
                                                                       (EventCampaignMaster_o *)Master_object,
                                                                       (int64_t)Instance[8].monitor,
                                                                       0);
  if ( AddPassiveCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      AddPassiveCampaigns,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v14);
      IsPassiveCampaignApplicable = PartyOrganizationUtility__IsPassiveCampaignApplicable(
                                      (EventCampaignEntity_o *)current,
                                      questId,
                                      questPhase,
                                      0);
      if ( IsPassiveCampaignApplicable )
      {
        if ( !current )
          sub_21FFECC(IsPassiveCampaignApplicable, v17);
        if ( !v8 )
          sub_21FFECC(IsPassiveCampaignApplicable, v17);
        System_Collections_Generic_HashSet_int___Add(
          v8,
          *(_DWORD *)((char *)&word_10 + (_QWORD)current),
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v13; // x4
  MissionNaviTransitionBoardItem_c *eventQuestEntitiesOrderedByIsExceptedCache; // x25
  MissionNaviTransitionBoardItem_o *p_eventQuestEntitiesOrderedByIsExceptedCache; // x27
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x25
  EventQuestMaster___c_c *v18; // x8
  struct EventQuestMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__6_0; // x26
  Il2CppObject *v21; // x28
  struct EventQuestMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const char *namespaze; // x26
  __int64 v37; // x27
  int32_t *v38; // x19
  int32_t v39; // w8
  int32_t v40; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10

  if ( (byte_593884D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    sub_21FFC50(&System_Func_EventQuestEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__);
    sub_21FFC50(&EventQuestMaster___c_TypeInfo);
    byte_593884D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  p_eventQuestEntitiesOrderedByIsExceptedCache = (MissionNaviTransitionBoardItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  eventQuestEntitiesOrderedByIsExceptedCache = (MissionNaviTransitionBoardItem_c *)this->fields.eventQuestEntitiesOrderedByIsExceptedCache;
  if ( !eventQuestEntitiesOrderedByIsExceptedCache )
  {
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)this->fields.list,
                                                                 (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    v18 = EventQuestMaster___c_TypeInfo;
    if ( !*(&EventQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo, v16);
      v18 = EventQuestMaster___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__6_0 = (System_Func_object__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v16);
        static_fields = EventQuestMaster___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventQuestEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v21,
        Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__6_0__,
        0);
      v22 = EventQuestMaster___c_TypeInfo->static_fields;
      v22->__9__6_0 = (struct System_Func_EventQuestEntity__int__o *)_9__6_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__6_0, (int32_t)_9__6_0, v23, v24, v25, v26, v27, v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v17,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    eventQuestEntitiesOrderedByIsExceptedCache = (MissionNaviTransitionBoardItem_c *)System_Linq_Enumerable__ToArray_object_(
                                                                                       v29,
                                                                                       (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    p_eventQuestEntitiesOrderedByIsExceptedCache->klass = eventQuestEntitiesOrderedByIsExceptedCache;
    sub_21FFBF4(
      p_eventQuestEntitiesOrderedByIsExceptedCache,
      (int32_t)eventQuestEntitiesOrderedByIsExceptedCache,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    if ( !eventQuestEntitiesOrderedByIsExceptedCache )
      goto LABEL_34;
  }
  namespaze = eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v37 >= LODWORD(eventQuestEntitiesOrderedByIsExceptedCache->_1.namespaze) )
        sub_21FFED4(v11);
      v38 = (int32_t *)*((_QWORD *)&eventQuestEntitiesOrderedByIsExceptedCache->_1.byval_arg.data + v37);
      if ( !v38 )
        break;
      v39 = v38[5];
      if ( !v39 && !v38[6] || v39 == questId && ((v40 = v38[6]) == 0 || v40 == phase) )
      {
        if ( v38[7] )
        {
          if ( !v10 )
            break;
          v11 = System_Collections_Generic_List_int___Contains(
                  v10,
                  v38[4],
                  (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v11 )
            v11 = System_Collections_Generic_List_int___Remove(
                    v10,
                    v38[4],
                    (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v12 = (unsigned int)v38[4];
          v42 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v12,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      if ( (_DWORD)namespaze == (_DWORD)++v37 )
        goto LABEL_32;
    }
LABEL_34:
    sub_21FFECC(v11, v12);
  }
LABEL_32:
  if ( !Master_object )
    goto LABEL_34;
  return EventMaster__GetEnabledEntityListFromIds((EventMaster_o *)Master_object, type, v10, checkTime, v13);
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

  if ( (byte_5938849 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
    byte_5938849 = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
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

  if ( (byte_593884C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
    byte_593884C = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Count__);
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
                                       (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.questId == questId )
        return result;
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_12:
    sub_21FFECC(result, *(_QWORD *)&questId);
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
  int64_t v12; // x2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  System_Collections_Generic_HashSet_int__o *v15; // x25
  int v16; // w24
  const MethodInfo *v17; // x6
  int32_t current; // w25
  _BOOL8 IsEventNotIncluded; // x0
  __int64 v20; // x1
  int64_t v22; // x2
  const MethodInfo *v23; // x3
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v25; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_593884F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593884F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !(questPhase | questId) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, v22, v23);
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                 (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_20:
    sub_21FFECC(Instance, v11);
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_20;
  v15 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, v12, v13);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (Il2CppObject *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0);
  if ( !v15 )
    goto LABEL_20;
  v16 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v25,
    v15,
    (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v25.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v25.fields._current,
                           questId,
                           questPhase,
                           12,
                           nowTime,
                           v17);
    if ( !IsEventNotIncluded || v16 == current )
    {
      if ( !v9 )
        sub_21FFECC(IsEventNotIncluded, v20);
      System_Collections_Generic_HashSet_int___Add(
        v9,
        current,
        (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int max_length; // w8
  int v11; // w9
  EventEntity_o *v12; // x11

  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   this,
                                   questId,
                                   questPhase,
                                   nowTime,
                                   type,
                                   (const MethodInfo *)nowTime);
  if ( !EnabledEventCampaignForQuest )
    goto LABEL_11;
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( max_length == v11 )
        sub_21FFED4(EnabledEventCampaignForQuest);
      v12 = EnabledEventCampaignForQuest->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12->fields.id != eventId && (max_length & ~(max_length >> 31)) != ++v11 )
        continue;
      return v11 >= max_length;
    }
LABEL_11:
    sub_21FFECC(EnabledEventCampaignForQuest, v9);
  }
  v11 = 0;
  return v11 >= max_length;
}


bool EventQuestMaster__IsExistEvent(EventQuestMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  EventQuestMaster___c_c *v9; // x0
  struct EventQuestMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__11_0; // x21
  Il2CppObject *v12; // x22
  struct EventQuestMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__bool__o *v21; // x21

  if ( (byte_5938851 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventQuestEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventQuestEntity___);
    sub_21FFC50(&System_Func_EventQuestEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventQuestMaster___c__IsExistEvent_b__11_0__);
    sub_21FFC50(&Method_EventQuestMaster___c__DisplayClass11_0__IsExistEvent_b__1__);
    sub_21FFC50(&EventQuestMaster___c__DisplayClass11_0_TypeInfo);
    sub_21FFC50(&EventQuestMaster___c_TypeInfo);
    byte_5938851 = 1;
  }
  v5 = sub_21FFEBC(EventQuestMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = eventId;
  v9 = EventQuestMaster___c_TypeInfo;
  if ( !*(&EventQuestMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo, v7);
    v9 = EventQuestMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__11_0 = (System_Func_object__bool__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__11_0, v12, Method_EventQuestMaster___c__IsExistEvent_b__11_0__, 0);
    v13 = EventQuestMaster___c_TypeInfo->static_fields;
    v13->__9__11_0 = (struct System_Func_EventQuestEntity__bool__o *)_9__11_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__11_0, (int32_t)_9__11_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__11_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventQuestEntity___);
  v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventQuestMaster___c__DisplayClass11_0__IsExistEvent_b__1__,
    0);
  return System_Linq_Enumerable__Any_object__58935448(
           v20,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_EventQuestEntity___);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  char v19; // w22
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  _DWORD *v24; // x0
  int v25; // w9
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-48h]

  if ( (byte_593884E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593884E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventQuestEntity__GetEnumerator__);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v11);
  for ( i = Enumerator; ; i = v31 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( (v17 & 1) == 0 )
      break;
    if ( !v31 )
      sub_21FFECC(v17, v18);
    v20 = v31->klass;
    v21 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventQuestEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_18:
      v23 = sub_2237E2C(v31, System_Collections_Generic_IEnumerator_EventQuestEntity__TypeInfo, 0);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      v31,
                      *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      if ( v24[4] == eventId && v24[5] == questId )
      {
        v25 = v24[6];
        if ( !v25 || v25 == phase )
          goto LABEL_28;
      }
    }
  }
  v19 = 0;
LABEL_28:
  if ( v31 )
  {
    v26 = v31->klass;
    v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_33;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_33:
      v29 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
  return v19 & 1;
}


void EventQuestMaster__OnListChangedImplementation(
        EventQuestMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x0
  System_NotImplementedException_o *v9; // x19
  __int64 v10; // x0

  if ( !e )
    sub_21FFECC(this, 0);
  if ( e->fields._action > 4u )
  {
    v8 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
    v9 = (System_NotImplementedException_o *)sub_21FFEBC(v8);
    System_NotImplementedException___ctor(v9, 0);
    v10 = sub_21FFC64(&Method_EventQuestMaster_OnListChangedImplementation__);
    sub_21FFD90(v9, v10);
  }
  this->fields.eventQuestEntitiesOrderedByIsExceptedCache = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventQuestEntitiesOrderedByIsExceptedCache,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_593884A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
    byte_593884A = 1;
  }
  PK = (Il2CppObject *)EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void EventQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938852 & 1) == 0 )
  {
    sub_21FFC50(&EventQuestMaster___c_TypeInfo);
    byte_5938852 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventQuestMaster___c_TypeInfo->static_fields->__9 = (struct EventQuestMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventQuestMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return x->fields.isExcepted;
}


bool EventQuestMaster___c___IsExistEvent_b__11_0(
        EventQuestMaster___c_o *this,
        EventQuestEntity_o *entity,
        const MethodInfo *method)
{
  return entity != 0;
}


void EventQuestMaster___c__DisplayClass11_0___ctor(
        EventQuestMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventQuestMaster___c__DisplayClass11_0___IsExistEvent_b__1(
        EventQuestMaster___c__DisplayClass11_0_o *this,
        EventQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.eventId == this->fields.eventId;
}