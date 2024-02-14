void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214CEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_4214CEF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    132,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  int64_t Instance; // x0
  unsigned int v13; // w23
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventMissionEntity_o *v15; // x8
  EventMissionEntity_o *v16; // x8
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214CF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4214CF5 = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    missionData,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_27;
  if ( missionData->fields._size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( missionData->fields._size <= v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = missionData->fields._items->m_Items[v13];
      if ( !v15 || !MasterData_WarQuestSelectionMaster )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             Instance,
             v15->fields.id,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( !entity )
          break;
        Instance = UserEventMissionEntity__isAchieveMission(entity, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( missionData->fields._size <= v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v16 = missionData->fields._items->m_Items[v13];
          if ( !v16 )
            break;
          if ( v16->fields.dispNo != 1 )
          {
            if ( missionData->fields._size <= v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( !v11 )
              break;
            System_Collections_Generic_List_int___Add(
              v11,
              v16->fields.dispNo,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( (signed int)++v13 >= missionData->fields._size )
        return v11;
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  int64_t list; // x0
  int32_t Count; // w0
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  int32_t v32; // w24
  int32_t v33; // w25
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v36; // x26
  __int64 v37; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  EventMissionMaster___c_c *v42; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_1; // x27
  Il2CppObject *v45; // x20
  struct EventMissionMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  int v54; // w10
  int64_t v55; // x27
  __int64 v56; // x9
  int v57; // w20
  unsigned int v58; // w19
  __int64 v59; // x8
  int v60; // w8
  struct EventMissionMaster___c_StaticFields *v61; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v63; // x20
  struct EventMissionMaster___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v72; // x0
  __int64 v73; // [xsp+10h] [xbp-70h]
  int64_t Time; // [xsp+18h] [xbp-68h]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4214CFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v11);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v13);
    sub_B0D8A4(&System_Func_EventMissionConditionEntity__int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v22);
    sub_B0D8A4(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v23);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v24);
    byte_4214CFC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_77;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_77;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v33,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v36 = Item;
        v37 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v37
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v37 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)list,
                                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          list = NetworkManager__get_UserId(0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_77;
          if ( UserEventMissionMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 list,
                 (int32_t)v36[1].klass,
                 0LL) )
          {
            list = (int64_t)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0LL);
              if ( (list & 1) == 0 )
                goto LABEL_66;
              goto LABEL_29;
            }
            goto LABEL_77;
          }
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)list,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v36[3].monitor <= Time
            && (__int64)v36[4].klass < Time
            && Time <= (__int64)v36[4].monitor )
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v36[1].monitor),
                                            (int32_t)v36[1].klass,
                                            4,
                                            v40);
          }
          else
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v36[1].monitor),
                                            (int32_t)v36[1].klass,
                                            v39);
          }
          v41 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            if ( *(_QWORD *)&MissionCondListHighPriority->max_length )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v33 >= v32 )
        goto LABEL_67;
    }
    v73 = *(_QWORD *)&MissionCondListHighPriority->max_length;
    v42 = EventMissionMaster___c_TypeInfo;
    if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v42 = EventMissionMaster___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_EventMissionConditionEntity__int__TypeInfo,
                                                                                   v30,
                                                                                   v31);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__13_1,
        v45,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        (const MethodInfo_2619564 *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
      v46 = EventMissionMaster___c_TypeInfo->static_fields;
      v46->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v46->__9__13_1,
        (System_Int32_array **)_9__13_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v41,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v53,
                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_77;
    v54 = v73;
    v55 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
    {
LABEL_78:
      v72 = sub_B0D9A8(list);
      sub_B0D948(v72, 0LL);
    }
    v56 = *(_QWORD *)(list + 32);
    if ( !v56 )
      goto LABEL_77;
    if ( (int)v73 < 1 )
      goto LABEL_66;
    v57 = *(_DWORD *)(v56 + 36);
    v58 = 0;
    list = 1LL;
    while ( 1 )
    {
      v59 = *(_QWORD *)(v55 + 8LL * (int)v58 + 32);
      if ( !v59 )
        goto LABEL_77;
      if ( *(_DWORD *)(v59 + 20) == 4 )
      {
        if ( v57 != *(_DWORD *)(v59 + 36) )
        {
          v57 = *(_DWORD *)(v59 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_29;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v55 + 8LL * (int)v58 + 32),
                   v30);
          v54 = v73;
          v60 = ((_DWORD)v73 - 1 == v58) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v60 = 0;
        list = 0LL;
      }
      else
      {
        v60 = 0;
      }
LABEL_61:
      if ( (int)++v58 >= v54 || (v60 & 1) != 0 )
      {
        if ( !v60 )
          goto LABEL_66;
LABEL_29:
        if ( v27 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          goto LABEL_66;
        }
LABEL_77:
        sub_B0D97C(list);
      }
      if ( v58 >= *(_DWORD *)(v55 + 24) )
        goto LABEL_78;
    }
  }
