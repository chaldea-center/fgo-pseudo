void EventInfoAreaImprovementControl___ctor(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C43331 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1C37058(&StringLiteral_13001/*"SpotCooltime_ParkData_"*/);
    sub_1C37058(&StringLiteral_13002/*"SpotCooltime_SpotData_"*/);
    byte_4C43331 = 1;
  }
  v5 = StringLiteral_13002/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13002/*"SpotCooltime_SpotData_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v5, v2, v3);
  v6 = StringLiteral_13001/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13001/*"SpotCooltime_ParkData_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.KEY_PREFIX_PARK_DATA, v6, v7, v8);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.spotDataList, (int32_t)v9, v10, v11);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C4332B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
    sub_1C37058(&EventInfoAreaImprovementControl_SpotData_TypeInfo);
    byte_4C4332B = 1;
  }
  v7 = sub_1C372A4(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = spotId,
        *(_DWORD *)(v7 + 20) = level,
        (spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList) == 0)
    || (items = spotDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
        ++spotDataList->fields._version,
        !items) )
  {
    sub_1C372B4(spotDataList);
  }
  size = spotDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotDataList,
      (Il2CppObject *)v7,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    spotDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), v7, v9, v10);
  }
}


void EventInfoAreaImprovementControl__Awake(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C43320 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C43320 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = (struct EventCooltimeRewardMaster_o *)Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventCooltimeRewardMaster, (int32_t)Master_object, v4, v5);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  this->fields.userEventCooltimeRewardMaster = (struct UserEventCooltimeRewardMaster_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userEventCooltimeRewardMaster, (int32_t)v6, v7, v8);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userEventPointMaster, (int32_t)v9, v10, v11);
}


System_Collections_Generic_List_int__o *EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int size; // w8
  int v6; // w23
  int32_t v7; // w21
  int32_t Item; // w22
  const MethodInfo *v9; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10

  if ( (byte_4C4332D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4332D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_20;
  size = baseSpotIdList->fields._size;
  v6 = size - 1;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v7,
               (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      baseSpotIdList = (System_Collections_Generic_List_int__o *)EventInfoAreaImprovementControl__GetSpotData(
                                                                   this,
                                                                   Item,
                                                                   v9);
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
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v13 = v3->fields._size;
          if ( (unsigned int)v13 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v7,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v13 + 1;
            items->m_Items[v13] = v7;
          }
        }
      }
      if ( v6 == v7 )
        return v3;
      baseSpotIdList = this->fields.baseSpotIdList;
      ++v7;
    }
    while ( baseSpotIdList );
LABEL_20:
    sub_1C372B4(baseSpotIdList);
  }
  return v3;
}


EventInfoAreaImprovementControl_SpotData_o *EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *spotDataList; // x0
  int size; // w8
  int v7; // w23
  int32_t v8; // w21

  if ( (byte_4C4332A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    byte_4C4332A = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
    return 0;
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_15;
  size = spotDataList->fields._size;
  v7 = size - 1;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    spotDataList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  spotDataList,
                                                                  v8,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    if ( !spotDataList )
      goto LABEL_15;
    if ( LODWORD(spotDataList->fields._items) == spotId )
      break;
    if ( v7 == v8 )
      return 0;
    spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
    ++v8;
    if ( !spotDataList )
      goto LABEL_15;
  }
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
LABEL_15:
    sub_1C372B4(spotDataList);
  return (EventInfoAreaImprovementControl_SpotData_o *)System_Collections_Generic_List_object___get_Item(
                                                         spotDataList,
                                                         v8,
                                                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
}


int64_t EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v6; // x19
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-60h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4C43330 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C43330 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  entity = 0;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_1C372B4(0);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    baseSpotIdList,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v6 = 0;
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C372B4(0);
    current = v13.fields._current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v13.fields._current,
                       0);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_1C372B4(MaxLevelEntity);
      v10 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0);
      if ( v10 )
      {
        if ( !entity )
          sub_1C372B4(v10);
        v6 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_4C43327 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43327 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
      sub_1C372BC(this);
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
  const MethodInfo *v3; // x3
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  EventUiEntity_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_4C43321 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__);
    sub_1C37058(&StringLiteral_19161/*"event_bg_80384"*/);
    byte_4C43321 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSpotIdList, (int32_t)SpotIdListByEventId, v9, v10);
  v11 = this->fields.eventUiEntity;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v11, v12, 0);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_19161/*"event_bg_80384"*/,
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
    sub_1C372B4(eventCooltimeRewardMaster);
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
  const MethodInfo *v9; // x2
  int64_t UserEventTotalPoint; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int64_t TotalCustomerAttractionRate; // x0
  const MethodInfo *v14; // x2
  int64_t v15; // x20
  int32_t eventIda; // [xsp+Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4C4332E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4332E = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0);
  v6 = System_String__Concat_63561656(KEY_PREFIX_PARK_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    UserEventTotalPoint = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventIda, v9);
    this->fields.customerNum = UserEventTotalPoint;
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, UserEventTotalPoint, v11);
    TotalCustomerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(this, eventIda, v12);
    this->fields.customerAttractionRate = TotalCustomerAttractionRate;
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, TotalCustomerAttractionRate, v14);
  }
  else
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x2Cu, 0, 0)) == 0 )
      sub_1C372B4(IsNullOrEmpty);
    v15 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24)
      || (IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0),
          this->fields.customerNum = IsNullOrEmpty,
          *(_DWORD *)(v15 + 24) <= 1u) )
    {
      sub_1C372BC(IsNullOrEmpty);
    }
    this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v15 + 40), 0);
  }
}


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
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v14; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoAreaImprovementControl_o *v16; // x20
  int v17; // w23
  int v18; // w24
  EventInfoAreaImprovementControl_o *v19; // x21
  int32_t v20; // w22
  int32_t v21; // w0
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-34h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4C43329 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    this = (EventInfoAreaImprovementControl_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C43329 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
  v9 = System_String__Concat_63561656(KEY_PREFIX_SPOT_DATA, v8, 0);
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
        v16 = this;
        v17 = (_DWORD)m_CancellationTokenSource - 1;
        if ( (int)m_CancellationTokenSource < 1 )
          return;
        v18 = 0;
        while ( 1 )
        {
          this = (EventInfoAreaImprovementControl_o *)*((_QWORD *)&v16->fields.datas + v18);
          if ( !this )
            break;
          this = (EventInfoAreaImprovementControl_o *)System_String__Split((System_String_o *)this, 0x3Au, 0, 0);
          if ( !this )
            break;
          v19 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (EventInfoAreaImprovementControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0);
            if ( LODWORD(v19->fields.m_CancellationTokenSource) > 1 )
            {
              v20 = (int)this;
              v21 = System_Int32__Parse(*(System_String_o **)&v19->fields.playType, 0);
              EventInfoAreaImprovementControl__AddSpotData(v3, v20, v21, v22);
              if ( v17 == v18 )
                return;
              if ( (unsigned int)++v18 < LODWORD(v16->fields.m_CancellationTokenSource) )
                continue;
            }
          }
          sub_1C372BC(this);
        }
      }
    }
