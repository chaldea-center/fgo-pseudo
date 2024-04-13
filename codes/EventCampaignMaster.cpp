void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB125 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB125 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    82,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  EventCampaignMaster___c_c *v44; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_0; // x20
  Il2CppObject *v47; // x21
  struct EventCampaignMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct EventCampaignMaster___c_StaticFields *v55; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_1; // x21
  Il2CppObject *v57; // x22
  struct EventCampaignMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Linq_ILookup_TKey__TElement__o *v65; // x0
  EventCampaignMaster___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x19
  struct EventCampaignMaster___c_StaticFields *v68; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__16_2; // x20
  Il2CppObject *v70; // x21
  struct EventCampaignMaster___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0

  if ( (byte_42EB12E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_EventCampaignEntity__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo,
      v23,
      v24,
      v25);
    sub_B5D5C4(&System_Func_EventCampaignEntity__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, v32, v33, v34);
    sub_B5D5C4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__, v35, v36, v37);
    sub_B5D5C4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__, v38, v39, v40);
    sub_B5D5C4(&EventCampaignMaster___c_TypeInfo, v41, v42, v43);
    byte_42EB12E = 1;
  }
  if ( campaignList && campaignList->fields._size )
  {
    v44 = EventCampaignMaster___c_TypeInfo;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v44 = EventCampaignMaster___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_0;
    if ( !_9__16_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__16_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventCampaignEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__16_0,
        v47,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_EventCampaignEntity__int___ctor__);
      v48 = EventCampaignMaster___c_TypeInfo->static_fields;
      v48->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__16_0,
        (System_Int32_array **)_9__16_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v44 = EventCampaignMaster___c_TypeInfo;
    }
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = EventCampaignMaster___c_TypeInfo;
    }
    v55 = v44->static_fields;
    _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v55->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v55 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)v55->__9;
      _9__16_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_1,
        v57,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_EventCampaignEntity__EventCampaignEntity___ctor__);
      v58 = EventCampaignMaster___c_TypeInfo->static_fields;
      v58->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v58->__9__16_1,
        (System_Int32_array **)_9__16_1,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    v65 = System_Linq_Enumerable__ToLookup_object__int__object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
            (System_Func_TSource__TKey__o *)_9__16_0,
            (System_Func_TSource__TElement__o *)_9__16_1,
            (const MethodInfo_1CBA994 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    v66 = EventCampaignMaster___c_TypeInfo;
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
    if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
      v66 = EventCampaignMaster___c_TypeInfo;
    }
    v68 = v66->static_fields;
    _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v68->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v68 = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v70 = (Il2CppObject *)v68->__9;
      _9__16_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__16_2,
        v70,
        Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
        (const MethodInfo_2C3041C *)Method_System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity____ctor__);
      v71 = EventCampaignMaster___c_TypeInfo->static_fields;
      v71->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v71->__9__16_2,
        (System_Int32_array **)_9__16_2,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                 v67,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                                 (const MethodInfo_1CB49A0 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                       v78,
                                                                       (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  }
  return campaignList;
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
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
  DataManager_o *Instance; // x0
  const MethodInfo *v29; // x1
  EventMaster_o *v30; // x22
  int32_t Count; // w0
  int32_t v32; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x25
  int32_t v34; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x26
  __int64 v36; // x10

  if ( (byte_42EB12D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      campaignTarget,
      eventType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v10, v11, v12);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    byte_42EB12D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v30 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0LL;
    v34 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v34,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v36 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v36
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[v36 - 1] == EventCampaignEntity_TypeInfo
          && *(_DWORD *)&Instance->fields._DispLog == campaignTarget )
        {
          if ( !v30 )
            break;
          if ( EventMaster__IsEnableEvent(v30, Instance->fields.m_CachedPtr, eventType, 0LL) )
          {
            if ( !v33 )
            {
              v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v33,
                (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
              if ( !v33 )
                break;
            }
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              v35,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
      }
      if ( ++v34 >= v32 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v33,
                 v29);
    }
LABEL_21:
    sub_B5D69C(Instance, v29);
  }
  v33 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v33, v29);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  int64_t Instance; // x0
  const MethodInfo *v39; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v41; // x21
  int32_t Count; // w22
  WarQuestSelectionMaster_o *v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x25
  int32_t v45; // w24
  unsigned int v46; // w8
  const MethodInfo *v47; // x5
  struct System_Single_array *coordinate; // x9
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x26
  __int64 v53; // x10
  int32_t v55; // [xsp+4h] [xbp-7Ch]
  int64_t condValue; // [xsp+8h] [xbp-78h]
  int32_t targetId; // [xsp+14h] [xbp-6Ch]
  EventCampaignReleaseMaster_o *v58; // [xsp+18h] [xbp-68h]
  EventCampaignReleaseEntity_o *v59; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42EB129 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42EB129 = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v41 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v43 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v58 = (EventCampaignReleaseMaster_o *)v43;
    v44 = 0LL;
    v45 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v45,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v53 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v53
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v53 - 8) == EventCampaignEntity_TypeInfo )
        {
          v46 = *(_DWORD *)(Instance + 20);
          if ( v46 <= 0x20 && ((1LL << v46) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity->fields.age) | 8) == 13 )
              {
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v41 && entity->fields.targetId <= v41 )
                {
                  Instance = (int64_t)v58;
                  if ( !v58 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v58,
                               &v59,
                               v52->fields.missionTargetId,
                               v52->fields.missionConditionDetailId,
                               v52->fields.targetId,
                               v47);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_41;
                  if ( !v59 )
                    break;
                  condType = v59->fields.condType;
                  condTargetId = v59->fields.condTargetId;
                  condNum = v59->fields.condNum;
                  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v59->fields.condTargetId;
                    condValue = v59->fields.condNum;
                    v55 = v59->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v55;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  if ( CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL) )
                  {
LABEL_41:
                    if ( !v44 )
                    {
                      v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                        v44,
                        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v44 )
                        break;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v44,
                      v52,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v45 >= Count )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v44,
                 v39);
    }
