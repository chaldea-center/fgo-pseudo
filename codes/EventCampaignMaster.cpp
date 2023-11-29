void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method);
    byte_40FC5AD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    81,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  EventCampaignMaster___c_c *v19; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_0; // x20
  Il2CppObject *v22; // x21
  struct EventCampaignMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventCampaignMaster___c_StaticFields *v30; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_1; // x21
  Il2CppObject *v32; // x22
  struct EventCampaignMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Linq_ILookup_TKey__TElement__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  EventCampaignMaster___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  struct EventCampaignMaster___c_StaticFields *v47; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_2; // x20
  Il2CppObject *v49; // x21
  struct EventCampaignMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0

  if ( (byte_40FC5B6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v7);
    sub_B16FFC(&Method_System_Func_EventCampaignEntity__int___ctor__, v8);
    sub_B16FFC(&Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__, v10);
    sub_B16FFC(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v11);
    sub_B16FFC(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v12);
    sub_B16FFC(&System_Func_EventCampaignEntity__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v14);
    sub_B16FFC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, v15);
    sub_B16FFC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__, v16);
    sub_B16FFC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__, v17);
    sub_B16FFC(&EventCampaignMaster___c_TypeInfo, v18);
    byte_40FC5B6 = 1;
  }
  if ( campaignList && campaignList->fields._size )
  {
    v19 = EventCampaignMaster___c_TypeInfo;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v19 = EventCampaignMaster___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_0;
    if ( !_9__16_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_EventCampaignEntity__int__TypeInfo,
                                                                                   method,
                                                                                   v2,
                                                                                   v3,
                                                                                   v4);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__16_0,
        v22,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_EventCampaignEntity__int___ctor__);
      v23 = EventCampaignMaster___c_TypeInfo->static_fields;
      v23->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v23->__9__16_0,
        (System_Int32_array **)_9__16_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v19 = EventCampaignMaster___c_TypeInfo;
    }
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = EventCampaignMaster___c_TypeInfo;
    }
    v30 = v19->static_fields;
    _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v30->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v30 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)v30->__9;
      _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo,
                                                                                                   method,
                                                                                                   v2,
                                                                                                   v3,
                                                                                                   v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_1,
        v32,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__);
      v33 = EventCampaignMaster___c_TypeInfo->static_fields;
      v33->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v33->__9__16_1,
        (System_Int32_array **)_9__16_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    v40 = System_Linq_Enumerable__ToLookup_object__int__object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
            (System_Func_TSource__TKey__o *)_9__16_0,
            (System_Func_TSource__TElement__o *)_9__16_1,
            (const MethodInfo_19C7D00 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    v45 = EventCampaignMaster___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v45 = EventCampaignMaster___c_TypeInfo;
    }
    v47 = v45->static_fields;
    _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v47->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v47 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)v47->__9;
      _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo,
                                                                                                   v41,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_2,
        v49,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
        (const MethodInfo_2B6C28C *)Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__);
      v50 = EventCampaignMaster___c_TypeInfo->static_fields;
      v50->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v50->__9__16_2,
        (System_Int32_array **)_9__16_2,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 v46,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                                 (const MethodInfo_19C1F08 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                       v57,
                                                                       (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMaster_o *v16; // x22
  int32_t Count; // w0
  const MethodInfo *v18; // x1
  int32_t v19; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x25
  int32_t v21; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x26
  __int64 v25; // x10
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4

  if ( (byte_40FC5B5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&campaignTarget);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v8);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FC5B5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v16 = (EventMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v21,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v25 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v25
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v25 - 8) == EventCampaignEntity_TypeInfo
          && Item[5] == campaignTarget )
        {
          if ( !v16 )
            break;
          if ( EventMaster__IsEnableEvent(v16, Item[4], eventType, 0LL) )
          {
            if ( !v20 )
            {
              v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v18, v26, v27, v28);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v20,
                (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
              if ( !v20 )
                break;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v24,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      if ( ++v21 >= v19 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v20,
                 v18);
    }
LABEL_21:
    sub_B170D4();
  }
  v20 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v20, v18);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t Time; // x0
  int64_t v17; // x21
  int32_t Count; // w22
  WebViewManager_o *v19; // x0
  WarQuestSelectionMaster_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x25
  int32_t v23; // w24
  unsigned int v24; // w8
  const MethodInfo *v25; // x5
  struct System_Single_array *coordinate; // x9
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x26
  __int64 v36; // x10
  int32_t v38; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  int32_t targetId; // [xsp+14h] [xbp-6Ch]
  EventCampaignReleaseMaster_o *v41; // [xsp+18h] [xbp-68h]
  EventCampaignReleaseEntity_o *v42; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FC5B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FC5B1 = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v17 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_38;
  v20 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v19,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v41 = (EventCampaignReleaseMaster_o *)v20;
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v23,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v36 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v36
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v36 - 8) == EventCampaignEntity_TypeInfo )
        {
          v24 = Item[5];
          if ( v24 <= 0x20 && ((1LL << v24) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   Item[4],
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity->fields.age) | 8) == 13 )
              {
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v17 && entity->fields.targetId <= v17 )
                {
                  if ( !v41 )
                    break;
                  if ( !EventCampaignReleaseMaster__TryGetEntity(
                          v41,
                          &v42,
                          v35->fields.missionTargetId,
                          v35->fields.missionConditionDetailId,
                          v35->fields.targetId,
                          v25) )
                    goto LABEL_41;
                  if ( !v42 )
                    break;
                  condType = v42->fields.condType;
                  condTargetId = v42->fields.condTargetId;
                  condNum = v42->fields.condNum;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v42->fields.condTargetId;
                    condValue = v42->fields.condNum;
                    v38 = v42->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v38;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  if ( CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
                  {
LABEL_41:
                    if ( !v22 )
                    {
                      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v21, v27, v28, v29);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                        v22,
                        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v22 )
                        break;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v22,
                      v35,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v23 >= Count )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v22,
                 v21);
    }
