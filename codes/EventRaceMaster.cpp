void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0415 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
    byte_42B0415 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    210,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0413 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
    byte_42B0413 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


float __fastcall EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v14; // w22
  struct System_Int64_array *goalPoints; // x8
  __int64 v17; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B041A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B041A = 1;
  }
  entity = 0LL;
  v11 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v10);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v11;
    v14 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
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
      sub_B52A5C(Instance, v9);
    }
    if ( v14 >= goalPoints->max_length )
    {
      v17 = sub_B52A88(Instance);
      sub_B52A28(v17, 0LL);
    }
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v14];
  }
  return v11;
}


int32_t __fastcall EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  struct System_Int32_array *groupIds; // x24
  __int64 v13; // x8
  EventRaceResultMaster_o *v14; // x22
  int32_t v15; // w23
  unsigned __int64 v16; // x25
  signed __int64 v17; // x26
  __int64 v18; // x0
  EventRaceResultEntity_o *v20; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42B0418 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0418 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    v13 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = (EventRaceResultMaster_o *)Instance;
      v15 = 0;
      v16 = 0LL;
      v17 = (int)v13;
      while ( v14 )
      {
        Instance = (DataManager_o *)EventRaceResultMaster__TryGetEntity(
                                      v14,
                                      &v20,
                                      eventId,
                                      termId,
                                      groupIds->m_Items[v16 + 1],
                                      v11);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v20 )
            break;
          if ( v20->fields.endedAt < nowTime )
            ++v15;
        }
        if ( (__int64)++v16 >= v17 )
          return v15;
        if ( v16 >= groupIds->max_length )
        {
          v18 = sub_B52A88(Instance);
          sub_B52A28(v18, 0LL);
        }
      }
LABEL_19:
      sub_B52A5C(Instance, v10);
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
    sub_B52A5C(v6, v7);
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
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = eventId;
  if ( (byte_42B0416 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventRaceEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    byte_42B0416 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v9 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (EventRaceEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == v3 )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (EventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  int32_t v10; // w24
  __int64 v11; // x10
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct EventRaceMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int size; // w22
  __int64 v23; // x21
  unsigned int v24; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x8

  v5 = eventId;
  if ( (byte_42B041C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventRaceEntity___ctor__);
    sub_B52984(&System_Comparison_EventRaceEntity__TypeInfo);
    sub_B52984(&EventRaceEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventRaceEntity__TypeInfo);
    sub_B52984(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__);
    sub_B52984(&EventRaceMaster___c_TypeInfo);
    byte_42B041C = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
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
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v11 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
        || *(EventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v10 >= Count )
        goto LABEL_14;
    }
LABEL_34:
    sub_B52A5C(list, *(_QWORD *)&eventId);
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v14,
      Method_EventRaceMaster___c__GetTermIndex_b__11_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRaceEntity___ctor__);
    v15 = EventRaceMaster___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v9 )
    goto LABEL_34;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  size = v9->fields._size;
  if ( size >= 1 )
  {
    v23 = 0LL;
    v24 = v9->fields._size;
    while ( 1 )
    {
      if ( v24 <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v25 = v9->fields._items->m_Items[v23];
      if ( !v25 )
        goto LABEL_34;
      if ( v25->fields.missionConditionDetailId == termId )
        return v23;
      if ( (int)v23 + 1 >= size )
        break;
      v24 = v9->fields._size;
      ++v23;
    }
  }
  LODWORD(v23) = -1;
  return v23;
}


bool __fastcall EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int64_t Instance; // x0
  __int64 v9; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v11; // x21
  __int64 v12; // x25
  const MethodInfo *v13; // x5
  int64_t v14; // x22
  unsigned __int64 v15; // x24
  __int64 v17; // x0
  EventRaceResultEntity_o *v18; // [xsp+0h] [xbp-50h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B0417 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0417 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_21;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_21;
  v11 = (EventRaceResultMaster_o *)Instance;
  v12 = *(_QWORD *)&groupIds->max_length;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v12 >= 1 )
  {
    v14 = Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= groupIds->max_length )
      {
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
      }
      if ( !v11 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v11, &v18, eventId, termId, groupIds->m_Items[v15 + 1], v13);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v18 )
        break;
      if ( v18->fields.endedAt > v14 )
        return 0;
      if ( (__int64)++v15 >= (int)v12 )
        return 1;
    }
LABEL_21:
    sub_B52A5C(Instance, v9);
  }
  return 1;
}


