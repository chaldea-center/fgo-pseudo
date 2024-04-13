void __fastcall EventInfoAreaImprovementControl___ctor(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E9FAD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_13151/*"SpotCooltime_ParkData_"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13152/*"SpotCooltime_SpotData_"*/, v15, v16, v17);
    byte_42E9FAD = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_13152/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13152/*"SpotCooltime_SpotData_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Int32_array **)StringLiteral_13151/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13151/*"SpotCooltime_ParkData_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_PARK_DATA, v19, v20, v21, v22, v23, v24, v25);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spotDataList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__AddSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        int32_t level,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  EventInfoAreaImprovementControl_SpotData_o *v10; // x22
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x0
  __int64 v12; // x1

  if ( (byte_42E9FA7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
      spotId,
      level,
      method);
    sub_B5D5C4(&EventInfoAreaImprovementControl_SpotData_TypeInfo, v7, v8, v9);
    byte_42E9FA7 = 1;
  }
  v10 = (EventInfoAreaImprovementControl_SpotData_o *)sub_B5D694(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  EventInfoAreaImprovementControl_SpotData___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.SpotId = spotId, v10->fields.Level = level, (spotDataList = this->fields.spotDataList) == 0LL) )
  {
    sub_B5D69C(spotDataList, v12);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
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
  struct EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventCooltimeRewardMaster_o **p_eventCooltimeRewardMaster; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E9F9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventPointMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    byte_42E9F9C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = Master_WarQuestSelectionMaster;
  p_eventCooltimeRewardMaster = &this->fields.eventCooltimeRewardMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_eventCooltimeRewardMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  p_eventCooltimeRewardMaster[1] = (struct EventCooltimeRewardMaster_o *)v22;
  sub_B5D560((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 1), v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  p_eventCooltimeRewardMaster[2] = (struct EventCooltimeRewardMaster_o *)v29;
  sub_B5D560((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 2), v29, v30, v31, v32, v33, v34, v35);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
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
  System_Collections_Generic_List_int__o *v17; // x20
  UserEventCooltimeRewardMaster_o *SpotData; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x22
  signed __int64 size; // x23
  unsigned __int64 v23; // x21
  int32_t v24; // w22
  struct EventUiEntity_o *eventUiEntity; // x8

  if ( (byte_42E9FA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    byte_42E9FA9 = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_19;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v24 = baseSpotIdList->fields._items->m_Items[v23 + 1];
      SpotData = (UserEventCooltimeRewardMaster_o *)EventInfoAreaImprovementControl__GetSpotData(this, v24, v20);
      if ( !SpotData )
      {
        eventUiEntity = this->fields.eventUiEntity;
        if ( !eventUiEntity )
          break;
        SpotData = this->fields.userEventCooltimeRewardMaster;
        if ( !SpotData )
          break;
        SpotData = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                                                        SpotData,
                                                        eventUiEntity->fields.eventId,
                                                        v24,
                                                        0LL);
        if ( SpotData && SLODWORD(SpotData->fields.list) >= 1 )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_int___Add(
            v17,
            v23,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v23 >= size )
        return v17;
      baseSpotIdList = this->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_19:
    sub_B5D69C(SpotData, v19);
  }
  return v17;
}


EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x23
  int size; // w22
  unsigned int v16; // w21
  EventInfoAreaImprovementControl_SpotData_o *v17; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v19; // x19

  if ( (byte_42E9FA6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___,
      spotId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__,
      v9,
      v10,
      v11);
    byte_42E9FA6 = 1;
  }
  v12 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
  if ( !v12 )
    return 0LL;
  spotDataList = this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_19;
  size = spotDataList->fields._size;
  if ( size < 1 )
    return 0LL;
  v16 = 0;
  while ( 1 )
  {
    if ( spotDataList->fields._size <= v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = spotDataList->fields._items->m_Items[v16];
    if ( !v17 )
      goto LABEL_19;
    if ( v17->fields.SpotId == spotId )
      break;
    if ( (int)++v16 >= size )
      return 0LL;
    spotDataList = this->fields.spotDataList;
    if ( !spotDataList )
      goto LABEL_19;
  }
  v19 = this->fields.spotDataList;
  if ( !v19 )
LABEL_19:
    sub_B5D69C(v12, v13);
  if ( v19->fields._size <= v16 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return v19->fields._items->m_Items[v16];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
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
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v16; // x19
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-50h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42E9FAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13, v14);
    byte_42E9FAC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    baseSpotIdList,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v16 = 0LL;
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B5D69C(0LL, v23);
    current = v26.fields.current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v26.fields.current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_B5D69C(MaxLevelEntity, v20);
      v21 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v21 )
      {
        if ( !entity )
          sub_B5D69C(v21, v22);
        v16 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
}


int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_42E9FA3 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, eventId, groupId, method);
    byte_42E9FA3 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventTotalPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventUiValueEntity_array *eventUiValueEntityList; // x22
  __int64 v4; // x8
  EventInfoAreaImprovementControl_o *v5; // x19
  unsigned __int64 v7; // x23
  int64_t v8; // x21
  EventUiValueEntity_o *v9; // x9
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  __int64 v13; // x0

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    return 0LL;
  v4 = *(_QWORD *)&eventUiValueEntityList->max_length;
  if ( (int)v4 < 1 )
    return 0LL;
  v5 = this;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v9 = eventUiValueEntityList->m_Items[v7];
    if ( v9 && v9->fields.type == 2 )
    {
      v10 = System_Int32__Parse(v9->fields.value, 0LL);
      this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetUserEventPoint(
                                                    v5,
                                                    eventId,
                                                    v10,
                                                    v11);
      LODWORD(v4) = eventUiValueEntityList->max_length;
      v8 += (int64_t)this;
    }
    ++v7;
  }
  while ( (__int64)v7 < (int)v4 );
  return v8;
}


void __fastcall EventInfoAreaImprovementControl__Initialization(
        EventInfoAreaImprovementControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v17; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  EventUiEntity_o *v26; // x20
  System_Action_o *v27; // x21

  if ( (byte_42E9F9D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18713/*"event_bg_80384"*/, v13, v14, v15);
    byte_42E9F9D = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_9;
  eventCooltimeRewardMaster = this->fields.eventCooltimeRewardMaster;
  if ( !eventCooltimeRewardMaster )
    goto LABEL_9;
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          eventCooltimeRewardMaster,
                          eventUiEntity->fields.eventId,
                          0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.eventUiEntity;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v26, v27, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_18713/*"event_bg_80384"*/,
    0LL);
  eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.titleBgSprite;
  if ( !eventCooltimeRewardMaster
    || (((void (__fastcall *)(EventCooltimeRewardMaster_o *, Il2CppMethodPointer))eventCooltimeRewardMaster->klass[1].vtable._5_ForForceDerived.method)(
          eventCooltimeRewardMaster,
          eventCooltimeRewardMaster->klass[1].vtable._6_preProcess.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerAttractionBgSprite,
          this->fields.customerAttractionBgName,
          0LL),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerAttractionBgSprite) == 0LL)
    || (((void (__fastcall *)(EventCooltimeRewardMaster_o *, Il2CppMethodPointer))eventCooltimeRewardMaster->klass[1].vtable._5_ForForceDerived.method)(
          eventCooltimeRewardMaster,
          eventCooltimeRewardMaster->klass[1].vtable._6_preProcess.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerNumBgSprite,
          this->fields.customerNumBgName,
          0LL),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerNumBgSprite) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(eventCooltimeRewardMaster, v17);
  }
  ((void (__fastcall *)(EventCooltimeRewardMaster_o *, Il2CppMethodPointer))eventCooltimeRewardMaster->klass[1].vtable._5_ForForceDerived.method)(
    eventCooltimeRewardMaster,
    eventCooltimeRewardMaster->klass[1].vtable._6_preProcess.methodPtr);
}