LABEL_38:
    sub_B5D69C(Instance, v39);
  }
  v44 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v44, v39);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_29798540(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  __int64 v51; // x0
  __int64 v52; // x1
  _BOOL8 v53; // x0
  __int64 v54; // x1
  EventCampaignEntity_o *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x21
  __int64 v57; // x0
  const MethodInfo *v58; // x1
  EventCampaignEntity_o *v59; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x1
  int32_t target; // w9
  _DWORD *v62; // x9
  _DWORD *v63; // x9
  _DWORD *v64; // x9
  _BOOL8 v65; // x0
  const MethodInfo *v66; // x1
  Il2CppObject *v67; // x21
  Il2CppClass *klass; // x8
  _DWORD *data; // x10
  _DWORD *v70; // x8
  EventCampaignEntity_o *v71; // x0
  int v72; // w8
  char v73; // w22
  int v74; // w10
  __int64 v75; // x0
  const MethodInfo *v76; // x1
  EventCampaignEntity_o *v77; // x0
  int v78; // w21
  int v80; // [xsp+4h] [xbp-BCh]
  int v81; // [xsp+4h] [xbp-BCh]
  _BYTE v82[36]; // [xsp+8h] [xbp-B8h] BYREF
  int v83; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EB12B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      (_DWORD)eventCampaignEntities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v47, v48, v49);
    byte_42EB12B = 1;
  }
  memset(&v85, 0, sizeof(v85));
  memset(&v84, 0, sizeof(v84));
  v83 = 0;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_B5D69C(v51, v52);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v82,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventCampaignEntities,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v80 = 0;
  v85 = *(System_Collections_Generic_List_Enumerator_T__o *)v82;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v53 )
      break;
    if ( !v50 )
      sub_B5D69C(v53, v54);
    current = (EventCampaignEntity_o *)v85.fields.current;
    if ( v50->fields._size <= 0 )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B5D69C(v57, v58);
      v59 = EventCampaignEntity__Clone(current, v58);
      v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)v59;
      if ( !v56 )
        sub_B5D69C(v59, v59);
      goto LABEL_10;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v82,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v50,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v84 = *(System_Collections_Generic_List_Enumerator_T__o *)v82;
    while ( 1 )
    {
      v65 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v84,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v65 )
        break;
      if ( !current )
        sub_B5D69C(v65, v66);
      v67 = v84.fields.current;
      if ( !v84.fields.current )
        sub_B5D69C(v65, v66);
      if ( !LODWORD(v84.fields.current[1].monitor) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      klass = v84.fields.current[1].klass;
      data = klass->_1.byval_arg.data;
      if ( !data )
        sub_B5D69C(v65, v66);
      if ( current->fields.target == data[5] )
        goto LABEL_41;
      target = current->fields.target;
      if ( target == 2 )
      {
        if ( !LODWORD(v84.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( data[5] == 27 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 27 )
      {
        if ( !LODWORD(v84.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v62 = klass->_1.byval_arg.data;
        if ( !v62 )
          sub_B5D69C(v65, v66);
        if ( v62[5] == 2 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 4 )
      {
        if ( !LODWORD(v84.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v63 = klass->_1.byval_arg.data;
        if ( !v63 )
          sub_B5D69C(v65, v66);
        if ( v63[5] == 32 )
          goto LABEL_41;
        target = current->fields.target;
      }
      if ( target == 32 )
      {
        if ( !LODWORD(v84.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v64 = klass->_1.byval_arg.data;
        if ( !v64 )
          sub_B5D69C(v65, v66);
        if ( v64[5] == 4 )
        {
LABEL_41:
          if ( !LODWORD(v84.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v70 = klass->_1.byval_arg.data;
          if ( !v70 )
            sub_B5D69C(v65, v66);
          if ( current->fields.value == v70[12] )
          {
            v71 = EventCampaignEntity__Clone(current, v66);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v67,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            *(_DWORD *)&v82[4 * v80 + 24] = 282;
            v72 = v83;
            v73 = 1;
            goto LABEL_47;
          }
        }
      }
    }
    *(_DWORD *)&v82[4 * v80 + 24] = 282;
    v72 = v83;
    v73 = 0;
LABEL_47:
    v83 = v72 + 1;
    v81 = v72 + 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v84,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    v74 = v81;
    if ( v81 && *(_DWORD *)&v82[4 * v81 + 20] == 282 )
    {
      v74 = v81 - 1;
      v83 = v81 - 1;
    }
    v80 = v74;
    if ( (v73 & 1) == 0 )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_B5D69C(v75, v76);
      v77 = EventCampaignEntity__Clone(current, v76);
      v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)v77;
      if ( !v56 )
        sub_B5D69C(v77, v77);
LABEL_10:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v56,
        v60,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v50,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
  }
  *(_DWORD *)&v82[4 * v80 + 24] = 342;
  v78 = ++v83;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v78 && *(_DWORD *)&v82[4 * v78 + 20] == 342 )
    v83 = v78 - 1;
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v50;
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

  if ( (byte_42EB123 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      eventId,
      target,
      *(_QWORD *)&idx);
    byte_42EB123 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int64_t Instance; // x0
  const MethodInfo *v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v39; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x24
  int32_t i; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x26
  __int64 v44; // x10
  struct System_Single_array *v45; // x9
  struct System_Single_array *coordinate; // x9
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB12A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    byte_42EB12A = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v39 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v44 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v44
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v44 - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_38;
          Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            switch ( type )
            {
              case 2:
                if ( !entity )
                  goto LABEL_38;
                coordinate = entity->fields.coordinate;
                if ( (__int64)coordinate >= 1 && (__int64)coordinate >= v39 && entity->fields.targetId <= v39 )
                  goto LABEL_33;
                break;
              case 1:
                if ( !entity )
                  goto LABEL_38;
                if ( (__int64)entity->fields.coordinate >= 1 && entity->fields.targetId > v39 )
                {
LABEL_33:
                  if ( !v41 )
                    goto LABEL_38;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v41,
                    v43,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                }
                break;
              case 0:
                if ( !entity )
                  goto LABEL_38;
                v45 = entity->fields.coordinate;
                if ( (__int64)v45 >= 1 && (__int64)v45 > v39 && entity->fields.targetId < v39 )
                  goto LABEL_33;
                break;
            }
          }
        }
      }
    }
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v41,
                        v37);
  if ( !Instance )
LABEL_38:
    sub_B5D69C(Instance, v37);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int64_t Instance; // x0
  const MethodInfo *v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v39; // x22
  int32_t Count; // w0
  int32_t v41; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x25
  int32_t v43; // w24
  System_Int32_array **Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x26
  __int64 v46; // x10
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EB12C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, gachaId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    byte_42EB12C = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v39 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v41 = Count;
    v42 = 0LL;
    v43 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      v43,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v46 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*Item)->m_Items[68]) >= (unsigned int)v46
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * v46 - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         v45->fields.missionTargetId,
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity->fields.coordinate >= 1
                && entity->fields.targetId <= v39
                && v39 <= *(_QWORD *)&entity->fields.eventId )
              {
                if ( !v42 )
                {
                  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v42,
                    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v42 )
                    break;
                }
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v42,
                  v45,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v43 >= v41 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v42,
                 v37);
    }
