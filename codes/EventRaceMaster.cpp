void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8E20 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    210,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8E1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__, eventId, termId, method);
    byte_42E8E1E = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v17; // w22
  struct System_Int64_array *goalPoints; // x8
  __int64 v20; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8E25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, eventId, termId, *(_QWORD *)&groupId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8E25 = 1;
  }
  entity = 0LL;
  v14 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v13);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v14;
    v17 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
      || (Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                        (TotalEventRaceMaster_o *)Instance,
                                        eventId,
                                        termId,
                                        groupId,
                                        0LL),
          !entity)
      || (goalPoints = entity->fields.goalPoints) == 0LL )
    {
LABEL_13:
      sub_B5D69C(Instance, v12);
    }
    if ( v17 >= goalPoints->max_length )
    {
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v17];
  }
  return v14;
}


int32_t __fastcall EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  struct System_Int32_array *groupIds; // x24
  __int64 v16; // x8
  EventRaceResultMaster_o *v17; // x22
  int32_t v18; // w23
  unsigned __int64 v19; // x25
  signed __int64 v20; // x26
  __int64 v21; // x0
  EventRaceResultEntity_o *v23; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E8E23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, eventId, termId, nowTime);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8E23 = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    v16 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = (EventRaceResultMaster_o *)Instance;
      v18 = 0;
      v19 = 0LL;
      v20 = (int)v16;
      while ( v17 )
      {
        Instance = (DataManager_o *)EventRaceResultMaster__TryGetEntity(
                                      v17,
                                      &v23,
                                      eventId,
                                      termId,
                                      groupIds->m_Items[v19 + 1],
                                      v14);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v23 )
            break;
          if ( v23->fields.endedAt < nowTime )
            ++v18;
        }
        if ( (__int64)++v19 >= v20 )
          return v18;
        if ( v19 >= groupIds->max_length )
        {
          v21 = sub_B5D6C8(Instance);
          sub_B5D668(v21, 0LL);
        }
      }
LABEL_19:
      sub_B5D69C(Instance, v13);
    }
  }
  return 0;
}


int32_t __fastcall EventRaceMaster__GetGroupIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *groupIds; // x9
  int max_length; // w8
  __int64 v10; // x0
  int32_t *v11; // x9
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    goto LABEL_8;
  if ( !entity )
    sub_B5D69C(v6, v7);
  groupIds = entity->fields.groupIds;
  if ( groupIds && (max_length = groupIds->max_length, max_length >= 1) )
  {
    v10 = 0LL;
    v11 = &groupIds->m_Items[1];
    while ( v11[v10] != groupId )
    {
      if ( (int)++v10 >= max_length )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v10) = -1;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_array *__fastcall EventRaceMaster__GetRaceEntityList(
        EventRaceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = eventId;
  if ( (byte_42E8E21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventRaceEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v21, v22, v23);
    byte_42E8E21 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v28 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventRaceEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == v4 )
      {
        if ( !v26 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (EventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int32_t v5; // w21
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  int32_t v46; // w24
  __int64 v47; // x10
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v50; // x22
  struct EventRaceMaster___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int size; // w22
  __int64 v59; // x21
  unsigned int v60; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x8

  v5 = eventId;
  if ( (byte_42E8E27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, termId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventRaceEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventRaceEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventRaceEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v37, v38, v39);
    sub_B5D5C4(&EventRaceMaster___c_TypeInfo, v40, v41, v42);
    byte_42E8E27 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v46,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v47 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v47
        || *(EventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v47 - 8) != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v45 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v45,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v46 >= Count )
        goto LABEL_14;
    }
LABEL_34:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  list = EventRaceMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    list = EventRaceMaster___c_TypeInfo;
  }
  static_fields = (struct EventRaceMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v50,
      Method_EventRaceMaster___c__GetTermIndex_b__11_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventRaceEntity___ctor__);
    v51 = EventRaceMaster___c_TypeInfo->static_fields;
    v51->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v51->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v45 )
    goto LABEL_34;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  size = v45->fields._size;
  if ( size >= 1 )
  {
    v59 = 0LL;
    v60 = v45->fields._size;
    while ( 1 )
    {
      if ( v60 <= (unsigned int)v59 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v61 = v45->fields._items->m_Items[v59];
      if ( !v61 )
        goto LABEL_34;
      if ( v61->fields.missionConditionDetailId == termId )
        return v59;
      if ( (int)v59 + 1 >= size )
        break;
      v60 = v45->fields._size;
      ++v59;
    }
  }
  LODWORD(v59) = -1;
  return v59;
}


bool __fastcall EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Instance; // x0
  __int64 v15; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v17; // x21
  __int64 v18; // x25
  const MethodInfo *v19; // x5
  int64_t v20; // x22
  unsigned __int64 v21; // x24
  __int64 v23; // x0
  EventRaceResultEntity_o *v24; // [xsp+0h] [xbp-50h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8E22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, eventId, termId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8E22 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_21;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_21;
  v17 = (EventRaceResultMaster_o *)Instance;
  v18 = *(_QWORD *)&groupIds->max_length;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v18 >= 1 )
  {
    v20 = Instance;
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= groupIds->max_length )
      {
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      if ( !v17 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v17, &v24, eventId, termId, groupIds->m_Items[v21 + 1], v19);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v24 )
        break;
      if ( v24->fields.endedAt > v20 )
        return 0;
      if ( (__int64)++v21 >= (int)v18 )
        return 1;
    }
