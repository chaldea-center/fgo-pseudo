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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4216204 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_13039/*"SpotCooltime_ParkData_"*/, v10);
    sub_B0D8A4(&StringLiteral_13040/*"SpotCooltime_SpotData_"*/, v11);
    byte_4216204 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_13040/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13040/*"SpotCooltime_SpotData_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_13039/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13039/*"SpotCooltime_ParkData_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_PARK_DATA, v13, v14, v15, v16, v17, v18, v19);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.spotDataList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__AddSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v7; // x1
  EventInfoAreaImprovementControl_SpotData_o *v8; // x22
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x0

  if ( (byte_42161FE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
      *(_QWORD *)&spotId);
    sub_B0D8A4(&EventInfoAreaImprovementControl_SpotData_TypeInfo, v7);
    byte_42161FE = 1;
  }
  v8 = (EventInfoAreaImprovementControl_SpotData_o *)sub_B0D974(
                                                       EventInfoAreaImprovementControl_SpotData_TypeInfo,
                                                       *(_QWORD *)&spotId,
                                                       *(_QWORD *)&level);
  EventInfoAreaImprovementControl_SpotData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.SpotId = spotId, v8->fields.Level = level, (spotDataList = this->fields.spotDataList) == 0LL) )
    sub_B0D97C(spotDataList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventCooltimeRewardMaster_o **p_eventCooltimeRewardMaster; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42161F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventPointMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_42161F3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = Master_WarQuestSelectionMaster;
  p_eventCooltimeRewardMaster = &this->fields.eventCooltimeRewardMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_eventCooltimeRewardMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  p_eventCooltimeRewardMaster[1] = (struct EventCooltimeRewardMaster_o *)v14;
  sub_B0D840((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 1), v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  p_eventCooltimeRewardMaster[2] = (struct EventCooltimeRewardMaster_o *)v21;
  sub_B0D840((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 2), v21, v22, v23, v24, v25, v26, v27);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  UserEventCooltimeRewardMaster_o *SpotData; // x0
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x22
  signed __int64 size; // x23
  unsigned __int64 v13; // x21
  int32_t v14; // w22
  struct EventUiEntity_o *eventUiEntity; // x8

  if ( (byte_4216200 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4216200 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_19;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v14 = baseSpotIdList->fields._items->m_Items[v13 + 1];
      SpotData = (UserEventCooltimeRewardMaster_o *)EventInfoAreaImprovementControl__GetSpotData(this, v14, v10);
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
                                                        v14,
                                                        0LL);
        if ( SpotData && SLODWORD(SpotData->fields.list) >= 1 )
        {
          if ( !v8 )
            break;
          System_Collections_Generic_List_int___Add(
            v8,
            v13,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v13 >= size )
        return v8;
      baseSpotIdList = this->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_19:
    sub_B0D97C(SpotData);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v7; // x0
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x23
  int size; // w22
  unsigned int v10; // w21
  EventInfoAreaImprovementControl_SpotData_o *v11; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v13; // x19

  if ( (byte_42161FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v6);
    byte_42161FD = 1;
  }
  v7 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
  if ( !v7 )
    return 0LL;
  spotDataList = this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_19;
  size = spotDataList->fields._size;
  if ( size < 1 )
    return 0LL;
  v10 = 0;
  while ( 1 )
  {
    if ( spotDataList->fields._size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v11 = spotDataList->fields._items->m_Items[v10];
    if ( !v11 )
      goto LABEL_19;
    if ( v11->fields.SpotId == spotId )
      break;
    if ( (int)++v10 >= size )
      return 0LL;
    spotDataList = this->fields.spotDataList;
    if ( !spotDataList )
      goto LABEL_19;
  }
  v13 = this->fields.spotDataList;
  if ( !v13 )
LABEL_19:
    sub_B0D97C(v7);
  if ( v13->fields._size <= v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return v13->fields._items->m_Items[v10];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v9; // x19
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-50h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4216203 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4216203 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    baseSpotIdList,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0LL;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B0D97C(0LL);
    current = v16.fields.current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v16.fields.current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_B0D97C(MaxLevelEntity);
      v13 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v13 )
      {
        if ( !entity )
          sub_B0D97C(v13);
        v9 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_42161FA & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_42161FA = 1;
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
      v13 = sub_B0D9A8(this);
      sub_B0D948(v13, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventUiEntity_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21

  if ( (byte_42161F4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, v10);
    sub_B0D8A4(&StringLiteral_18541/*"event_bg_80384"*/, v11);
    byte_42161F4 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.eventUiEntity;
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v21, v24, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_18541/*"event_bg_80384"*/,
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
    sub_B0D97C(eventCooltimeRewardMaster);
  }
  ((void (__fastcall *)(EventCooltimeRewardMaster_o *, Il2CppMethodPointer))eventCooltimeRewardMaster->klass[1].vtable._5_ForForceDerived.method)(
    eventCooltimeRewardMaster,
    eventCooltimeRewardMaster->klass[1].vtable._6_preProcess.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__LoadParkData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *KEY_PREFIX_PARK_DATA; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *String; // x20
  const MethodInfo *v9; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x0
  __int64 v16; // x20
  __int64 v17; // x0
  int32_t eventIda; // [xsp+Ch] [xbp-14h] BYREF

  eventIda = eventId;
  if ( (byte_4216201 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4216201 = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v6 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v7 = System_String__Concat_43849904(KEY_PREFIX_PARK_DATA, v6, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventIda, v9);
    this->fields.customerNum = UserEventTotalPoint;
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v11);
    TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventIda, v12);
    this->fields.customerAttractionRate = TotalCustomerAttractionRate;
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v14);
    return;
  }
  v15 = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v15 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_14;
  *(_WORD *)(v15 + 32) = 44;
  if ( !String || (v15 = (__int64)System_String__Split(String, (System_Char_array *)v15, 0LL)) == 0 )
