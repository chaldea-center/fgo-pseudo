void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216EC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method);
    byte_4216EC4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    81,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  EventCampaignMaster___c_c *v17; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_0; // x20
  Il2CppObject *v20; // x21
  struct EventCampaignMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventCampaignMaster___c_StaticFields *v28; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_1; // x21
  Il2CppObject *v30; // x22
  struct EventCampaignMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Linq_ILookup_TKey__TElement__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  EventCampaignMaster___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  struct EventCampaignMaster___c_StaticFields *v43; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_2; // x20
  Il2CppObject *v45; // x21
  struct EventCampaignMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_4216ECD & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v5);
    sub_B0D8A4(&Method_System_Func_EventCampaignEntity__int___ctor__, v6);
    sub_B0D8A4(&Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__, v8);
    sub_B0D8A4(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v9);
    sub_B0D8A4(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v10);
    sub_B0D8A4(&System_Func_EventCampaignEntity__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v12);
    sub_B0D8A4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, v13);
    sub_B0D8A4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__, v14);
    sub_B0D8A4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__, v15);
    sub_B0D8A4(&EventCampaignMaster___c_TypeInfo, v16);
    byte_4216ECD = 1;
  }
  if ( campaignList && campaignList->fields._size )
  {
    v17 = EventCampaignMaster___c_TypeInfo;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v17 = EventCampaignMaster___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_0;
    if ( !_9__16_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_EventCampaignEntity__int__TypeInfo,
                                                                                   method,
                                                                                   v2);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__16_0,
        v20,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__,
        (const MethodInfo_2619564 *)Method_System_Func_EventCampaignEntity__int___ctor__);
      v21 = EventCampaignMaster___c_TypeInfo->static_fields;
      v21->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v21->__9__16_0,
        (System_Int32_array **)_9__16_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v17 = EventCampaignMaster___c_TypeInfo;
    }
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = EventCampaignMaster___c_TypeInfo;
    }
    v28 = v17->static_fields;
    _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v28->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v28 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v28->__9;
      _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_1,
        v30,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
        (const MethodInfo_261A104 *)Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__);
      v31 = EventCampaignMaster___c_TypeInfo->static_fields;
      v31->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v31->__9__16_1,
        (System_Int32_array **)_9__16_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = System_Linq_Enumerable__ToLookup_object__int__object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
            (System_Func_TSource__TKey__o *)_9__16_0,
            (System_Func_TSource__TElement__o *)_9__16_1,
            (const MethodInfo_1B593C8 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    v41 = EventCampaignMaster___c_TypeInfo;
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v41 = EventCampaignMaster___c_TypeInfo;
    }
    v43 = v41->static_fields;
    _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v43->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v43 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)v43->__9;
      _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo,
                                                                                                   v39,
                                                                                                   v40);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_2,
        v45,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
        (const MethodInfo_261A104 *)Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__);
      v46 = EventCampaignMaster___c_TypeInfo->static_fields;
      v46->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v46->__9__16_2,
        (System_Int32_array **)_9__16_2,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 v42,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                                 (const MethodInfo_1B53460 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                       v53,
                                                                       (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  }
  return campaignList;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  EventMaster_o *v15; // x22
  int32_t Count; // w0
  const MethodInfo *v17; // x1
  int32_t v18; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x25
  int32_t v20; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x26
  __int64 v22; // x10
  __int64 v23; // x2

  if ( (byte_4216ECC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&campaignTarget);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4216ECC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v15 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0LL;
    v20 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v20,
                                    (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v22 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[v22 - 1] == EventCampaignEntity_TypeInfo
          && *(_DWORD *)&Instance->fields._DispLog == campaignTarget )
        {
          if ( !v15 )
            break;
          if ( EventMaster__IsEnableEvent(v15, Instance->fields.m_CachedPtr, eventType, 0LL) )
          {
            if ( !v19 )
            {
              v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v17, v23);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v19,
                (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
              if ( !v19 )
                break;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v19,
              v21,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      if ( ++v20 >= v18 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v19,
                 v17);
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  v19 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v19, v17);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetCombineEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v16; // x21
  int32_t Count; // w22
  WarQuestSelectionMaster_o *v18; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x25
  int32_t v21; // w24
  unsigned int v22; // w8
  const MethodInfo *v23; // x5
  struct System_Single_array *coordinate; // x9
  __int64 v25; // x2
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x26
  __int64 v30; // x10
  int32_t v32; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  int32_t targetId; // [xsp+14h] [xbp-6Ch]
  EventCampaignReleaseMaster_o *v35; // [xsp+18h] [xbp-68h]
  EventCampaignReleaseEntity_o *v36; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4216EC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&CondType_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4216EC8 = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v16 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v18 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v35 = (EventCampaignReleaseMaster_o *)v18;
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v30 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v30
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) == EventCampaignEntity_TypeInfo )
        {
          v22 = *(_DWORD *)(Instance + 20);
          if ( v22 <= 0x20 && ((1LL << v22) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity->fields.age) | 8) == 13 )
              {
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v16 && entity->fields.targetId <= v16 )
                {
                  Instance = (int64_t)v35;
                  if ( !v35 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v35,
                               &v36,
                               v29->fields.missionTargetId,
                               v29->fields.missionConditionDetailId,
                               v29->fields.targetId,
                               v23);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_41;
                  if ( !v36 )
                    break;
                  condType = v36->fields.condType;
                  condTargetId = v36->fields.condTargetId;
                  condNum = v36->fields.condNum;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v36->fields.condTargetId;
                    condValue = v36->fields.condNum;
                    v32 = v36->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v32;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  if ( CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
                  {
LABEL_41:
                    if ( !v20 )
                    {
                      v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v25);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                        v20,
                        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v20 )
                        break;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v20,
                      v29,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v20,
                 v19);
    }
LABEL_38:
    sub_B0D97C(Instance);
  }
  v20 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v20, v19);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_28865532(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  EventCampaignEntity_o *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  __int64 v26; // x0
  const MethodInfo *v27; // x1
  EventCampaignEntity_o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x1
  int32_t target; // w9
  _DWORD *v31; // x9
  _DWORD *v32; // x9
  _DWORD *v33; // x9
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x1
  Il2CppObject *v36; // x21
  Il2CppClass *klass; // x8
  _DWORD *data; // x10
  _DWORD *v39; // x8
  EventCampaignEntity_o *v40; // x0
  int v41; // w8
  char v42; // w22
  __int64 v43; // x1
  __int64 v44; // x2
  int v45; // w10
  __int64 v46; // x0
  const MethodInfo *v47; // x1
  EventCampaignEntity_o *v48; // x0
  int v49; // w21
  int v51; // [xsp+4h] [xbp-BCh]
  int v52; // [xsp+4h] [xbp-BCh]
  _BYTE v53[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v54; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4216ECA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v18);
    byte_4216ECA = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                                                                  eventCampaignEntities,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_B0D97C(v20);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventCampaignEntities,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v51 = 0;
  v56 = *(System_Collections_Generic_List_Enumerator_T__o *)v53;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v19 )
      sub_B0D97C(v21);
    current = (EventCampaignEntity_o *)v56.fields.current;
    if ( v19->fields._size <= 0 )
    {
      v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v22, v23);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v25,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B0D97C(v26);
      v28 = EventCampaignEntity__Clone(current, v27);
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)v28;
      if ( !v25 )
        sub_B0D97C(v28);
      goto LABEL_10;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v53,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v55 = *(System_Collections_Generic_List_Enumerator_T__o *)v53;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v55,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v34 )
        break;
      if ( !current )
        sub_B0D97C(v34);
      v36 = v55.fields.current;
      if ( !v55.fields.current )
        sub_B0D97C(v34);
      if ( !LODWORD(v55.fields.current[1].monitor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      klass = v55.fields.current[1].klass;
      data = klass->_1.byval_arg.data;
      if ( !data )
        sub_B0D97C(v34);
      if ( current->fields.target == data[5] )
        goto LABEL_41;
      target = current->fields.target;
      if ( target == 2 )
      {
        if ( !LODWORD(v55.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( data[5] == 27 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 27 )
      {
        if ( !LODWORD(v55.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = klass->_1.byval_arg.data;
        if ( !v31 )
          sub_B0D97C(v34);
        if ( v31[5] == 2 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 4 )
      {
        if ( !LODWORD(v55.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v32 = klass->_1.byval_arg.data;
        if ( !v32 )
          sub_B0D97C(v34);
        if ( v32[5] == 32 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 32 )
      {
        if ( !LODWORD(v55.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v33 = klass->_1.byval_arg.data;
        if ( !v33 )
          sub_B0D97C(v34);
        if ( v33[5] == 4 )
        {
LABEL_41:
          if ( !LODWORD(v55.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v39 = klass->_1.byval_arg.data;
          if ( !v39 )
            sub_B0D97C(v34);
          if ( current->fields.value == v39[12] )
          {
            v40 = EventCampaignEntity__Clone(current, v35);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            *(_DWORD *)&v53[4 * v51 + 24] = 282;
            v41 = v54;
            v42 = 1;
            goto LABEL_47;
          }
        }
      }
    }
    *(_DWORD *)&v53[4 * v51 + 24] = 282;
    v41 = v54;
    v42 = 0;
LABEL_47:
    v54 = v41 + 1;
    v52 = v41 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v55,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    v45 = v52;
    if ( v52 && *(_DWORD *)&v53[4 * v52 + 20] == 282 )
    {
      v45 = v52 - 1;
      v54 = v52 - 1;
    }
    v51 = v45;
    if ( (v42 & 1) == 0 )
    {
      v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v43, v44);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v25,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B0D97C(v46);
      v48 = EventCampaignEntity__Clone(current, v47);
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)v48;
      if ( !v25 )
        sub_B0D97C(v48);
LABEL_10:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        v29,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
  }
  *(_DWORD *)&v53[4 * v51 + 24] = 342;
  v49 = ++v54;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v49 && *(_DWORD *)&v53[4 * v49 + 20] == 342 )
    v54 = v49 - 1;
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v19;
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

  if ( (byte_4216EC2 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4216EC2 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignMaster__GetAvailableEventCampaign(this, 34, 7, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignMaster__GetAvailableEventCampaign(this, 27, 5, v2);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v17; // x22
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  const MethodInfo *v22; // x1
  int32_t i; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x26
  __int64 v25; // x10
  struct System_Single_array *v26; // x9
  struct System_Single_array *coordinate; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216EC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4216EC9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
                            (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v25 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v25
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_38;
          Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            switch ( type )
            {
              case 2:
                if ( !entity )
                  goto LABEL_38;
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v17 && entity->fields.targetId <= v17 )
                  goto LABEL_33;
                break;
              case 1:
                if ( !entity )
                  goto LABEL_38;
                if ( (__int64)entity->fields.coordinate >= 1 && entity->fields.targetId > v17 )
                {
LABEL_33:
                  if ( !v21 )
                    goto LABEL_38;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v21,
                    v24,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                }
                break;
              case 0:
                if ( !entity )
                  goto LABEL_38;
                v26 = entity->fields.coordinate;
                if ( (__int64)v26 >= 1 && (__int64)v26 > v17 && entity->fields.targetId < v17 )
                  goto LABEL_33;
                break;
            }
          }
        }
      }
    }
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                        v22);
  if ( !Instance )
LABEL_38:
    sub_B0D97C(Instance);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v17; // x22
  int32_t Count; // w0
  const MethodInfo *v19; // x1
  int32_t v20; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x25
  int32_t v22; // w24
  System_Int32_array **Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x26
  __int64 v25; // x10
  __int64 v26; // x2
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4216ECB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4216ECB = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      v22,
                                      (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v25 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*Item)->m_Items[68]) >= (unsigned int)v25
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * v25 - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         v24->fields.missionTargetId,
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity->fields.coordinate >= 1
                && entity->fields.targetId <= v17
                && v17 <= *(_QWORD *)&entity->fields.eventId )
              {
                if ( !v21 )
                {
                  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v26);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v21,
                    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v21 )
                    break;
                }
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  v24,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v22 >= v20 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                 v19);
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  v21 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v21, v19);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, v2);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 v15; // x10

  if ( (byte_4216EC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    byte_4216EC5 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(list->fields.items) == targetType )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
      }
      if ( ++v14 >= v13 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4216EC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__, entity);
    byte_4216EC3 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  EventCampaignEntity_o *v19; // x0
  EventCampaignEntity_o *v20; // x21
  __int64 v21; // x10
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-40h]

  if ( (byte_4216EC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&event_id);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4216EC6 = 1;
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
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                     Enumerator,
                                     *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      v21 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (EventCampaignEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] == EventCampaignEntity_TypeInfo
        && v19->fields.eventId == event_id )
      {
        v22 = 64;
        goto LABEL_24;
      }
    }
  }
  v20 = 0LL;
  v22 = 62;