LABEL_67:
  list = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v61 = *(struct EventMissionMaster___c_StaticFields **)(list + 184);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v61->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v61 = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v30,
                                                                           v31);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v63,
      Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v64 = EventMissionMaster___c_TypeInfo->static_fields;
    v64->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)_9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v64->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v27 )
    goto LABEL_77;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  int64_t Time; // x0
  int64_t v19; // x22
  int32_t Count; // w0
  int64_t v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v28; // x21
  struct EventMissionMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4214CF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v15);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v16);
    byte_4214CF4 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v24,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v21 = Time;
        v25 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v25
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v25 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B0D97C(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v28,
      Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v29 = EventMissionMaster___c_TypeInfo->static_fields;
    v29->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v17 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  int64_t Time; // x0
  int64_t v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4214CFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4214CFD = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v17,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v18 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v18
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v18 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v14 >= *(_QWORD *)(Time + 56)
          && v14 < *(_QWORD *)(Time + 64) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_19;
    }
LABEL_22:
    sub_B0D97C(Time);
  }
LABEL_19:
  if ( v12 )
    return v12->fields._size;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  int64_t Time; // x0
  int64_t v19; // x22
  int32_t Count; // w0
  int64_t v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v28; // x21
  struct EventMissionMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4214CF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v15);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v16);
    byte_4214CF7 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v24,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v21 = Time;
        v25 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v25
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v25 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B0D97C(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v28,
      Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v29 = EventMissionMaster___c_TypeInfo->static_fields;
    v29->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)_9__8_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v17 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  int64_t Time; // x0
  int64_t v19; // x22
  int32_t Count; // w0
  int64_t v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v28; // x21
  struct EventMissionMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4214CF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v15);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v16);
    byte_4214CF0 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v24,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v21 = Time;
        v25 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v25
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v25 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B0D97C(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v28,
      Method_EventMissionMaster___c__getEventMissionList_b__1_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v29 = EventMissionMaster___c_TypeInfo->static_fields;
    v29->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v17 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25200748(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *list; // x0
  int32_t Count; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w22
  int32_t v24; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x24
  __int64 v26; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4214CF1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v16);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v17);
    byte_4214CF1 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  idList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v26 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v26
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v26 - 8) == EventMissionEntity_TypeInfo
          && *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v25,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          }
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_19;
    }
LABEL_29:
    sub_B0D97C(list);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v29,
      Method_EventMissionMaster___c__getEventMissionList_b__2_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v30 = EventMissionMaster___c_TypeInfo->static_fields;
    v30->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v18 )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25201488(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214CF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    byte_4214CF2 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  idList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_17;
  v12 = *(_QWORD *)&idList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v15 = sub_B0D9A8(list);
        sub_B0D948(v15, 0LL);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v13 + 1],
                                                                                               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_17;
        if ( LODWORD(entity->fields.age) != 7 )
        {
          if ( !v10 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      LODWORD(v12) = idList->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v12 );
  }
  if ( !v10 )
