void EventInfoAreaImprovementControl___ctor(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC7777 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1C713B0(&StringLiteral_13011/*"SpotCooltime_ParkData_"*/);
    sub_1C713B0(&StringLiteral_13012/*"SpotCooltime_SpotData_"*/);
    byte_4CC7777 = 1;
  }
  v9 = StringLiteral_13012/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13012/*"SpotCooltime_SpotData_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_13011/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13011/*"SpotCooltime_ParkData_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.KEY_PREFIX_PARK_DATA, v10, v11, v12, v13, v14, v15, v16);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.spotDataList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoAreaImprovementControl__AddSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *spotDataList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4CC7771 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
    sub_1C713B0(&EventInfoAreaImprovementControl_SpotData_TypeInfo);
    byte_4CC7771 = 1;
  }
  v7 = sub_1C715FC(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = spotId,
        *(_DWORD *)(v7 + 20) = level,
        (spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList) == 0)
    || (items = spotDataList->fields._items,
        v17 = Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
        ++spotDataList->fields._version,
        !items) )
  {
    sub_1C71608(spotDataList, v9);
  }
  size = spotDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotDataList,
      (Il2CppObject *)v7,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    spotDataList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), v7, v10, v11, v12, v13, v14, v15);
  }
}


void EventInfoAreaImprovementControl__Awake(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC7766 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7766 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = (struct EventCooltimeRewardMaster_o *)Master_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCooltimeRewardMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  this->fields.userEventCooltimeRewardMaster = (struct UserEventCooltimeRewardMaster_o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userEventCooltimeRewardMaster,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v17;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


System_Collections_Generic_List_int__o *EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int size; // w8
  int v7; // w23
  int32_t v8; // w21
  int32_t Item; // w22
  const MethodInfo *v10; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10

  if ( (byte_4CC7773 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC7773 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_20;
  size = baseSpotIdList->fields._size;
  v7 = size - 1;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v8,
               (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      baseSpotIdList = (System_Collections_Generic_List_int__o *)EventInfoAreaImprovementControl__GetSpotData(
                                                                   this,
                                                                   Item,
                                                                   v10);
      if ( !baseSpotIdList )
      {
        eventUiEntity = this->fields.eventUiEntity;
        if ( !eventUiEntity )
          break;
        baseSpotIdList = (System_Collections_Generic_List_int__o *)this->fields.userEventCooltimeRewardMaster;
        if ( !baseSpotIdList )
          break;
        baseSpotIdList = (System_Collections_Generic_List_int__o *)UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                                                                     (UserEventCooltimeRewardMaster_o *)baseSpotIdList,
                                                                     eventUiEntity->fields.eventId,
                                                                     Item,
                                                                     0);
        if ( baseSpotIdList && SLODWORD(baseSpotIdList->fields._syncRoot) >= 1 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v14 = v3->fields._size;
          if ( (unsigned int)v14 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v14 + 1;
            items->m_Items[v14] = v8;
          }
        }
      }
      if ( v7 == v8 )
        return v3;
      baseSpotIdList = this->fields.baseSpotIdList;
      ++v8;
    }
    while ( baseSpotIdList );
LABEL_20:
    sub_1C71608(baseSpotIdList, v4);
  }
  return v3;
}


EventInfoAreaImprovementControl_SpotData_o *EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *spotDataList; // x0
  int size; // w8
  int v8; // w23
  int32_t v9; // w21

  if ( (byte_4CC7770 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    byte_4CC7770 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
    return 0;
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_15;
  size = spotDataList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    spotDataList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  spotDataList,
                                                                  v9,
                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    if ( !spotDataList )
      goto LABEL_15;
    if ( LODWORD(spotDataList->fields._items) == spotId )
      break;
    if ( v8 == v9 )
      return 0;
    spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
    ++v9;
    if ( !spotDataList )
      goto LABEL_15;
  }
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
LABEL_15:
    sub_1C71608(spotDataList, v5);
  return (EventInfoAreaImprovementControl_SpotData_o *)System_Collections_Generic_List_object___get_Item(
                                                         spotDataList,
                                                         v9,
                                                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v6; // x19
  __int64 v7; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-60h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4CC7776 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4CC7776 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  entity = 0;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_1C71608(0, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    baseSpotIdList,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v6 = 0;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C71608(0, v7);
    current = v16.fields._current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v16.fields._current,
                       0);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_1C71608(MaxLevelEntity, v11);
      v12 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0);
      if ( v12 )
      {
        if ( !entity )
          sub_1C71608(v12, v13);
        v6 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6;
}


int64_t EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4CC776D & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC776D = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


int64_t EventInfoAreaImprovementControl__GetUserEventTotalPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventUiValueEntity_array *eventUiValueEntityList; // x22
  il2cpp_array_size_t max_length; // x8
  EventInfoAreaImprovementControl_o *v5; // x19
  unsigned __int64 v7; // x23
  int64_t v8; // x21
  EventUiValueEntity_o *v9; // x9
  int32_t v10; // w0
  const MethodInfo *v11; // x3

  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    return 0;
  max_length = eventUiValueEntityList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = this;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v7 >= (unsigned int)max_length )
      sub_1C71610(this);
    v9 = eventUiValueEntityList->m_Items[v7];
    if ( v9 && v9->fields.type == 2 )
    {
      v10 = System_Int32__Parse(v9->fields.value, 0);
      this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetUserEventPoint(
                                                    v5,
                                                    eventId,
                                                    v10,
                                                    v11);
      LODWORD(max_length) = eventUiValueEntityList->max_length;
      v8 += (int64_t)this;
    }
    ++v7;
  }
  while ( (__int64)v7 < (int)max_length );
  return v8;
}


void EventInfoAreaImprovementControl__Initialization(
        EventInfoAreaImprovementControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v11; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  EventUiEntity_o *v20; // x20
  System_Action_o *v21; // x21

  if ( (byte_4CC7767 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__);
    sub_1C713B0(&StringLiteral_19221/*"event_bg_80384"*/);
    byte_4CC7767 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (int32_t)method,
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
                          0);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSpotIdList,
    (int32_t)SpotIdListByEventId,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v20, v21, 0);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_19221/*"event_bg_80384"*/,
    0);
  eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.titleBgSprite;
  if ( !eventCooltimeRewardMaster
    || ((*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.element_size)(
          eventCooltimeRewardMaster,
          *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.static_fields_size),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerAttractionBgSprite,
          this->fields.customerAttractionBgName,
          0),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerAttractionBgSprite) == 0)
    || ((*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.element_size)(
          eventCooltimeRewardMaster,
          *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.static_fields_size),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerNumBgSprite,
          this->fields.customerNumBgName,
          0),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerNumBgSprite) == 0) )
  {
LABEL_9:
    sub_1C71608(eventCooltimeRewardMaster, v11);
  }
  (*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.element_size)(
    eventCooltimeRewardMaster,
    *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.static_fields_size);
}


