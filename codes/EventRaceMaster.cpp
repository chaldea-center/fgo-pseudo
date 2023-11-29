void __fastcall EventRaceMaster___ctor(EventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FACA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__, method);
    byte_40FACA8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    209,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceEntity_o *__fastcall EventRaceMaster__GetEntity(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FACA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_40FACA6 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&termId);
  return (EventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__GetEntity__);
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
  int32_t GroupIdx; // w0
  unsigned int v13; // w22
  WebViewManager_o *Instance; // x0
  TotalEventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t TotalPoint; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int64_array *goalPoints; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FACAD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FACAD = 1;
  }
  entity = 0LL;
  v11 = 0.0;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    if ( !entity )
      goto LABEL_13;
    GroupIdx = EventRaceEntity__GetGroupIdx(entity, groupId, v10);
    if ( (GroupIdx & 0x80000000) != 0 )
      return v11;
    v13 = GroupIdx;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (TotalEventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___)) == 0LL
      || (TotalPoint = TotalEventRaceMaster__GetTotalPoint(
                         MasterData_WarQuestSelectionMaster,
                         eventId,
                         termId,
                         groupId,
                         0LL),
          !entity)
      || (goalPoints = entity->fields.goalPoints) == 0LL )
    {
LABEL_13:
      sub_B170D4();
    }
    if ( v13 >= goalPoints->max_length )
    {
      sub_B17100(TotalPoint, v17, v18);
      sub_B170A0();
    }
    return (float)TotalPoint / (float)goalPoints->m_Items[v13];
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x5
  struct System_Int32_array *groupIds; // x24
  __int64 v14; // x8
  EventRaceResultMaster_o *v15; // x22
  int32_t v16; // w23
  unsigned __int64 v17; // x25
  signed __int64 v18; // x26
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  EventRaceResultEntity_o *v23; // [xsp+8h] [xbp-58h] BYREF
  EventRaceEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FACAB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FACAB = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    if ( !entity )
      goto LABEL_19;
    groupIds = entity->fields.groupIds;
    if ( !groupIds )
      goto LABEL_19;
    v14 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = (EventRaceResultMaster_o *)MasterData_WarQuestSelectionMaster;
      v16 = 0;
      v17 = 0LL;
      v18 = (int)v14;
      while ( v15 )
      {
        v19 = EventRaceResultMaster__TryGetEntity(v15, &v23, eventId, termId, groupIds->m_Items[v17 + 1], v12);
        if ( v19 )
        {
          if ( !v23 )
            break;
          if ( v23->fields.endedAt < nowTime )
            ++v16;
        }
        if ( (__int64)++v17 >= v18 )
          return v16;
        if ( v17 >= groupIds->max_length )
        {
          sub_B17100(v19, v20, v21);
          sub_B170A0();
        }
      }
