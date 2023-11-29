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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FB6D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12939, v10);
    sub_B16FFC(&StringLiteral_12940, v11);
    byte_40FB6D8 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_12940;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_12940;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_12939;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_12939;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.KEY_PREFIX_PARK_DATA, v13, v14, v15, v16, v17, v18, v19);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotDataList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__AddSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  EventInfoAreaImprovementControl_SpotData_o *v9; // x22
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x0

  if ( (byte_40FB6D2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
      *(_QWORD *)&spotId);
    sub_B16FFC(&EventInfoAreaImprovementControl_SpotData_TypeInfo, v8);
    byte_40FB6D2 = 1;
  }
  v9 = (EventInfoAreaImprovementControl_SpotData_o *)sub_B170CC(
                                                       EventInfoAreaImprovementControl_SpotData_TypeInfo,
                                                       *(_QWORD *)&spotId,
                                                       *(_QWORD *)&level,
                                                       method,
                                                       v4);
  EventInfoAreaImprovementControl_SpotData___ctor(v9, 0LL);
  if ( !v9 || (v9->fields.SpotId = spotId, v9->fields.Level = level, (spotDataList = this->fields.spotDataList) == 0LL) )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
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

  if ( (byte_40FB6C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventPointMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FB6C7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = Master_WarQuestSelectionMaster;
  p_eventCooltimeRewardMaster = &this->fields.eventCooltimeRewardMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_eventCooltimeRewardMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  p_eventCooltimeRewardMaster[1] = (struct EventCooltimeRewardMaster_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 1), v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  p_eventCooltimeRewardMaster[2] = (struct EventCooltimeRewardMaster_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)(p_eventCooltimeRewardMaster + 2), v21, v22, v23, v24, v25, v26, v27);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x22
  signed __int64 size; // x23
  unsigned __int64 v14; // x21
  int32_t v15; // w22
  struct EventUiEntity_o *eventUiEntity; // x8
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0

  if ( (byte_40FB6D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40FB6D4 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_19;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v15 = baseSpotIdList->fields._items->m_Items[v14 + 1];
      if ( !EventInfoAreaImprovementControl__GetSpotData(this, v15, v11) )
      {
        eventUiEntity = this->fields.eventUiEntity;
        if ( !eventUiEntity )
          break;
        userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
        if ( !userEventCooltimeRewardMaster )
          break;
        MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                           userEventCooltimeRewardMaster,
                           eventUiEntity->fields.eventId,
                           v15,
                           0LL);
        if ( MaxLevelEntity && MaxLevelEntity->fields.lv >= 1 )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_int___Add(
            v10,
            v14,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return v10;
      baseSpotIdList = this->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_19:
    sub_B170D4();
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x23
  int size; // w22
  unsigned int v9; // w21
  EventInfoAreaImprovementControl_SpotData_o *v10; // x8
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v12; // x19

  if ( (byte_40FB6D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v6);
    byte_40FB6D1 = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  if ( v12->fields._size <= v9 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return v12->fields._items->m_Items[v9];
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
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+20h] [xbp-50h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40FB6D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_40FB6D7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    baseSpotIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0LL;
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_B170D4();
    current = v15.fields.current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v15.fields.current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_B170D4();
      if ( EventCooltimeRewardMaster__TryGetEntity(
             this->fields.eventCooltimeRewardMaster,
             &entity,
             eventId,
             current,
             MaxLevelEntity->fields.lv,
             0LL) )
      {
        if ( !entity )
          sub_B170D4();
        v9 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v15,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_40FB6CE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FB6CE = 1;
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


// local variable allocation has failed, the output may be wrong!
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
      sub_B17100(this, *(_QWORD *)&eventId, method);
      sub_B170A0();
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
  struct EventUiEntity_o *eventUiEntity; // x8
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
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
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x21
  struct UISprite_o *titleBgSprite; // x0
  struct UISprite_o *customerAttractionBgSprite; // x0
  struct UISprite_o *customerNumBgSprite; // x0

  if ( (byte_40FB6C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, v10);
    sub_B16FFC(&StringLiteral_18415, v11);
    byte_40FB6C8 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.eventUiEntity;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v21, v26, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_18415,
    0LL);
  titleBgSprite = this->fields.titleBgSprite;
  if ( !titleBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          titleBgSprite,
          titleBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerAttractionBgSprite,
          this->fields.customerAttractionBgName,
          0LL),
        (customerAttractionBgSprite = this->fields.customerAttractionBgSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))customerAttractionBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          customerAttractionBgSprite,
          customerAttractionBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerNumBgSprite,
          this->fields.customerNumBgName,
          0LL),
        (customerNumBgSprite = this->fields.customerNumBgSprite) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))customerNumBgSprite->klass->vtable._33_MakePixelPerfect.method)(
    customerNumBgSprite,
    customerNumBgSprite->klass->vtable._34_get_minWidth.methodPtr);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x20
  int32_t eventIda; // [xsp+Ch] [xbp-14h] BYREF

  eventIda = eventId;
  if ( (byte_40FB6D5 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FB6D5 = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v6 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v7 = System_String__Concat_43743732(KEY_PREFIX_PARK_DATA, v6, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1, 0LL);
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
  v15 = sub_B17014(char___TypeInfo, 1LL, v9);
  if ( !v15 )
    goto LABEL_13;
  v17 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_14;
  *(_WORD *)(v15 + 32) = 44;
  if ( !String || (v15 = (__int64)System_String__Split(String, (System_Char_array *)v15, 0LL)) == 0 )
LABEL_13:
    sub_B170D4();
  v18 = v15;
  if ( !*(_DWORD *)(v15 + 24)
    || (v15 = System_Int64__Parse(*(System_String_o **)(v15 + 32), 0LL),
        this->fields.customerNum = v15,
        *(_DWORD *)(v18 + 24) <= 1u) )
  {
LABEL_14:
    sub_B17100(v15, v17, v16);
    sub_B170A0();
  }
  this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v18 + 40), 0LL);
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
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *String; // x20
  __int64 v16; // x2
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  UserEventCooltimeRewardMaster_o *v20; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  __int64 v24; // x2
  System_String_array *v25; // x1
  System_String_array *v26; // x0
  __int64 v27; // x24
  System_String_array *v28; // x20
  il2cpp_array_size_t v29; // w25
  System_String_o *v30; // x21
  System_String_array *v31; // x21
  int32_t v32; // w22
  int32_t v33; // w0
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_40FB6D0 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FB6D0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  spotDataList = this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)spotDataList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
  KEY_PREFIX_SPOT_DATA = this->fields.KEY_PREFIX_SPOT_DATA;
  v13 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v14 = System_String__Concat_43743732(KEY_PREFIX_SPOT_DATA, v13, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v14, (System_String_o *)StringLiteral_1, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    v23 = sub_B17014(char___TypeInfo, 1LL, v16);
    if ( v23 )
    {
      v25 = (System_String_array *)v23;
      if ( !*(_DWORD *)(v23 + 24) )
      {
LABEL_29:
        sub_B17100(v23, v25, v24);
        sub_B170A0();
      }
      *(_WORD *)(v23 + 32) = 44;
      if ( String )
      {
        v26 = System_String__Split(String, (System_Char_array *)v23, 0LL);
        if ( v26 )
        {
          v27 = *(_QWORD *)&v26->max_length;
          v28 = v26;
          if ( (int)v27 < 1 )
            return;
          v29 = 0;
          while ( 1 )
          {
            v30 = v28->m_Items[v29];
            v23 = sub_B17014(char___TypeInfo, 1LL, v24);
            if ( !v23 )
              break;
            v25 = (System_String_array *)v23;
            if ( !*(_DWORD *)(v23 + 24) )
              goto LABEL_29;
            *(_WORD *)(v23 + 32) = 58;
            if ( !v30 )
              break;
            v23 = (__int64)System_String__Split(v30, (System_Char_array *)v23, 0LL);
            if ( !v23 )
              break;
            v31 = (System_String_array *)v23;
            if ( *(_DWORD *)(v23 + 24) )
            {
              v23 = System_Int32__Parse(*(System_String_o **)(v23 + 32), 0LL);
              if ( v31->max_length > 1 )
              {
                v32 = v23;
                v33 = System_Int32__Parse(v31->m_Items[1], 0LL);
                EventInfoAreaImprovementControl__AddSpotData(this, v32, v33, v34);
                if ( (int)++v29 >= (int)v27 )
                  return;
                if ( v29 < v28->max_length )
                  continue;
              }
            }
            goto LABEL_29;
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
  if ( !userEventCooltimeRewardMaster )
    goto LABEL_31;
  EntityListByEventId = UserEventCooltimeRewardMaster__GetEntityListByEventId(
                          userEventCooltimeRewardMaster,
                          eventIda,
                          0LL);
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_31;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    baseSpotIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v36,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v20 = this->fields.userEventCooltimeRewardMaster;
    if ( !v20 )
      sub_B170D4();
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(v20, eventIda, v36.fields.current, 0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(this, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v22);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v36,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
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
  const MethodInfo *v27; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v32; // x2
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v38; // x8
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x4
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FB6CB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B16FFC(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__, v12);
    sub_B16FFC(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, v13);
    byte_40FB6CB = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v14 = sub_B170CC(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, callback, method, v3, v4);
  EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass31_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v27);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v30);
  if ( !System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
          (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___) )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    AddedEffectTargetIndexList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_B170D4();
    if ( v49.fields.current >= drawComponentList->max_length )
    {
      sub_B17100(v33, v34, v35);
      sub_B170A0();
    }
    v38 = drawComponentList->m_Items[v49.fields.current];
    if ( !v38 )
      sub_B170D4();
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v38->fields._SpotId_k__BackingField,
      v38->fields._Level_k__BackingField,
      v36);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v32);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v39);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v40);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v41);
  UnityEngine_PlayerPrefs__Save(0LL);
  v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v46, v47);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x21
  int v41; // w8
  __int64 v42; // x23
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  __int64 v44; // x21
  System_Int32_array **v45; // x1
  __int64 v46; // x3
  __int64 v47; // x4
  struct EventInfoAreaImprovementSlideComponent_array *v48; // x8
  EventInfoAreaImprovementSlideComponent_o *v49; // x19
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x2

  if ( (byte_40FB6CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__, v11);
    sub_B16FFC(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, v12);
    byte_40FB6CC = 1;
  }
  v13 = sub_B170CC(
          EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo,
          *(_QWORD *)&index,
          targetIndexList,
          callback,
          method);
  EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
    (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_DWORD *)(v13 + 24) = index;
  *(_QWORD *)(v13 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 40) = targetIndexList;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)targetIndexList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v13 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)callback, v26, v27, v28, v29, v30, v31);
  v40 = *(_QWORD *)(v13 + 40);
  if ( !v40 )
    goto LABEL_15;
  v41 = *(_DWORD *)(v40 + 24);
  v42 = *(int *)(v13 + 24);
  if ( v41 > (int)v42 )
  {
    if ( v41 <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    slideComponentList = this->fields.slideComponentList;
    if ( slideComponentList )
    {
      v44 = *(int *)(*(_QWORD *)(v40 + 16) + 4 * v42 + 32);
      if ( (unsigned int)v44 >= slideComponentList->max_length )
        goto LABEL_16;
      v45 = (System_Int32_array **)slideComponentList->m_Items[v44];
      *(_QWORD *)(v13 + 16) = v45;
      sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), v45, v34, v35, v36, v37, v38, v39);
      v48 = this->fields.slideComponentList;
      if ( !v48 )
        goto LABEL_15;
      if ( (unsigned int)(v44 + 1) >= v48->max_length )
      {
LABEL_16:
        sub_B17100(v32, v33, v34);
        sub_B170A0();
      }
      v49 = v48->m_Items[(int)v44 + 1];
      v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v46, v47);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v13,
        Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
        0LL);
      if ( v49 )
      {
        EventInfoAreaImprovementSlideComponent__SlideDown(v49, v50, v51);
        return;
      }
    }
