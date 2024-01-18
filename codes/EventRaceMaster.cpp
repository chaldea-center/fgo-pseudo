void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41886F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, method);
    byte_41886F5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    209,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41886F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_41886F3 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EventRaceMaster__GetGoalRate(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  float v12; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v15; // w22
  struct System_Int64_array *goalPoints; // x8
  __int64 v18; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41886FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41886FA = 1;
  }
  entity = 0LL;
  v12 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v11);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v12;
    v15 = GroupIdx;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
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
      sub_B2C434(Instance, v10);
    }
    if ( v15 >= goalPoints->max_length )
    {
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
    }
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v15];
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetGoaledTeamCount(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  struct System_Int32_array *groupIds; // x24
  __int64 v14; // x8
  EventRaceResultMaster_o *v15; // x22
  int32_t v16; // w23
  unsigned __int64 v17; // x25
  signed __int64 v18; // x26
  __int64 v19; // x0
  EventRaceResultEntity_o *v21; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_41886F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41886F8 = 1;
  }
  entity = 0LL;
  v21 = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    v14 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (EventRaceResultMaster_o *)Instance;
      v16 = 0;
      v17 = 0LL;
      v18 = (int)v14;
      while ( v15 )
      {
        Instance = (DataManager_o *)EventRaceResultMaster__TryGetEntity(
                                      v15,
                                      &v21,
                                      eventId,
                                      termId,
                                      groupIds->m_Items[v17 + 1],
                                      v12);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v21 )
            break;
          if ( v21->fields.endedAt < nowTime )
            ++v16;
        }
        if ( (__int64)++v17 >= v18 )
          return v16;
        if ( v17 >= groupIds->max_length )
        {
          v19 = sub_B2C460(Instance);
          sub_B2C400(v19, 0LL);
        }
      }