void EventInfoAreaImprovementControl__LoadParkData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *KEY_PREFIX_PARK_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *String; // x20
  int64_t IsNullOrEmpty; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v15; // x2
  int64_t v16; // x20
  int32_t eventIda; // [xsp+Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4CC7774 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7774 = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0);
  v6 = System_String__Concat_64031724(KEY_PREFIX_PARK_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventIda, v10);
    this->fields.customerNum = UserEventTotalPoint;
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v12);
    TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventIda, v13);
    this->fields.customerAttractionRate = TotalCustomerAttractionRate;
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v15);
  }
  else
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x2Cu, 0, 0)) == 0 )
      sub_1C71608(IsNullOrEmpty, v9);
    v16 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24)
      || (IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0),
          this->fields.customerNum = IsNullOrEmpty,
          *(_DWORD *)(v16 + 24) <= 1u) )
    {
      sub_1C71610(IsNullOrEmpty);
    }
    this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v16 + 40), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImprovementControl__LoadSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *v3; // x19
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x8
  int32_t size; // w2
  int v6; // w9
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  __int64 v12; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v15; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoAreaImprovementControl_o *v17; // x20
  int v18; // w23
  int v19; // w24
  EventInfoAreaImprovementControl_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-34h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4CC776F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    this = (EventInfoAreaImprovementControl_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC776F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  spotDataList = v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_29;
  size = spotDataList->fields._size;
  v6 = spotDataList->fields._version + 1;
  spotDataList->fields._size = 0;
  spotDataList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotDataList->fields._items, 0, size, 0);
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0);
  v9 = System_String__Concat_64031724(KEY_PREFIX_SPOT_DATA, v8, 0);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (EventInfoAreaImprovementControl_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoAreaImprovementControl_o *)System_String__Split(String, 0x2Cu, 0, 0);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v17 = this;
        v18 = (_DWORD)m_CancellationTokenSource - 1;
        if ( (int)m_CancellationTokenSource < 1 )
          return;
        v19 = 0;
        while ( 1 )
        {
          this = (EventInfoAreaImprovementControl_o *)*((_QWORD *)&v17->fields.datas + v19);
          if ( !this )
            break;
          this = (EventInfoAreaImprovementControl_o *)System_String__Split((System_String_o *)this, 0x3Au, 0, 0);
          if ( !this )
            break;
          v20 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (EventInfoAreaImprovementControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0);
            if ( LODWORD(v20->fields.m_CancellationTokenSource) > 1 )
            {
              v21 = (int)this;
              v22 = System_Int32__Parse(*(System_String_o **)&v20->fields.playType, 0);
              EventInfoAreaImprovementControl__AddSpotData(v3, v21, v22, v23);
              if ( v18 == v19 )
                return;
              if ( (unsigned int)++v19 < LODWORD(v17->fields.m_CancellationTokenSource) )
                continue;
            }
          }
          sub_1C71610(this);
        }
      }
    }