LABEL_15:
    sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40FB6D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_698, *(_QWORD *)&eventId);
    byte_40FB6D6 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_43746016(v4, (System_String_o *)StringLiteral_698, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43743732(KEY_PREFIX_PARK_DATA, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v17; // x0
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__40_0; // x21
  Il2CppObject *v20; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Text_StringBuilder_o *v28; // x20
  __int64 v29; // x21
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v30; // x26
  __int64 v31; // x8
  System_String_o *v32; // x0
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *v33; // x26
  __int64 v34; // x8
  System_String_o *v35; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x19
  System_String_o *v40; // x0
  int v41; // [xsp+4h] [xbp-4Ch] BYREF
  int v42; // [xsp+8h] [xbp-48h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF

  v43 = eventId;
  if ( (byte_40FB6D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v9);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__, v11);
    sub_B16FFC(&EventInfoAreaImprovementControl___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1223, v13);
    sub_B16FFC(&StringLiteral_698, v14);
    byte_40FB6D3 = 1;
  }
  v41 = 0;
  v42 = 0;
  spotDataList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_31;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v17 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( (BYTE3(EventInfoAreaImprovementControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v17 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                                                             *(_QWORD *)&eventId,
                                                                             method,
                                                                             v3,
                                                                             v4);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__40_0,
        v20,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventInfoAreaImprovementControl_SpotData___ctor__);
      v21 = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      v21->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v21->__9__40_0,
        (System_Int32_array **)_9__40_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      spotDataList,
      (System_Comparison_T__o *)_9__40_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v28 = (System_Text_StringBuilder_o *)sub_B170CC(
                                         System_Text_StringBuilder_TypeInfo,
                                         *(_QWORD *)&eventId,
                                         method,
                                         v3,
                                         v4);
  System_Text_StringBuilder___ctor(v28, 0LL);
  if ( size >= 1 )
  {
    v29 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v29 != 4 )
      {
        if ( !v28 )
          break;
        System_Text_StringBuilder__Append_41914240(v28, (System_String_o *)StringLiteral_698, 0LL);
      }
      v30 = this->fields.spotDataList;
      if ( !v30 )
        break;
      if ( v30->fields._size <= (unsigned int)(v29 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v31 = *((_QWORD *)&v30->fields._items->obj.klass + v29);
      if ( !v31 )
        break;
      v42 = *(_DWORD *)(v31 + 16);
      v32 = System_Int32__ToString((int32_t)&v42, 0LL);
      if ( !v28 )
        break;
      System_Text_StringBuilder__Append_41914240(v28, v32, 0LL);
      System_Text_StringBuilder__Append_41914240(v28, (System_String_o *)StringLiteral_1223, 0LL);
      v33 = this->fields.spotDataList;
      if ( !v33 )
        break;
      if ( v33->fields._size <= (unsigned int)(v29 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v34 = *((_QWORD *)&v33->fields._items->obj.klass + v29);
      if ( !v34 )
        break;
      v41 = *(_DWORD *)(v34 + 20);
      v35 = System_Int32__ToString((int32_t)&v41, 0LL);
      System_Text_StringBuilder__Append_41914240(v28, v35, 0LL);
      if ( (int)++v29 - 4 >= size )
        goto LABEL_29;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_29:
  KEY_PREFIX_SPOT_DATA = this->fields.KEY_PREFIX_SPOT_DATA;
  v37 = System_Int32__ToString((int32_t)&v43, 0LL);
  v38 = System_String__Concat_43743732(KEY_PREFIX_SPOT_DATA, v37, 0LL);
  if ( !v28 )
    goto LABEL_31;
  v39 = v38;
  v40 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v28->klass->vtable._3_ToString.method)(
                             v28,
                             v28->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v39, v40, 0LL);
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
  UILabel_o *v17; // x0
  int64_t v18; // [xsp+0h] [xbp-40h] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB6CD & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, totalRate);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5700, v7);
    byte_40FB6CD = 1;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5700, 0LL);
    v19 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
    v18 = v10;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format_43739268(v13, v14, v15, 0LL);
    if ( !v11 || (UILabel__set_text(v11, v16, 0LL), (v17 = this->fields.customerAttractionRateLabel) == 0LL) )
      sub_B170D4();
    UILabel__SetCondensedScale(v17, this->fields.customerAttractionRateMaxWidth, 0LL);
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
  UILabel_o *v17; // x0
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB6CF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, point);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5635, v9);
    byte_40FB6CF = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
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
    v18 = System_Math__Min_44464240(point, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 || (UILabel__set_text(v11, v16, 0LL), (v17 = this->fields.customerNumLabel) == 0LL) )
      sub_B170D4();
    UILabel__SetCondensedScale(v17, this->fields.customerNumMaxWidth, 0LL);
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
  const MethodInfo *v11; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v13; // x2
  struct EventUiEntity_o *v14; // x8
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  int v21; // w22
  int v22; // w9
  __int64 v23; // x23
  EventInfoAreaImprovementDrawComponent_o *v24; // x20
  const MethodInfo *v25; // x2
  struct EventUiEntity_o *v26; // x8
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x24
  int size; // w8
  int32_t v29; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v31; // x1
  int Level; // w8
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_40FB6C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, entitys);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    byte_40FB6C9 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B16F98(
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
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v11);
    v14 = this->fields.eventUiEntity;
    if ( !v14 )
      goto LABEL_23;
    EventInfoAreaImprovementControl__LoadParkData(this, v14->fields.eventId, v13);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v15);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_23;
    max_length = drawComponentList->max_length;
    if ( max_length >= 1 )
    {
      v21 = 1;
      do
      {
        v22 = v21 - 1;
        if ( v21 - 1 >= drawComponentList->max_length )
        {
          sub_B17100(v16, v17, v18);
          sub_B170A0();
        }
        v23 = v22;
        v24 = drawComponentList->m_Items[v22];
        if ( !v24 )
          break;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          v24->fields.bgSprite,
          v24->fields.bgSpriteName,
          0LL);
        v26 = this->fields.eventUiEntity;
        if ( !v26 )
          break;
        v24->fields._EventId_k__BackingField = v26->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        size = baseSpotIdList->fields._size;
        if ( (int)v23 >= size )
        {
          v29 = 0;
        }
        else
        {
          if ( size <= (unsigned int)v23 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v29 = baseSpotIdList->fields._items->m_Items[v23 + 1];
        }
        v24->fields._SpotId_k__BackingField = v29;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, v29, v25);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v24->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v24, v31);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v24, v33);
        if ( v21 >= max_length )
          goto LABEL_24;
        drawComponentList = this->fields.drawComponentList;
        ++v21;
      }
      while ( drawComponentList );
