void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0403 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
    byte_42B0403 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    81,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


EventEntity_array *__fastcall EventQuestMaster__GetEnabledEventCampaignForQuest(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t checkTime,
        int32_t type,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x26
  System_Collections_Generic_List_int__o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x25
  EventQuestMaster___c_c *v14; // x8
  struct EventQuestMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x26
  Il2CppObject *v17; // x27
  struct EventQuestMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x26
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v29; // x25
  il2cpp_array_size_t v30; // w27
  int32_t *v31; // x23
  int32_t v32; // w8
  int32_t v33; // w8
  int32_t v34; // w1
  __int64 v35; // x0
  EventMaster_o *v37; // [xsp+8h] [xbp-68h]
  int32_t eventType; // [xsp+14h] [xbp-5Ch]

  if ( (byte_42B0405 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
    sub_B52984(&Method_System_Func_EventQuestEntity__int___ctor__);
    sub_B52984(&System_Func_EventQuestEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__);
    sub_B52984(&EventQuestMaster___c_TypeInfo);
    byte_42B0405 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  v12 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
  eventType = type;
  v14 = EventQuestMaster___c_TypeInfo;
  v37 = (EventMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(EventQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v14 = EventQuestMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventQuestEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v17,
      Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_EventQuestEntity__int___ctor__);
    v18 = EventQuestMaster___c_TypeInfo->static_fields;
    v18->__9__4_0 = (struct System_Func_EventQuestEntity__int__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
  v26 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v25,
          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
  if ( !v26 )
    goto LABEL_33;
  v28 = *(_QWORD *)&v26->max_length;
  v29 = v26;
  if ( (int)v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = (int32_t *)v29->m_Items[v30];
      if ( !v31 )
        break;
      v32 = v31[5];
      if ( !v32 && !v31[6] || v32 == questId && ((v33 = v31[6]) == 0 || v33 == phase) )
      {
        if ( !v12 )
          break;
        v34 = v31[4];
        if ( v31[7] )
        {
          v26 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Contains(
                                                                            v12,
                                                                            v34,
                                                                            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)v26 & 1) != 0 )
            v26 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Remove(
                                                                              v12,
                                                                              v31[4],
                                                                              (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          System_Collections_Generic_List_int___Add(
            v12,
            v34,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (int)++v30 >= (int)v28 )
        goto LABEL_31;
      if ( v30 >= v29->max_length )
      {
        v35 = sub_B52A88(v26);
        sub_B52A28(v35, 0LL);
      }
    }
LABEL_33:
    sub_B52A5C(v26, v27);
  }
LABEL_31:
  v26 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)v37;
  if ( !v37 )
    goto LABEL_33;
  return EventMaster__GetEnabledEntityListFromIds(v37, eventType, v12, checkTime, 0LL);
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

  if ( (byte_42B0401 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
    byte_42B0401 = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
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
  __int64 v9; // x10

  if ( (byte_42B0404 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventQuestEntity_TypeInfo);
    byte_42B0404 = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                       v8,
                                       (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v9 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (EventQuestEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] != EventQuestEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.questId == questId )
        return result;
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_14:
    sub_B52A5C(result, *(_QWORD *)&questId);
  }
  return 0LL;
}


System_Int32_array *__fastcall EventQuestMaster__GetOngoingQuestTargetEventIds(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_HashSet_int__o *v10; // x24
  int v11; // w23
  const MethodInfo *v12; // x5
  int32_t current; // w24
  _BOOL8 IsEventNotIncluded; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B0407 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0407 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !(questPhase | questId) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)Instance,
                                                                                       0,
                                                                                       0LL);
        return System_Linq_Enumerable__ToArray_int_(
                 EventValUpEventIdHash,
                 (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_23:
    sub_B52A5C(Instance, v9);
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_23;
  v10 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v10 )
    goto LABEL_23;
  v11 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v18,
    v10,
    (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v19.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v19.fields._current,
                           questId,
                           questPhase,
                           12,
                           v12);
    if ( v11 == current || !IsEventNotIncluded )
    {
      if ( !v7 )
        sub_B52A5C(IsEventNotIncluded, v15);
      System_Collections_Generic_HashSet_int___Add(
        v7,
        current,
        (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  return System_Linq_Enumerable__ToArray_int_(
           EventValUpEventIdHash,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v8; // x1
  int max_length; // w8
  unsigned int v10; // w9
  EventEntity_o *v11; // x10
  __int64 v13; // x0

  EnabledEventCampaignForQuest = EventQuestMaster__GetEnabledEventCampaignForQuest(
                                   this,
                                   questId,
                                   questPhase,
                                   0LL,
                                   type,
                                   method);
  if ( !EnabledEventCampaignForQuest )
LABEL_11:
    sub_B52A5C(EnabledEventCampaignForQuest, v8);
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length < 1 )
    return 1;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v13 = sub_B52A88(EnabledEventCampaignForQuest);
      sub_B52A28(v13, 0LL);
    }
    v11 = EnabledEventCampaignForQuest->m_Items[v10];
    if ( !v11 )
      goto LABEL_11;
    if ( v11->fields.id == eventId )
      return 0;
    if ( (int)++v10 >= max_length )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x10
  int v23; // w8
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0406 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventQuestEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B0406 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v22 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) >= (unsigned int)v22
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v22 - 8) == EventQuestEntity_TypeInfo
        && v21[4] == eventId
        && v21[5] == questId )
      {
        v23 = v21[6];
        if ( !v23 || v23 == phase )
        {
          v30 = 90;
          v24 = 1;
          goto LABEL_27;
        }
      }
    }
  }
  v24 = 0;
  v30 = 88;
LABEL_27:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_31:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 88 )
    return 0;
  return v24;
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

  if ( (byte_42B0402 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
    byte_42B0402 = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD94C & 1) == 0 )
  {
    sub_B52984(&EventQuestMaster___c_TypeInfo);
    byte_42AD94C = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventQuestMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.isExcepted;
}