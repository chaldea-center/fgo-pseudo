void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9056 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9056 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    133,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
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
  System_Collections_Generic_List_int__o *v26; // x20
  int64_t Instance; // x0
  __int64 v28; // x1
  unsigned int v29; // w23
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventMissionEntity_o *v31; // x8
  EventMissionEntity_o *v32; // x8
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E905C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)missionData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E905C = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !missionData )
    goto LABEL_27;
  if ( missionData->fields._size >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( missionData->fields._size <= v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v31 = missionData->fields._items->m_Items[v29];
      if ( !v31 || !MasterData_WarQuestSelectionMaster )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             Instance,
             v31->fields.id,
             0LL) )
      {
        Instance = (int64_t)entity;
        if ( !entity )
          break;
        Instance = UserEventMissionEntity__isAchieveMission(entity, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( missionData->fields._size <= v29 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v32 = missionData->fields._items->m_Items[v29];
          if ( !v32 )
            break;
          if ( v32->fields.dispNo != 1 )
          {
            if ( missionData->fields._size <= v29 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( !v26 )
              break;
            System_Collections_Generic_List_int___Add(
              v26,
              v32->fields.dispNo,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( (signed int)++v29 >= missionData->fields._size )
        return v26;
    }
LABEL_27:
    sub_B5D69C(Instance, v28);
  }
  return v26;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x22
  const MethodInfo *v66; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v69; // w24
  int32_t v70; // w25
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v73; // x26
  __int64 v74; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x19
  EventMissionMaster___c_c *v79; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_1; // x27
  Il2CppObject *v82; // x20
  struct EventMissionMaster___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  int v91; // w10
  int64_t v92; // x27
  __int64 v93; // x9
  int v94; // w20
  unsigned int v95; // w19
  __int64 v96; // x8
  int v97; // w8
  struct EventMissionMaster___c_StaticFields *v98; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x19
  Il2CppObject *v100; // x20
  struct EventMissionMaster___c_StaticFields *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v109; // x0
  __int64 v110; // [xsp+10h] [xbp-70h]
  int64_t Time; // [xsp+18h] [xbp-68h]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E9063 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      missionType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v23, v24, v25);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_EventMissionConditionEntity__int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&NetworkManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v56, v57, v58);
    sub_B5D5C4(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v59, v60, v61);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v62, v63, v64);
    byte_42E9063 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_77;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v69 = Count;
    v70 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_77;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v70,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v73 = Item;
        v74 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v74
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v74 - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)list,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                 (int32_t)v73[1].klass,
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
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_77;
          list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)list,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v73[3].monitor <= Time
            && (__int64)v73[4].klass < Time
            && Time <= (__int64)v73[4].monitor )
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v73[1].monitor),
                                            (int32_t)v73[1].klass,
                                            4,
                                            v77);
          }
          else
          {
            if ( !list )
              goto LABEL_77;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v73[1].monitor),
                                            (int32_t)v73[1].klass,
                                            v76);
          }
          v78 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            if ( *(_QWORD *)&MissionCondListHighPriority->max_length )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v70 >= v69 )
        goto LABEL_67;
    }
    v110 = *(_QWORD *)&MissionCondListHighPriority->max_length;
    v79 = EventMissionMaster___c_TypeInfo;
    if ( (BYTE3(EventMissionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v79 = EventMissionMaster___c_TypeInfo;
    }
    static_fields = v79->static_fields;
    _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      }
      v82 = (Il2CppObject *)static_fields->__9;
      _9__13_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__13_1,
        v82,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
      v83 = EventMissionMaster___c_TypeInfo->static_fields;
      v83->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v83->__9__13_1,
        (System_Int32_array **)_9__13_1,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
    }
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v78,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v90,
                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_77;
    v91 = v110;
    v92 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
    {
LABEL_78:
      v109 = sub_B5D6C8(list);
      sub_B5D668(v109, 0LL);
    }
    v93 = *(_QWORD *)(list + 32);
    if ( !v93 )
      goto LABEL_77;
    if ( (int)v110 < 1 )
      goto LABEL_66;
    v94 = *(_DWORD *)(v93 + 36);
    v95 = 0;
    list = 1LL;
    while ( 1 )
    {
      v96 = *(_QWORD *)(v92 + 8LL * (int)v95 + 32);
      if ( !v96 )
        goto LABEL_77;
      if ( *(_DWORD *)(v96 + 20) == 4 )
      {
        if ( v94 != *(_DWORD *)(v96 + 36) )
        {
          v94 = *(_DWORD *)(v96 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_29;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v92 + 8LL * (int)v95 + 32),
                   v66);
          v91 = v110;
          v97 = ((_DWORD)v110 - 1 == v95) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v97 = 0;
        list = 0LL;
      }
      else
      {
        v97 = 0;
      }
LABEL_61:
      if ( (int)++v95 >= v91 || (v97 & 1) != 0 )
      {
        if ( !v97 )
          goto LABEL_66;
LABEL_29:
        if ( v65 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v65,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          goto LABEL_66;
        }
LABEL_77:
        sub_B5D69C(list, v66);
      }
      if ( v95 >= *(_DWORD *)(v92 + 24) )
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
  v98 = *(struct EventMissionMaster___c_StaticFields **)(list + 184);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v98->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*(_BYTE *)(list + 307) & 4) != 0 && !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v98 = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v100 = (Il2CppObject *)v98->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v100,
      Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v101 = EventMissionMaster___c_TypeInfo->static_fields;
    v101->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v101->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
  }
  if ( !v65 )
    goto LABEL_77;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  int64_t Time; // x0
  int64_t v44; // x1
  int64_t v45; // x22
  int32_t Count; // w0
  int32_t v47; // w23
  int32_t v48; // w24
  __int64 v49; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v52; // x21
  struct EventMissionMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E905B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v36, v37, v38);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v39, v40, v41);
    byte_42E905B = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v45 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v47 = Count;
    v48 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v48,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v44 = Time;
        v49 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v49
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v49 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v45 >= *(_QWORD *)(Time + 56)
          && v45 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v48 >= v47 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(Time, v44);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v52,
      Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v53 = EventMissionMaster___c_TypeInfo->static_fields;
    v53->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v42 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  int64_t Time; // x0
  int64_t v29; // x1
  int64_t v30; // x22
  int32_t Count; // w0
  int32_t v32; // w23
  int32_t v33; // w24
  __int64 v34; // x10

  if ( (byte_42E9064 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    byte_42E9064 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v30 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v33,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v29 = Time;
        v34 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v34
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v34 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v30 >= *(_QWORD *)(Time + 56)
          && v30 < *(_QWORD *)(Time + 64) )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v33 >= v32 )
        goto LABEL_19;
    }