void __fastcall EventInfoAreaImprovementControl__LoadParkData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *KEY_PREFIX_PARK_DATA; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *String; // x20
  const MethodInfo *v12; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-14h] BYREF

  eventIda = eventId;
  if ( (byte_42E9FAA & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9FAA = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v9 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v10 = System_String__Concat_44577788(KEY_PREFIX_PARK_DATA, v9, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventIda, v12);
    this->fields.customerNum = UserEventTotalPoint;
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v14);
    TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventIda, v15);
    this->fields.customerAttractionRate = TotalCustomerAttractionRate;
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v17);
    return;
  }
  v18 = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v18 )
    goto LABEL_13;
  v19 = v18;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_14;
  *(_WORD *)(v18 + 32) = 44;
  if ( !String || (v18 = (__int64)System_String__Split(String, (System_Char_array *)v18, 0LL)) == 0 )
LABEL_13:
    sub_B5D69C(v18, v19);
  v20 = v18;
  if ( !*(_DWORD *)(v18 + 24)
    || (v18 = System_Int64__Parse(*(System_String_o **)(v18 + 32), 0LL),
        this->fields.customerNum = v18,
        *(_DWORD *)(v20 + 24) <= 1u) )
  {
LABEL_14:
    v21 = sub_B5D6C8(v18);
    sub_B5D668(v21, 0LL);
  }
  this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v20 + 40), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__LoadSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
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
  __int64 spotDataList; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  __int64 v32; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v35; // x3
  __int64 v36; // x24
  __int64 v37; // x20
  unsigned int v38; // w25
  System_String_o *v39; // x21
  __int64 v40; // x21
  int32_t v41; // w22
  int32_t v42; // w0
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42E9FA5 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E9FA5 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  spotDataList = (__int64)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotDataList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
  KEY_PREFIX_SPOT_DATA = this->fields.KEY_PREFIX_SPOT_DATA;
  v28 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v29 = System_String__Concat_44577788(KEY_PREFIX_SPOT_DATA, v28, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v29, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    spotDataList = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( spotDataList )
    {
      *(_QWORD *)&eventId = spotDataList;
      if ( !*(_DWORD *)(spotDataList + 24) )
      {
LABEL_29:
        v44 = sub_B5D6C8(spotDataList);
        sub_B5D668(v44, 0LL);
      }
      *(_WORD *)(spotDataList + 32) = 44;
      if ( String )
      {
        spotDataList = (__int64)System_String__Split(String, (System_Char_array *)spotDataList, 0LL);
        if ( spotDataList )
        {
          v36 = *(_QWORD *)(spotDataList + 24);
          v37 = spotDataList;
          if ( (int)v36 < 1 )
            return;
          v38 = 0;
          while ( 1 )
          {
            v39 = *(System_String_o **)(v37 + 8LL * (int)v38 + 32);
            spotDataList = sub_B5D5DC(char___TypeInfo, 1LL);
            if ( !spotDataList )
              break;
            *(_QWORD *)&eventId = spotDataList;
            if ( !*(_DWORD *)(spotDataList + 24) )
              goto LABEL_29;
            *(_WORD *)(spotDataList + 32) = 58;
            if ( !v39 )
              break;
            spotDataList = (__int64)System_String__Split(v39, (System_Char_array *)spotDataList, 0LL);
            if ( !spotDataList )
              break;
            v40 = spotDataList;
            if ( *(_DWORD *)(spotDataList + 24) )
            {
              spotDataList = System_Int32__Parse(*(System_String_o **)(spotDataList + 32), 0LL);
              if ( *(_DWORD *)(v40 + 24) > 1u )
              {
                v41 = spotDataList;
                v42 = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0LL);
                EventInfoAreaImprovementControl__AddSpotData(this, v41, v42, v43);
                if ( (int)++v38 >= (int)v36 )
                  return;
                if ( v38 < *(_DWORD *)(v37 + 24) )
                  continue;
              }
            }
            goto LABEL_29;
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(spotDataList, *(_QWORD *)&eventId);
  }
  spotDataList = (__int64)this->fields.userEventCooltimeRewardMaster;
  if ( !spotDataList )
    goto LABEL_31;
  EntityListByEventId = UserEventCooltimeRewardMaster__GetEntityListByEventId(
                          (UserEventCooltimeRewardMaster_o *)spotDataList,
                          eventIda,
                          0LL);
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  spotDataList = (__int64)this->fields.baseSpotIdList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_int__o *)spotDataList,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v46,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B5D69C(0LL, v32);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v46.fields.current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(this, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v35);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v46,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__PlayAnim(
        EventInfoAreaImprovementControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( type == 1 )
    EventInfoAreaImprovementControl__PlayAreaAddAnim(this, callback, (const MethodInfo *)callback);
  else
    ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__PlayAreaAddAnim(
        EventInfoAreaImprovementControl_o *this,
        System_Action_o *callback,
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
  __int64 v27; // x20
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v44; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v46; // x2
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v51; // x8
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  System_Action_o *v55; // x22
  const MethodInfo *v56; // x4
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v59; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9FA0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__, v21, v22, v23);
    sub_B5D5C4(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, v24, v25, v26);
    byte_42E9FA0 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v27 = sub_B5D694(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass31_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_18;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v29);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v44);
  v28 = System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
          (const MethodInfo_1C98960 *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v28 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_B5D69C(v28, v29);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    AddedEffectTargetIndexList,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v59,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v47 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_B5D69C(v47, v48);
    if ( v59.fields.current >= drawComponentList->max_length )
    {
      v57 = sub_B5D6C8(v47);
      sub_B5D668(v57, 0LL);
    }
    v51 = drawComponentList->m_Items[v59.fields.current];
    if ( !v51 )
      sub_B5D69C(v47, v48);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v51->fields._SpotId_k__BackingField,
      v51->fields._Level_k__BackingField,
      v49);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v59,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v46);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v52);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v53);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v54);
  UnityEngine_PlayerPrefs__Save(0LL);
  v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v27,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v55, v56);
}