LABEL_29:
    sub_1C372B4(this);
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
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = v3->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C372B4(0);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v24.fields._current,
                       0);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(v3, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v14);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void EventInfoAreaImprovementControl__OnDestroy(EventInfoAreaImprovementControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C372B4(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v16; // x2
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v20; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x4
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C43324 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__);
    sub_1C37058(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
    byte_4C43324 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v5 = sub_1C372A4(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v11);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v14);
  v6 = System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
         (const MethodInfo_30F32A0 *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v6 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_1C372B4(v6);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    AddedEffectTargetIndexList,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_1C372B4(v17);
    if ( v27.fields._current >= LODWORD(drawComponentList->max_length) )
      sub_1C372BC(v17);
    v20 = drawComponentList->m_Items[v27.fields._current];
    if ( !v20 )
      sub_1C372B4(v17);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v20->fields._SpotId_k__BackingField,
      v20->fields._Level_k__BackingField,
      v18);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v16);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v21);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v22);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v23);
  UnityEngine_PlayerPrefs__Save(0);
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v24, v25);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int v21; // w21
  EventInfoAreaImprovementSlideComponent_o *v22; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v23; // x8
  EventInfoAreaImprovementSlideComponent_o *v24; // x19
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_4C43325 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__);
    sub_1C37058(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
    byte_4C43325 = 1;
  }
  v9 = sub_1C372A4(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 24) = index;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 40) = targetIndexList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)targetIndexList, v13, v14);
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v15, v16);
  Item = *(System_Collections_Generic_List_int__o **)(v9 + 40);
  if ( !Item )
    goto LABEL_13;
  v17 = *(_DWORD *)(v9 + 24);
  if ( Item->fields._size > v17 )
  {
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                       Item,
                                                       v17,
                                                       (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    slideComponentList = this->fields.slideComponentList;
    if ( !slideComponentList )
      goto LABEL_13;
    v21 = (int)Item;
    if ( (unsigned int)Item >= LODWORD(slideComponentList->max_length) )
      goto LABEL_14;
    v22 = slideComponentList->m_Items[(int)Item];
    *(_QWORD *)(v9 + 16) = v22;
    sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v22, v18, v19);
    v23 = this->fields.slideComponentList;
    if ( !v23 )
      goto LABEL_13;
    if ( (unsigned int)(v21 + 1) >= LODWORD(v23->max_length) )
LABEL_14:
      sub_1C372BC(Item);
    v24 = v23->m_Items[v21 + 1];
    v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v9,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
      0);
    if ( v24 )
    {
      EventInfoAreaImprovementSlideComponent__SlideDown(v24, v25, v26);
      return;
    }
