void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421499F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__, method);
    byte_421499F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    80,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
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
  __int64 v23; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x25
  EventQuestMaster___c_c *v31; // x8
  struct EventQuestMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x26
  Il2CppObject *v34; // x27
  struct EventQuestMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v43; // x0
  __int64 v44; // x26
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v45; // x25
  il2cpp_array_size_t v46; // w27
  int32_t *v47; // x23
  int32_t v48; // w8
  int32_t v49; // w8
  int32_t v50; // w1
  __int64 v51; // x0
  EventMaster_o *v53; // [xsp+8h] [xbp-68h]
  int32_t eventType; // [xsp+14h] [xbp-5Ch]

  if ( (byte_42149A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___, v14);
    sub_B0D8A4(&Method_System_Func_EventQuestEntity__int___ctor__, v15);
    sub_B0D8A4(&System_Func_EventQuestEntity__int__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__, v22);
    sub_B0D8A4(&EventQuestMaster___c_TypeInfo, v23);
    byte_42149A1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  v27 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
  eventType = type;
  v31 = EventQuestMaster___c_TypeInfo;
  v53 = (EventMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(EventQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v31 = EventQuestMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_EventQuestEntity__int__TypeInfo,
                                                                                v28,
                                                                                v29);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v34,
      Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__,
      (const MethodInfo_2619564 *)Method_System_Func_EventQuestEntity__int___ctor__);
    v35 = EventQuestMaster___c_TypeInfo->static_fields;
    v35->__9__4_0 = (struct System_Func_EventQuestEntity__int__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
  v43 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v42,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
  if ( !v43 )
    goto LABEL_33;
  v44 = *(_QWORD *)&v43->max_length;
  v45 = v43;
  if ( (int)v44 >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      v47 = (int32_t *)v45->m_Items[v46];
      if ( !v47 )
        break;
      v48 = v47[5];
      if ( !v48 && !v47[6] || v48 == questId && ((v49 = v47[6]) == 0 || v49 == phase) )
      {
        if ( !v27 )
          break;
        v50 = v47[4];
        if ( v47[7] )
        {
          v43 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Contains(
                                                                            v27,
                                                                            v50,
                                                                            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)v43 & 1) != 0 )
            v43 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Remove(
                                                                              v27,
                                                                              v47[4],
                                                                              (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          System_Collections_Generic_List_int___Add(
            v27,
            v50,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (int)++v46 >= (int)v44 )
        goto LABEL_31;
      if ( v46 >= v45->max_length )
      {
        v51 = sub_B0D9A8(v43);
        sub_B0D948(v51, 0LL);
      }
    }
LABEL_33:
    sub_B0D97C(v43);
  }
LABEL_31:
  v43 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)v53;
  if ( !v53 )
    goto LABEL_33;
  return EventMaster__GetEnabledEntityListFromIds(v53, eventType, v27, checkTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetEntity(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_421499D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_421499D = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266A024 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
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
  __int64 v11; // x10

  if ( (byte_42149A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventQuestEntity_TypeInfo, v6);
    byte_42149A0 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                       v10,
                                       (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v11 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (EventQuestEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != EventQuestEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.questId == questId )
        return result;
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B0D97C(result);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventQuestMaster__GetOngoingQuestTargetEventIds(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_HashSet_int__o *v18; // x22
  DataManager_o *Instance; // x0
  System_Collections_Generic_HashSet_int__o *v20; // x24
  int v21; // w23
  const MethodInfo *v22; // x5
  int32_t current; // w24
  _BOOL8 IsEventNotIncluded; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42149A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v15);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_42149A3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !(questPhase | questId) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)Instance,
                                                                                       0,
                                                                                       0LL);
        return System_Linq_Enumerable__ToArray_int_(
                 EventValUpEventIdHash,
                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&questPhase);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_23;
  v20 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v20 )
    goto LABEL_23;
  v21 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v27,
    v20,
    (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v28.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v28.fields._current,
                           questId,
                           questPhase,
                           12,
                           v22);
    if ( v21 == current || !IsEventNotIncluded )
    {
      if ( !v18 )
        sub_B0D97C(IsEventNotIncluded);
      System_Collections_Generic_HashSet_int___Add(
        v18,
        current,
        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  return System_Linq_Enumerable__ToArray_int_(
           EventValUpEventIdHash,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall EventQuestMaster__IsEventNotIncluded(
        EventQuestMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        int32_t type,
        const MethodInfo *method)
{
  EventEntity_array *EnabledEventCampaignForQuest; // x0
  int max_length; // w8
  unsigned int v9; // w9
  EventEntity_o *v10; // x10
  __int64 v12; // x0

  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   this,
                                   questId,
                                   questPhase,
                                   0LL,
                                   type,
                                   method);
  if ( !EnabledEventCampaignForQuest )
LABEL_11:
    sub_B0D97C(EnabledEventCampaignForQuest);
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v12 = sub_B0D9A8(EnabledEventCampaignForQuest);
      sub_B0D948(v12, 0LL);
    }
    v10 = EnabledEventCampaignForQuest->m_Items[v9];
    if ( !v10 )
      goto LABEL_11;
    if ( v10->fields.id == eventId )
      return 0;
    if ( (int)++v9 >= max_length )
      return 1;
  }
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x10
  int v25; // w8
  bool v26; // w20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-50h]

  if ( (byte_42149A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventQuestEntity_TypeInfo, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_42149A2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      v24 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) >= (unsigned int)v24
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v24 - 8) == EventQuestEntity_TypeInfo
        && v23[4] == eventId
        && v23[5] == questId )
      {
        v25 = v23[6];
        if ( !v25 || v25 == phase )
        {
          v32 = 90;
          v26 = 1;
          goto LABEL_27;
        }
      }
    }
  }
  v26 = 0;
  v32 = 88;
LABEL_27:
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_31:
    v30 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 88 )
    return 0;
  return v26;
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
  System_String_o *PK; // x2

  if ( (byte_421499E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__, entity);
    byte_421499E = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BB5 & 1) == 0 )
  {
    sub_B0D8A4(&EventQuestMaster___c_TypeInfo, v1);
    byte_4211BB5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventQuestMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.isExcepted;
}