void __fastcall EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
        EventInfoAreaImprovementControl_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o *targetIndexList,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x21
  int v49; // w8
  __int64 v50; // x23
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  __int64 v52; // x21
  System_Int32_array **v53; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v54; // x8
  EventInfoAreaImprovementSlideComponent_o *v55; // x19
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x2
  __int64 v58; // x0

  if ( (byte_42E9FA1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)targetIndexList, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, v18, v19, v20);
    byte_42E9FA1 = 1;
  }
  v21 = sub_B5D694(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_15;
  *(_DWORD *)(v21 + 24) = index;
  *(_QWORD *)(v21 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = targetIndexList;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 40),
    (System_Int32_array **)targetIndexList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  *(_QWORD *)(v21 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  v48 = *(_QWORD *)(v21 + 40);
  if ( !v48 )
    goto LABEL_15;
  v49 = *(_DWORD *)(v48 + 24);
  v50 = *(int *)(v21 + 24);
  if ( v49 > (int)v50 )
  {
    if ( v49 <= (unsigned int)v50 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    slideComponentList = this->fields.slideComponentList;
    if ( slideComponentList )
    {
      v52 = *(int *)(*(_QWORD *)(v48 + 16) + 4 * v50 + 32);
      if ( (unsigned int)v52 >= slideComponentList->max_length )
        goto LABEL_16;
      v53 = (System_Int32_array **)slideComponentList->m_Items[v52];
      *(_QWORD *)(v21 + 16) = v53;
      sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), v53, v42, v43, v44, v45, v46, v47);
      v54 = this->fields.slideComponentList;
      if ( !v54 )
        goto LABEL_15;
      if ( (unsigned int)(v52 + 1) >= v54->max_length )
      {
LABEL_16:
        v58 = sub_B5D6C8(v22);
        sub_B5D668(v58, 0LL);
      }
      v55 = v54->m_Items[(int)v52 + 1];
      v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)v21,
        Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
        0LL);
      if ( v55 )
      {
        EventInfoAreaImprovementSlideComponent__SlideDown(v55, v56, v57);
        return;
      }
    }