LABEL_38:
    sub_B170D4();
  }
  v22 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v22, v21);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_29388768(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  EventCampaignEntity_o *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  const MethodInfo *v28; // x1
  EventCampaignEntity_o *v29; // x1
  int32_t target; // w9
  _DWORD *v31; // x9
  _DWORD *v32; // x9
  _DWORD *v33; // x9
  const MethodInfo *v34; // x1
  Il2CppObject *v35; // x21
  Il2CppClass *klass; // x8
  _DWORD *data; // x10
  _DWORD *v38; // x8
  EventCampaignEntity_o *v39; // x0
  int v40; // w8
  char v41; // w22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int v46; // w10
  const MethodInfo *v47; // x1
  int v48; // w21
  int v50; // [xsp+4h] [xbp-BCh]
  int v51; // [xsp+4h] [xbp-BCh]
  _BYTE v52[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v53; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FC5B3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19);
    sub_B16FFC(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v20);
    byte_40FC5B3 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                                                                  eventCampaignEntities,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventCampaignEntities,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v50 = 0;
  v55 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    if ( !v21 )
      sub_B170D4();
    current = (EventCampaignEntity_o *)v55.fields.current;
    if ( v21->fields._size <= 0 )
    {
      v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v22, v23, v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v27,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B170D4();
      v29 = EventCampaignEntity__Clone(current, v28);
      if ( !v27 )
        sub_B170D4();
      goto LABEL_10;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
    {
      if ( !current )
        sub_B170D4();
      v35 = v54.fields.current;
      if ( !v54.fields.current )
        sub_B170D4();
      if ( !LODWORD(v54.fields.current[1].monitor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      klass = v54.fields.current[1].klass;
      data = klass->_1.byval_arg.data;
      if ( !data )
        sub_B170D4();
      if ( current->fields.target == data[5] )
        goto LABEL_41;
      target = current->fields.target;
      if ( target == 2 )
      {
        if ( !LODWORD(v54.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( data[5] == 27 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 27 )
      {
        if ( !LODWORD(v54.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v31 = klass->_1.byval_arg.data;
        if ( !v31 )
          sub_B170D4();
        if ( v31[5] == 2 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 4 )
      {
        if ( !LODWORD(v54.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v32 = klass->_1.byval_arg.data;
        if ( !v32 )
          sub_B170D4();
        if ( v32[5] == 32 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 32 )
      {
        if ( !LODWORD(v54.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v33 = klass->_1.byval_arg.data;
        if ( !v33 )
          sub_B170D4();
        if ( v33[5] == 4 )
        {
LABEL_41:
          if ( !LODWORD(v54.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v38 = klass->_1.byval_arg.data;
          if ( !v38 )
            sub_B170D4();
          if ( current->fields.value == v38[12] )
          {
            v39 = EventCampaignEntity__Clone(current, v34);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            *(_DWORD *)&v52[4 * v50 + 24] = 282;
            v40 = v53;
            v41 = 1;
            goto LABEL_47;
          }
        }
      }
    }
    *(_DWORD *)&v52[4 * v50 + 24] = 282;
    v40 = v53;
    v41 = 0;
LABEL_47:
    v53 = v40 + 1;
    v51 = v40 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    v46 = v51;
    if ( v51 && *(_DWORD *)&v52[4 * v51 + 20] == 282 )
    {
      v46 = v51 - 1;
      v53 = v51 - 1;
    }
    v50 = v46;
    if ( (v41 & 1) == 0 )
    {
      v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v42, v43, v44, v45);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v27,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B170D4();
      v29 = EventCampaignEntity__Clone(current, v47);
      if ( !v27 )
        sub_B170D4();
LABEL_10:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
  }
  *(_DWORD *)&v52[4 * v50 + 24] = 342;
  v48 = ++v53;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v48 && *(_DWORD *)&v52[4 * v48 + 20] == 342 )
    v53 = v48 - 1;
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v21;
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

  if ( (byte_40FC5AB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FC5AB = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  int64_t v18; // x22
  int32_t Count; // w23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x24
  const MethodInfo *v25; // x1
  int32_t i; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x26
  __int64 v30; // x10
  struct System_Single_array *v31; // x9
  struct System_Single_array *coordinate; // x9
  System_Collections_Generic_List_EventCampaignEntity__o *v33; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC5B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC5B2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    for ( i = 0; i < Count; ++i )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_38;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          i,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v30 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v30
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v30 - 8) == EventCampaignEntity_TypeInfo
          && Item[5] == 24 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_38;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 Item[4],
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            switch ( type )
            {
              case 2:
                if ( !entity )
                  goto LABEL_38;
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v18 && entity->fields.targetId <= v18 )
                  goto LABEL_33;
                break;
              case 1:
                if ( !entity )
                  goto LABEL_38;
                if ( (__int64)entity->fields.coordinate >= 1 && entity->fields.targetId > v18 )
                {
LABEL_33:
                  if ( !v24 )
                    goto LABEL_38;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v24,
                    v29,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                }
                break;
              case 0:
                if ( !entity )
                  goto LABEL_38;
                v31 = entity->fields.coordinate;
                if ( (__int64)v31 >= 1 && (__int64)v31 > v18 && entity->fields.targetId < v18 )
                  goto LABEL_33;
                break;
            }
          }
        }
      }
    }
  }
  v33 = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v24, v25);
  if ( !v33 )
LABEL_38:
    sub_B170D4();
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  int64_t v18; // x22
  int32_t Count; // w0
  const MethodInfo *v20; // x1
  int32_t v21; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x25
  int32_t v23; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x26
  __int64 v27; // x10
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FC5B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC5B4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v23,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v27 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (EventCampaignEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(Item[1].klass) == 29
          && (System_Array__IndexOf_int_(
                (System_Int32_array *)Item[2].monitor,
                gachaId,
                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 v26->fields.missionTargetId,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          {
            if ( !entity )
              break;
            if ( (__int64)entity->fields.coordinate >= 1
              && entity->fields.targetId <= v18
              && v18 <= *(_QWORD *)&entity->fields.eventId )
            {
              if ( !v22 )
              {
                v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v20, v28, v29, v30);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v22,
                  (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                if ( !v22 )
                  break;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v22,
                v26,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
        }
      }
      if ( ++v23 >= v21 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v22,
                 v20);
    }
LABEL_29:
    sub_B170D4();
  }
  v22 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v22, v20);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FC5AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    byte_40FC5AE = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetType,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (EventCampaignEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == EventCampaignEntity_TypeInfo
          && Item->fields.missionConditionDetailId == targetType )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_40FC5AC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__, entity);
    byte_40FC5AC = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
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

  if ( (byte_40FC5AF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&event_id);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40FC5AF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
    v26 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 62 )
    return 0LL;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_29385720(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo *v18; // x1
  signed int max_length; // w25
  int32_t v20; // w23
  int32_t v21; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v24; // x2
  __int64 v25; // x10
  __int64 v26; // x10
  EventEntity_o *v27; // x11
  System_Collections_Generic_List_EventCampaignEntity__o *v28; // x0

  if ( (byte_40FC5B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventCampaignEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v14);
    byte_40FC5B0 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  *(_QWORD *)&targetType,
                                                                                                  eventEntityList,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    max_length = eventEntityList->max_length;
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v22 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v22,
                                                                      v21,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v18 = (const MethodInfo *)Item;
      v25 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (EventCampaignEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionConditionDetailId == targetType && max_length >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v26 >= eventEntityList->max_length )
          {
            sub_B17100(Item, Item, v24);
            sub_B170A0();
          }
          v27 = eventEntityList->m_Items[v26];
          if ( !v27 )
            goto LABEL_27;
          if ( Item->fields.missionTargetId == v27->fields.id )
            break;
          if ( (int)++v26 >= max_length )
            goto LABEL_21;
        }
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
LABEL_21:
      if ( ++v21 >= v20 )
        goto LABEL_22;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_22:
  if ( !v15 )
    goto LABEL_27;
  if ( v15->fields._size < 1 )
    return 0LL;
  v28 = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v15, v18);
  if ( !v28 )
    goto LABEL_27;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B98 & 1) == 0 )
  {
    sub_B16FFC(&EventCampaignMaster___c_TypeInfo, v1);
    byte_40F8B98 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventCampaignMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventCampaignMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  EventCampaignMaster___c_c *v27; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_3; // x21
  Il2CppObject *v30; // x22
  struct EventCampaignMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0

  if ( (byte_40F8B99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5);
    sub_B16FFC(&Method_System_Func_EventCampaignEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_EventCampaignEntity__int__TypeInfo, v7);
    sub_B16FFC(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_B16FFC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, v12);
    sub_B16FFC(&EventCampaignMaster___c_TypeInfo, v13);
    byte_40F8B99 = 1;
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
    p_method = sub_AAFEF8(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v27 = EventCampaignMaster___c_TypeInfo;
  if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v27 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_EventCampaignEntity__int__TypeInfo,
                                                                                 v23,
                                                                                 v24,
                                                                                 v25,
                                                                                 v26);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__16_3,
      v30,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventCampaignEntity__int___ctor__);
    v31 = EventCampaignMaster___c_TypeInfo->static_fields;
    v31->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__16_3,
      (System_Int32_array **)_9__16_3,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v38,
                                                    (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v22 )
LABEL_23:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v22;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B170D4();
  return y->fields.priority;
}