LABEL_29:
    sub_1C71608(this, *(_QWORD *)&eventId);
  }
  this = (EventInfoAreaImprovementControl_o *)v3->fields.userEventCooltimeRewardMaster;
  if ( !this )
    goto LABEL_29;
  EntityListByEventId = UserEventCooltimeRewardMaster__GetEntityListByEventId(
                          (UserEventCooltimeRewardMaster_o *)this,
                          eventIda,
                          0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = v3->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C71608(0, v12);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v25.fields._current,
                       0);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(v3, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v15);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void EventInfoAreaImprovementControl__OnDestroy(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C71608(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoAreaImprovementControl__PlayAnim(
        EventInfoAreaImprovementControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( type == 1 )
    EventInfoAreaImprovementControl__PlayAreaAddAnim(this, callback, (const MethodInfo *)callback);
  else
    ActionExtensions__Call(callback, 0);
}


void EventInfoAreaImprovementControl__PlayAreaAddAnim(
        EventInfoAreaImprovementControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC776A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__);
    sub_1C713B0(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
    byte_4CC776A = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v5 = sub_1C715FC(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v7);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v22);
  v6 = System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
         (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v6 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_1C71608(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    AddedEffectTargetIndexList,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v36,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v25 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_1C71608(v25, v26);
    if ( v36.fields._current >= LODWORD(drawComponentList->max_length) )
      sub_1C71610(v25);
    v29 = drawComponentList->m_Items[v36.fields._current];
    if ( !v29 )
      sub_1C71608(v25, v26);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v29->fields._SpotId_k__BackingField,
      v29->fields._Level_k__BackingField,
      v27);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v36,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v24);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v30);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v31);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v32);
  UnityEngine_PlayerPrefs__Save(0);
  v33 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v33, v34);
}


void EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
        EventInfoAreaImprovementControl_o *this,
        int32_t index,
        System_Collections_Generic_List_int__o *targetIndexList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int v38; // w21
  EventInfoAreaImprovementSlideComponent_o *v39; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v40; // x8
  EventInfoAreaImprovementSlideComponent_o *v41; // x19
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x2

  if ( (byte_4CC776B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__);
    sub_1C713B0(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
    byte_4CC776B = 1;
  }
  v9 = sub_1C715FC(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 24) = index;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = targetIndexList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)targetIndexList, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)callback, v24, v25, v26, v27, v28, v29);
  Item = *(System_Collections_Generic_List_int__o **)(v9 + 40);
  if ( !Item )
    goto LABEL_13;
  v30 = *(_DWORD *)(v9 + 24);
  if ( Item->fields._size > v30 )
  {
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                       Item,
                                                       v30,
                                                       (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
    slideComponentList = this->fields.slideComponentList;
    if ( !slideComponentList )
      goto LABEL_13;
    v38 = (int)Item;
    if ( (unsigned int)Item >= LODWORD(slideComponentList->max_length) )
      goto LABEL_14;
    v39 = slideComponentList->m_Items[(int)Item];
    *(_QWORD *)(v9 + 16) = v39;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v39, v31, v32, v33, v34, v35, v36);
    v40 = this->fields.slideComponentList;
    if ( !v40 )
      goto LABEL_13;
    if ( (unsigned int)(v38 + 1) >= LODWORD(v40->max_length) )
LABEL_14:
      sub_1C71610(Item);
    v41 = v40->m_Items[v38 + 1];
    v42 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v9,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
      0);
    if ( v41 )
    {
      EventInfoAreaImprovementSlideComponent__SlideDown(v41, v42, v43);
      return;
    }
