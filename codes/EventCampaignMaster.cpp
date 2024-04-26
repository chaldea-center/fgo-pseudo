void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43544C4 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
    byte_43544C4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    82,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  EventCampaignMaster___c_c *v3; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct EventCampaignMaster___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventCampaignMaster___c_StaticFields *v14; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_1; // x21
  Il2CppObject *v16; // x22
  struct EventCampaignMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Linq_ILookup_TKey__TElement__o *v24; // x0
  EventCampaignMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  struct EventCampaignMaster___c_StaticFields *v27; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_2; // x20
  Il2CppObject *v29; // x21
  struct EventCampaignMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_43544CD & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    sub_B70694(&Method_System_Func_EventCampaignEntity__int___ctor__);
    sub_B70694(&Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__);
    sub_B70694(&Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__);
    sub_B70694(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_B70694(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_B70694(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B70694(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__);
    sub_B70694(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__);
    sub_B70694(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__);
    sub_B70694(&EventCampaignMaster___c_TypeInfo);
    byte_43544CD = 1;
  }
  if ( campaignList && campaignList->fields._size )
  {
    v3 = EventCampaignMaster___c_TypeInfo;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_0;
    if ( !_9__16_0 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__16_0,
        v6,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_EventCampaignEntity__int___ctor__);
      v7 = EventCampaignMaster___c_TypeInfo->static_fields;
      v7->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v7->__9__16_0,
        (System_Int32_array **)_9__16_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    v14 = v3->static_fields;
    _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v14->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v14 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)v14->__9;
      _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_1,
        v16,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__);
      v17 = EventCampaignMaster___c_TypeInfo->static_fields;
      v17->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v17->__9__16_1,
        (System_Int32_array **)_9__16_1,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = System_Linq_Enumerable__ToLookup_object__int__object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
            (System_Func_TSource__TKey__o *)_9__16_0,
            (System_Func_TSource__TElement__o *)_9__16_1,
            (const MethodInfo_1CCB8C8 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    v25 = EventCampaignMaster___c_TypeInfo;
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v25 = EventCampaignMaster___c_TypeInfo;
    }
    v27 = v25->static_fields;
    _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v27->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v27 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)v27->__9;
      _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_2,
        v29,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__);
      v30 = EventCampaignMaster___c_TypeInfo->static_fields;
      v30->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
      sub_B70630(
        (BattleServantConfConponent_o *)&v30->__9__16_2,
        (System_Int32_array **)_9__16_2,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 v26,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                                 (const MethodInfo_1CC57F4 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                       v37,
                                                                       (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  }
  return campaignList;
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  EventMaster_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x26
  int32_t v14; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x27
  __int64 v16; // x10

  if ( (byte_43544CC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v10 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v14,
                                    (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v16 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[v16 - 1] == EventCampaignEntity_TypeInfo
          && *(_DWORD *)&Instance->fields._DispLog == campaignTarget )
        {
          if ( !v10 )
            break;
          if ( EventMaster__IsEnableEvent(v10, Instance->fields.m_CachedPtr, eventType, nowTime, 0LL) )
          {
            if ( !v13 )
            {
              v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v13,
                (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
              if ( !v13 )
                break;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              v15,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      if ( ++v14 >= v12 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v13,
                 v9);
    }
LABEL_21:
    sub_B7076C(Instance, v9);
  }
  v13 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v13, v9);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, 0LL, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetCombineEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v6; // x21
  int32_t Count; // w22
  WarQuestSelectionMaster_o *v8; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x25
  int32_t v10; // w24
  unsigned int v11; // w8
  const MethodInfo *v12; // x5
  struct System_Single_array *coordinate; // x9
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x26
  __int64 v18; // x10
  int32_t v20; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  int32_t targetId; // [xsp+14h] [xbp-6Ch]
  EventCampaignReleaseMaster_o *v23; // [xsp+18h] [xbp-68h]
  EventCampaignReleaseEntity_o *v24; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_43544C8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544C8 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v8 = DataManager__GetMasterData_WarQuestSelectionMaster_(
         (DataManager_o *)Instance,
         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v23 = (EventCampaignReleaseMaster_o *)v8;
    v9 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v10,
                            (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v18 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v18
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v18 - 8) == EventCampaignEntity_TypeInfo )
        {
          v11 = *(_DWORD *)(Instance + 20);
          if ( v11 <= 0x20 && ((1LL << v11) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity->fields.age) | 8) == 13 )
              {
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v6 && entity->fields.targetId <= v6 )
                {
                  Instance = (int64_t)v23;
                  if ( !v23 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v23,
                               &v24,
                               v17->fields.missionTargetId,
                               v17->fields.missionConditionDetailId,
                               v17->fields.targetId,
                               v12);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_41;
                  if ( !v24 )
                    break;
                  condType = v24->fields.condType;
                  condTargetId = v24->fields.condTargetId;
                  condNum = v24->fields.condNum;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v24->fields.condTargetId;
                    condValue = v24->fields.condNum;
                    v20 = v24->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v20;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  if ( CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
                  {
LABEL_41:
                    if ( !v9 )
                    {
                      v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                        v9,
                        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v9 )
                        break;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v9,
                      v17,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v10 >= Count )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                 v4);
    }
LABEL_38:
    sub_B7076C(Instance, v4);
  }
  v9 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v9, v4);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_29851220(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventCampaignEntity_o *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  EventCampaignEntity_o *v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x1
  int32_t target; // w9
  _DWORD *v16; // x9
  _DWORD *v17; // x9
  _DWORD *v18; // x9
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *v21; // x21
  Il2CppClass *klass; // x8
  _DWORD *data; // x10
  _DWORD *v24; // x8
  EventCampaignEntity_o *v25; // x0
  int v26; // w8
  char v27; // w22
  int v28; // w10
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  EventCampaignEntity_o *v31; // x0
  int v32; // w21
  int v34; // [xsp+4h] [xbp-BCh]
  int v35; // [xsp+4h] [xbp-BCh]
  _BYTE v36[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v37; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_43544CA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    byte_43544CA = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_B7076C(v5, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventCampaignEntities,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v34 = 0;
  v39 = *(System_Collections_Generic_List_Enumerator_T__o *)v36;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v39,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_B7076C(v7, v8);
    current = (EventCampaignEntity_o *)v39.fields.current;
    if ( v4->fields._size <= 0 )
    {
      v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v10,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B7076C(v11, v12);
      v13 = EventCampaignEntity__Clone(current, v12);
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
      if ( !v10 )
        sub_B7076C(v13, v13);
      goto LABEL_10;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v38 = *(System_Collections_Generic_List_Enumerator_T__o *)v36;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v19 )
        break;
      if ( !current )
        sub_B7076C(v19, v20);
      v21 = v38.fields.current;
      if ( !v38.fields.current )
        sub_B7076C(v19, v20);
      if ( !LODWORD(v38.fields.current[1].monitor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      klass = v38.fields.current[1].klass;
      data = klass->_1.byval_arg.data;
      if ( !data )
        sub_B7076C(v19, v20);
      if ( current->fields.target == data[5] )
        goto LABEL_41;
      target = current->fields.target;
      if ( target == 2 )
      {
        if ( !LODWORD(v38.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( data[5] == 27 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 27 )
      {
        if ( !LODWORD(v38.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v16 = klass->_1.byval_arg.data;
        if ( !v16 )
          sub_B7076C(v19, v20);
        if ( v16[5] == 2 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 4 )
      {
        if ( !LODWORD(v38.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v17 = klass->_1.byval_arg.data;
        if ( !v17 )
          sub_B7076C(v19, v20);
        if ( v17[5] == 32 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 32 )
      {
        if ( !LODWORD(v38.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v18 = klass->_1.byval_arg.data;
        if ( !v18 )
          sub_B7076C(v19, v20);
        if ( v18[5] == 4 )
        {
LABEL_41:
          if ( !LODWORD(v38.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v24 = klass->_1.byval_arg.data;
          if ( !v24 )
            sub_B7076C(v19, v20);
          if ( current->fields.value == v24[12] )
          {
            v25 = EventCampaignEntity__Clone(current, v20);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            *(_DWORD *)&v36[4 * v34 + 24] = 282;
            v26 = v37;
            v27 = 1;
            goto LABEL_47;
          }
        }
      }
    }
    *(_DWORD *)&v36[4 * v34 + 24] = 282;
    v26 = v37;
    v27 = 0;
LABEL_47:
    v37 = v26 + 1;
    v35 = v26 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    v28 = v35;
    if ( v35 && *(_DWORD *)&v36[4 * v35 + 20] == 282 )
    {
      v28 = v35 - 1;
      v37 = v35 - 1;
    }
    v34 = v28;
    if ( (v27 & 1) == 0 )
    {
      v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v10,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B7076C(v29, v30);
      v31 = EventCampaignEntity__Clone(current, v30);
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
      if ( !v10 )
        sub_B7076C(v31, v31);
LABEL_10:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        v14,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
  }
  *(_DWORD *)&v36[4 * v34 + 24] = 342;
  v32 = ++v37;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v32 && *(_DWORD *)&v36[4 * v32 + 20] == 342 )
    v37 = v32 - 1;
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__GetEntity(
        EventCampaignMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43544C2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
    byte_43544C2 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21C0890 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 34, 7, 0LL, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 27, 5, 0LL, v2);
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v8; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x24
  int32_t i; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x26
  __int64 v13; // x10
  struct System_Single_array *v14; // x9
  struct System_Single_array *coordinate; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43544C9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544C9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; i < Count; ++i )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_38;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            i,
                            (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v13 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v13
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_38;
          Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            switch ( type )
            {
              case 2:
                if ( !entity )
                  goto LABEL_38;
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v8 && entity->fields.targetId <= v8 )
                  goto LABEL_33;
                break;
              case 1:
                if ( !entity )
                  goto LABEL_38;
                if ( (__int64)entity->fields.coordinate >= 1 && entity->fields.targetId > v8 )
                {
LABEL_33:
                  if ( !v10 )
                    goto LABEL_38;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v10,
                    v12,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                }
                break;
              case 0:
                if ( !entity )
                  goto LABEL_38;
                v14 = entity->fields.coordinate;
                if ( (__int64)v14 >= 1 && (__int64)v14 > v8 && entity->fields.targetId < v8 )
                  goto LABEL_33;
                break;
            }
          }
        }
      }
    }
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v10,
                        v6);
  if ( !Instance )
LABEL_38:
    sub_B7076C(Instance, v6);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x25
  int32_t v12; // w24
  System_Int32_array **Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x26
  __int64 v15; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43544CB & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544CB = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      v12,
                                      (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v15 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*Item)->m_Items[68]) >= (unsigned int)v15
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * v15 - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         v14->fields.missionTargetId,
                         (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity->fields.coordinate >= 1
                && entity->fields.targetId <= v8
                && v8 <= *(_QWORD *)&entity->fields.eventId )
              {
                if ( !v11 )
                {
                  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v11,
                    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v11 )
                    break;
                }
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  v14,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v12 >= v10 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v11,
                 v6);
    }
LABEL_29:
    sub_B7076C(Instance, v6);
  }
  v11 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v11, v6);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, nowTime, v3);
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_43544C5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_43544C5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(list->fields.items) == targetType )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignMaster__TryGetEntity(
        EventCampaignMaster_o *this,
        EventCampaignEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43544C3 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
    byte_43544C3 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  EventCampaignEntity_o *v16; // x0
  EventCampaignEntity_o *v17; // x21
  __int64 v18; // x10
  int v19; // w8
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-40h]

  if ( (byte_43544C6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_43544C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                     Enumerator,
                                     *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( v16 )
    {
      v18 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (EventCampaignEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] == EventCampaignEntity_TypeInfo
        && v16->fields.eventId == event_id )
      {
        v19 = 64;
        goto LABEL_24;
      }
    }
  }
  v17 = 0LL;
  v19 = 62;
LABEL_24:
  v25 = v19;
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v25 == 62 )
    return 0LL;
  return v17;
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_29848172(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  signed int max_length; // w25
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  __int64 v14; // x10
  EventEntity_o *v15; // x11
  __int64 v17; // x0

  if ( (byte_43544C7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventCampaignEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_43544C7 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = (const MethodInfo *)list;
      v13 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v14 >= eventEntityList->max_length )
          {
            v17 = sub_B70798(list);
            sub_B70738(v17, 0LL);
          }
          v15 = eventEntityList->m_Items[v14];
          if ( !v15 )
            goto LABEL_27;
          if ( LODWORD(list->fields.items) == v15->fields.id )
            break;
          if ( (int)++v14 >= max_length )
            goto LABEL_21;
        }
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
LABEL_21:
      if ( ++v12 >= v11 )
        goto LABEL_22;
    }
LABEL_27:
    sub_B7076C(list, v8);
  }
LABEL_22:
  if ( !v7 )
    goto LABEL_27;
  if ( v7->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                                                       (System_Collections_Generic_List_EventCampaignEntity__o *)v7,
                                                                                       v8);
  if ( !list )
    goto LABEL_27;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F03C & 1) == 0 )
  {
    sub_B70694(&EventCampaignMaster___c_TypeInfo);
    byte_434F03C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCampaignMaster___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.groupId;
}


EventCampaignEntity_o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_2(
        EventCampaignMaster___c_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  EventCampaignMaster___c_c *v9; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_3; // x21
  Il2CppObject *v12; // x22
  struct EventCampaignMaster___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_434F03D & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_First_EventCampaignEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_B70694(&Method_System_Func_EventCampaignEntity__int___ctor__);
    sub_B70694(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_B70694(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B70694(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__);
    this = (EventCampaignMaster___c_o *)sub_B70694(&EventCampaignMaster___c_TypeInfo);
    byte_434F03D = 1;
  }
  if ( !x )
    goto LABEL_23;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v9 = EventCampaignMaster___c_TypeInfo;
  if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v9 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__16_3,
      v12,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__,
      (const MethodInfo_29AD124 *)Method_System_Func_EventCampaignEntity__int___ctor__);
    v13 = EventCampaignMaster___c_TypeInfo->static_fields;
    v13->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_B70630(&v13->__9__16_3);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                        v14,
                                        (const MethodInfo_1CBB6E4 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v8 )
LABEL_23:
    sub_B7076C(this, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v8;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B7076C(this, 0LL);
  return y->fields.priority;
}