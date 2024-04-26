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
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_43534A4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_B70694(&StringLiteral_13174/*"SpotCooltime_ParkData_"*/);
    sub_B70694(&StringLiteral_13175/*"SpotCooltime_SpotData_"*/);
    byte_43534A4 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_13175/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13175/*"SpotCooltime_SpotData_"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_13174/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13174/*"SpotCooltime_ParkData_"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_PARK_DATA, v10, v11, v12, v13, v14, v15, v16);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.spotDataList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__AddSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        int32_t level,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_SpotData_o *v7; // x22
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x0
  __int64 v9; // x1

  if ( (byte_435349E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
    sub_B70694(&EventInfoAreaImprovementControl_SpotData_TypeInfo);
    byte_435349E = 1;
  }
  v7 = (EventInfoAreaImprovementControl_SpotData_o *)sub_B70764(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  EventInfoAreaImprovementControl_SpotData___ctor(v7, 0LL);
  if ( !v7 || (v7->fields.SpotId = spotId, v7->fields.Level = level, (spotDataList = this->fields.spotDataList) == 0LL) )
    sub_B7076C(spotDataList, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventCooltimeRewardMaster_o **p_eventCooltimeRewardMaster; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4353493 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4353493 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = Master_WarQuestSelectionMaster;
  p_eventCooltimeRewardMaster = &this->fields.eventCooltimeRewardMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)p_eventCooltimeRewardMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  p_eventCooltimeRewardMaster[1] = (struct EventCooltimeRewardMaster_o *)v11;
  sub_B70630((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 1), v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  p_eventCooltimeRewardMaster[2] = (struct EventCooltimeRewardMaster_o *)v18;
  sub_B70630((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 2), v18, v19, v20, v21, v22, v23, v24);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  UserEventCooltimeRewardMaster_o *SpotData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x22
  signed __int64 size; // x23
  unsigned __int64 v9; // x21
  int32_t v10; // w22
  struct EventUiEntity_o *eventUiEntity; // x8

  if ( (byte_43534A0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43534A0 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_19;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v10 = baseSpotIdList->fields._items->m_Items[v9 + 1];
      SpotData = (UserEventCooltimeRewardMaster_o *)EventInfoAreaImprovementControl__GetSpotData(this, v10, v6);
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
                                                        v10,
                                                        0LL);
        if ( SpotData && SLODWORD(SpotData->fields.list) >= 1 )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_int___Add(
            v3,
            v9,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v9 >= size )
        return v3;
      baseSpotIdList = this->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_19:
    sub_B7076C(SpotData, v5);
  }
  return v3;
}


EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x23
  int size; // w22
  unsigned int v9; // w21
  EventInfoAreaImprovementControl_SpotData_o *v10; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v12; // x19

  if ( (byte_435349D & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    byte_435349D = 1;
  }
  v5 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
  if ( !v5 )
    return 0LL;
  spotDataList = this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_19;
  size = spotDataList->fields._size;
  if ( size < 1 )
    return 0LL;
  v9 = 0;
  while ( 1 )
  {
    if ( spotDataList->fields._size <= v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = spotDataList->fields._items->m_Items[v9];
    if ( !v10 )
      goto LABEL_19;
    if ( v10->fields.SpotId == spotId )
      break;
    if ( (int)++v9 >= size )
      return 0LL;
    spotDataList = this->fields.spotDataList;
    if ( !spotDataList )
      goto LABEL_19;
  }
  v12 = this->fields.spotDataList;
  if ( !v12 )
LABEL_19:
    sub_B7076C(v5, v6);
  if ( v12->fields._size <= v9 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  return v12->fields._items->m_Items[v9];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v6; // x19
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-50h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_43534A3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_43534A3 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_B7076C(0LL, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    baseSpotIdList,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v6 = 0LL;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B7076C(0LL, v13);
    current = v16.fields.current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v16.fields.current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_B7076C(MaxLevelEntity, v10);
      v11 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v11 )
      {
        if ( !entity )
          sub_B7076C(v11, v12);
        v6 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6;
}


int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_435349A & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_435349A = 1;
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
      v13 = sub_B70798(this);
      sub_B70738(v13, 0LL);
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
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v11; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventUiEntity_o *v20; // x20
  System_Action_o *v21; // x21

  if ( (byte_4353494 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__);
    sub_B70694(&StringLiteral_18763/*"event_bg_80384"*/);
    byte_4353494 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v20, v21, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_18763/*"event_bg_80384"*/,
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
    sub_B7076C(eventCooltimeRewardMaster, v11);
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
  System_String_o *KEY_PREFIX_PARK_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *String; // x20
  const MethodInfo *v8; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-14h] BYREF

  eventIda = eventId;
  if ( (byte_43534A1 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43534A1 = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v6 = System_String__Concat_44758168(KEY_PREFIX_PARK_DATA, v5, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventIda, v8);
    this->fields.customerNum = UserEventTotalPoint;
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v10);
    TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventIda, v11);
    this->fields.customerAttractionRate = TotalCustomerAttractionRate;
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v13);
    return;
  }
  v14 = sub_B706AC(char___TypeInfo, 1LL);
  if ( !v14 )
    goto LABEL_13;
  v15 = v14;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_14;
  *(_WORD *)(v14 + 32) = 44;
  if ( !String || (v14 = (__int64)System_String__Split(String, (System_Char_array *)v14, 0LL)) == 0 )
