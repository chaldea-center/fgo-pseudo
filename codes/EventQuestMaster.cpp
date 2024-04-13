void __fastcall EventQuestMaster___ctor(EventQuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8E0E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    81,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string___ctor__);
}


EventEntity_array *__fastcall EventQuestMaster__GetEnabledEventCampaignForQuest(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t phase,
        int64_t checkTime,
        int32_t type,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x26
  System_Collections_Generic_List_int__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x25
  EventQuestMaster___c_c *v53; // x8
  struct EventQuestMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x26
  Il2CppObject *v56; // x27
  struct EventQuestMaster___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x26
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v68; // x25
  il2cpp_array_size_t v69; // w27
  int32_t *v70; // x23
  int32_t v71; // w8
  int32_t v72; // w8
  int32_t v73; // w1
  __int64 v74; // x0
  EventMaster_o *v76; // [xsp+8h] [xbp-68h]
  int32_t eventType; // [xsp+14h] [xbp-5Ch]

  if ( (byte_42E8E10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, questId, phase, checkTime);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_EventQuestEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventQuestEntity___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_EventQuestEntity__int___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_EventQuestEntity__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__, v44, v45, v46);
    sub_B5D5C4(&EventQuestMaster___c_TypeInfo, v47, v48, v49);
    byte_42E8E10 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_EventQuestEntity___);
  eventType = type;
  v53 = EventQuestMaster___c_TypeInfo;
  v76 = (EventMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(EventQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventQuestMaster___c_TypeInfo);
    v53 = EventQuestMaster___c_TypeInfo;
  }
  static_fields = v53->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      static_fields = EventQuestMaster___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventQuestEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v56,
      Method_EventQuestMaster___c__GetEnabledEventCampaignForQuest_b__4_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventQuestEntity__int___ctor__);
    v57 = EventQuestMaster___c_TypeInfo->static_fields;
    v57->__9__4_0 = (struct System_Func_EventQuestEntity__int__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v52,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_EventQuestEntity__int___);
  v65 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v64,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventQuestEntity___);
  if ( !v65 )
    goto LABEL_33;
  v67 = *(_QWORD *)&v65->max_length;
  v68 = v65;
  if ( (int)v67 >= 1 )
  {
    v69 = 0;
    while ( 1 )
    {
      v70 = (int32_t *)v68->m_Items[v69];
      if ( !v70 )
        break;
      v71 = v70[5];
      if ( !v71 && !v70[6] || v71 == questId && ((v72 = v70[6]) == 0 || v72 == phase) )
      {
        if ( !v51 )
          break;
        v73 = v70[4];
        if ( v70[7] )
        {
          v65 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Contains(
                                                                            v51,
                                                                            v73,
                                                                            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)v65 & 1) != 0 )
            v65 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)System_Collections_Generic_List_int___Remove(
                                                                              v51,
                                                                              v70[4],
                                                                              (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        }
        else
        {
          System_Collections_Generic_List_int___Add(
            v51,
            v73,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (int)++v69 >= (int)v67 )
        goto LABEL_31;
      if ( v69 >= v68->max_length )
      {
        v74 = sub_B5D6C8(v65);
        sub_B5D668(v74, 0LL);
      }
    }
LABEL_33:
    sub_B5D69C(v65, v66);
  }
LABEL_31:
  v65 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)v76;
  if ( !v76 )
    goto LABEL_33;
  return EventMaster__GetEnabledEntityListFromIds(v76, eventType, v51, checkTime, 0LL);
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

  if ( (byte_42E8E0C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__,
      eventId,
      questId,
      *(_QWORD *)&phase);
    byte_42E8E0C = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestEntity_o *__fastcall EventQuestMaster__GetFirstEntityFromQuestId(
        EventQuestMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventQuestEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10

  if ( (byte_42E8E0F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventQuestEntity_TypeInfo, v9, v10, v11);
    byte_42E8E0F = 1;
  }
  result = (EventQuestEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      result = (EventQuestEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventQuestEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                       v15,
                                       (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v16 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventQuestEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != EventQuestEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.questId == questId )
        return result;
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(result, *(_QWORD *)&questId);
  }
  return 0LL;
}


System_Int32_array *__fastcall EventQuestMaster__GetOngoingQuestTargetEventIds(
        EventQuestMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_HashSet_int__o *v40; // x22
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  System_Collections_Generic_HashSet_int__o *v43; // x24
  int v44; // w23
  const MethodInfo *v45; // x5
  int32_t current; // w24
  _BOOL8 IsEventNotIncluded; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_HashSet_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8E12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, questId, questPhase, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    byte_42E8E12 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !(questPhase | questId) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( Instance )
      {
        EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                       (EventMaster_o *)Instance,
                                                                                       0,
                                                                                       0LL);
        return System_Linq_Enumerable__ToArray_int_(
                 EventValUpEventIdHash,
                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_23:
    sub_B5D69C(Instance, v42);
  }
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_23;
  v43 = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, questId, 0LL);
  if ( !v43 )
    goto LABEL_23;
  v44 = (int)Instance;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v51,
    v43,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v52,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v52.fields._current;
    IsEventNotIncluded = EventQuestMaster__IsEventNotIncluded(
                           this,
                           (int32_t)v52.fields._current,
                           questId,
                           questPhase,
                           12,
                           v45);
    if ( v44 == current || !IsEventNotIncluded )
    {
      if ( !v40 )
        sub_B5D69C(IsEventNotIncluded, v48);
      System_Collections_Generic_HashSet_int___Add(
        v40,
        current,
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v52,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  return System_Linq_Enumerable__ToArray_int_(
           EventValUpEventIdHash,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
    sub_B5D69C(EnabledEventCampaignForQuest, v8);
  max_length = EnabledEventCampaignForQuest->max_length;
  if ( max_length < 1 )
    return 1;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v13 = sub_B5D6C8(EnabledEventCampaignForQuest);
      sub_B5D668(v13, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  _DWORD *v33; // x0
  __int64 v34; // x10
  int v35; // w8
  bool v36; // w20
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  int v42; // [xsp+0h] [xbp-50h]

  if ( (byte_42E8E11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      questId,
      *(_QWORD *)&phase);
    sub_B5D5C4(&EventQuestEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    byte_42E8E11 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v33 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                      Enumerator,
                      *(_QWORD *)(v32 + 8));
    if ( v33 )
    {
      v34 = *(&EventQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) >= (unsigned int)v34
        && *(EventQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v34 - 8) == EventQuestEntity_TypeInfo
        && v33[4] == eventId
        && v33[5] == questId )
      {
        v35 = v33[6];
        if ( !v35 || v35 == phase )
        {
          v42 = 90;
          v36 = 1;
          goto LABEL_27;
        }
      }
    }
  }
  v36 = 0;
  v42 = 88;
LABEL_27:
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_31:
    v40 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( v42 == 88 )
    return 0;
  return v36;
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

  if ( (byte_42E8E0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&questId);
    byte_42E8E0D = 1;
  }
  PK = EventQuestEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventQuestMaster__EventQuestEntity__string__TryGetEntity__);
}


void __fastcall EventQuestMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E658A & 1) == 0 )
  {
    sub_B5D5C4(&EventQuestMaster___c_TypeInfo, v1, v2, v3);
    byte_42E658A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventQuestMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventQuestMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.isExcepted;
}