LABEL_29:
    sub_B5D69C(Instance, v37);
  }
  v42 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v42, v37);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, v2);
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EB126 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v21, v22, v23);
    byte_42EB126 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v29 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(list->fields.items) == targetType )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_42EB124 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&target);
    byte_42EB124 = 1;
  }
  PK = EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  EventCampaignEntity_o *v30; // x0
  EventCampaignEntity_o *v31; // x21
  __int64 v32; // x10
  int v33; // w8
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42EB127 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      event_id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42EB127 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                     Enumerator,
                                     *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( v30 )
    {
      v32 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v32
        && (EventCampaignEntity_c *)v30->klass->_2.typeHierarchy[v32 - 1] == EventCampaignEntity_TypeInfo
        && v30->fields.eventId == event_id )
      {
        v33 = 64;
        goto LABEL_24;
      }
    }
  }
  v31 = 0LL;
  v33 = 62;
LABEL_24:
  v39 = v33;
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 62 )
    return 0LL;
  return v31;
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_29795492(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  const MethodInfo *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  signed int max_length; // w25
  int32_t v32; // w23
  int32_t v33; // w24
  __int64 v34; // x10
  __int64 v35; // x10
  EventEntity_o *v36; // x11
  __int64 v38; // x0

  if ( (byte_42EB128 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetType,
      (_DWORD)eventEntityList,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventCampaignEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v25, v26, v27);
    byte_42EB128 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v32 = (int)list;
    v33 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v33,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v29 = (const MethodInfo *)list;
      v34 = *(&EventCampaignEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v34
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v35 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v35 >= eventEntityList->max_length )
          {
            v38 = sub_B5D6C8(list);
            sub_B5D668(v38, 0LL);
          }
          v36 = eventEntityList->m_Items[v35];
          if ( !v36 )
            goto LABEL_27;
          if ( LODWORD(list->fields.items) == v36->fields.id )
            break;
          if ( (int)++v35 >= max_length )
            goto LABEL_21;
        }
        if ( !v28 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      }
LABEL_21:
      if ( ++v33 >= v32 )
        goto LABEL_22;
    }