LABEL_13:
    sub_B7076C(v14, v15);
  v16 = v14;
  if ( !*(_DWORD *)(v14 + 24)
    || (v14 = System_Int64__Parse(*(System_String_o **)(v14 + 32), 0LL),
        this->fields.customerNum = v14,
        *(_DWORD *)(v16 + 24) <= 1u) )
  {
LABEL_14:
    v17 = sub_B70798(v14);
    sub_B70738(v17, 0LL);
  }
  this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v16 + 40), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__LoadSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 spotDataList; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  __int64 v10; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x24
  __int64 v15; // x20
  unsigned int v16; // w25
  System_String_o *v17; // x21
  __int64 v18; // x21
  int32_t v19; // w22
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_435349C & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435349C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  spotDataList = (__int64)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotDataList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
  KEY_PREFIX_SPOT_DATA = this->fields.KEY_PREFIX_SPOT_DATA;
  v6 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v7 = System_String__Concat_44758168(KEY_PREFIX_SPOT_DATA, v6, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    spotDataList = sub_B706AC(char___TypeInfo, 1LL);
    if ( spotDataList )
    {
      *(_QWORD *)&eventId = spotDataList;
      if ( !*(_DWORD *)(spotDataList + 24) )
      {
LABEL_29:
        v22 = sub_B70798(spotDataList);
        sub_B70738(v22, 0LL);
      }
      *(_WORD *)(spotDataList + 32) = 44;
      if ( String )
      {
        spotDataList = (__int64)System_String__Split(String, (System_Char_array *)spotDataList, 0LL);
        if ( spotDataList )
        {
          v14 = *(_QWORD *)(spotDataList + 24);
          v15 = spotDataList;
          if ( (int)v14 < 1 )
            return;
          v16 = 0;
          while ( 1 )
          {
            v17 = *(System_String_o **)(v15 + 8LL * (int)v16 + 32);
            spotDataList = sub_B706AC(char___TypeInfo, 1LL);
            if ( !spotDataList )
              break;
            *(_QWORD *)&eventId = spotDataList;
            if ( !*(_DWORD *)(spotDataList + 24) )
              goto LABEL_29;
            *(_WORD *)(spotDataList + 32) = 58;
            if ( !v17 )
              break;
            spotDataList = (__int64)System_String__Split(v17, (System_Char_array *)spotDataList, 0LL);
            if ( !spotDataList )
              break;
            v18 = spotDataList;
            if ( *(_DWORD *)(spotDataList + 24) )
            {
              spotDataList = System_Int32__Parse(*(System_String_o **)(spotDataList + 32), 0LL);
              if ( *(_DWORD *)(v18 + 24) > 1u )
              {
                v19 = spotDataList;
                v20 = System_Int32__Parse(*(System_String_o **)(v18 + 40), 0LL);
                EventInfoAreaImprovementControl__AddSpotData(this, v19, v20, v21);
                if ( (int)++v16 >= (int)v14 )
                  return;
                if ( v16 < *(_DWORD *)(v15 + 24) )
                  continue;
              }
            }
            goto LABEL_29;
          }
        }
      }
    }
LABEL_31:
    sub_B7076C(spotDataList, *(_QWORD *)&eventId);
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
          (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  spotDataList = (__int64)this->fields.baseSpotIdList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)spotDataList,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B7076C(0LL, v10);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v24.fields.current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(this, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v13);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B7076C(this, method);
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
  __int64 v5; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v24; // x2
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v29; // x8
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4353497 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_int___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__);
    sub_B70694(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
    byte_4353497 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v5 = sub_B70764(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass31_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v7);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v22);
  v6 = System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
         (const MethodInfo_1CA887C *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v6 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_B7076C(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    AddedEffectTargetIndexList,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v25 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_B7076C(v25, v26);
    if ( v37.fields.current >= drawComponentList->max_length )
    {
      v35 = sub_B70798(v25);
      sub_B70738(v35, 0LL);
    }
    v29 = drawComponentList->m_Items[v37.fields.current];
    if ( !v29 )
      sub_B7076C(v25, v26);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v29->fields._SpotId_k__BackingField,
      v29->fields._Level_k__BackingField,
      v27);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v24);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v30);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v31);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v32);
  UnityEngine_PlayerPrefs__Save(0LL);
  v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v33, v34);
}