LABEL_15:
    sub_B5D69C(v22, v23);
  }
  ActionExtensions__Call(*(System_Action_o **)(v21 + 48), 0LL);
}


void __fastcall EventInfoAreaImprovementControl__Redisplay(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v14; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__LoadSpotData(this, eventId, v2);
  EventInfoAreaImprovementControl__LoadParkData(this, eventId, v6);
  EventInfoAreaImprovementControl__SetupSlideComponentList(this, v7);
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v8);
  UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v9);
  this->fields.customerNum = UserEventTotalPoint;
  EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v11);
  TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventId, v12);
  this->fields.customerAttractionRate = TotalCustomerAttractionRate;
  EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v14);
}


void __fastcall EventInfoAreaImprovementControl__SaveParkData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *KEY_PREFIX_PARK_DATA; // x19
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = eventId;
  if ( (byte_42E9FAB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_707/*","*/, eventId, (_DWORD)method, v3);
    byte_42E9FAB = 1;
  }
  v5 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v6 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v7 = System_String__Concat_44580072(v5, (System_String_o *)StringLiteral_707/*","*/, v6, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v9 = v7;
  v10 = System_Int32__ToString((int32_t)&v12, 0LL);
  v11 = System_String__Concat_44577788(KEY_PREFIX_PARK_DATA, v10, 0LL);
  UnityEngine_PlayerPrefs__SetString(v11, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoAreaImprovementControl_o *v4; // x19
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v34; // x0
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_0; // x21
  Il2CppObject *v37; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Text_StringBuilder_o *v45; // x20
  __int64 v46; // x21
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v47; // x26
  __int64 v48; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v49; // x26
  __int64 v50; // x8
  System_String_o *v51; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v53; // x0
  System_String_o *v54; // x19
  System_String_o *v55; // x0
  int v56; // [xsp+4h] [xbp-4Ch] BYREF
  int v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  v58 = eventId;
  if ( (byte_42E9FA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__, v20, v21, v22);
    sub_B5D5C4(&EventInfoAreaImprovementControl___c_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v26, v27, v28);
    this = (EventInfoAreaImprovementControl_o *)sub_B5D5C4(&StringLiteral_707/*","*/, v29, v30, v31);
    byte_42E9FA8 = 1;
  }
  v56 = 0;
  v57 = 0;
  spotDataList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v34 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( (BYTE3(EventInfoAreaImprovementControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v34 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    static_fields = v34->static_fields;
    _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__40_0,
        v37,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__);
      v38 = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      v38->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v38->__9__40_0,
        (System_Int32_array **)_9__40_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      spotDataList,
      (System_Comparison_T__o *)_9__40_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v45 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v45, 0LL);
  if ( size >= 1 )
  {
    v46 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v46 != 4 )
      {
        if ( !v45 )
          break;
        this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42953744(
                                                      v45,
                                                      (System_String_o *)StringLiteral_707/*","*/,
                                                      0LL);
      }
      v47 = v4->fields.spotDataList;
      if ( !v47 )
        break;
      if ( v47->fields._size <= (unsigned int)(v46 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v48 = *((_QWORD *)&v47->fields._items->obj.klass + v46);
      if ( !v48 )
        break;
      v57 = *(_DWORD *)(v48 + 16);
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&v57, 0LL);
      if ( !v45 )
        break;
      System_Text_StringBuilder__Append_42953744(v45, (System_String_o *)this, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42953744(
                                                    v45,
                                                    (System_String_o *)StringLiteral_1245/*":"*/,
                                                    0LL);
      v49 = v4->fields.spotDataList;
      if ( !v49 )
        break;
      if ( v49->fields._size <= (unsigned int)(v46 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v50 = *((_QWORD *)&v49->fields._items->obj.klass + v46);
      if ( !v50 )
        break;
      v56 = *(_DWORD *)(v50 + 20);
      v51 = System_Int32__ToString((int32_t)&v56, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42953744(v45, v51, 0LL);
      if ( (int)++v46 - 4 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B5D69C(this, *(_QWORD *)&eventId);
  }
LABEL_29:
  KEY_PREFIX_SPOT_DATA = v4->fields.KEY_PREFIX_SPOT_DATA;
  v53 = System_Int32__ToString((int32_t)&v58, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_44577788(KEY_PREFIX_SPOT_DATA, v53, 0LL);
  if ( !v45 )
    goto LABEL_31;
  v54 = (System_String_o *)this;
  v55 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v45->klass->vtable._3_ToString.method)(
                             v45,
                             v45->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v54, v55, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t totalRate,
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
  UnityEngine_Object_o *customerAttractionRateLabel; // x21
  int64_t v16; // x8
  int64_t v17; // x23
  UILabel_o *v18; // x20
  __int64 v19; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int64_t v25; // [xsp+0h] [xbp-40h] BYREF
  __int64 v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9FA2 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, totalRate, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5795/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, v12, v13, v14);
    byte_42E9FA2 = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v16 = totalRate + 1000;
    v17 = (totalRate + 1000) / 100 % 10;
    v18 = this->fields.customerAttractionRateLabel;
    v19 = v16 / 1000;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0LL);
    v26 = v19;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
    v25 = v17;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
    v23 = System_String__Format_44573324(v20, v21, v22, 0LL);
    if ( !v18
      || (UILabel__set_text(v18, v23, 0LL), (v23 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_B5D69C(v23, v24);
    }
    UILabel__SetCondensedScale((UILabel_o *)v23, this->fields.customerAttractionRateMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerNumLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t point,
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
  UnityEngine_Object_o *customerNumLabel; // x21
  UILabel_o *v22; // x21
  System_String_o *v23; // x22
  int64_t UserPointEventMax; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  BalanceConfig_c *v28; // x8
  int64_t v29; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9FA4 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, point, (_DWORD)method, v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Math_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v18, v19, v20);
    byte_42E9FA4 = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v22 = this->fields.customerNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v28 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v28->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v29 = System_Math__Min_45149944(point, UserPointEventMax, 0LL);
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
    v26 = System_String__Format(v23, v25, 0LL);
    if ( !v22 || (UILabel__set_text(v22, v26, 0LL), (v26 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_B5D69C(v26, v27);
    UILabel__SetCondensedScale((UILabel_o *)v26, this->fields.customerNumMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__Setup(
        EventInfoAreaImprovementControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v17; // x2
  struct EventUiEntity_o *v18; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  int v23; // w22
  int v24; // w9
  __int64 v25; // x23
  EventInfoAreaImprovementDrawComponent_o *v26; // x20
  const MethodInfo *v27; // x2
  struct EventUiEntity_o *v28; // x8
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  int size; // w8
  int32_t v31; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v33; // x1
  int Level; // w8
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x0

  if ( (byte_42E9F9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)entitys, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11, v12);
    byte_42E9F9E = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entitys,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_23;
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v15);
    v18 = this->fields.eventUiEntity;
    if ( !v18 )
      goto LABEL_23;
    EventInfoAreaImprovementControl__LoadParkData(this, v18->fields.eventId, v17);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v19);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_23;
    max_length = drawComponentList->max_length;
    if ( max_length >= 1 )
    {
      v23 = 1;
      do
      {
        v24 = v23 - 1;
        if ( v23 - 1 >= drawComponentList->max_length )
        {
          v37 = sub_B5D6C8(v13);
          sub_B5D668(v37, 0LL);
        }
        v25 = v24;
        v26 = drawComponentList->m_Items[v24];
        if ( !v26 )
          break;
        v13 = EventInfoUIBase__SetSpriteByLocalAtlas(
                (EventInfoUIBase_o *)this,
                v26->fields.bgSprite,
                v26->fields.bgSpriteName,
                0LL);
        v28 = this->fields.eventUiEntity;
        if ( !v28 )
          break;
        v26->fields._EventId_k__BackingField = v28->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        size = baseSpotIdList->fields._size;
        if ( (int)v25 >= size )
        {
          v31 = 0;
        }
        else
        {
          if ( size <= (unsigned int)v25 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v31 = baseSpotIdList->fields._items->m_Items[v25 + 1];
        }
        v26->fields._SpotId_k__BackingField = v31;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, v31, v27);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v26->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v26, v33);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v26, v35);
        if ( v23 >= max_length )
          goto LABEL_24;
        drawComponentList = this->fields.drawComponentList;
        ++v23;
      }
      while ( drawComponentList );
LABEL_23:
      sub_B5D69C(v13, v14);
    }
LABEL_24:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v20);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v36);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetupSlideComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  EventInfoAreaImprovementControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int max_length; // w21
  il2cpp_array_size_t v10; // w9
  char v11; // w23
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  __int64 v13; // x22
  int size; // w9
  EventInfoAreaImprovementSlideComponent_o *v15; // x20
  int32_t v16; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E9F9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, (_DWORD)v2, v3);
    this = (EventInfoAreaImprovementControl_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                  v5,
                                                  v6,
                                                  v7);
    byte_42E9F9F = 1;
  }
  slideComponentList = v4->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_23;
  max_length = slideComponentList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v10 >= slideComponentList->max_length )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      baseSpotIdList = v4->fields.baseSpotIdList;
      if ( !baseSpotIdList )
        break;
      v13 = (int)v10;
      size = baseSpotIdList->fields._size;
      v15 = slideComponentList->m_Items[v13];
      if ( (int)v13 >= size )
      {
        v16 = 0;
        if ( !v15 )
          break;
      }
      else
      {
        if ( size <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v16 = baseSpotIdList->fields._items->m_Items[v13 + 1];
        if ( !v15 )
          break;
      }
      v15->fields._SpotId_k__BackingField = v16;
      if ( (_DWORD)v13 )
      {
        if ( (v11 & 1) != 0 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v15, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
        }
      }
      if ( EventInfoAreaImprovementControl__GetSpotData(v4, v15->fields._SpotId_k__BackingField, v2) )
      {
        EventInfoAreaImprovementSlideComponent__SetupDisp(v15, v18);
        v11 = 1;
      }
      else
      {
        EventInfoAreaImprovementSlideComponent__SetupHidden(v15, v18);
        v11 = 0;
      }
      v10 = v13 + 1;
      if ( (int)v13 + 1 >= max_length )
        return;
      slideComponentList = v4->fields.slideComponentList;
    }
    while ( slideComponentList );
LABEL_23:
    sub_B5D69C(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl__UpdateDrawComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  EventInfoAreaImprovementControl_o *v4; // x19
  il2cpp_array_size_t v5; // w22
  EventInfoAreaImprovementDrawComponent_o *v6; // x20
  int32_t Level_k__BackingField; // w24
  int32_t playType; // w23
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  drawComponentList = this->fields.drawComponentList;
  if ( !drawComponentList )
    goto LABEL_15;
  max_length = drawComponentList->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    do
    {
      if ( v5 >= drawComponentList->max_length )
      {
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
      v6 = drawComponentList->m_Items[v5];
      if ( !v6 )
        break;
      this = (EventInfoAreaImprovementControl_o *)v4->fields.userEventCooltimeRewardMaster;
      if ( !this )
        break;
      Level_k__BackingField = v6->fields._Level_k__BackingField;
      this = (EventInfoAreaImprovementControl_o *)UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                                                    (UserEventCooltimeRewardMaster_o *)this,
                                                    v6->fields._EventId_k__BackingField,
                                                    v6->fields._SpotId_k__BackingField,
                                                    0LL);
      if ( this )
        playType = this->fields.playType;
      else
        playType = 0;
      if ( Level_k__BackingField != playType )
      {
        v6->fields._Level_k__BackingField = playType;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v6, method);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v6, v9);
        this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetSpotData(
                                                      v4,
                                                      v6->fields._SpotId_k__BackingField,
                                                      v10);
        if ( this )
          *((_DWORD *)&this->fields.UnityEngine_MonoBehaviour_Fields + 1) = playType;
      }
      if ( (int)++v5 >= max_length )
        return;
      drawComponentList = v4->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_B5D69C(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoAreaImprovementControl_SpotData___ctor(
        EventInfoAreaImprovementControl_SpotData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E651D & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoAreaImprovementControl___c_TypeInfo, v1, v2, v3);
    byte_42E651D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventInfoAreaImprovementControl___c___ctor(
        EventInfoAreaImprovementControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoAreaImprovementControl___c___SaveSpotData_b__40_0(
        EventInfoAreaImprovementControl___c_o *this,
        EventInfoAreaImprovementControl_SpotData_o *a,
        EventInfoAreaImprovementControl_SpotData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.SpotId - b->fields.SpotId;
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
        EventInfoAreaImprovementControl___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass31_0___PlayAreaAddAnim_b__0(
        EventInfoAreaImprovementControl___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoAreaImprovementControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoAreaImprovementControl__SetCustomerNumLabel(_4__this, _4__this->fields.customerNum, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
    _4__this,
    _4__this->fields.customerAttractionRate,
    0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__0(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *monitor; // x22
  EventInfoAreaImprovementSlideComponent_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E651E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_B5D5C4(
                                                                        &Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
                                                                        v5,
                                                                        v6,
                                                                        v7);
    byte_42E651E = 1;
  }
  monitor = (System_Action_o *)v4[3].monitor;
  klass = (EventInfoAreaImprovementSlideComponent_o *)v4[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v4,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v4[3].monitor = monitor;
    sub_B5D560(&v4[3].monitor);
  }
  if ( !klass )
    sub_B5D69C(this, method);
  EventInfoAreaImprovementSlideComponent__SlideIn(klass, monitor, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__1(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *_4__this; // x8
  __int64 v3; // x1

  _4__this = this->fields.__4__this;
  v3 = (unsigned int)(this->fields.index + 1);
  this->fields.index = v3;
  if ( !_4__this )
    sub_B5D69C(this, v3);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v3,
    this->fields.targetIndexList,
    this->fields.callback,
    0LL);
}