LABEL_27:
    sub_B5D69C(list, v29);
  }
LABEL_22:
  if ( !v28 )
    goto LABEL_27;
  if ( v28->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                                                       (System_Collections_Generic_List_EventCampaignEntity__o *)v28,
                                                                                       v29);
  if ( !list )
    goto LABEL_27;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E64F0 & 1) == 0 )
  {
    sub_B5D5C4(&EventCampaignMaster___c_TypeInfo, v1, v2, v3);
    byte_42E64F0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCampaignMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  EventCampaignMaster___c_c *v40; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__16_3; // x21
  Il2CppObject *v43; // x22
  struct EventCampaignMaster___c_StaticFields *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_42E64F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_EventCampaignEntity__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_EventCampaignEntity__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, v29, v30, v31);
    this = (EventCampaignMaster___c_o *)sub_B5D5C4(&EventCampaignMaster___c_TypeInfo, v32, v33, v34);
    byte_42E64F1 = 1;
  }
  if ( !x )
    goto LABEL_23;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL, v3);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v40 = EventCampaignMaster___c_TypeInfo;
  if ( (BYTE3(EventCampaignMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v40 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__16_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__16_3,
      v43,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventCampaignEntity__int___ctor__);
    v44 = EventCampaignMaster___c_TypeInfo->static_fields;
    v44->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_B5D560(&v44->__9__16_3);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                        v45,
                                        (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v39 )
LABEL_23:
    sub_B5D69C(this, x);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v39;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B5D69C(this, 0LL);
  return y->fields.priority;
}