LABEL_17:
    sub_B0D97C(list);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  int64_t Time; // x0
  int64_t v20; // x22
  int32_t Count; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w23
  int32_t v25; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x25
  __int64 v27; // x10
  int64_t UserId; // x1
  UserEventMissionEntity_o *Entity; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x20
  Il2CppObject *v32; // x21
  struct EventMissionMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-58h]

  if ( (byte_4214CF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v16);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v17);
    byte_4214CF9 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v25,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v27 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v27
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v27 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v20 >= *(_QWORD *)(Time + 56) )
        {
          if ( v20 <= *(_QWORD *)(Time + 64) )
            goto LABEL_25;
          if ( v20 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            Time = (int64_t)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       v26->fields.missionTargetId,
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_25:
                if ( !v18 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  v26,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_28;
    }
LABEL_38:
    sub_B0D97C(Time);
  }
LABEL_28:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v22,
                                                                           v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v32,
      Method_EventMissionMaster___c__getExtraMissionList_b__10_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v33 = EventMissionMaster___c_TypeInfo->static_fields;
    v33->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)_9__10_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v18 )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  int64_t Time; // x0
  int64_t v18; // x22
  int32_t Count; // w0
  int64_t v20; // x1
  __int64 v21; // x2
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v27; // x21
  struct EventMissionMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4214CFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v14);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v15);
    byte_4214CFA = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v23,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v20 = Time;
        v24 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v24
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v24 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B0D97C(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v20,
                                                                           v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v27,
      Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v28 = EventMissionMaster___c_TypeInfo->static_fields;
    v28->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x21
  int64_t Time; // x0
  int64_t v14; // x22
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 v17; // x10

  if ( (byte_4214CF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4214CF3 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v15 = Time;
    v16 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v16,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v17 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v17
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v17 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v14 >= *(_QWORD *)(Time + 56)
          && v14 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_int___Add(
            v12,
            *(_DWORD *)(Time + 16),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B0D97C(Time);
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x21
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10
  unsigned int monitor; // w8
  int32_t result; // w0
  unsigned int v20; // w9

  if ( (byte_4214CFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4214CFB = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_23:
    sub_B0D97C(Time);
  v12 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 2;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !Time )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             Time,
             v15,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == EventMissionEntity_TypeInfo
        && HIDWORD(Item[1].monitor) == eventId
        && (__int64)v12 >= (__int64)Item[3].monitor
        && (__int64)v12 <= (__int64)Item[4].klass )
      {
        break;
      }
    }
    if ( ++v15 >= v14 )
      return 2;
  }
  monitor = (unsigned int)Item[1].monitor;
  result = 4;
  monitor -= 2;
  v20 = 0x21E0u >> (4 * monitor);
  if ( monitor >= 4 )
    v20 = 8;
  if ( ((8 * v20) & 8) == 0 )
    __asm { BR              X8 }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_o *__fastcall EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  int64_t v11; // x22
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  EventMissionEntity_o *result; // x0
  __int64 v16; // x10

  if ( (byte_4214CFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4214CFE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v11 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         Time,
                                         v14,
                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v16 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v11 >= result->fields.startedAt
          && v11 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( ++v14 >= v13 )
        return 0LL;
    }
LABEL_20:
    sub_B0D97C(Time);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  int64_t Time; // x0
  int64_t v22; // x22
  int32_t Count; // w0
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  int32_t v26; // w23
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v31; // x3
  int64_t v32; // x9
  unsigned int v33; // w26
  int64_t v34; // x22
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x19
  Il2CppObject *v37; // x21
  struct EventMissionMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v46; // x0
  int64_t v47; // [xsp+8h] [xbp-68h]
  __int64 v48; // [xsp+10h] [xbp-60h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4214CF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v9);
    sub_B0D8A4(&EventMissionEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v18);
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v19);
    byte_4214CF8 = 1;
  }
  entity = 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_52;
  v22 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    for ( i = 0; i < v26; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_52;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        i,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v29 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v29
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v29 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v22 >= *(_QWORD *)(Time + 56) )
        {
          if ( v22 <= *(_QWORD *)(Time + 64) )
            goto LABEL_39;
          if ( v22 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_52;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_52;
            if ( UserEventMissionMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   Time,
                   v28->fields.missionTargetId,
                   0LL) )
            {
              Time = (int64_t)entity;
              if ( !entity )
                goto LABEL_52;
              Time = UserEventMissionEntity__isClearMission(entity, 0LL);
              if ( (Time & 1) != 0 )
                goto LABEL_39;
            }
            else
            {
              Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Time,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                                (EventMissionConditionMaster_o *)Time,
                                v28->fields.eventId,
                                v28->fields.missionTargetId,
                                v31);
              if ( Time )
              {
                v32 = Time;
                v48 = *(_QWORD *)(Time + 24);
                if ( v48 )
                {
                  if ( (int)v48 >= 1 )
                  {
                    v47 = v22;
                    if ( !(_DWORD)v48 )
                    {
LABEL_53:
                      v46 = sub_B0D9A8(Time);
                      sub_B0D948(v46, 0LL);
                    }
                    v33 = 0;
                    while ( 1 )
                    {
                      Time = *(_QWORD *)(v32 + 8LL * (int)v33 + 32);
                      if ( !Time )
                        break;
                      v34 = v32;
                      Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v24);
                      v32 = v34;
                      v22 = v47;
                      if ( (Time & 1) == 0 )
                        goto LABEL_41;
                      if ( (int)++v33 >= (int)v48 )
                        goto LABEL_39;
                      if ( v33 >= *(_DWORD *)(v32 + 24) )
                        goto LABEL_53;
                    }
LABEL_52:
                    sub_B0D97C(Time);
                  }
LABEL_39:
                  if ( !v20 )
                    goto LABEL_52;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v20,
                    v28,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
                }
              }
            }
          }
        }
      }
LABEL_41:
      ;
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (*(_BYTE *)(Time + 307) & 4) != 0 && !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v24,
                                                                          v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v37,
      Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v38 = EventMissionMaster___c_TypeInfo->static_fields;
    v38->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)_9__9_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v20 )
    goto LABEL_52;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__9_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  const MethodInfo *v5; // x2
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x8
  __int64 v11; // x0

  if ( (byte_4214CF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4214CF6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
    {
      v11 = sub_B0D9A8(Instance);
      sub_B0D948(v11, 0LL);
    }
    v9 = *((_QWORD *)v7 + (int)v8 + 4);
    if ( !v9 )
      goto LABEL_15;
    Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v9 + 20), v5);
    if ( !Instance )
      goto LABEL_15;
    if ( *((_QWORD *)Instance + 3) )
      return 1;
    v6 = *((_DWORD *)v7 + 6);
    if ( (int)++v8 >= v6 )
      return 0;
  }
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventMissionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B99 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionMaster___c_TypeInfo, v1);
    byte_4211B99 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventMissionMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventMissionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventMissionMaster___c___ctor(EventMissionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B0D97C(this);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.dispNo - b->fields.dispNo;
}