LABEL_24:
  v28 = v22;
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 62 )
    return 0LL;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_28862484(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v16; // x1
  signed int max_length; // w25
  int32_t v18; // w23
  int32_t v19; // w24
  __int64 v20; // x10
  __int64 v21; // x10
  EventEntity_o *v22; // x11
  __int64 v24; // x0

  if ( (byte_4216EC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&EventCampaignEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v13);
    byte_4216EC7 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetType,
                                                                                                  eventEntityList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v19,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = (const MethodInfo *)list;
      v20 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v21 >= eventEntityList->max_length )
          {
            v24 = sub_B0D9A8(list);
            sub_B0D948(v24, 0LL);
          }
          v22 = eventEntityList->m_Items[v21];
          if ( !v22 )
            goto LABEL_27;
          if ( LODWORD(list->fields.items) == v22->fields.id )
            break;
          if ( (int)++v21 >= max_length )
            goto LABEL_21;
        }
        if ( !v14 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
LABEL_21:
      if ( ++v19 >= v18 )
        goto LABEL_22;
    }
LABEL_27:
    sub_B0D97C(list);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_27;
  if ( v14->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                                                       (System_Collections_Generic_List_EventCampaignEntity__o *)v14,
                                                                                       v16);
  if ( !list )
    goto LABEL_27;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B1C & 1) == 0 )
  {
    sub_B0D8A4(&EventCampaignMaster___c_TypeInfo, v1);
    byte_4211B1C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventCampaignMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCampaignMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  EventCampaignMaster___c_c *v23; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_3; // x21
  Il2CppObject *v26; // x22
  struct EventCampaignMaster___c_StaticFields *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4211B1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5);
    sub_B0D8A4(&Method_System_Func_EventCampaignEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_EventCampaignEntity__int__TypeInfo, v7);
    sub_B0D8A4(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, v12);
    this = (EventCampaignMaster___c_o *)sub_B0D8A4(&EventCampaignMaster___c_TypeInfo, v13);
    byte_4211B1D = 1;
  }
  if ( !x )
    goto LABEL_23;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v23 = EventCampaignMaster___c_TypeInfo;
  if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v23 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_EventCampaignEntity__int__TypeInfo,
                                                                                 v21,
                                                                                 v22);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__16_3,
      v26,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__,
      (const MethodInfo_2619564 *)Method_System_Func_EventCampaignEntity__int___ctor__);
    v27 = EventCampaignMaster___c_TypeInfo->static_fields;
    v27->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_B0D840(&v27->__9__16_3, _9__16_3);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                        v28,
                                        (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v20 )
LABEL_23:
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v20;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B0D97C(this);
  return y->fields.priority;
}