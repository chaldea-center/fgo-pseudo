void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42149B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, method);
    byte_42149B1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    209,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42149AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_42149AF = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
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
  const MethodInfo *v10; // x2
  float v11; // s8
  DataManager_o *Instance; // x0
  int32_t GroupIdx; // w0
  unsigned int v14; // w22
  struct System_Int64_array *goalPoints; // x8
  __int64 v17; // x0
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42149B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42149B6 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
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
      sub_B0D97C(Instance);
    }
    if ( v14 >= goalPoints->max_length )
    {
      v17 = sub_B0D9A8(Instance);
      sub_B0D948(v17, 0LL);
    }
    return (float)(__int64)Instance / (float)goalPoints->m_Items[v14];
  }
  return v11;
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

  if ( (byte_42149B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42149B4 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
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
          v18 = sub_B0D9A8(Instance);
          sub_B0D948(v18, 0LL);
        }
      }
LABEL_19:
      sub_B0D97C(Instance);
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
  struct System_Int32_array *groupIds; // x9
  int max_length; // w8
  __int64 v9; // x0
  int32_t *v10; // x9
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v6 = EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method);
  if ( !v6 )
    goto LABEL_8;
  if ( !entity )
    sub_B0D97C(v6);
  groupIds = entity->fields.groupIds;
  if ( groupIds && (max_length = groupIds->max_length, max_length >= 1) )
  {
    v9 = 0LL;
    v10 = &groupIds->m_Items[1];
    while ( v10[v9] != groupId )
    {
      if ( (int)++v9 >= max_length )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v9) = -1;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_array *__fastcall EventRaceMaster__GetRaceEntityList(
        EventRaceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_42149B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&EventRaceEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v10);
    byte_42149B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (EventRaceEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v16 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v15 )
    goto LABEL_16;
  return (EventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceMaster__GetTermIndex(
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
  void *list; // x0
  int32_t Count; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  void *v24; // x1
  __int64 v25; // x2
  int32_t v26; // w24
  __int64 v27; // x10
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v30; // x22
  struct EventRaceMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int size; // w22
  __int64 v39; // x21
  unsigned int v40; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x8

  if ( (byte_42149B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_EventRaceEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_EventRaceEntity__TypeInfo, v9);
    sub_B0D8A4(&EventRaceEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v17);
    sub_B0D8A4(&EventRaceMaster___c_TypeInfo, v18);
    byte_42149B8 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v26,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = list;
      v27 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
        || *(EventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v26 >= Count )
        goto LABEL_14;
    }
LABEL_34:
    sub_B0D97C(list);
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventRaceEntity__TypeInfo,
                                                                           v24,
                                                                           v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v30,
      Method_EventRaceMaster___c__GetTermIndex_b__11_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRaceEntity___ctor__);
    v31 = EventRaceMaster___c_TypeInfo->static_fields;
    v31->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v31->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v23 )
    goto LABEL_34;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  size = v23->fields._size;
  if ( size >= 1 )
  {
    v39 = 0LL;
    v40 = v23->fields._size;
    while ( 1 )
    {
      if ( v40 <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v41 = v23->fields._items->m_Items[v39];
      if ( !v41 )
        goto LABEL_34;
      if ( v41->fields.missionConditionDetailId == termId )
        return v39;
      if ( (int)v39 + 1 >= size )
        break;
      v40 = v23->fields._size;
      ++v39;
    }
  }
  LODWORD(v39) = -1;
  return v39;
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
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v12; // x21
  __int64 v13; // x25
  const MethodInfo *v14; // x5
  int64_t v15; // x22
  unsigned __int64 v16; // x24
  __int64 v18; // x0
  EventRaceResultEntity_o *v19; // [xsp+0h] [xbp-50h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42149B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42149B3 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_21;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_21;
  v12 = (EventRaceResultMaster_o *)Instance;
  v13 = *(_QWORD *)&groupIds->max_length;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( (int)v13 >= 1 )
  {
    v15 = Instance;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= groupIds->max_length )
      {
        v18 = sub_B0D9A8(Instance);
        sub_B0D948(v18, 0LL);
      }
      if ( !v12 )
        break;
      Instance = EventRaceResultMaster__TryGetEntity(v12, &v19, eventId, termId, groupIds->m_Items[v16 + 1], v14);
      if ( (Instance & 1) == 0 )
        return 0;
      if ( !v19 )
        break;
      if ( v19->fields.endedAt > v15 )
        return 0;
      if ( (__int64)++v16 >= (int)v13 )
        return 1;
    }
LABEL_21:
    sub_B0D97C(Instance);
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

  if ( (byte_42149B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42149B5 = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_B0D97C(Instance);
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
      v19 = sub_B0D9A8(Instance);
      sub_B0D948(v19, 0LL);
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

  if ( (byte_42149B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__, entity);
    byte_42149B0 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
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
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x4
  EventRaceEntity_o *v32; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v34; // x9
  unsigned __int64 v35; // x27
  signed __int64 v36; // x28
  struct System_Int32_array *v37; // x8
  int32_t v38; // w26
  const MethodInfo *v39; // x5
  float GoalRate; // s0
  float v41; // s8
  const MethodInfo_2F00C08 *v42; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v43; // x0
  EventRaceMaster___c_c *v44; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v47; // x23
  struct EventRaceMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  EventRaceMaster___c_c *v55; // x0
  struct EventRaceMaster___c_StaticFields *v56; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v58; // x23
  struct EventRaceMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v67; // x0
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v68; // [xsp+8h] [xbp-C8h]
  EventRaceMaster_GroupRankData_o v69; // [xsp+30h] [xbp-A0h] BYREF
  EventRaceResultEntity_o *v70; // [xsp+48h] [xbp-88h] BYREF
  EventRaceMaster_GroupRankData_o v71; // [xsp+50h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42149B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v16);
    sub_B0D8A4(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v17);
    sub_B0D8A4(&EventRaceMaster___c_TypeInfo, v18);
    byte_42149B7 = 1;
  }
  entity = 0LL;
  v70 = 0LL;
  memset(&v69, 0, sizeof(v69));
  v19 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B0D974(
                                                                              System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                              *(_QWORD *)&eventId,
                                                                              *(_QWORD *)&termId);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v19,
    (const MethodInfo_2EFFDEC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v20) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v25 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B0D974(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v23,
                                                                                v24);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v25,
      (const MethodInfo_2EFFDEC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v28 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B0D974(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v26,
                                                                                v27);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v28,
      (const MethodInfo_2EFFDEC *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v32 = entity;
    if ( !entity )
      goto LABEL_22;
    groupIds = entity->fields.groupIds;
    v68 = v19;
    if ( !groupIds )
      goto LABEL_22;
    v34 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      v36 = (int)v34;
      do
      {
        v37 = v32->fields.groupIds;
        if ( !v37 )
          break;
        if ( v35 >= v37->max_length )
        {
          v67 = sub_B0D9A8(Instance);
          sub_B0D948(v67, 0LL);
        }
        v38 = v37->m_Items[v35 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v38, v31);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v41 = GoalRate;
        Instance = (WebViewManager_o *)EventRaceResultMaster__TryGetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         &v70,
                                         eventId,
                                         termId,
                                         v38,
                                         v39);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v70 )
            break;
          EventRaceMaster_GroupRankData___ctor(&v69, v38, v41, v70->fields.endedAt, 0LL);
          if ( v69.fields.isGoal )
          {
            if ( !v25 )
              break;
            v42 = (const MethodInfo_2F00C08 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v71 = v69;
            v43 = v25;
          }
          else
          {
            if ( !v28 )
              break;
            v42 = (const MethodInfo_2F00C08 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v43 = v28;
            v71 = v69;
          }
          System_Collections_Generic_List_EventRaceMaster_GroupRankData___Add(v43, &v71, v42);
        }
        if ( (__int64)++v35 >= v36 )
          goto LABEL_23;
        v32 = entity;
      }
      while ( entity );
LABEL_22:
      sub_B0D97C(Instance);
    }
LABEL_23:
    if ( !v25 )
      goto LABEL_22;
    v19 = v68;
    if ( v25->fields._size >= 2 )
    {
      v44 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v44 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B0D974(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v29,
                                                                           v30);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v47,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          (const MethodInfo_241B47C *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v48 = EventRaceMaster___c_TypeInfo->static_fields;
        v48->__9__10_0 = _9__10_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v48->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_49295560(
        v25,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_2F030C8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v28 )
      goto LABEL_22;
    if ( v28->fields._size >= 2 )
    {
      v55 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v55 = EventRaceMaster___c_TypeInfo;
      }
      v56 = v55->static_fields;
      _9__10_1 = v56->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v56 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)v56->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B0D974(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v29,
                                                                           v30);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v58,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          (const MethodInfo_241B47C *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v59 = EventRaceMaster___c_TypeInfo->static_fields;
        v59->__9__10_1 = _9__10_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v59->__9__10_1,
          (System_Int32_array **)_9__10_1,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_49295560(
        v28,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_2F030C8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v68 )
      goto LABEL_22;
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v68,
      (System_Collections_Generic_IEnumerable_T__o *)v25,
      (const MethodInfo_2F00EA4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v68,
      (System_Collections_Generic_IEnumerable_T__o *)v28,
      (const MethodInfo_2F00EA4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
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
  if ( (byte_4211BB7 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&groupId);
    byte_4211BB7 = 1;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BB6 & 1) == 0 )
  {
    sub_B0D8A4(&EventRaceMaster___c_TypeInfo, v1);
    byte_4211BB6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRaceMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_38475520((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_43836096(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}