LABEL_21:
    sub_B5D69C(Instance, v15);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__IsReachedPointRateInTerm(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rate,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct System_Int32_array *groupIds; // x23
  __int64 v15; // x8
  float v16; // s1
  TotalEventRaceMaster_o *v17; // x21
  unsigned __int64 v18; // x24
  signed __int64 v19; // x22
  float v20; // s8
  struct System_Int64_array *goalPoints; // x8
  __int64 v22; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8E24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, eventId, termId, *(_QWORD *)&rate);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8E24 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_B5D69C(Instance, v13);
  }
  v15 = *(_QWORD *)&groupIds->max_length;
  if ( (int)v15 < 1 )
    return 0;
  v16 = (float)rate;
  v17 = (TotalEventRaceMaster_o *)Instance;
  v18 = 0LL;
  v19 = (int)v15;
  v20 = v16 / 1000.0;
  while ( 1 )
  {
    if ( !v17 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v17,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v18 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v18 >= goalPoints->max_length )
      goto LABEL_16;
    if ( v20 < (float)((float)(__int64)Instance / (float)goalPoints->m_Items[v18]) )
      return 1;
    if ( (__int64)++v18 >= v19 )
      return 0;
    if ( v18 >= groupIds->max_length )
    {
LABEL_16:
      v22 = sub_B5D6C8(Instance);
      sub_B5D668(v22, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__TryGetEntity(
        EventRaceMaster_o *this,
        EventRaceEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8E1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&termId);
    byte_42E8E1F = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v43; // x26
  const MethodInfo *v44; // x4
  WebViewManager_o *Instance; // x0
  __int64 v46; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v48; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v49; // x21
  const MethodInfo *v50; // x4
  EventRaceEntity_o *v51; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v53; // x9
  unsigned __int64 v54; // x27
  signed __int64 v55; // x28
  struct System_Int32_array *v56; // x8
  int32_t v57; // w26
  const MethodInfo *v58; // x5
  float GoalRate; // s0
  float v60; // s8
  const MethodInfo_2FCFDE0 *v61; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v62; // x0
  EventRaceMaster___c_c *v63; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v66; // x23
  struct EventRaceMaster___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  EventRaceMaster___c_c *v74; // x0
  struct EventRaceMaster___c_StaticFields *v75; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v77; // x23
  struct EventRaceMaster___c_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v86; // x0
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v87; // [xsp+8h] [xbp-C8h]
  EventRaceMaster_GroupRankData_o v88; // [xsp+30h] [xbp-A0h] BYREF
  EventRaceResultEntity_o *v89; // [xsp+48h] [xbp-88h] BYREF
  EventRaceMaster_GroupRankData_o v90; // [xsp+50h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42E8E26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__, eventId, termId, method);
    sub_B5D5C4(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v34, v35, v36);
    sub_B5D5C4(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v37, v38, v39);
    sub_B5D5C4(&EventRaceMaster___c_TypeInfo, v40, v41, v42);
    byte_42E8E26 = 1;
  }
  entity = 0LL;
  v89 = 0LL;
  memset(&v88, 0, sizeof(v88));
  v43 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v43,
    (const MethodInfo_2FCEFC4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v44) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v48 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v48,
      (const MethodInfo_2FCEFC4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v49 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v49,
      (const MethodInfo_2FCEFC4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v51 = entity;
    if ( !entity )
      goto LABEL_22;
    groupIds = entity->fields.groupIds;
    v87 = v43;
    if ( !groupIds )
      goto LABEL_22;
    v53 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = 0LL;
      v55 = (int)v53;
      do
      {
        v56 = v51->fields.groupIds;
        if ( !v56 )
          break;
        if ( v54 >= v56->max_length )
        {
          v86 = sub_B5D6C8(Instance);
          sub_B5D668(v86, 0LL);
        }
        v57 = v56->m_Items[v54 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v57, v50);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v60 = GoalRate;
        Instance = (WebViewManager_o *)EventRaceResultMaster__TryGetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         &v89,
                                         eventId,
                                         termId,
                                         v57,
                                         v58);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v89 )
            break;
          EventRaceMaster_GroupRankData___ctor(&v88, v57, v60, v89->fields.endedAt, 0LL);
          if ( v88.fields.isGoal )
          {
            if ( !v48 )
              break;
            v61 = (const MethodInfo_2FCFDE0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v90 = v88;
            v62 = v48;
          }
          else
          {
            if ( !v49 )
              break;
            v61 = (const MethodInfo_2FCFDE0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v62 = v49;
            v90 = v88;
          }
          System_Collections_Generic_List_EventRaceMaster_GroupRankData___Add(v62, &v90, v61);
        }
        if ( (__int64)++v54 >= v55 )
          goto LABEL_23;
        v51 = entity;
      }
      while ( entity );
LABEL_22:
      sub_B5D69C(Instance, v46);
    }
LABEL_23:
    if ( !v48 )
      goto LABEL_22;
    v43 = v87;
    if ( v48->fields._size >= 2 )
    {
      v63 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v63 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v63->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v66 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B5D694(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v66,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          (const MethodInfo_24A37E8 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v67 = EventRaceMaster___c_TypeInfo->static_fields;
        v67->__9__10_0 = _9__10_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v67->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_50143904(
        v48,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_2FD22A0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v49 )
      goto LABEL_22;
    if ( v49->fields._size >= 2 )
    {
      v74 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v74 = EventRaceMaster___c_TypeInfo;
      }
      v75 = v74->static_fields;
      _9__10_1 = v75->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v75 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v77 = (Il2CppObject *)v75->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B5D694(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v77,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          (const MethodInfo_24A37E8 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v78 = EventRaceMaster___c_TypeInfo->static_fields;
        v78->__9__10_1 = _9__10_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v78->__9__10_1,
          (System_Int32_array **)_9__10_1,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_50143904(
        v49,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_2FD22A0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v87 )
      goto LABEL_22;
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v87,
      (System_Collections_Generic_IEnumerable_T__o *)v48,
      (const MethodInfo_2FD007C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v87,
      (System_Collections_Generic_IEnumerable_T__o *)v49,
      (const MethodInfo_2FD007C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v43;
}


void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_42E658C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, groupId, goalTime, method);
    byte_42E658C = 1;
  }
  this->fields.groupId = groupId;
  this->fields.rate = rate;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this->fields.isGoal = NetworkManager__getTime(0LL) > goalTime;
  this->fields.goalTime = goalTime;
}


void __fastcall EventRaceMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E658B & 1) == 0 )
  {
    sub_B5D5C4(&EventRaceMaster___c_TypeInfo, v1, v2, v3);
    byte_42E658B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventRaceMaster___c___ctor(EventRaceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceMaster___c___GetTermIndex_b__11_0(
        EventRaceMaster___c_o *this,
        EventRaceEntity_o *a,
        EventRaceEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_39744264((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_44563980(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}