LABEL_13:
    sub_1C372B4(Item);
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
    sub_1C372B4(this);
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
  if ( (byte_4C4332F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C4332F = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0);
  v6 = System_String__Concat_63599904(v4, (System_String_o *)StringLiteral_811/*","*/, v5, 0);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  v10 = System_String__Concat_63561656(KEY_PREFIX_PARK_DATA, v9, 0);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0);
}


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
  const MethodInfo *v11; // x3
  System_Text_StringBuilder_o *v12; // x20
  int32_t v13; // w21
  System_String_o *v14; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v16; // x0
  EventInfoAreaImprovementControl_o *v17; // x19
  System_String_o *v18; // x0
  int m_CachedPtr_high; // [xsp+4h] [xbp-4Ch] BYREF
  int m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v21 = eventId;
  if ( (byte_4C4332C & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__);
    sub_1C37058(&EventInfoAreaImprovementControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    this = (EventInfoAreaImprovementControl_o *)sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C4332C = 1;
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
      _9__40_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_object____ctor(
        _9__40_0,
        v8,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        0);
      static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v10, v11);
    }
    System_Collections_Generic_List_object___Sort_58346216(
      spotDataList,
      _9__40_0,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v12 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0);
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 )
      {
        if ( !v12 )
          break;
        System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)StringLiteral_811/*","*/, 0);
      }
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0);
      if ( !v12 )
        break;
      System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)this, 0);
      System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)StringLiteral_1457/*":"*/, 0);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr_high = HIDWORD(this->fields.m_CachedPtr);
      v14 = System_Int32__ToString((int32_t)&m_CachedPtr_high, 0);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_63646720(v12, v14, 0);
      if ( size == ++v13 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C372B4(this);
  }
LABEL_23:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v16 = System_Int32__ToString((int32_t)&v21, 0);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_63561656(KEY_PREFIX_SPOT_DATA, v16, 0);
  if ( !v12 )
    goto LABEL_25;
  v17 = this;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                             v12,
                             v12->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v17, v18, 0);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  int64_t v26; // [xsp+8h] [xbp-48h] BYREF
  __int64 v27; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C43326 & 1) == 0 )
  {
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5716/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/);
    byte_4C43326 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0);
    v27 = v9;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
    v26 = v7;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26, v18, v19, v20, v21, v22, v23);
    v25 = System_String__Format_63602948(v10, v17, v24, 0);
    if ( !v8
      || (UILabel__set_text(v8, v25, 0), (v25 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0) )
    {
      sub_1C372B4(v25);
    }
    UILabel__SetCondensedScale((UILabel_o *)v25, this->fields.customerAttractionRateMaxWidth, 0, 0);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int64_t v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C43328 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C43328 = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0, 0) )
  {
    v6 = this->fields.customerNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
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
    v19 = System_Math__Min_65085428(point, UserPointEventMax, 0);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
    v18 = System_String__Format(v9, v17, 0);
    if ( !v6 || (UILabel__set_text(v6, v18, 0), (v18 = (System_String_o *)this->fields.customerNumLabel) == 0) )
      sub_1C372B4(v18);
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.customerNumMaxWidth, 0, 0);
  }
}


