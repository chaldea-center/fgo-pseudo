void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0534 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
    byte_42B0534 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    133,
    (const MethodInfo_23E223C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  int64_t Instance; // x0
  __int64 v6; // x1
  unsigned int v7; // w23
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventMissionEntity_o *v9; // x8
  EventMissionEntity_o *v10; // x8
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B053A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B053A = 1;
  }
  entity = 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_27;
  if ( missionData->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( missionData->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = missionData->fields._items->m_Items[v7];
      if ( !v9 || !MasterData_WarQuestSelectionMaster )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             Instance,
             v9->fields.id,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( !entity )
          break;
        Instance = UserEventMissionEntity__isAchieveMission(entity, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( missionData->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v10 = missionData->fields._items->m_Items[v7];
          if ( !v10 )
            break;
          if ( v10->fields.dispNo != 1 )
          {
            if ( missionData->fields._size <= v7 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            if ( !v4 )
              break;
            System_Collections_Generic_List_int___Add(
              v4,
              v10->fields.dispNo,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( (signed int)++v7 >= missionData->fields._size )
        return v4;
    }
LABEL_27:
    sub_B52A5C(Instance, v6);
  }
  return v4;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x22
  const MethodInfo *v6; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v9; // w24
  int32_t v10; // w25
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x26
  __int64 v14; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  EventMissionMaster___c_c *v19; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_1; // x27
  Il2CppObject *v22; // x20
  struct EventMissionMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int v31; // w10
  int64_t v32; // x27
  __int64 v33; // x9
  int v34; // w20
  unsigned int v35; // w19
  __int64 v36; // x8
  int v37; // w8
  struct EventMissionMaster___c_StaticFields *v38; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v40; // x20
  struct EventMissionMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v49; // x0
  __int64 v50; // [xsp+10h] [xbp-70h]
  int64_t Time; // [xsp+18h] [xbp-68h]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42B0541 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Func_EventMissionConditionEntity__int___ctor__);
    sub_B52984(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__);
    sub_B52984(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B0541 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_77;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_77;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        v14 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)list,
                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                 (int32_t)v13[1].klass,
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
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)list,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v13[3].monitor <= Time
            && (__int64)v13[4].klass < Time
            && Time <= (__int64)v13[4].monitor )
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v13[1].monitor),
                                            (int32_t)v13[1].klass,
                                            4,
                                            v17);
          }
          else
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v13[1].monitor),
                                            (int32_t)v13[1].klass,
                                            v16);
          }
          v18 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            if ( *(_QWORD *)&MissionCondListHighPriority->max_length )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v10 >= v9 )
        goto LABEL_67;
    }
    v50 = *(_QWORD *)&MissionCondListHighPriority->max_length;
    v19 = EventMissionMaster___c_TypeInfo;
    if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v19 = EventMissionMaster___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__13_1,
        v22,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
      v23 = EventMissionMaster___c_TypeInfo->static_fields;
      v23->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v23->__9__13_1,
        (System_Int32_array **)_9__13_1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v18,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v30,
                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_77;
    v31 = v50;
    v32 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
    {
LABEL_78:
      v49 = sub_B52A88(list);
      sub_B52A28(v49, 0LL);
    }
    v33 = *(_QWORD *)(list + 32);
    if ( !v33 )
      goto LABEL_77;
    if ( (int)v50 < 1 )
      goto LABEL_66;
    v34 = *(_DWORD *)(v33 + 36);
    v35 = 0;
    list = 1LL;
    while ( 1 )
    {
      v36 = *(_QWORD *)(v32 + 8LL * (int)v35 + 32);
      if ( !v36 )
        goto LABEL_77;
      if ( *(_DWORD *)(v36 + 20) == 4 )
      {
        if ( v34 != *(_DWORD *)(v36 + 36) )
        {
          v34 = *(_DWORD *)(v36 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_29;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v32 + 8LL * (int)v35 + 32),
                   v6);
          v31 = v50;
          v37 = ((_DWORD)v50 - 1 == v35) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v37 = 0;
        list = 0LL;
      }
      else
      {
        v37 = 0;
      }
LABEL_61:
      if ( (int)++v35 >= v31 || (v37 & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_66;
LABEL_29:
        if ( v5 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          goto LABEL_66;
        }
LABEL_77:
        sub_B52A5C(list, v6);
      }
      if ( v35 >= *(_DWORD *)(v32 + 24) )
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
  v38 = *(struct EventMissionMaster___c_StaticFields **)(list + 184);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v38->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v38 = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v40,
      Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v41 = EventMissionMaster___c_TypeInfo->static_fields;
    v41->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)_9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v41->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v5 )
    goto LABEL_77;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B0539 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B0539 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B52A5C(Time, v7);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v15,
      Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v16 = EventMissionMaster___c_TypeInfo->static_fields;
    v16->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10

  if ( (byte_42B0542 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0542 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 < *(_QWORD *)(Time + 64) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_19;
    }
LABEL_22:
    sub_B52A5C(Time, v7);
  }