LABEL_19:
      sub_B170D4();
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
  struct System_Int32_array *groupIds; // x9
  int max_length; // w8
  __int64 v8; // x0
  int32_t *v9; // x9
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    goto LABEL_8;
  if ( !entity )
    sub_B170D4();
  groupIds = entity->fields.groupIds;
  if ( groupIds && (max_length = groupIds->max_length, max_length >= 1) )
  {
    v8 = 0LL;
    v9 = &groupIds->m_Items[1];
    while ( v9[v8] != groupId )
    {
      if ( (int)++v8 >= max_length )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v8) = -1;
  }
  return v8;
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FACA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&EventRaceEntity_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v10);
    byte_40FACA9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v21 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (EventRaceEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId )
      {
        if ( !v17 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (EventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventRaceEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v33; // x10
  EventRaceMaster___c_c *v34; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v37; // x22
  struct EventRaceMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int size; // w22
  __int64 v46; // x21
  unsigned int v47; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x8

  if ( (byte_40FACAF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_EventRaceEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_EventRaceEntity__TypeInfo, v9);
    sub_B16FFC(&EventRaceEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventRaceEntity__TypeInfo, v16);
    sub_B16FFC(&Method_EventRaceMaster___c__GetTermIndex_b__11_0__, v17);
    sub_B16FFC(&EventRaceMaster___c_TypeInfo, v18);
    byte_40FACAF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRaceEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRaceEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v31,
                                                                      v30,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v26 = Item;
      v33 = *(&EventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (EventRaceEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] != EventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId )
      {
        if ( !v25 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRaceEntity__Add__);
      }
      if ( ++v30 >= Count )
        goto LABEL_14;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_14:
  v34 = EventRaceMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
    v34 = EventRaceMaster___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = EventRaceMaster___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventRaceEntity__TypeInfo,
                                                                           v26,
                                                                           v27,
                                                                           v28,
                                                                           v29);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v37,
      Method_EventRaceMaster___c__GetTermIndex_b__11_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRaceEntity___ctor__);
    v38 = EventRaceMaster___c_TypeInfo->static_fields;
    v38->__9__11_0 = (struct System_Comparison_EventRaceEntity__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v25 )
    goto LABEL_34;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRaceEntity__Sort__);
  size = v25->fields._size;
  if ( size >= 1 )
  {
    v46 = 0LL;
    v47 = v25->fields._size;
    while ( 1 )
    {
      if ( v47 <= (unsigned int)v46 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v48 = v25->fields._items->m_Items[v46];
      if ( !v48 )
        goto LABEL_34;
      if ( v48->fields.missionConditionDetailId == termId )
        return v46;
      if ( (int)v46 + 1 >= size )
        break;
      v47 = v25->fields._size;
      ++v46;
    }
  }
  LODWORD(v46) = -1;
  return v46;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *groupIds; // x23
  EventRaceResultMaster_o *v13; // x21
  __int64 v14; // x25
  int64_t Time; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x5
  int64_t v19; // x22
  unsigned __int64 v20; // x24
  EventRaceResultEntity_o *v22; // [xsp+0h] [xbp-50h] BYREF
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FACAA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FACAA = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v4) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !entity )
    goto LABEL_21;
  groupIds = entity->fields.groupIds;
  if ( !groupIds )
    goto LABEL_21;
  v13 = (EventRaceResultMaster_o *)MasterData_WarQuestSelectionMaster;
  v14 = *(_QWORD *)&groupIds->max_length;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( (int)v14 >= 1 )
  {
    v19 = Time;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= groupIds->max_length )
      {
        sub_B17100(Time, v16, v17);
        sub_B170A0();
      }
      if ( !v13 )
        break;
      Time = EventRaceResultMaster__TryGetEntity(v13, &v22, eventId, termId, groupIds->m_Items[v20 + 1], v18);
      if ( (Time & 1) == 0 )
        return 0;
      if ( !v22 )
        break;
      if ( v22->fields.endedAt > v19 )
        return 0;
      if ( (__int64)++v20 >= (int)v14 )
        return 1;
    }