LABEL_19:
      sub_B2C434(Instance, v11);
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
    sub_B2C434(v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = eventId;
  if ( (byte_41886F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventRaceEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v10);
    byte_41886F6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v15 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (EventRaceEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == v3 )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (EventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int32_t v5; // w21
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  int32_t v22; // w24
  __int64 v23; // x10
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v26; // x22
  struct EventRaceMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int size; // w22
  __int64 v35; // x21
  unsigned int v36; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x8

  v5 = eventId;
  if ( (byte_41886FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventRaceEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventRaceEntity__TypeInfo, v9);
    sub_B2C35C(&EventRaceEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v16);
    sub_B2C35C(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v17);
    sub_B2C35C(&EventRaceMaster___c_TypeInfo, v18);
    byte_41886FC = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      v23 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v23
        || *(EventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v5 )
      {
        if ( !v21 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v22 >= Count )
        goto LABEL_14;
    }
LABEL_34:
    sub_B2C434(list, *(_QWORD *)&eventId);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v26,
      Method_EventRaceMaster___c__GetTermIndex_b__11_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRaceEntity___ctor__);
    v27 = EventRaceMaster___c_TypeInfo->static_fields;
    v27->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v21 )
    goto LABEL_34;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v21,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  size = v21->fields._size;
  if ( size >= 1 )
  {
    v35 = 0LL;
    v36 = v21->fields._size;
    while ( 1 )
    {
      if ( v36 <= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v37 = v21->fields._items->m_Items[v35];
      if ( !v37 )
        goto LABEL_34;
      if ( v37->fields.missionConditionDetailId == termId )
        return v35;
      if ( (int)v35 + 1 >= size )
        break;
      v36 = v21->fields._size;
      ++v35;
    }
  }
  LODWORD(v35) = -1;
  return v35;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceMaster__IsEveryTeamGoaled(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v13; // x21
  __int64 v14; // x25
  const MethodInfo *v15; // x5
  int64_t v16; // x22
  unsigned __int64 v17; // x24
  __int64 v19; // x0
  EventRaceResultEntity_o *v20; // [xsp+0h] [xbp-50h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41886F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41886F7 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_21;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_21;
  v13 = (EventRaceResultMaster_o *)Instance;
  v14 = *(_QWORD *)&groupIds->max_length;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v14 >= 1 )
  {
    v16 = Instance;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= groupIds->max_length )
      {
        v19 = sub_B2C460(Instance);
        sub_B2C400(v19, 0LL);
      }
      if ( !v13 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v13, &v20, eventId, termId, groupIds->m_Items[v17 + 1], v15);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v20 )
        break;
      if ( v20->fields.endedAt > v16 )
        return 0;
      if ( (__int64)++v17 >= (int)v14 )
        return 1;
    }
LABEL_21:
    sub_B2C434(Instance, v11);
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
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *groupIds; // x23
  __int64 v13; // x8
  float v14; // s1
  TotalEventRaceMaster_o *v15; // x21
  unsigned __int64 v16; // x24
  signed __int64 v17; // x22
  float v18; // s8
  struct System_Int64_array *goalPoints; // x8
  __int64 v20; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41886F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41886F9 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_B2C434(Instance, v11);
  }
  v13 = *(_QWORD *)&groupIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (float)rate;
  v15 = (TotalEventRaceMaster_o *)Instance;
  v16 = 0LL;
  v17 = (int)v13;
  v18 = v14 / 1000.0;
  while ( 1 )
  {
    if ( !v15 )
      goto LABEL_19;
    Instance = (DataManager_o *)TotalEventRaceMaster__GetTotalPoint(
                                  v15,
                                  eventId,
                                  termId,
                                  groupIds->m_Items[v16 + 1],
                                  0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v16 >= goalPoints->max_length )
      goto LABEL_16;
    if ( v18 < (float)((float)(__int64)Instance / (float)goalPoints->m_Items[v16]) )
      return 1;
    if ( (__int64)++v16 >= v17 )
      return 0;
    if ( v16 >= groupIds->max_length )
    {
LABEL_16:
      v20 = sub_B2C460(Instance);
      sub_B2C400(v20, 0LL);
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

  if ( (byte_41886F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__, entity);
    byte_41886F4 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v19; // x26
  const MethodInfo *v20; // x4
  WebViewManager_o *Instance; // x0
  __int64 v22; // x1
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v24; // x20
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v25; // x21
  const MethodInfo *v26; // x4
  EventRaceEntity_o *v27; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v29; // x9
  unsigned __int64 v30; // x27
  signed __int64 v31; // x28
  struct System_Int32_array *v32; // x8
  int32_t v33; // w26
  const MethodInfo *v34; // x5
  float GoalRate; // s0
  float v36; // s8
  const MethodInfo_2EB28F0 *v37; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v38; // x0
  EventRaceMaster___c_c *v39; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v42; // x23
  struct EventRaceMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EventRaceMaster___c_c *v50; // x0
  struct EventRaceMaster___c_StaticFields *v51; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v53; // x23
  struct EventRaceMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v62; // x0
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v63; // [xsp+8h] [xbp-C8h]
  EventRaceMaster_GroupRankData_o v64; // [xsp+30h] [xbp-A0h] BYREF
  EventRaceResultEntity_o *v65; // [xsp+48h] [xbp-88h] BYREF
  EventRaceMaster_GroupRankData_o v66; // [xsp+50h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_41886FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v16);
    sub_B2C35C(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v17);
    sub_B2C35C(&EventRaceMaster___c_TypeInfo, v18);
    byte_41886FB = 1;
  }
  entity = 0LL;
  v65 = 0LL;
  memset(&v64, 0, sizeof(v64));
  v19 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v19,
    (const MethodInfo_2EB1AD4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v20) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v24 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v24,
      (const MethodInfo_2EB1AD4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v25 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v25,
      (const MethodInfo_2EB1AD4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v27 = entity;
    if ( !entity )
      goto LABEL_22;
    groupIds = entity->fields.groupIds;
    v63 = v19;
    if ( !groupIds )
      goto LABEL_22;
    v29 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      v31 = (int)v29;
      do
      {
        v32 = v27->fields.groupIds;
        if ( !v32 )
          break;
        if ( v30 >= v32->max_length )
        {
          v62 = sub_B2C460(Instance);
          sub_B2C400(v62, 0LL);
        }
        v33 = v32->m_Items[v30 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v33, v26);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v36 = GoalRate;
        Instance = (WebViewManager_o *)EventRaceResultMaster__TryGetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         &v65,
                                         eventId,
                                         termId,
                                         v33,
                                         v34);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v65 )
            break;
          EventRaceMaster_GroupRankData___ctor(&v64, v33, v36, v65->fields.endedAt, 0LL);
          if ( v64.fields.isGoal )
          {
            if ( !v24 )
              break;
            v37 = (const MethodInfo_2EB28F0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v66 = v64;
            v38 = v24;
          }
          else
          {
            if ( !v25 )
              break;
            v37 = (const MethodInfo_2EB28F0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v38 = v25;
            v66 = v64;
          }
          System_Collections_Generic_List_EventRaceMaster_GroupRankData___Add(v38, &v66, v37);
        }
        if ( (__int64)++v30 >= v31 )
          goto LABEL_23;
        v27 = entity;
      }
      while ( entity );
LABEL_22:
      sub_B2C434(Instance, v22);
    }
LABEL_23:
    if ( !v24 )
      goto LABEL_22;
    v19 = v63;
    if ( v24->fields._size >= 2 )
    {
      v39 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v39 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v39->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B2C42C(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v42,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          (const MethodInfo_25E13E4 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v43 = EventRaceMaster___c_TypeInfo->static_fields;
        v43->__9__10_0 = _9__10_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v43->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_48975280(
        v24,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_2EB4DB0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v25 )
      goto LABEL_22;
    if ( v25->fields._size >= 2 )
    {
      v50 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v50 = EventRaceMaster___c_TypeInfo;
      }
      v51 = v50->static_fields;
      _9__10_1 = v51->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v51 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v51->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B2C42C(System_Comparison_EventRaceMaster_GroupRankData__TypeInfo);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v53,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          (const MethodInfo_25E13E4 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v54 = EventRaceMaster___c_TypeInfo->static_fields;
        v54->__9__10_1 = _9__10_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v54->__9__10_1,
          (System_Int32_array **)_9__10_1,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_48975280(
        v25,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_2EB4DB0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v63 )
      goto LABEL_22;
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v63,
      (System_Collections_Generic_IEnumerable_T__o *)v24,
      (const MethodInfo_2EB2B8C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v63,
      (System_Collections_Generic_IEnumerable_T__o *)v25,
      (const MethodInfo_2EB2B8C *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_4184B50 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&groupId);
    byte_4184B50 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B4F & 1) == 0 )
  {
    sub_B2C35C(&EventRaceMaster___c_TypeInfo, v1);
    byte_4184B4F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRaceMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_38383904((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_44291724(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}