LABEL_13:
    sub_B0D97C(v15);
  v16 = v15;
  if ( !*(_DWORD *)(v15 + 24)
    || (v15 = System_Int64__Parse(*(System_String_o **)(v15 + 32), 0LL),
        this->fields.customerNum = v15,
        *(_DWORD *)(v16 + 24) <= 1u) )
  {
LABEL_14:
    v17 = sub_B0D9A8(v15);
    sub_B0D948(v17, 0LL);
  }
  this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v16 + 40), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__LoadSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 spotDataList; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x24
  __int64 v21; // x20
  unsigned int v22; // w25
  System_String_o *v23; // x21
  __int64 v24; // x21
  int32_t v25; // w22
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42161FC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_42161FC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  spotDataList = (__int64)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotDataList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
  KEY_PREFIX_SPOT_DATA = this->fields.KEY_PREFIX_SPOT_DATA;
  v13 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v14 = System_String__Concat_43849904(KEY_PREFIX_SPOT_DATA, v13, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    spotDataList = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( spotDataList )
    {
      if ( !*(_DWORD *)(spotDataList + 24) )
      {
LABEL_29:
        v28 = sub_B0D9A8(spotDataList);
        sub_B0D948(v28, 0LL);
      }
      *(_WORD *)(spotDataList + 32) = 44;
      if ( String )
      {
        spotDataList = (__int64)System_String__Split(String, (System_Char_array *)spotDataList, 0LL);
        if ( spotDataList )
        {
          v20 = *(_QWORD *)(spotDataList + 24);
          v21 = spotDataList;
          if ( (int)v20 < 1 )
            return;
          v22 = 0;
          while ( 1 )
          {
            v23 = *(System_String_o **)(v21 + 8LL * (int)v22 + 32);
            spotDataList = sub_B0D8BC(char___TypeInfo, 1LL);
            if ( !spotDataList )
              break;
            if ( !*(_DWORD *)(spotDataList + 24) )
              goto LABEL_29;
            *(_WORD *)(spotDataList + 32) = 58;
            if ( !v23 )
              break;
            spotDataList = (__int64)System_String__Split(v23, (System_Char_array *)spotDataList, 0LL);
            if ( !spotDataList )
              break;
            v24 = spotDataList;
            if ( *(_DWORD *)(spotDataList + 24) )
            {
              spotDataList = System_Int32__Parse(*(System_String_o **)(spotDataList + 32), 0LL);
              if ( *(_DWORD *)(v24 + 24) > 1u )
              {
                v25 = spotDataList;
                v26 = System_Int32__Parse(*(System_String_o **)(v24 + 40), 0LL);
                EventInfoAreaImprovementControl__AddSpotData(this, v25, v26, v27);
                if ( (int)++v22 >= (int)v20 )
                  return;
                if ( v22 < *(_DWORD *)(v21 + 24) )
                  continue;
              }
            }
            goto LABEL_29;
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(spotDataList);
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
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  spotDataList = (__int64)this->fields.baseSpotIdList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_int__o *)spotDataList,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B0D97C(0LL);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v30.fields.current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(this, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v19);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  _BOOL8 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v31; // x2
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v35; // x8
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x22
  const MethodInfo *v42; // x4
  __int64 v43; // x0
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42161F7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_int___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B0D8A4(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__, v10);
    sub_B0D8A4(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, v11);
    byte_42161F7 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v12 = sub_B0D974(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, callback, method);
  EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass31_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v26);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v29);
  v13 = System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
          (const MethodInfo_171921C *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v13 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_B0D97C(v13);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    AddedEffectTargetIndexList,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v45,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v32 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_B0D97C(v32);
    if ( v45.fields.current >= drawComponentList->max_length )
    {
      v43 = sub_B0D9A8(v32);
      sub_B0D948(v43, 0LL);
    }
    v35 = drawComponentList->m_Items[v45.fields.current];
    if ( !v35 )
      sub_B0D97C(v32);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v35->fields._SpotId_k__BackingField,
      v35->fields._Level_k__BackingField,
      v33);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v45,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v31);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v36);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v37);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v38);
  UnityEngine_PlayerPrefs__Save(0LL);
  v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v12,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v41, v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
        EventInfoAreaImprovementControl_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o *targetIndexList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x21
  int v40; // w8
  __int64 v41; // x23
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  __int64 v43; // x21
  System_Int32_array **v44; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  struct EventInfoAreaImprovementSlideComponent_array *v47; // x8
  EventInfoAreaImprovementSlideComponent_o *v48; // x19
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x2
  __int64 v51; // x0

  if ( (byte_42161F8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B0D8A4(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__, v11);
    sub_B0D8A4(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, v12);
    byte_42161F8 = 1;
  }
  v13 = sub_B0D974(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, *(_QWORD *)&index, targetIndexList);
  EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_DWORD *)(v13 + 24) = index;
  *(_QWORD *)(v13 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 40) = targetIndexList;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)targetIndexList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v13 + 48) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  v39 = *(_QWORD *)(v13 + 40);
  if ( !v39 )
    goto LABEL_15;
  v40 = *(_DWORD *)(v39 + 24);
  v41 = *(int *)(v13 + 24);
  if ( v40 > (int)v41 )
  {
    if ( v40 <= (unsigned int)v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    slideComponentList = this->fields.slideComponentList;
    if ( slideComponentList )
    {
      v43 = *(int *)(*(_QWORD *)(v39 + 16) + 4 * v41 + 32);
      if ( (unsigned int)v43 >= slideComponentList->max_length )
        goto LABEL_16;
      v44 = (System_Int32_array **)slideComponentList->m_Items[v43];
      *(_QWORD *)(v13 + 16) = v44;
      sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), v44, v33, v34, v35, v36, v37, v38);
      v47 = this->fields.slideComponentList;
      if ( !v47 )
        goto LABEL_15;
      if ( (unsigned int)(v43 + 1) >= v47->max_length )
      {
LABEL_16:
        v51 = sub_B0D9A8(v14);
        sub_B0D948(v51, 0LL);
      }
      v48 = v47->m_Items[(int)v43 + 1];
      v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v13,
        Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
        0LL);
      if ( v48 )
      {
        EventInfoAreaImprovementSlideComponent__SlideDown(v48, v49, v50);
        return;
      }
    }
