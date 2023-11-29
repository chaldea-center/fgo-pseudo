void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FABC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_40FABC1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    132,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
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
  System_Collections_Generic_List_int__o *v13; // x20
  unsigned int v14; // w23
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  EventMissionEntity_o *v18; // x8
  EventMissionEntity_o *v19; // x8
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FABC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FABC7 = 1;
  }
  entity = 0LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    missionData,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_27;
  if ( missionData->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( missionData->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = missionData->fields._items->m_Items[v14];
      if ( !v18 || !MasterData_WarQuestSelectionMaster )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             UserId,
             v18->fields.id,
             0LL) )
      {
        if ( !entity )
          break;
        if ( UserEventMissionEntity__isAchieveMission(entity, 0LL) )
        {
          if ( missionData->fields._size <= v14 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v19 = missionData->fields._items->m_Items[v14];
          if ( !v19 )
            break;
          if ( v19->fields.dispNo != 1 )
          {
            if ( missionData->fields._size <= v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( !v13 )
              break;
            System_Collections_Generic_List_int___Add(
              v13,
              v19->fields.dispNo,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( (signed int)++v14 >= missionData->fields._size )
        return v13;
    }
LABEL_27:
    sub_B170D4();
  }
  return v13;
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
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w24
  int32_t v37; // w25
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v39; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v41; // x26
  __int64 v42; // x10
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t UserId; // x0
  WebViewManager_o *v46; // x0
  EventMissionConditionMaster_o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  EventMissionMaster___c_c *v49; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_1; // x27
  Il2CppObject *v52; // x20
  struct EventMissionMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *MissionProgress; // x0
  int v62; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v63; // x27
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v64; // x9
  int klass_high; // w20
  il2cpp_array_size_t v66; // w19
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v67; // x8
  int v68; // w8
  EventMissionMaster___c_c *v69; // x0
  struct EventMissionMaster___c_StaticFields *v70; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v72; // x20
  struct EventMissionMaster___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v81; // [xsp+10h] [xbp-70h]
  int64_t Time; // [xsp+18h] [xbp-68h]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FABCE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v11);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v12);
    sub_B16FFC(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v13);
    sub_B16FFC(&System_Func_EventMissionConditionEntity__int__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v22);
    sub_B16FFC(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v23);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v24);
    byte_40FABCE = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_77;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v36 = Count;
    v37 = 0;
    while ( 1 )
    {
      v39 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v39 )
        goto LABEL_77;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v39,
               v37,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v41 = Item;
        v42 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v42
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_77;
          MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_77;
          if ( UserEventMissionMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 UserId,
                 (int32_t)v41[1].klass,
                 0LL) )
          {
            if ( entity )
            {
              if ( !UserEventMissionEntity__isClearMission(entity, 0LL) )
                goto LABEL_66;
              goto LABEL_29;
            }
            goto LABEL_77;
          }
          v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v46 )
            goto LABEL_77;
          v47 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v46,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v41[3].monitor <= Time
            && (__int64)v41[4].klass < Time
            && Time <= (__int64)v41[4].monitor )
          {
            if ( !v47 )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            v47,
                                            HIDWORD(v41[1].monitor),
                                            (int32_t)v41[1].klass,
                                            4,
                                            0LL);
          }
          else
          {
            if ( !v47 )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            v47,
                                            HIDWORD(v41[1].monitor),
                                            (int32_t)v41[1].klass,
                                            0LL);
          }
          v48 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            if ( *(_QWORD *)&MissionCondListHighPriority->max_length )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v37 >= v36 )
        goto LABEL_67;
    }
    v81 = *(_QWORD *)&MissionCondListHighPriority->max_length;
    v49 = EventMissionMaster___c_TypeInfo;
    if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v49 = EventMissionMaster___c_TypeInfo;
    }
    static_fields = v49->static_fields;
    _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)static_fields->__9;
      _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_EventMissionConditionEntity__int__TypeInfo,
                                                                                   v32,
                                                                                   v33,
                                                                                   v34,
                                                                                   v35);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__13_1,
        v52,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
      v53 = EventMissionMaster___c_TypeInfo->static_fields;
      v53->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v53->__9__13_1,
        (System_Int32_array **)_9__13_1,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
    }
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v48,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    MissionProgress = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        v60,
                        (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !MissionProgress )
      goto LABEL_77;
    v62 = v81;
    v63 = MissionProgress;
    if ( !(unsigned int)*(_QWORD *)&MissionProgress->max_length )
    {
LABEL_78:
      sub_B17100(MissionProgress, v32, v33);
      sub_B170A0();
    }
    v64 = MissionProgress->m_Items[0];
    if ( !v64 )
      goto LABEL_77;
    if ( (int)v81 < 1 )
      goto LABEL_66;
    klass_high = HIDWORD(v64[1].klass);
    v66 = 0;
    MissionProgress = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)(&dword_0 + 1);
    while ( 1 )
    {
      v67 = v63->m_Items[v66];
      if ( !v67 )
        goto LABEL_77;
      if ( *(&v67->fields.groupId + 1) == 4 )
      {
        if ( klass_high != HIDWORD(v67[1].klass) )
        {
          klass_high = HIDWORD(v67[1].klass);
          if ( ((unsigned __int8)MissionProgress & 1) != 0 )
            goto LABEL_29;
LABEL_60:
          MissionProgress = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)EventMissionConditionEntity__getMissionProgress(
                                                                                        (EventMissionConditionEntity_o *)v63->m_Items[v66],
                                                                                        0LL);
          v62 = v81;
          v68 = ((_DWORD)v81 - 1 == v66) & (unsigned __int8)MissionProgress;
          goto LABEL_61;
        }
        if ( ((unsigned __int8)MissionProgress & 1) != 0 )
          goto LABEL_60;
        v68 = 0;
        MissionProgress = 0LL;
      }
      else
      {
        v68 = 0;
      }