LABEL_22:
    sub_B5D69C(Time, v29);
  }
LABEL_19:
  if ( v27 )
    return v27->fields._size;
  else
    return 0;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  int64_t Time; // x0
  int64_t v44; // x1
  int64_t v45; // x22
  int32_t Count; // w0
  int32_t v47; // w23
  int32_t v48; // w24
  __int64 v49; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v52; // x21
  struct EventMissionMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E905E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v36, v37, v38);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v39, v40, v41);
    byte_42E905E = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v45 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v47 = Count;
    v48 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v48,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v44 = Time;
        v49 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v49
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v49 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v45 >= *(_QWORD *)(Time + 56)
          && v45 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v48 >= v47 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(Time, v44);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v52,
      Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v53 = EventMissionMaster___c_TypeInfo->static_fields;
    v53->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v42 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  int64_t Time; // x0
  int64_t v44; // x1
  int64_t v45; // x22
  int32_t Count; // w0
  int32_t v47; // w23
  int32_t v48; // w24
  __int64 v49; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v52; // x21
  struct EventMissionMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E9057 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v36, v37, v38);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v39, v40, v41);
    byte_42E9057 = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v45 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v47 = Count;
    v48 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v48,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v44 = Time;
        v49 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v49
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v49 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v45 >= *(_QWORD *)(Time + 56)
          && v45 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v48 >= v47 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(Time, v44);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v52,
      Method_EventMissionMaster___c__getEventMissionList_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v53 = EventMissionMaster___c_TypeInfo->static_fields;
    v53->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v42 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25993164(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  __int64 v46; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v49; // w22
  int32_t v50; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x24
  __int64 v52; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v55; // x21
  struct EventMissionMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_42E9058 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)idList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v39, v40, v41);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v42, v43, v44);
    byte_42E9058 = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
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
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v49 = Count;
    v50 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v50,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v52 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v52
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v52 - 8) == EventMissionEntity_TypeInfo
          && *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v45 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v45,
              v51,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
          }
        }
      }
      if ( ++v50 >= v49 )
        goto LABEL_19;
    }