LABEL_15:
    sub_B0D97C(v14);
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
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
    sub_B0D97C(this);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4216202 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_705/*","*/, *(_QWORD *)&eventId);
    byte_4216202 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_43852188(v4, (System_String_o *)StringLiteral_705/*","*/, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43849904(KEY_PREFIX_PARK_DATA, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v15; // x0
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_0; // x21
  Il2CppObject *v18; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Text_StringBuilder_o *v26; // x20
  __int64 v27; // x21
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v28; // x26
  __int64 v29; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v30; // x26
  __int64 v31; // x8
  System_String_o *v32; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x19
  System_String_o *v36; // x0
  int v37; // [xsp+4h] [xbp-4Ch] BYREF
  int v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v39 = eventId;
  if ( (byte_42161FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v7);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v8);
    sub_B0D8A4(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__, v9);
    sub_B0D8A4(&EventInfoAreaImprovementControl___c_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v11);
    this = (EventInfoAreaImprovementControl_o *)sub_B0D8A4(&StringLiteral_705/*","*/, v12);
    byte_42161FF = 1;
  }
  v37 = 0;
  v38 = 0;
  spotDataList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v15 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( (BYTE3(EventInfoAreaImprovementControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v15 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                             System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                                                             *(_QWORD *)&eventId,
                                                                             method);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__40_0,
        v18,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__);
      v19 = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      v19->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v19->__9__40_0,
        (System_Int32_array **)_9__40_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      spotDataList,
      (System_Comparison_T__o *)_9__40_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v26 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v26, 0LL);
  if ( size >= 1 )
  {
    v27 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v27 != 4 )
      {
        if ( !v26 )
          break;
        this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42155400(
                                                      v26,
                                                      (System_String_o *)StringLiteral_705/*","*/,
                                                      0LL);
      }
      v28 = v3->fields.spotDataList;
      if ( !v28 )
        break;
      if ( v28->fields._size <= (unsigned int)(v27 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v29 = *((_QWORD *)&v28->fields._items->obj.klass + v27);
      if ( !v29 )
        break;
      v38 = *(_DWORD *)(v29 + 16);
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&v38, 0LL);
      if ( !v26 )
        break;
      System_Text_StringBuilder__Append_42155400(v26, (System_String_o *)this, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42155400(
                                                    v26,
                                                    (System_String_o *)StringLiteral_1232/*":"*/,
                                                    0LL);
      v30 = v3->fields.spotDataList;
      if ( !v30 )
        break;
      if ( v30->fields._size <= (unsigned int)(v27 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v31 = *((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !v31 )
        break;
      v37 = *(_DWORD *)(v31 + 20);
      v32 = System_Int32__ToString((int32_t)&v37, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_42155400(v26, v32, 0LL);
      if ( (int)++v27 - 4 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B0D97C(this);
  }
LABEL_29:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v34 = System_Int32__ToString((int32_t)&v39, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_43849904(KEY_PREFIX_SPOT_DATA, v34, 0LL);
  if ( !v26 )
    goto LABEL_31;
  v35 = (System_String_o *)this;
  v36 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v26->klass->vtable._3_ToString.method)(
                             v26,
                             v26->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v35, v36, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t totalRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *customerAttractionRateLabel; // x21
  int64_t v9; // x8
  int64_t v10; // x23
  UILabel_o *v11; // x20
  __int64 v12; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int64_t v17; // [xsp+0h] [xbp-40h] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42161F9 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, totalRate);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5734/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, v7);
    byte_42161F9 = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v9 = totalRate + 1000;
    v10 = (totalRate + 1000) / 100 % 10;
    v11 = this->fields.customerAttractionRateLabel;
    v12 = v9 / 1000;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5734/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0LL);
    v18 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v17 = v10;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v16 = System_String__Format_43845440(v13, v14, v15, 0LL);
    if ( !v11
      || (UILabel__set_text(v11, v16, 0LL), (v16 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_B0D97C(v16);
    }
    UILabel__SetCondensedScale((UILabel_o *)v16, this->fields.customerAttractionRateMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerNumLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *customerNumLabel; // x21
  UILabel_o *v11; // x21
  System_String_o *v12; // x22
  BalanceConfig_c *v13; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42161FB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, point);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_42161FB = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v11 = this->fields.customerNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Min_44560000(point, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 || (UILabel__set_text(v11, v16, 0LL), (v16 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_B0D97C(v16);
    UILabel__SetCondensedScale((UILabel_o *)v16, this->fields.customerNumMaxWidth, 0LL);
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
  __int64 v10; // x1
  _BOOL8 v11; // x0
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

  if ( (byte_42161F5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, entitys);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    byte_42161F5 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B0D840(
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
          v34 = sub_B0D9A8(v11);
          sub_B0D948(v34, 0LL);
        }
        v22 = v21;
        v23 = drawComponentList->m_Items[v21];
        if ( !v23 )
          break;
        v11 = EventInfoUIBase__SetSpriteByLocalAtlas(
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      sub_B0D97C(v11);
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
  __int64 v4; // x1
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int max_length; // w21
  il2cpp_array_size_t v7; // w9
  char v8; // w23
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  __int64 v10; // x22
  int size; // w9
  EventInfoAreaImprovementSlideComponent_o *v12; // x20
  int32_t v13; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x0

  v3 = this;
  if ( (byte_42161F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (EventInfoAreaImprovementControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    byte_42161F6 = 1;
  }
  slideComponentList = v3->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_23;
  max_length = slideComponentList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= slideComponentList->max_length )
      {
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      baseSpotIdList = v3->fields.baseSpotIdList;
      if ( !baseSpotIdList )
        break;
      v10 = (int)v7;
      size = baseSpotIdList->fields._size;
      v12 = slideComponentList->m_Items[v10];
      if ( (int)v10 >= size )
      {
        v13 = 0;
        if ( !v12 )
          break;
      }
      else
      {
        if ( size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v13 = baseSpotIdList->fields._items->m_Items[v10 + 1];
        if ( !v12 )
          break;
      }
      v12->fields._SpotId_k__BackingField = v13;
      if ( (_DWORD)v10 )
      {
        if ( (v8 & 1) != 0 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v12, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
        }
      }
      if ( EventInfoAreaImprovementControl__GetSpotData(v3, v12->fields._SpotId_k__BackingField, v2) )
      {
        EventInfoAreaImprovementSlideComponent__SetupDisp(v12, v15);
        v8 = 1;
      }
      else
      {
        EventInfoAreaImprovementSlideComponent__SetupHidden(v12, v15);
        v8 = 0;
      }
      v7 = v10 + 1;
      if ( (int)v10 + 1 >= max_length )
        return;
      slideComponentList = v3->fields.slideComponentList;
    }
    while ( slideComponentList );
LABEL_23:
    sub_B0D97C(this);
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
  const MethodInfo *v8; // x1
  int32_t playType; // w23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x0

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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
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
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v6, v8);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v6, v10);
        this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetSpotData(
                                                      v4,
                                                      v6->fields._SpotId_k__BackingField,
                                                      v11);
        if ( this )
          *((_DWORD *)&this->fields.UnityEngine_MonoBehaviour_Fields + 1) = playType;
      }
      if ( (int)++v5 >= max_length )
        return;
      drawComponentList = v4->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_B0D97C(this);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B49 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoAreaImprovementControl___c_TypeInfo, v1);
    byte_4211B49 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoAreaImprovementControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *monitor; // x22
  EventInfoAreaImprovementSlideComponent_o *klass; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B4A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_B0D8A4(
                                                                        &Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
                                                                        v4);
    byte_4211B4A = 1;
  }
  monitor = (System_Action_o *)v3[3].monitor;
  klass = (EventInfoAreaImprovementSlideComponent_o *)v3[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      monitor,
      v3,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v3[3].monitor = monitor;
    sub_B0D840(&v3[3].monitor, monitor);
  }
  if ( !klass )
    sub_B0D97C(this);
  EventInfoAreaImprovementSlideComponent__SlideIn(klass, monitor, 0LL);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__1(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *_4__this; // x8
  int32_t v3; // w1

  _4__this = this->fields.__4__this;
  v3 = this->fields.index + 1;
  this->fields.index = v3;
  if ( !_4__this )
    sub_B0D97C(this);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v3,
    this->fields.targetIndexList,
    this->fields.callback,
    0LL);
}