void EventInfoAreaImprovementControl__Setup(
        EventInfoAreaImprovementControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  const MethodInfo *v7; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v9; // x2
  struct EventUiEntity_o *v10; // x8
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w9
  int v15; // w22
  int32_t v16; // w20
  EventInfoAreaImprovementDrawComponent_o *v17; // x21
  const MethodInfo *v18; // x2
  struct EventUiEntity_o *v19; // x8
  int32_t Item; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v22; // x1
  int Level; // w8
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4C43322 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C43322 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entitys, (int32_t)method, v3);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v7);
    v10 = this->fields.eventUiEntity;
    if ( !v10 )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadParkData(this, v10->fields.eventId, v9);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v11);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_21;
    max_length = drawComponentList->max_length;
    v15 = max_length - 1;
    if ( max_length >= 1 )
    {
      v16 = 0;
      do
      {
        if ( (unsigned int)v16 >= LODWORD(drawComponentList->max_length) )
          sub_1C372BC(baseSpotIdList);
        v17 = drawComponentList->m_Items[v16];
        if ( !v17 )
          break;
        baseSpotIdList = (struct System_Collections_Generic_List_int__o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                                            (EventInfoUIBase_o *)this,
                                                                            v17->fields.bgSprite,
                                                                            v17->fields.bgSpriteName,
                                                                            0);
        v19 = this->fields.eventUiEntity;
        if ( !v19 )
          break;
        v17->fields._EventId_k__BackingField = v19->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        if ( v16 >= baseSpotIdList->fields._size )
          Item = 0;
        else
          Item = System_Collections_Generic_List_int___get_Item(
                   baseSpotIdList,
                   v16,
                   (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        v17->fields._SpotId_k__BackingField = Item;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, Item, v18);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v17->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v17, v22);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v17, v24);
        if ( v15 == v16 )
          goto LABEL_22;
        drawComponentList = this->fields.drawComponentList;
        ++v16;
      }
      while ( drawComponentList );
LABEL_21:
      sub_1C372B4(baseSpotIdList);
    }
LABEL_22:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v12);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v25);
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
  if ( (byte_4C43323 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoAreaImprovementControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C43323 = 1;
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
        sub_1C372BC(this);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
      if ( !this )
        break;
      v9 = slideComponentList->m_Items[v7];
      this = v7 >= SLODWORD(this->fields.m_CancellationTokenSource)
           ? 0LL
           : (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_int___get_Item(
                                                    (System_Collections_Generic_List_int__o *)this,
                                                    v7,
                                                    (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1C372B4(this);
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
  const MethodInfo *v8; // x1
  int32_t datas; // w23
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

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
        sub_1C372BC(this);
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
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v6, v8);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v6, v10);
        this = (EventInfoAreaImprovementControl_o *)EventInfoAreaImprovementControl__GetSpotData(
                                                      v4,
                                                      v6->fields._SpotId_k__BackingField,
                                                      v11);
        if ( this )
          HIDWORD(this->fields.m_CachedPtr) = datas;
      }
      if ( max_length == ++v5 )
        return;
      drawComponentList = v4->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_1C372B4(this);
  }
}


void EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C43332 & 1) == 0 )
  {
    sub_1C37058(&EventInfoAreaImprovementControl___c_TypeInfo);
    byte_4C43332 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoAreaImprovementControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(_4__this);
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
  const MethodInfo *v7; // x3

  v3 = this;
  if ( (byte_4C43333 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_1C37058(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__);
    byte_4C43333 = 1;
  }
  _9__1 = v3->fields.__9__1;
  slideComponent = v3->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !slideComponent )
    sub_1C372B4(this);
  EventInfoAreaImprovementSlideComponent__SlideIn(slideComponent, _9__1, v2);
}


void EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__1(
        EventInfoAreaImprovementControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventInfoAreaImprovementControl_o *_4__this; // x8
  int32_t v4; // w1

  _4__this = this->fields.__4__this;
  v4 = this->fields.index + 1;
  this->fields.index = v4;
  if ( !_4__this )
    sub_1C372B4(this);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v4,
    this->fields.targetIndexList,
    this->fields.callback,
    v2);
}