LABEL_29:
    sub_B5D69C(list, v46);
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
    v55 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v55,
      Method_EventMissionMaster___c__getEventMissionList_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v56 = EventMissionMaster___c_TypeInfo->static_fields;
    v56->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v45 )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_25993904(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  WarEntity_o *v22; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x22
  __int64 v27; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9059 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)idList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v18, v19, v20);
    byte_42E9059 = 1;
  }
  entity = 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                                                           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_17;
  v24 = *(_QWORD *)&idList->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v24 )
      {
        v27 = sub_B5D6C8(list);
        sub_B5D668(v27, 0LL);
      }
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v25 + 1],
                                                                                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v22 = entity;
        if ( !entity )
          goto LABEL_17;
        if ( LODWORD(entity->fields.age) != 7 )
        {
          if ( !v21 )
            goto LABEL_17;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      LODWORD(v24) = idList->max_length;
      ++v25;
    }
    while ( (__int64)v25 < (int)v24 );
  }
  if ( !v21 )
LABEL_17:
    sub_B5D69C(list, v22);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  int64_t Time; // x0
  int64_t UserId; // x1
  int64_t v48; // x22
  int32_t Count; // w0
  int32_t v50; // w23
  int32_t v51; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x25
  __int64 v53; // x10
  UserEventMissionEntity_o *Entity; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x20
  Il2CppObject *v57; // x21
  struct EventMissionMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-58h]

  if ( (byte_42E9060 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v15, v16, v17);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v39, v40, v41);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v42, v43, v44);
    byte_42E9060 = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v48 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v50 = Count;
    v51 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v51,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v53 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v53
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v53 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v48 >= *(_QWORD *)(Time + 56) )
        {
          if ( v48 <= *(_QWORD *)(Time + 64) )
            goto LABEL_25;
          if ( v48 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                       v52->fields.missionTargetId,
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_25:
                if ( !v45 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v45,
                  v52,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v51 >= v50 )
        goto LABEL_28;
    }
LABEL_38:
    sub_B5D69C(Time, UserId);
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
    v57 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v57,
      Method_EventMissionMaster___c__getExtraMissionList_b__10_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v58 = EventMissionMaster___c_TypeInfo->static_fields;
    v58->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v58->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  if ( !v45 )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v45;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  int64_t Time; // x0
  int64_t v41; // x1
  int64_t v42; // x22
  int32_t Count; // w0
  int32_t v44; // w23
  int32_t v45; // w24
  __int64 v46; // x10
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v49; // x21
  struct EventMissionMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42E9061 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v33, v34, v35);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v36, v37, v38);
    byte_42E9061 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v42 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v44 = Count;
    v45 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v45,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v41 = Time;
        v46 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v46
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v46 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v42 >= *(_QWORD *)(Time + 56)
          && v42 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Time,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
        }
      }
      if ( ++v45 >= v44 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(Time, v41);
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
    v49 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v49,
      Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v50 = EventMissionMaster___c_TypeInfo->static_fields;
    v50->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v39 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v39;
}


System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_int__o *v27; // x21
  int64_t Time; // x0
  __int64 v29; // x1
  int64_t v30; // x22
  int32_t v31; // w23
  int32_t v32; // w24
  __int64 v33; // x10

  if ( (byte_42E905A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    byte_42E905A = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v30 = Time;
  Time = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v31 = Time;
    v32 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        v32,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v33 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v33
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v33 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v30 >= *(_QWORD *)(Time + 56)
          && v30 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_int___Add(
            v27,
            *(_DWORD *)(Time + 16),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_20;
    }
LABEL_22:
    sub_B5D69C(Time, v29);
  }
LABEL_20:
  if ( !v27 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x21
  int32_t Count; // w0
  int32_t v26; // w22
  int32_t v27; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v29; // x10
  unsigned int monitor; // w8
  int32_t result; // w0
  unsigned int v32; // w9

  if ( (byte_42E9062 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    byte_42E9062 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
LABEL_23:
    sub_B5D69C(Time, v23);
  v24 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 2;
  v26 = Count;
  v27 = 0;
  while ( 1 )
  {
    Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !Time )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             Time,
             v27,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v29 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == EventMissionEntity_TypeInfo
        && HIDWORD(Item[1].monitor) == eventId
        && (__int64)v24 >= (__int64)Item[3].monitor
        && (__int64)v24 <= (__int64)Item[4].klass )
      {
        break;
      }
    }
    if ( ++v27 >= v26 )
      return 2;
  }
  monitor = (unsigned int)Item[1].monitor;
  result = 4;
  monitor -= 2;
  v32 = 0x21E0u >> (4 * monitor);
  if ( monitor >= 4 )
    v32 = 8;
  if ( ((8 * v32) & 8) == 0 )
    __asm { BR              X8 }
  return result;
}