LABEL_19:
  if ( v5 )
    return v5->fields._size;
  else
    return 0;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B053C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B053C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B52A5C(Time, v7);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v15,
      Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v16 = EventMissionMaster___c_TypeInfo->static_fields;
    v16->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B0535 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B0535 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B52A5C(Time, v7);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v15,
      Method_EventMissionMaster___c__getEventMissionList_b__1_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v16 = EventMissionMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25657608(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x24
  __int64 v12; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B0536 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B0536 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
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
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v11,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          }
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_29:
    sub_B52A5C(list, v6);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v15,
      Method_EventMissionMaster___c__getEventMissionList_b__2_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v16 = EventMissionMaster___c_TypeInfo->static_fields;
    v16->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v5 )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25658348(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WarEntity_o *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0537 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_42B0537 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_17;
  v8 = *(_QWORD *)&idList->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v11 = sub_B52A88(list);
        sub_B52A28(v11, 0LL);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v9 + 1],
                                                                                               (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v6 = entity;
        if ( !entity )
          goto LABEL_17;
        if ( LODWORD(entity->fields.age) != 7 )
        {
          if ( !v5 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      LODWORD(v8) = idList->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v8 );
  }
  if ( !v5 )
LABEL_17:
    sub_B52A5C(list, v6);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  int64_t UserId; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x25
  __int64 v13; // x10
  UserEventMissionEntity_o *Entity; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x20
  Il2CppObject *v17; // x21
  struct EventMissionMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-58h]

  if ( (byte_42B053E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B053E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v13 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v13
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v13 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_25;
          if ( v8 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                       v12->fields.missionTargetId,
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_25:
                if ( !v5 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  v12,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_28;
    }
LABEL_38:
    sub_B52A5C(Time, UserId);
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
    v17 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v17,
      Method_EventMissionMaster___c__getExtraMissionList_b__10_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v18 = EventMissionMaster___c_TypeInfo->static_fields;
    v18->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)_9__10_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v5 )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  __int64 v12; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v15; // x21
  struct EventMissionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42B053F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B053F = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v11,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        v12 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v12
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v12 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v11 >= v10 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B52A5C(Time, v7);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v15,
      Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v16 = EventMissionMaster___c_TypeInfo->static_fields;
    v16->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)_9__11_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int32_t v9; // w23
  int32_t v10; // w24
  __int64 v11; // x10

  if ( (byte_42B0538 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0538 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v8 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v9 = Time;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v10,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v11 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v11
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v11 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_int___Add(
            v5,
            *(_DWORD *)(Time + 16),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B52A5C(Time, v7);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x21
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  unsigned int monitor; // w8
  int32_t result; // w0
  unsigned int v16; // w9

  if ( (byte_42B0540 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0540 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_23:
    sub_B52A5C(Time, v7);
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 2;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !Time )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             Time,
             v11,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == EventMissionEntity_TypeInfo
        && HIDWORD(Item[1].monitor) == eventId
        && (__int64)v8 >= (__int64)Item[3].monitor
        && (__int64)v8 <= (__int64)Item[4].klass )
      {
        break;
      }
    }
    if ( ++v11 >= v10 )
      return 2;
  }
  monitor = (unsigned int)Item[1].monitor;
  result = 4;
  monitor -= 2;
  v16 = 0x21E0u >> (4 * monitor);
  if ( monitor >= 4 )
    v16 = 8;
  if ( ((8 * v16) & 8) == 0 )
    __asm { BR              X8 }
  return result;
}


EventMissionEntity_o *__fastcall EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  EventMissionEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_42B0543 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0543 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v9 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         Time,
                                         v12,
                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v9 >= result->fields.startedAt
          && v9 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_20:
    sub_B52A5C(Time, v8);
  }
  return 0LL;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  int64_t Time; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x25
  __int64 v13; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v15; // x3
  int64_t v16; // x9
  unsigned int v17; // w26
  int64_t v18; // x22
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x19
  Il2CppObject *v21; // x21
  struct EventMissionMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v30; // x0
  int64_t v31; // [xsp+8h] [xbp-68h]
  __int64 v32; // [xsp+10h] [xbp-60h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B053D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventMissionEntity___ctor__);
    sub_B52984(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&EventMissionEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__);
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42B053D = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_52;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    for ( i = 0; i < v10; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_52;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        i,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v13 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v13
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v13 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_39;
          if ( v8 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_52;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                   v12->fields.missionTargetId,
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
              Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Time,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                                (EventMissionConditionMaster_o *)Time,
                                v12->fields.eventId,
                                v12->fields.missionTargetId,
                                v15);
              if ( Time )
              {
                v16 = Time;
                v32 = *(_QWORD *)(Time + 24);
                if ( v32 )
                {
                  if ( (int)v32 >= 1 )
                  {
                    v31 = v8;
                    if ( !(_DWORD)v32 )
                    {
LABEL_53:
                      v30 = sub_B52A88(Time);
                      sub_B52A28(v30, 0LL);
                    }
                    v17 = 0;
                    while ( 1 )
                    {
                      Time = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                      if ( !Time )
                        break;
                      v18 = v16;
                      Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v7);
                      v16 = v18;
                      v8 = v31;
                      if ( (Time & 1) == 0 )
                        goto LABEL_41;
                      if ( (int)++v17 >= (int)v32 )
                        goto LABEL_39;
                      if ( v17 >= *(_DWORD *)(v16 + 24) )
                        goto LABEL_53;
                    }
LABEL_52:
                    sub_B52A5C(Time, v7);
                  }
LABEL_39:
                  if ( !v5 )
                    goto LABEL_52;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v5,
                    v12,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
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
    v21 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v21,
      Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMissionEntity___ctor__);
    v22 = EventMissionMaster___c_TypeInfo->static_fields;
    v22->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)_9__9_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v22->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v5 )
    goto LABEL_52;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__9_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x8
  __int64 v11; // x0

  if ( (byte_42B053B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B053B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(Instance, v4);
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
      v11 = sub_B52A88(Instance);
      sub_B52A28(v11, 0LL);
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
  Il2CppObject *v1; // x19
  struct EventMissionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD930 & 1) == 0 )
  {
    sub_B52984(&EventMissionMaster___c_TypeInfo);
    byte_42AD930 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B52A5C(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}