LABEL_61:
      if ( (int)++v66 >= v62 || (v68 & 1) != 0 )
      {
        if ( !v68 )
          goto LABEL_66;
LABEL_29:
        if ( v29 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          goto LABEL_66;
        }
LABEL_77:
        sub_B170D4();
      }
      if ( v66 >= v63->max_length )
        goto LABEL_78;
    }
  }
LABEL_67:
  v69 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v69 = EventMissionMaster___c_TypeInfo;
  }
  v70 = v69->static_fields;
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v70->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v70 = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)v70->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v32,
                                                                           v33,
                                                                           v34,
                                                                           v35);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v72,
      Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v73 = EventMissionMaster___c_TypeInfo->static_fields;
    v73->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v73->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  if ( !v29 )
    goto LABEL_77;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  int64_t Time; // x0
  int64_t v21; // x22
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w23
  int32_t v28; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v31; // x10
  EventMissionMaster___c_c *v32; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FABC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v17);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v18);
    byte_40FABC6 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v21 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v31 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 6
          && v21 >= (__int64)Item[3].monitor
          && v21 <= (__int64)Item[4].monitor )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v32 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v32 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v35,
      Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v36 = EventMissionMaster___c_TypeInfo->static_fields;
    v36->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v19 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  int64_t Time; // x0
  int64_t v16; // x22
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10

  if ( (byte_40FABCF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40FABCF = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v16 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && v16 >= (__int64)Item[3].monitor
          && v16 < (__int64)Item[4].klass )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_19;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_19:
  if ( v14 )
    return v14->fields._size;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  int64_t Time; // x0
  int64_t v21; // x22
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w23
  int32_t v28; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v31; // x10
  EventMissionMaster___c_c *v32; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FABC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v17);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v18);
    byte_40FABC9 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v21 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v31 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 3
          && v21 >= (__int64)Item[3].monitor
          && v21 <= (__int64)Item[4].monitor )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v32 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v32 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v35,
      Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v36 = EventMissionMaster___c_TypeInfo->static_fields;
    v36->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v19 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  int64_t Time; // x0
  int64_t v21; // x22
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w23
  int32_t v28; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v31; // x10
  EventMissionMaster___c_c *v32; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40FABC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v17);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v18);
    byte_40FABC2 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v21 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v31 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == EventMissionEntity_TypeInfo
          && LODWORD(Item[1].monitor) != 7
          && HIDWORD(Item[1].monitor) == eventId
          && v21 >= (__int64)Item[3].monitor
          && v21 <= (__int64)Item[4].monitor )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v32 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v32 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v35,
      Method_EventMissionMaster___c__getEventMissionList_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v36 = EventMissionMaster___c_TypeInfo->static_fields;
    v36->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v19 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_26590520(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w22
  int32_t v28; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x24
  __int64 v32; // x10
  EventMissionMaster___c_c *v33; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v36; // x21
  struct EventMissionMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40FABC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v18);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v19);
    byte_40FABC3 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  idList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v29,
                          v28,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v32 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v32
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v32 - 8) == EventMissionEntity_TypeInfo
          && Item[6] != 7 )
        {
          if ( !idList )
            break;
          if ( System_Collections_Generic_List_int___Contains(
                 idList,
                 Item[4],
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v31,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          }
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_19;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_19:
  v33 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v33 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v36,
      Method_EventMissionMaster___c__getEventMissionList_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v37 = EventMissionMaster___c_TypeInfo->static_fields;
    v37->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v20 )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_26591260(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 Count; // x0
  WarEntity_o *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FABC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    byte_40FABC4 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  idList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_17;
  v17 = *(_QWORD *)&idList->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
        sub_B17100(Count, v15, v16);
        sub_B170A0();
      }
      Count = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                &entity,
                idList->m_Items[v18 + 1],
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( (Count & 1) != 0 )
      {
        v15 = entity;
        if ( !entity )
          goto LABEL_17;
        if ( LODWORD(entity->fields.age) != 7 )
        {
          if ( !v12 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      LODWORD(v17) = idList->max_length;
      ++v18;
    }
    while ( (__int64)v18 < (int)v17 );
  }
  if ( !v12 )
LABEL_17:
    sub_B170D4();
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  int64_t Time; // x0
  int64_t v22; // x22
  int32_t Count; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w23
  int32_t v29; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x25
  __int64 v33; // x10
  WebViewManager_o *Instance; // x0
  int64_t UserId; // x1
  UserEventMissionEntity_o *Entity; // x0
  EventMissionMaster___c_c *v37; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x20
  Il2CppObject *v40; // x21
  struct EventMissionMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-58h]

  if ( (byte_40FABCB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v18);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v19);
    byte_40FABCB = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v22 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v29,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v33 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 4
          && v22 >= (__int64)Item[3].monitor )
        {
          if ( v22 <= (__int64)Item[4].klass )
            goto LABEL_25;
          if ( v22 <= (__int64)Item[4].monitor )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       v32->fields.missionTargetId,
                       0LL);
            if ( Entity )
            {
              if ( UserEventMissionEntity__isClearMission(Entity, 0LL) )
              {
LABEL_25:
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  v32,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v29 >= v28 )
        goto LABEL_28;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_28:
  v37 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v37 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v24,
                                                                           v25,
                                                                           v26,
                                                                           v27);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v40,
      Method_EventMissionMaster___c__getExtraMissionList_b__10_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v41 = EventMissionMaster___c_TypeInfo->static_fields;
    v41->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  int64_t Time; // x0
  int64_t v20; // x22
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w23
  int32_t v27; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v30; // x10
  EventMissionMaster___c_c *v31; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v34; // x21
  struct EventMissionMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FABCC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v16);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v17);
    byte_40FABCC = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v27,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        v30 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 5
          && v20 >= (__int64)Item[3].monitor
          && v20 <= (__int64)Item[4].monitor )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v31 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v31 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMissionEntity__TypeInfo,
                                                                           v22,
                                                                           v23,
                                                                           v24,
                                                                           v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v34,
      Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v35 = EventMissionMaster___c_TypeInfo->static_fields;
    v35->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v18 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x21
  int64_t Time; // x0
  int64_t v16; // x22
  int32_t Count; // w0
  int32_t v18; // w23
  int32_t v19; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  __int64 v22; // x10

  if ( (byte_40FABC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40FABC5 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v16 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          list,
                          v19,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v22
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v22 - 8) == EventMissionEntity_TypeInfo
          && Item[7] == eventId
          && Item[6] != 7
          && v16 >= *((_QWORD *)Item + 7)
          && v16 <= *((_QWORD *)Item + 9) )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_int___Add(
            v14,
            Item[4],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x0
  int64_t Time; // x0
  int64_t v14; // x21
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10
  unsigned int monitor; // w8
  int32_t result; // w0
  unsigned int v23; // w9

  if ( (byte_40FABCD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    byte_40FABCD = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_23:
    sub_B170D4();
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 2;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v17,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == EventMissionEntity_TypeInfo
        && HIDWORD(Item[1].monitor) == eventId
        && v14 >= (__int64)Item[3].monitor
        && v14 <= (__int64)Item[4].klass )
      {
        break;
      }
    }
    if ( ++v17 >= v16 )
      return 2;
  }
  monitor = (unsigned int)Item[1].monitor;
  result = 4;
  monitor -= 2;
  v23 = 0x21E0u >> (4 * monitor);
  if ( monitor >= 4 )
    v23 = 8;
  if ( ((8 * v23) & 8) == 0 )
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
  int64_t Time; // x0
  int64_t v11; // x22
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  EventMissionEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_40FABD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FABD0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v11 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v14,
                                         (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == EventMissionEntity_TypeInfo
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
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  int64_t Time; // x0
  int64_t v24; // x22
  int32_t Count; // w0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w23
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x25
  __int64 v35; // x10
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  WebViewManager_o *v39; // x0
  EventMissionConditionMaster_o *v40; // x0
  EventMissionConditionEntity_array *MissionCondList; // x0
  EventMissionConditionEntity_array *v42; // x9
  il2cpp_array_size_t v43; // w26
  EventMissionConditionEntity_o *v44; // x0
  EventMissionConditionEntity_array *v45; // x22
  EventMissionMaster___c_c *v46; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x19
  Il2CppObject *v49; // x21
  struct EventMissionMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int64_t v58; // [xsp+8h] [xbp-68h]
  __int64 v59; // [xsp+10h] [xbp-60h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FABCA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventMissionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventMissionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v11);
    sub_B16FFC(&EventMissionEntity_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v20);
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v21);
    byte_40FABCA = 1;
  }
  entity = 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_52;
  v24 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    for ( i = 0; i < v30; ++i )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_52;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               i,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 2
          && v24 >= (__int64)Item[3].monitor )
        {
          if ( v24 <= (__int64)Item[4].klass )
            goto LABEL_39;
          if ( v24 <= (__int64)Item[4].monitor )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_52;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_52;
            if ( UserEventMissionMaster__TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   UserId,
                   v34->fields.missionTargetId,
                   0LL) )
            {
              if ( !entity )
                goto LABEL_52;
              if ( UserEventMissionEntity__isClearMission(entity, 0LL) )
                goto LABEL_39;
            }
            else
            {
              v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v39 )
                goto LABEL_52;
              v40 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)v39,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
              if ( !v40 )
                goto LABEL_52;
              MissionCondList = EventMissionConditionMaster__getMissionCondList(
                                  v40,
                                  v34->fields.eventId,
                                  v34->fields.missionTargetId,
                                  0LL);
              if ( MissionCondList )
              {
                v42 = MissionCondList;
                v59 = *(_QWORD *)&MissionCondList->max_length;
                if ( v59 )
                {
                  if ( (int)v59 >= 1 )
                  {
                    v58 = v24;
                    if ( !(_DWORD)v59 )
                    {
LABEL_53:
                      sub_B17100(MissionCondList, v26, v27);
                      sub_B170A0();
                    }
                    v43 = 0;
                    while ( 1 )
                    {
                      v44 = v42->m_Items[v43];
                      if ( !v44 )
                        break;
                      v45 = v42;
                      MissionCondList = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                                               v44,
                                                                               0LL);
                      v42 = v45;
                      v24 = v58;
                      if ( ((unsigned __int8)MissionCondList & 1) == 0 )
                        goto LABEL_41;
                      if ( (int)++v43 >= (int)v59 )
                        goto LABEL_39;
                      if ( v43 >= v42->max_length )
                        goto LABEL_53;
                    }
LABEL_52:
                    sub_B170D4();
                  }
LABEL_39:
                  if ( !v22 )
                    goto LABEL_52;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v22,
                    v34,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
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
  v46 = EventMissionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    v46 = EventMissionMaster___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMissionEntity__TypeInfo,
                                                                          v26,
                                                                          v27,
                                                                          v28,
                                                                          v29);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v49,
      Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v50 = EventMissionMaster___c_TypeInfo->static_fields;
    v50->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)_9__9_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v50->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v22 )
    goto LABEL_52;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__9_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _DWORD *EnableMissions; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w21
  __int64 v12; // x8

  if ( (byte_40FABC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FABC8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (EnableMissions = MstMissionMaster__GetEnableMissions(MasterData_WarQuestSelectionMaster, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  v9 = EnableMissions[6];
  v10 = EnableMissions;
  if ( v9 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v9 )
    {
      sub_B17100(EnableMissions, v7, v8);
      sub_B170A0();
    }
    v12 = *(_QWORD *)&v10[2 * v11 + 8];
    if ( !v12 )
      goto LABEL_15;
    EnableMissions = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v12 + 20), v8);
    if ( !EnableMissions )
      goto LABEL_15;
    if ( *((_QWORD *)EnableMissions + 3) )
      return 1;
    v9 = v10[6];
    if ( (int)++v11 >= v9 )
      return 0;
  }
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7000 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionMaster___c_TypeInfo, v1);
    byte_40F7000 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B170D4();
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispNo - b->fields.dispNo;
}