LABEL_13:
    sub_1C71608(Item, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
}


void EventInfoAreaImprovementControl__Redisplay(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
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
  int64_t TotalCustomerAttractionRate; // x1
  const MethodInfo *v14; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C71608(this, method);
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


void EventInfoAreaImprovementControl__SaveParkData(
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = eventId;
  if ( (byte_4CC7775 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_808/*","*/);
    byte_4CC7775 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0);
  v6 = System_String__Concat_64069988(v4, (System_String_o *)StringLiteral_808/*","*/, v5, 0);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  v10 = System_String__Concat_64031724(KEY_PREFIX_PARK_DATA, v9, 0);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoAreaImprovementControl_o *v3; // x19
  System_Collections_Generic_List_object__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v6; // x0
  System_Comparison_T__o *_9__40_0; // x21
  Il2CppObject *v8; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Text_StringBuilder_o *v16; // x20
  int32_t v17; // w21
  System_String_o *v18; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v20; // x0
  EventInfoAreaImprovementControl_o *v21; // x19
  System_String_o *v22; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-4Ch] BYREF
  int m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v25 = eventId;
  if ( (byte_4CC7772 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__);
    sub_1C713B0(&EventInfoAreaImprovementControl___c_TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    this = (EventInfoAreaImprovementControl_o *)sub_1C713B0(&StringLiteral_808/*","*/);
    byte_4CC7772 = 1;
  }
  m_CachedPtr_high = 0;
  m_CachedPtr = 0;
  spotDataList = (System_Collections_Generic_List_object__o *)v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_25;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v6 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v6 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    _9__40_0 = (System_Comparison_T__o *)v6->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventInfoAreaImprovementControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__40_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_object____ctor(
        _9__40_0,
        v8,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        0);
      static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
        (int32_t)_9__40_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    System_Collections_Generic_List_object___Sort_58794460(
      spotDataList,
      _9__40_0,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v16 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 )
      {
        if ( !v16 )
          break;
        System_Text_StringBuilder__Append_64115684(v16, (System_String_o *)StringLiteral_808/*","*/, 0);
      }
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v17,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0);
      if ( !v16 )
        break;
      System_Text_StringBuilder__Append_64115684(v16, (System_String_o *)this, 0);
      System_Text_StringBuilder__Append_64115684(v16, (System_String_o *)StringLiteral_1450/*":"*/, 0);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v17,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr_high = HIDWORD(this->fields.m_CachedPtr);
      v18 = System_Int32__ToString((int32_t)&m_CachedPtr_high, 0);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_64115684(v16, v18, 0);
      if ( size == ++v17 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C71608(this, *(_QWORD *)&eventId);
  }
LABEL_23:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v20 = System_Int32__ToString((int32_t)&v25, 0);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_64031724(KEY_PREFIX_SPOT_DATA, v20, 0);
  if ( !v16 )
    goto LABEL_25;
  v21 = this;
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                             v16,
                             v16->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v21, v22, 0);
}


void EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t totalRate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *customerAttractionRateLabel; // x21
  int64_t v6; // x9
  int64_t v7; // x23
  UILabel_o *v8; // x20
  __int64 v9; // x22
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int64_t v15; // [xsp+8h] [xbp-48h] BYREF
  __int64 v16; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CC776C & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5709/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/);
    byte_4CC776C = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0, 0) )
  {
    v6 = totalRate + 1000;
    v7 = (totalRate + 1000) / 100 % 10;
    v8 = this->fields.customerAttractionRateLabel;
    v9 = v6 / 1000;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5709/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0);
    v16 = v9;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
    v15 = v7;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
    v13 = System_String__Format_64073032(v10, v11, v12, 0);
    if ( !v8
      || (UILabel__set_text(v8, v13, 0), (v13 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0) )
    {
      sub_1C71608(v13, v14);
    }
    UILabel__SetCondensedScale((UILabel_o *)v13, this->fields.customerAttractionRateMaxWidth, 0, 0);
  }
}


void EventInfoAreaImprovementControl__SetCustomerNumLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *customerNumLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *v7; // x0
  BalanceConfig_c *v8; // x8
  System_String_o *v9; // x22
  int64_t UserPointEventMax; // x23
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC776E & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5632/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4CC776E = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0, 0) )
  {
    v6 = this->fields.customerNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5632/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    v9 = v7;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Min_65553884(point, UserPointEventMax, 0);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
    v12 = System_String__Format(v9, v11, 0);
    if ( !v6 || (UILabel__set_text(v6, v12, 0), (v12 = (System_String_o *)this->fields.customerNumLabel) == 0) )
      sub_1C71608(v12, v13);
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.customerNumMaxWidth, 0, 0);
  }
}


void EventInfoAreaImprovementControl__Setup(
        EventInfoAreaImprovementControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v14; // x2
  struct EventUiEntity_o *v15; // x8
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w9
  int v20; // w22
  int32_t v21; // w20
  EventInfoAreaImprovementDrawComponent_o *v22; // x21
  const MethodInfo *v23; // x2
  struct EventUiEntity_o *v24; // x8
  int32_t Item; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v27; // x1
  int Level; // w8
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2

  if ( (byte_4CC7768 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CC7768 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v12);
    v15 = this->fields.eventUiEntity;
    if ( !v15 )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadParkData(this, v15->fields.eventId, v14);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v16);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_21;
    max_length = drawComponentList->max_length;
    v20 = max_length - 1;
    if ( max_length >= 1 )
    {
      v21 = 0;
      do
      {
        if ( (unsigned int)v21 >= LODWORD(drawComponentList->max_length) )
          sub_1C71610(baseSpotIdList);
        v22 = drawComponentList->m_Items[v21];
        if ( !v22 )
          break;
        baseSpotIdList = (struct System_Collections_Generic_List_int__o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                                            (EventInfoUIBase_o *)this,
                                                                            v22->fields.bgSprite,
                                                                            v22->fields.bgSpriteName,
                                                                            0);
        v24 = this->fields.eventUiEntity;
        if ( !v24 )
          break;
        v22->fields._EventId_k__BackingField = v24->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        if ( v21 >= baseSpotIdList->fields._size )
          Item = 0;
        else
          Item = System_Collections_Generic_List_int___get_Item(
                   baseSpotIdList,
                   v21,
                   (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
        v22->fields._SpotId_k__BackingField = Item;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, Item, v23);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v22->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v22, v27);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v22, v29);
        if ( v20 == v21 )
          goto LABEL_22;
        drawComponentList = this->fields.drawComponentList;
        ++v21;
      }
      while ( drawComponentList );
LABEL_21:
      sub_1C71608(baseSpotIdList, v11);
    }
LABEL_22:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v17);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v30);
  }
}