void __fastcall EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
        EventInfoAreaImprovementControl_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o *targetIndexList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
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
  __int64 v36; // x21
  int v37; // w8
  __int64 v38; // x23
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  __int64 v40; // x21
  System_Int32_array **v41; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v42; // x8
  EventInfoAreaImprovementSlideComponent_o *v43; // x19
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x2
  __int64 v46; // x0

  if ( (byte_4353498 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__);
    sub_B70694(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
    byte_4353498 = 1;
  }
  v9 = sub_B70764(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_DWORD *)(v9 + 24) = index;
  *(_QWORD *)(v9 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = targetIndexList;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)targetIndexList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v9 + 48) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  v36 = *(_QWORD *)(v9 + 40);
  if ( !v36 )
    goto LABEL_15;
  v37 = *(_DWORD *)(v36 + 24);
  v38 = *(int *)(v9 + 24);
  if ( v37 > (int)v38 )
  {
    if ( v37 <= (unsigned int)v38 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    slideComponentList = this->fields.slideComponentList;
    if ( slideComponentList )
    {
      v40 = *(int *)(*(_QWORD *)(v36 + 16) + 4 * v38 + 32);
      if ( (unsigned int)v40 >= slideComponentList->max_length )
        goto LABEL_16;
      v41 = (System_Int32_array **)slideComponentList->m_Items[v40];
      *(_QWORD *)(v9 + 16) = v41;
      sub_B70630((BattleServantConfConponent_o *)(v9 + 16), v41, v30, v31, v32, v33, v34, v35);
      v42 = this->fields.slideComponentList;
      if ( !v42 )
        goto LABEL_15;
      if ( (unsigned int)(v40 + 1) >= v42->max_length )
      {
LABEL_16:
        v46 = sub_B70798(v10);
        sub_B70738(v46, 0LL);
      }
      v43 = v42->m_Items[(int)v40 + 1];
      v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v9,
        Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
        0LL);
      if ( v43 )
      {
        EventInfoAreaImprovementSlideComponent__SlideDown(v43, v44, v45);
        return;
      }
    }
LABEL_15:
    sub_B7076C(v10, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0LL);
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
    sub_B7076C(this, method);
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
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *KEY_PREFIX_PARK_DATA; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = eventId;
  if ( (byte_43534A2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_712/*","*/);
    byte_43534A2 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_44760452(v4, (System_String_o *)StringLiteral_712/*","*/, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_44758168(KEY_PREFIX_PARK_DATA, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *v3; // x19
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v6; // x0
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_0; // x21
  Il2CppObject *v9; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Text_StringBuilder_o *v17; // x20
  __int64 v18; // x21
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v19; // x26
  __int64 v20; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v21; // x26
  __int64 v22; // x8
  System_String_o *v23; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  System_String_o *v27; // x0
  int v28; // [xsp+4h] [xbp-4Ch] BYREF
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v30 = eventId;
  if ( (byte_435349F & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__);
    sub_B70694(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__);
    sub_B70694(&EventInfoAreaImprovementControl___c_TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    this = (EventInfoAreaImprovementControl_o *)sub_B70694(&StringLiteral_712/*","*/);
    byte_435349F = 1;
  }
  v28 = 0;
  v29 = 0;
  spotDataList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v6 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( (BYTE3(EventInfoAreaImprovementControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v6 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__40_0,
        v9,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__);
      v10 = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      v10->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v10->__9__40_0,
        (System_Int32_array **)_9__40_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      spotDataList,
      (System_Comparison_T__o *)_9__40_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v17 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0LL);
  if ( size >= 1 )
  {
    v18 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v18 != 4 )
      {
        if ( !v17 )
          break;
        this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42601980(
                                                      v17,
                                                      (System_String_o *)StringLiteral_712/*","*/,
                                                      0LL);
      }
      v19 = v3->fields.spotDataList;
      if ( !v19 )
        break;
      if ( v19->fields._size <= (unsigned int)(v18 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = *((_QWORD *)&v19->fields._items->obj.klass + v18);
      if ( !v20 )
        break;
      v29 = *(_DWORD *)(v20 + 16);
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&v29, 0LL);
      if ( !v17 )
        break;
      System_Text_StringBuilder__Append_42601980(v17, (System_String_o *)this, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42601980(
                                                    v17,
                                                    (System_String_o *)StringLiteral_1250/*":"*/,
                                                    0LL);
      v21 = v3->fields.spotDataList;
      if ( !v21 )
        break;
      if ( v21->fields._size <= (unsigned int)(v18 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v22 = *((_QWORD *)&v21->fields._items->obj.klass + v18);
      if ( !v22 )
        break;
      v28 = *(_DWORD *)(v22 + 20);
      v23 = System_Int32__ToString((int32_t)&v28, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42601980(v17, v23, 0LL);
      if ( (int)++v18 - 4 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B7076C(this, *(_QWORD *)&eventId);
  }
LABEL_29:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v25 = System_Int32__ToString((int32_t)&v30, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_44758168(KEY_PREFIX_SPOT_DATA, v25, 0LL);
  if ( !v17 )
    goto LABEL_31;
  v26 = (System_String_o *)this;
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                             v17,
                             v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v26, v27, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t totalRate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *customerAttractionRateLabel; // x21
  int64_t v6; // x8
  int64_t v7; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x22
  System_String_o *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+0h] [xbp-40h] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4353499 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5807/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/);
    byte_4353499 = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v6 = totalRate + 1000;
    v7 = (totalRate + 1000) / 100 % 10;
    v8 = this->fields.customerAttractionRateLabel;
    v9 = v6 / 1000;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5807/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0LL);
    v18 = v9;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v11);
    v17 = v7;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v13);
    v15 = System_String__Format_44753704(v10, v12, v14, 0LL);
    if ( !v8
      || (UILabel__set_text(v8, v15, 0LL), (v15 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_B7076C(v15, v16);
    }
    UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.customerAttractionRateMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerNumLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *customerNumLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *v7; // x22
  BalanceConfig_c *v8; // x8
  int64_t UserPointEventMax; // x23
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435349B & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_435349B = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v6 = this->fields.customerNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Min_45601544(point, UserPointEventMax, 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14, v10);
    v12 = System_String__Format(v7, v11, 0LL);
    if ( !v6 || (UILabel__set_text(v6, v12, 0LL), (v12 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_B7076C(v12, v13);
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.customerNumMaxWidth, 0LL);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v14; // x2
  struct EventUiEntity_o *v15; // x8
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  int v20; // w22
  int v21; // w9
  __int64 v22; // x23
  EventInfoAreaImprovementDrawComponent_o *v23; // x20
  const MethodInfo *v24; // x2
  struct EventUiEntity_o *v25; // x8
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  int size; // w8
  int32_t v28; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v30; // x1
  int Level; // w8
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  __int64 v34; // x0

  if ( (byte_4353495 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4353495 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B70630(
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
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v12);
    v15 = this->fields.eventUiEntity;
    if ( !v15 )
      goto LABEL_23;
    EventInfoAreaImprovementControl__LoadParkData(this, v15->fields.eventId, v14);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v16);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_23;
    max_length = drawComponentList->max_length;
    if ( max_length >= 1 )
    {
      v20 = 1;
      do
      {
        v21 = v20 - 1;
        if ( v20 - 1 >= drawComponentList->max_length )
        {
          v34 = sub_B70798(v10);
          sub_B70738(v34, 0LL);
        }
        v22 = v21;
        v23 = drawComponentList->m_Items[v21];
        if ( !v23 )
          break;
        v10 = EventInfoUIBase__SetSpriteByLocalAtlas(
                (EventInfoUIBase_o *)this,
                v23->fields.bgSprite,
                v23->fields.bgSpriteName,
                0LL);
        v25 = this->fields.eventUiEntity;
        if ( !v25 )
          break;
        v23->fields._EventId_k__BackingField = v25->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        size = baseSpotIdList->fields._size;
        if ( (int)v22 >= size )
        {
          v28 = 0;
        }
        else
        {
          if ( size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v28 = baseSpotIdList->fields._items->m_Items[v22 + 1];
        }
        v23->fields._SpotId_k__BackingField = v28;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, v28, v24);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v23->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v23, v30);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v23, v32);
        if ( v20 >= max_length )
          goto LABEL_24;
        drawComponentList = this->fields.drawComponentList;
        ++v20;
      }
      while ( drawComponentList );
LABEL_23:
      sub_B7076C(v10, v11);
    }
LABEL_24:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v17);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v33);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetupSlideComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoAreaImprovementControl_o *v3; // x19
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int max_length; // w21
  il2cpp_array_size_t v6; // w9
  char v7; // w23
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  __int64 v9; // x22
  int size; // w9
  EventInfoAreaImprovementSlideComponent_o *v11; // x20
  int32_t v12; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x0

  v3 = this;
  if ( (byte_4353496 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoAreaImprovementControl_o *)sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4353496 = 1;
  }
  slideComponentList = v3->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_23;
  max_length = slideComponentList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 >= slideComponentList->max_length )
      {
        v15 = sub_B70798(this);
        sub_B70738(v15, 0LL);
      }
      baseSpotIdList = v3->fields.baseSpotIdList;
      if ( !baseSpotIdList )
        break;
      v9 = (int)v6;
      size = baseSpotIdList->fields._size;
      v11 = slideComponentList->m_Items[v9];
      if ( (int)v9 >= size )
      {
        v12 = 0;
        if ( !v11 )
          break;
      }
      else
      {
        if ( size <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v12 = baseSpotIdList->fields._items->m_Items[v9 + 1];
        if ( !v11 )
          break;
      }
      v11->fields._SpotId_k__BackingField = v12;
      if ( (_DWORD)v9 )
      {
        if ( (v7 & 1) != 0 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v11, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
        }
      }
      if ( EventInfoAreaImprovementControl__GetSpotData(v3, v11->fields._SpotId_k__BackingField, v2) )
      {
        EventInfoAreaImprovementSlideComponent__SetupDisp(v11, v14);
        v7 = 1;
      }
      else
      {
        EventInfoAreaImprovementSlideComponent__SetupHidden(v11, v14);
        v7 = 0;
      }
      v6 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        return;
      slideComponentList = v3->fields.slideComponentList;
    }
    while ( slideComponentList );
LABEL_23:
    sub_B7076C(this, method);
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
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
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
    sub_B7076C(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B7076C(this, method);
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
  Il2CppObject *v1; // x19
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0

  if ( (byte_434F069 & 1) == 0 )
  {
    sub_B70694(&EventInfoAreaImprovementControl___c_TypeInfo);
    byte_434F069 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, a);
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
    sub_B7076C(_4__this, method);
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
  Il2CppObject *v2; // x19
  System_Action_o *monitor; // x22
  EventInfoAreaImprovementSlideComponent_o *klass; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_434F06A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_B70694(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__);
    byte_434F06A = 1;
  }
  monitor = (System_Action_o *)v2[3].monitor;
  klass = (EventInfoAreaImprovementSlideComponent_o *)v2[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v2,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v2[3].monitor = monitor;
    sub_B70630(&v2[3].monitor);
  }
  if ( !klass )
    sub_B7076C(this, method);
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
    sub_B7076C(this, v3);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v3,
    this->fields.targetIndexList,
    this->fields.callback,
    0LL);
}