LABEL_21:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *groupIds; // x23
  __int64 v13; // x8
  float v14; // s1
  TotalEventRaceMaster_o *v15; // x21
  unsigned __int64 v16; // x24
  signed __int64 v17; // x22
  float v18; // s8
  int64_t TotalPoint; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Int64_array *goalPoints; // x8
  EventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FACAC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaceMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FACAC = 1;
  }
  entity = 0LL;
  if ( !EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaceMaster___),
        !entity)
    || (groupIds = entity->fields.groupIds) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v13 = *(_QWORD *)&groupIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (float)rate;
  v15 = (TotalEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  v16 = 0LL;
  v17 = (int)v13;
  v18 = v14 / 1000.0;
  while ( 1 )
  {
    if ( !v15 )
      goto LABEL_19;
    TotalPoint = TotalEventRaceMaster__GetTotalPoint(v15, eventId, termId, groupIds->m_Items[v16 + 1], 0LL);
    if ( !entity )
      goto LABEL_19;
    goalPoints = entity->fields.goalPoints;
    if ( !goalPoints )
      goto LABEL_19;
    if ( v16 >= goalPoints->max_length )
      goto LABEL_16;
    if ( v18 < (float)((float)TotalPoint / (float)goalPoints->m_Items[v16]) )
      return 1;
    if ( (__int64)++v16 >= v17 )
      return 0;
    if ( v16 >= groupIds->max_length )
    {
LABEL_16:
      sub_B17100(TotalPoint, v20, v21);
      sub_B170A0();
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

  if ( (byte_40FACA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__, entity);
    byte_40FACA7 = 1;
  }
  PK = EventRaceEntity__CreatePK(eventId, termId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventRaceMaster__EventRaceEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *__fastcall EventRaceMaster__getGroupIdData(
        EventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v20; // x26
  const MethodInfo *v21; // x4
  WebViewManager_o *Instance; // x0
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x25
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v33; // x21
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  const MethodInfo *v38; // x4
  EventRaceEntity_o *v39; // x8
  struct System_Int32_array *groupIds; // x9
  __int64 v41; // x9
  unsigned __int64 v42; // x27
  signed __int64 v43; // x28
  struct System_Int32_array *v44; // x8
  int32_t v45; // w26
  const MethodInfo *v46; // x5
  float GoalRate; // s0
  float v48; // s8
  const MethodInfo_2E77414 *v49; // x2
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v50; // x0
  EventRaceMaster___c_c *v51; // x0
  struct EventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_0; // x22
  Il2CppObject *v54; // x23
  struct EventRaceMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  EventRaceMaster___c_c *v62; // x0
  struct EventRaceMaster___c_StaticFields *v63; // x8
  System_Comparison_EventRaceMaster_GroupRankData__o *_9__10_1; // x22
  Il2CppObject *v65; // x23
  struct EventRaceMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *v74; // [xsp+8h] [xbp-C8h]
  EventRaceMaster_GroupRankData_o v75; // [xsp+30h] [xbp-A0h] BYREF
  EventRaceResultEntity_o *v76; // [xsp+48h] [xbp-88h] BYREF
  EventRaceMaster_GroupRankData_o v77; // [xsp+50h] [xbp-80h] BYREF
  EventRaceEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FACAE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventRaceMaster_GroupRankData__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventRaceMaster___c__getGroupIdData_b__10_0__, v17);
    sub_B16FFC(&Method_EventRaceMaster___c__getGroupIdData_b__10_1__, v18);
    sub_B16FFC(&EventRaceMaster___c_TypeInfo, v19);
    byte_40FACAE = 1;
  }
  entity = 0LL;
  v76 = 0LL;
  memset(&v75, 0, sizeof(v75));
  v20 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                              *(_QWORD *)&eventId,
                                                                              *(_QWORD *)&termId,
                                                                              method,
                                                                              v4);
  System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
    v20,
    (const MethodInfo_2E765F8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
  if ( EventRaceMaster__TryGetEntity(this, &entity, eventId, termId, v21) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
    v28 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B170CC(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v24,
                                                                                v25,
                                                                                v26,
                                                                                v27);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v28,
      (const MethodInfo_2E765F8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v33 = (System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *)sub_B170CC(
                                                                                System_Collections_Generic_List_EventRaceMaster_GroupRankData__TypeInfo,
                                                                                v29,
                                                                                v30,
                                                                                v31,
                                                                                v32);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData____ctor(
      v33,
      (const MethodInfo_2E765F8 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData___ctor__);
    v39 = entity;
    if ( !entity )
      goto LABEL_22;
    groupIds = entity->fields.groupIds;
    v74 = v20;
    if ( !groupIds )
      goto LABEL_22;
    v41 = *(_QWORD *)&groupIds->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      v43 = (int)v41;
      do
      {
        v44 = v39->fields.groupIds;
        if ( !v44 )
          break;
        if ( v42 >= v44->max_length )
        {
          sub_B17100(v34, v35, v36);
          sub_B170A0();
        }
        v45 = v44->m_Items[v42 + 1];
        GoalRate = EventRaceMaster__GetGoalRate(this, eventId, termId, v45, v38);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v48 = GoalRate;
        v34 = EventRaceResultMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v76, eventId, termId, v45, v46);
        if ( v34 )
        {
          if ( !v76 )
            break;
          EventRaceMaster_GroupRankData___ctor(&v75, v45, v48, v76->fields.endedAt, 0LL);
          if ( v75.fields.isGoal )
          {
            if ( !v28 )
              break;
            v49 = (const MethodInfo_2E77414 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v77 = v75;
            v50 = v28;
          }
          else
          {
            if ( !v33 )
              break;
            v49 = (const MethodInfo_2E77414 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Add__;
            v50 = v33;
            v77 = v75;
          }
          System_Collections_Generic_List_EventRaceMaster_GroupRankData___Add(v50, &v77, v49);
        }
        if ( (__int64)++v42 >= v43 )
          goto LABEL_23;
        v39 = entity;
      }
      while ( entity );
LABEL_22:
      sub_B170D4();
    }
LABEL_23:
    if ( !v28 )
      goto LABEL_22;
    v20 = v74;
    if ( v28->fields._size >= 2 )
    {
      v51 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v51 = EventRaceMaster___c_TypeInfo;
      }
      static_fields = v51->static_fields;
      _9__10_0 = static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          static_fields = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v54 = (Il2CppObject *)static_fields->__9;
        _9__10_0 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B170CC(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v35,
                                                                           v36,
                                                                           v37,
                                                                           v38);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_0,
          v54,
          Method_EventRaceMaster___c__getGroupIdData_b__10_0__,
          (const MethodInfo_25C8334 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v55 = EventRaceMaster___c_TypeInfo->static_fields;
        v55->__9__10_0 = _9__10_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v55->__9__10_0,
          (System_Int32_array **)_9__10_0,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_48732372(
        v28,
        (System_Comparison_T__o *)_9__10_0,
        (const MethodInfo_2E798D4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v33 )
      goto LABEL_22;
    if ( v33->fields._size >= 2 )
    {
      v62 = EventRaceMaster___c_TypeInfo;
      if ( (BYTE3(EventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaceMaster___c_TypeInfo);
        v62 = EventRaceMaster___c_TypeInfo;
      }
      v63 = v62->static_fields;
      _9__10_1 = v63->__9__10_1;
      if ( !_9__10_1 )
      {
        if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v63 = EventRaceMaster___c_TypeInfo->static_fields;
        }
        v65 = (Il2CppObject *)v63->__9;
        _9__10_1 = (System_Comparison_EventRaceMaster_GroupRankData__o *)sub_B170CC(
                                                                           System_Comparison_EventRaceMaster_GroupRankData__TypeInfo,
                                                                           v35,
                                                                           v36,
                                                                           v37,
                                                                           v38);
        System_Comparison_EventRaceMaster_GroupRankData____ctor(
          _9__10_1,
          v65,
          Method_EventRaceMaster___c__getGroupIdData_b__10_1__,
          (const MethodInfo_25C8334 *)Method_System_Comparison_EventRaceMaster_GroupRankData___ctor__);
        v66 = EventRaceMaster___c_TypeInfo->static_fields;
        v66->__9__10_1 = _9__10_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v66->__9__10_1,
          (System_Int32_array **)_9__10_1,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72);
      }
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___Sort_48732372(
        v33,
        (System_Comparison_T__o *)_9__10_1,
        (const MethodInfo_2E798D4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__Sort__);
    }
    if ( !v74 )
      goto LABEL_22;
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v74,
      (System_Collections_Generic_IEnumerable_T__o *)v28,
      (const MethodInfo_2E776B0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
    System_Collections_Generic_List_EventRaceMaster_GroupRankData___AddRange(
      v74,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_2E776B0 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__AddRange__);
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRaceMaster_GroupRankData___ctor(
        EventRaceMaster_GroupRankData_o *this,
        int32_t groupId,
        float rate,
        int64_t goalTime,
        const MethodInfo *method)
{
  if ( (byte_40F701C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&groupId);
    byte_40F701C = 1;
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

  if ( (byte_40F701B & 1) == 0 )
  {
    sub_B16FFC(&EventRaceMaster___c_TypeInfo, v1);
    byte_40F701B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRaceMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRaceMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.termId - b->fields.termId;
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_0(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  return System_Int64__CompareTo_38278296((int64_t)&a->fields.goalTime, b->fields.goalTime, 0LL);
}


int32_t __fastcall EventRaceMaster___c___getGroupIdData_b__10_1(
        EventRaceMaster___c_o *this,
        EventRaceMaster_GroupRankData_o *a,
        EventRaceMaster_GroupRankData_o *b,
        const MethodInfo *method)
{
  float v4; // s1

  return System_Single__CompareTo_43729924(a->fields.rate, v4, (const MethodInfo *)&b->fields.rate);
}