void EventInfoAreaImprovementControl__SetupSlideComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoAreaImprovementControl_o *v3; // x19
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int max_length; // w9
  int v6; // w23
  int32_t v7; // w20
  bool v8; // w22
  EventInfoAreaImprovementSlideComponent_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x22

  v3 = this;
  if ( (byte_4CC7769 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoAreaImprovementControl_o *)sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CC7769 = 1;
  }
  slideComponentList = v3->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_21;
  max_length = slideComponentList->max_length;
  v6 = max_length - 1;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( (unsigned int)v7 >= LODWORD(slideComponentList->max_length) )
        sub_1C71610(this);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
      if ( !this )
        break;
      v9 = slideComponentList->m_Items[v7];
      this = v7 >= SLODWORD(this->fields.m_CancellationTokenSource)
           ? 0LL
           : (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_int___get_Item(
                                                    (System_Collections_Generic_List_int__o *)this,
                                                    v7,
                                                    (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v9 )
        break;
      v9->fields._SpotId_k__BackingField = (int)this;
      if ( v7 )
      {
        if ( v8 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v9, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0);
        }
      }
      SpotData = EventInfoAreaImprovementControl__GetSpotData(v3, v9->fields._SpotId_k__BackingField, v2);
      if ( SpotData )
        EventInfoAreaImprovementSlideComponent__SetupDisp(v9, v11);
      else
        EventInfoAreaImprovementSlideComponent__SetupHidden(v9, v11);
      if ( v6 == v7 )
        return;
      slideComponentList = v3->fields.slideComponentList;
      ++v7;
      v8 = SpotData != 0;
    }
    while ( slideComponentList );
LABEL_21:
    sub_1C71608(this, method);
  }
}


void EventInfoAreaImprovementControl__UpdateDrawComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w21
  EventInfoAreaImprovementControl_o *v4; // x19
  unsigned int v5; // w22
  EventInfoAreaImprovementDrawComponent_o *v6; // x20
  int32_t Level_k__BackingField; // w24
  int32_t datas; // w23
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

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
      if ( v5 >= LODWORD(drawComponentList->max_length) )
        sub_1C71610(this);
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
                                                    0);
      if ( this )
        datas = (int32_t)this->fields.datas;
      else
        datas = 0;
      if ( Level_k__BackingField != datas )
      {
        v6->fields._Level_k__BackingField = datas;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v6, method);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v6, v9);
        this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetSpotData(
                                                      v4,
                                                      v6->fields._SpotId_k__BackingField,
                                                      v10);
        if ( this )
          HIDWORD(this->fields.m_CachedPtr) = datas;
      }
      if ( max_length == ++v5 )
        return;
      drawComponentList = v4->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_1C71608(this, method);
  }
}


void EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C71608(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoAreaImprovementControl_SpotData___ctor(
        EventInfoAreaImprovementControl_SpotData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoAreaImprovementControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7778 & 1) == 0 )
  {
    sub_1C713B0(&EventInfoAreaImprovementControl___c_TypeInfo);
    byte_4CC7778 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAreaImprovementControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoAreaImprovementControl___c___ctor(EventInfoAreaImprovementControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoAreaImprovementControl___c___SaveSpotData_b__40_0(
        EventInfoAreaImprovementControl___c_o *this,
        EventInfoAreaImprovementControl_SpotData_o *a,
        EventInfoAreaImprovementControl_SpotData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.SpotId - b->fields.SpotId;
}


void EventInfoAreaImprovementControl___c__DisplayClass31_0___ctor(
        EventInfoAreaImprovementControl___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoAreaImprovementControl___c__DisplayClass31_0___PlayAreaAddAnim_b__0(
        EventInfoAreaImprovementControl___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoAreaImprovementControl_o *_4__this; // x0
  const MethodInfo *v5; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoAreaImprovementControl__SetCustomerNumLabel(_4__this, _4__this->fields.customerNum, v2),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C71608(_4__this, method);
  }
  EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(_4__this, _4__this->fields.customerAttractionRate, v5);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoAreaImprovementControl___c__DisplayClass32_0___ctor(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__0(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoAreaImprovementControl___c__DisplayClass32_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  EventInfoAreaImprovementSlideComponent_o *slideComponent; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4CC7779 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_1C713B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__);
    byte_4CC7779 = 1;
  }
  _9__1 = v3->fields.__9__1;
  slideComponent = v3->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !slideComponent )
    sub_1C71608(this, method);
  EventInfoAreaImprovementSlideComponent__SlideIn(slideComponent, _9__1, v2);
}


void EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__1(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventInfoAreaImprovementControl_o *_4__this; // x8
  __int64 v4; // x1

  _4__this = this->fields.__4__this;
  v4 = (unsigned int)(this->fields.index + 1);
  this->fields.index = v4;
  if ( !_4__this )
    sub_1C71608(this, v4);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v4,
    this->fields.targetIndexList,
    this->fields.callback,
    v2);
}