bool __fastcall EventRaceMaster__IsReachedPointRateInTerm(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *groupIds; // x23
  __int64 v12; // x8
  float v13; // s1
  TotalEventRaceMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  signed __int64 v16; // x22
  float v17; // s8
  struct System_Int64_array *goalPoints; // x8
  __int64 v19; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B0419 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaceMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0419 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_B52A5C(Instance, v10);
  }
  v12 = *(_QWORD *)&groupIds->max_length;
  if ( (int)v12 < 1 )
    return 0;
  v13 = (float)rate;
  v14 = (TotalEventRaceMaster_o *)Instance;
  v15 = 0LL;
  v16 = (int)v12;
  v17 = v13 / 1000.0;
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v14,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v15 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v15 >= goalPoints->max_length )
      goto LABEL_16;
    if ( v17 < (float)((float)(__int64)Instance / (float)goalPoints->m_Items[v15]) )
      return 1;
    if ( (__int64)++v15 >= v16 )
      return 0;
    if ( v15 >= groupIds->max_length )
    {
LABEL_16:
      v19 = sub_B52A88(Instance);
      sub_B52A28(v19, 0LL);
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

  if ( (byte_42B0414 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
    byte_42B0414 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v7; // x26
  const MethodInfo *v8; // x4
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v12; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v13; // x21
  const MethodInfo *v14; // x4
  EventRaceEntity_o *v15; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v17; // x9
  unsigned __int64 v18; // x27
  signed __int64 v19; // x28
  struct System_Int32_array *v20; // x8
  int32_t v21; // w26
  const MethodInfo *v22; // x5
  float GoalRate; // s0
  float v24; // s8
  const MethodInfo_2FAFA6C *v25; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v26; // x0
  EventRaceMaster___c_c *v27; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v30; // x23
  struct EventRaceMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  EventRaceMaster___c_c *v38; // x0
  struct EventRaceMaster___c_StaticFields *v39; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v41; // x23
  struct EventRaceMaster___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v50; // x0
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v51; // [xsp+8h] [xbp-C8h]
  EventRaceMaster_GroupRankData_o v52; // [xsp+30h] [xbp-A0h] BYREF
  EventRaceResultEntity_o *v53; // [xsp+48h] [xbp-88h] BYREF
  EventRaceMaster_GroupRankData_o v54; // [xsp+50h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42B041B & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
    sub_B52984(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__);
    sub_B52984(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__);
    sub_B52984(&EventRaceMaster___c_TypeInfo);
    byte_42B041B = 1;
  }
  entity = 0LL;
  v53 = 0LL;
  memset(&v52, 0, sizeof(v52));
  v7 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B52A54(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v7,
    (const MethodInfo_2FAEC50 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v12 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B52A54(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v12,
      (const MethodInfo_2FAEC50 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v13 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B52A54(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v13,
      (const MethodInfo_2FAEC50 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v15 = entity;
    if ( !entity )
      goto LABEL_22;
    groupIds = entity->fields.groupIds;
    v51 = v7;
    if ( !groupIds )
      goto LABEL_22;
    v17 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      v19 = (int)v17;
      do
      {
        v20 = v15->fields.groupIds;
        if ( !v20 )
          break;
        if ( v18 >= v20->max_length )
        {
          v50 = sub_B52A88(Instance);
          sub_B52A28(v50, 0LL);
        }
        v21 = v20->m_Items[v18 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v21, v14);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v24 = GoalRate;
        Instance = (WebViewManager_o *)EventRaceResultMaster__TryGetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         &v53,
                                         eventId,
                                         termId,
                                         v21,
                                         v22);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v53 )
            break;
          EventRaceMaster_GroupRankData___ctor(&v52, v21, v24, v53->fields.endedAt, 0LL);
          if ( v52.fields.isGoal )
          {
            if ( !v12 )
              break;
            v25 = (const MethodInfo_2FAFA6C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v54 = v52;
            v26 = v12;
          }
          else
          {
            if ( !v13 )
              break;
            v25 = (const MethodInfo_2FAFA6C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v26 = v13;
            v54 = v52;
          }
          System_Collections_Generic_List_EventRaceMaster_GroupRankData___Add(v26, &v54, v25);
        }
        if ( (__int64)++v18 >= v19 )
          goto LABEL_23;
        v15 = entity;
      }
      while ( entity );
LABEL_22:
      sub_B52A5C(Instance, v10);
    }
LABEL_23:
    if ( !v12 )
      goto LABEL_22;
    v7 = v51;
    if ( v12->fields._size >= 2 )
    {
      v27 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v27 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B52A54(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v30,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          (const MethodInfo_248B95C *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v31 = EventRaceMaster___c_TypeInfo->static_fields;
        v31->__9__10_0 = _9__10_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v31->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_50011948(
        v12,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_2FB1F2C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v13 )
      goto LABEL_22;
    if ( v13->fields._size >= 2 )
    {
      v38 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v38 = EventRaceMaster___c_TypeInfo;
      }
      v39 = v38->static_fields;
      _9__10_1 = v39->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v39 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v41 = (Il2CppObject *)v39->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B52A54(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v41,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          (const MethodInfo_248B95C *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v42 = EventRaceMaster___c_TypeInfo->static_fields;
        v42->__9__10_1 = _9__10_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v42->__9__10_1,
          (System_Int32_array **)_9__10_1,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_50011948(
        v13,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_2FB1F2C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v51 )
      goto LABEL_22;
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v51,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_2FAFD08 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v51,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_2FAFD08 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v7;
}


void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_42AD94E & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AD94E = 1;
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
  Il2CppObject *v1; // x19
  struct EventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD94D & 1) == 0 )
  {
    sub_B52984(&EventRaceMaster___c_TypeInfo);
    byte_42AD94D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_39389500((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_44554508(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}