LABEL_23:
      sub_B170D4();
    }
LABEL_24:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v18);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v34);
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

  v3 = this;
  if ( (byte_40FB6CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (EventInfoAreaImprovementControl_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    byte_40FB6CA = 1;
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
        sub_B17100(this, method, v2);
        sub_B170A0();
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  }
}


void __fastcall EventInfoAreaImprovementControl__UpdateDrawComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  EventInfoAreaImprovementControl_o *v5; // x19
  il2cpp_array_size_t v6; // w22
  EventInfoAreaImprovementDrawComponent_o *v7; // x20
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t Level_k__BackingField; // w24
  int32_t playType; // w23
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  drawComponentList = this->fields.drawComponentList;
  if ( !drawComponentList )
    goto LABEL_15;
  max_length = drawComponentList->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= drawComponentList->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = drawComponentList->m_Items[v6];
      if ( !v7 )
        break;
      userEventCooltimeRewardMaster = v5->fields.userEventCooltimeRewardMaster;
      if ( !userEventCooltimeRewardMaster )
        break;
      Level_k__BackingField = v7->fields._Level_k__BackingField;
      this = (EventInfoAreaImprovementControl_o *)UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                                                    userEventCooltimeRewardMaster,
                                                    v7->fields._EventId_k__BackingField,
                                                    v7->fields._SpotId_k__BackingField,
                                                    0LL);
      if ( this )
        playType = this->fields.playType;
      else
        playType = 0;
      if ( Level_k__BackingField != playType )
      {
        v7->fields._Level_k__BackingField = playType;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v7, method);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v7, v11);
        this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetSpotData(
                                                      v5,
                                                      v7->fields._SpotId_k__BackingField,
                                                      v12);
        if ( this )
          *((_DWORD *)&this->fields.UnityEngine_MonoBehaviour_Fields + 1) = playType;
      }
      if ( (int)++v6 >= max_length )
        return;
      drawComponentList = v5->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
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

  if ( (byte_40F6FB7 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoAreaImprovementControl___c_TypeInfo, v1);
    byte_40F6FB7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoAreaImprovementControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct EventInfoAreaImprovementControl_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoAreaImprovementControl__SetCustomerNumLabel(_4__this, _4__this->fields.customerNum, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(v4, v4->fields.customerAttractionRate, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  EventInfoAreaImprovementSlideComponent_o *slideComponent; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F6FB8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__, v6);
    byte_40F6FB8 = 1;
  }
  _9__1 = this->fields.__9__1;
  slideComponent = this->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !slideComponent )
    sub_B170D4();
  EventInfoAreaImprovementSlideComponent__SlideIn(slideComponent, _9__1, 0LL);
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
    sub_B170D4();
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v3,
    this->fields.targetIndexList,
    this->fields.callback,
    0LL);
}