EventMissionEntity_o *__fastcall EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  EventMissionEntity_o *result; // x0
  __int64 v23; // x10

  if ( (byte_42E9065 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      targetMissionId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    byte_42E9065 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v18 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         Time,
                                         v21,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v23 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[v23 - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v18 >= result->fields.startedAt
          && v18 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( ++v21 >= v20 )
        return 0LL;
    }
LABEL_20:
    sub_B5D69C(Time, v17);
  }
  return 0LL;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  int64_t Time; // x0
  const MethodInfo *v53; // x1
  int64_t v54; // x22
  int32_t Count; // w0
  int32_t v56; // w23
  int32_t i; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x25
  __int64 v59; // x10
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  const MethodInfo *v61; // x3
  int64_t v62; // x9
  unsigned int v63; // w26
  int64_t v64; // x22
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x19
  Il2CppObject *v67; // x21
  struct EventMissionMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v76; // x0
  int64_t v77; // [xsp+8h] [xbp-68h]
  __int64 v78; // [xsp+10h] [xbp-60h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E905F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventMissionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventMissionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v18, v19, v20);
    sub_B5D5C4(&EventMissionEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v45, v46, v47);
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v48, v49, v50);
    byte_42E905F = 1;
  }
  entity = 0LL;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_52;
  v54 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v56 = Count;
    for ( i = 0; i < v56; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_52;
      Time = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                        i,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v58 = (EventMissionProgressRequest_Argument_ProgressData_o *)Time;
        v59 = *(&EventMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 300LL) >= (unsigned int)v59
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * v59 - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v54 >= *(_QWORD *)(Time + 56) )
        {
          if ( v54 <= *(_QWORD *)(Time + 64) )
            goto LABEL_39;
          if ( v54 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_52;
            MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Time,
                                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                   v58->fields.missionTargetId,
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
              Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Time,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
              if ( !Time )
                goto LABEL_52;
              Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                                (EventMissionConditionMaster_o *)Time,
                                v58->fields.eventId,
                                v58->fields.missionTargetId,
                                v61);
              if ( Time )
              {
                v62 = Time;
                v78 = *(_QWORD *)(Time + 24);
                if ( v78 )
                {
                  if ( (int)v78 >= 1 )
                  {
                    v77 = v54;
                    if ( !(_DWORD)v78 )
                    {
LABEL_53:
                      v76 = sub_B5D6C8(Time);
                      sub_B5D668(v76, 0LL);
                    }
                    v63 = 0;
                    while ( 1 )
                    {
                      Time = *(_QWORD *)(v62 + 8LL * (int)v63 + 32);
                      if ( !Time )
                        break;
                      v64 = v62;
                      Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v53);
                      v62 = v64;
                      v54 = v77;
                      if ( (Time & 1) == 0 )
                        goto LABEL_41;
                      if ( (int)++v63 >= (int)v78 )
                        goto LABEL_39;
                      if ( v63 >= *(_DWORD *)(v62 + 24) )
                        goto LABEL_53;
                    }
LABEL_52:
                    sub_B5D69C(Time, v53);
                  }
LABEL_39:
                  if ( !v51 )
                    goto LABEL_52;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v51,
                    v58,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionEntity__Add__);
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
    v67 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v67,
      Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionEntity___ctor__);
    v68 = EventMissionMaster___c_TypeInfo->static_fields;
    v68->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)_9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v68->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v51 )
    goto LABEL_52;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v51,
    (System_Comparison_T__o *)_9__9_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x8
  __int64 v16; // x0

  if ( (byte_42E905D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E905D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v9);
  }
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
    {
      v16 = sub_B5D6C8(Instance);
      sub_B5D668(v16, 0LL);
    }
    v14 = *((_QWORD *)v12 + (int)v13 + 4);
    if ( !v14 )
      goto LABEL_15;
    Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v14 + 20), v10);
    if ( !Instance )
      goto LABEL_15;
    if ( *((_QWORD *)Instance + 3) )
      return 1;
    v11 = *((_DWORD *)v12 + 6);
    if ( (int)++v13 >= v11 )
      return 0;
  }
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E656E & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E656E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B5D69C(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}