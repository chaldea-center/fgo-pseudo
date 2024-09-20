void __fastcall EventInfoAreaImprovementControl___ctor(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5BA72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1B885B0(&StringLiteral_12903/*"SpotCooltime_ParkData_"*/);
    sub_1B885B0(&StringLiteral_12904/*"SpotCooltime_SpotData_"*/);
    byte_4A5BA72 = 1;
  }
  v5 = StringLiteral_12904/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_12904/*"SpotCooltime_SpotData_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v5, v2, v3);
  v6 = StringLiteral_12903/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_12903/*"SpotCooltime_ParkData_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.KEY_PREFIX_PARK_DATA, v6, v7, v8);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotDataList, (int32_t)v9, v10, v11);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__AddSpotData(
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A5BA6C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__);
    sub_1B885B0(&EventInfoAreaImprovementControl_SpotData_TypeInfo);
    byte_4A5BA6C = 1;
  }
  v7 = sub_1B887FC(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = spotId,
        *(_DWORD *)(v7 + 20) = level,
        (spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList) == 0LL)
    || (items = spotDataList->fields._items,
        v13 = Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
        ++spotDataList->fields._version,
        !items) )
  {
    sub_1B8880C(spotDataList, v9);
  }
  size = spotDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotDataList,
      (Il2CppObject *)v7,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    spotDataList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), v7, v10, v11);
  }
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5BA61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BA61 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = (struct EventCooltimeRewardMaster_o *)Master_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCooltimeRewardMaster,
    (int32_t)Master_object,
    v4,
    v5);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  this->fields.userEventCooltimeRewardMaster = (struct UserEventCooltimeRewardMaster_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userEventCooltimeRewardMaster, (int32_t)v6, v7, v8);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userEventPointMaster, (int32_t)v9, v10, v11);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
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

  if ( (byte_4A5BA6E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5BA6E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                                                                     0LL);
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
          if ( (unsigned int)v14 >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v14 + 1;
            items->m_Items[v14 + 1] = v8;
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
    sub_1B8880C(baseSpotIdList, v4);
  }
  return v3;
}


EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *spotDataList; // x0
  int size; // w8
  int v8; // w23
  int32_t v9; // w21

  if ( (byte_4A5BA6B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    byte_4A5BA6B = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
    return 0LL;
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_15;
  size = spotDataList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0LL;
  v9 = 0;
  while ( 1 )
  {
    spotDataList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  spotDataList,
                                                                  v9,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    if ( !spotDataList )
      goto LABEL_15;
    if ( LODWORD(spotDataList->fields._items) == spotId )
      break;
    if ( v8 == v9 )
      return 0LL;
    spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
    ++v9;
    if ( !spotDataList )
      goto LABEL_15;
  }
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
LABEL_15:
    sub_1B8880C(spotDataList, v5);
  return (EventInfoAreaImprovementControl_SpotData_o *)System_Collections_Generic_List_object___get_Item(
                                                         spotDataList,
                                                         v9,
                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
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

  if ( (byte_4A5BA71 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4A5BA71 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    baseSpotIdList,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v6 = 0LL;
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1B8880C(0LL, v7);
    current = v16.fields._current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v16.fields._current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_1B8880C(MaxLevelEntity, v11);
      v12 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v12 )
      {
        if ( !entity )
          sub_1B8880C(v12, v13);
        v6 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6;
}


int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x1

  if ( (byte_4A5BA68 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BA68 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      sub_1B88814(this, *(_QWORD *)&eventId);
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
  int32_t v3; // w3
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v7; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  EventUiEntity_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_4A5BA62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__);
    sub_1B885B0(&StringLiteral_19146/*"event_bg_80384"*/);
    byte_4A5BA62 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSpotIdList, (int32_t)SpotIdListByEventId, v10, v11);
  v12 = this->fields.eventUiEntity;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v12, v13, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_19146/*"event_bg_80384"*/,
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
    sub_1B8880C(eventCooltimeRewardMaster, v7);
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
  if ( (byte_4A5BA6F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA6F = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v6 = System_String__Concat_61707032(KEY_PREFIX_PARK_DATA, v5, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
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
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x2Cu, 0, 0LL)) == 0 )
      sub_1B8880C(IsNullOrEmpty, v9);
    v16 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24)
      || (IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL),
          this->fields.customerNum = IsNullOrEmpty,
          *(_DWORD *)(v16 + 24) <= 1u) )
    {
      sub_1B88814(IsNullOrEmpty, v9);
    }
    this->fields.customerAttractionRate = System_Int64__Parse(*(System_String_o **)(v16 + 40), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__LoadSpotData(
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
  if ( (byte_4A5BA6A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    this = (EventInfoAreaImprovementControl_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA6A = 1;
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
    System_Array__Clear((System_Array_o *)spotDataList->fields._items, 0, size, 0LL);
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v9 = System_String__Concat_61707032(KEY_PREFIX_SPOT_DATA, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoAreaImprovementControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
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
          this = (EventInfoAreaImprovementControl_o *)System_String__Split((System_String_o *)this, 0x3Au, 0, 0LL);
          if ( !this )
            break;
          v20 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (EventInfoAreaImprovementControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
            if ( LODWORD(v20->fields.m_CancellationTokenSource) > 1 )
            {
              v21 = (int)this;
              v22 = System_Int32__Parse(*(System_String_o **)&v20->fields.playType, 0LL);
              EventInfoAreaImprovementControl__AddSpotData(v3, v21, v22, v23);
              if ( v18 == v19 )
                return;
              if ( (unsigned int)++v19 < LODWORD(v17->fields.m_CancellationTokenSource) )
                continue;
            }
          }
          sub_1B88814(this, *(_QWORD *)&eventId);
        }
      }
    }
LABEL_29:
    sub_1B8880C(this, *(_QWORD *)&eventId);
  }
  this = (EventInfoAreaImprovementControl_o *)v3->fields.userEventCooltimeRewardMaster;
  if ( !this )
    goto LABEL_29;
  EntityListByEventId = UserEventCooltimeRewardMaster__GetEntityListByEventId(
                          (UserEventCooltimeRewardMaster_o *)this,
                          eventIda,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v25,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = v3->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1B8880C(0LL, v12);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v25.fields._current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(v3, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v15);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v16; // x2
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v21; // x8
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5BA65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__);
    sub_1B885B0(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
    byte_4A5BA65 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = sub_1B887FC(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v7);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v14);
  v6 = System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
         (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v6 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_1B8880C(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    AddedEffectTargetIndexList,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_1B8880C(v17, v18);
    if ( v28.fields._current >= drawComponentList->max_length )
      sub_1B88814(v17, v18);
    v21 = drawComponentList->m_Items[v28.fields._current];
    if ( !v21 )
      sub_1B8880C(v17, v18);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v21->fields._SpotId_k__BackingField,
      v21->fields._Level_k__BackingField,
      v19);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v16);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v22);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v23);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v24);
  UnityEngine_PlayerPrefs__Save(0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v25, v26);
}


void __fastcall EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int v22; // w21
  EventInfoAreaImprovementSlideComponent_o *v23; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v24; // x8
  EventInfoAreaImprovementSlideComponent_o *v25; // x19
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4A5BA66 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__);
    sub_1B885B0(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
    byte_4A5BA66 = 1;
  }
  v9 = sub_1B887FC(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 24) = index;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = targetIndexList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)targetIndexList, v14, v15);
  *(_QWORD *)(v9 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)callback, v16, v17);
  Item = *(System_Collections_Generic_List_int__o **)(v9 + 40);
  if ( !Item )
    goto LABEL_13;
  v18 = *(_DWORD *)(v9 + 24);
  if ( Item->fields._size > v18 )
  {
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                       Item,
                                                       v18,
                                                       (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
    slideComponentList = this->fields.slideComponentList;
    if ( !slideComponentList )
      goto LABEL_13;
    v22 = (int)Item;
    if ( (unsigned int)Item >= slideComponentList->max_length )
      goto LABEL_14;
    v23 = slideComponentList->m_Items[(int)Item];
    *(_QWORD *)(v9 + 16) = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v23, v19, v20);
    v24 = this->fields.slideComponentList;
    if ( !v24 )
      goto LABEL_13;
    if ( v22 + 1 >= v24->max_length )
LABEL_14:
      sub_1B88814(Item, v11);
    v25 = v24->m_Items[v22 + 1];
    v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v9,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
      0LL);
    if ( v25 )
    {
      EventInfoAreaImprovementSlideComponent__SlideDown(v25, v26, v27);
      return;
    }
LABEL_13:
    sub_1B8880C(Item, v11);
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
  int64_t TotalCustomerAttractionRate; // x1
  const MethodInfo *v14; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = eventId;
  if ( (byte_4A5BA70 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5BA70 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_61718292(v4, (System_String_o *)StringLiteral_868/*","*/, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_61707032(KEY_PREFIX_PARK_DATA, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
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
  System_Text_StringBuilder_o *v12; // x20
  int32_t v13; // w21
  System_String_o *v14; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v16; // x0
  EventInfoAreaImprovementControl_o *v17; // x19
  System_String_o *v18; // x0
  int v19; // [xsp+4h] [xbp-4Ch] BYREF
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v21 = eventId;
  if ( (byte_4A5BA6D & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__);
    sub_1B885B0(&EventInfoAreaImprovementControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    this = (EventInfoAreaImprovementControl_o *)sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5BA6D = 1;
  }
  v19 = 0;
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
      _9__40_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_object____ctor(
        _9__40_0,
        v8,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        0LL);
      static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v10, v11);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      spotDataList,
      _9__40_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v12 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0LL);
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 )
      {
        if ( !v12 )
          break;
        System_Text_StringBuilder__Append_60868928(v12, (System_String_o *)StringLiteral_868/*","*/, 0LL);
      }
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v12 )
        break;
      System_Text_StringBuilder__Append_60868928(v12, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_60868928(v12, (System_String_o *)StringLiteral_1544/*":"*/, 0LL);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v13,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      v19 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
      v14 = System_Int32__ToString((int32_t)&v19, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_60868928(v12, v14, 0LL);
      if ( size == ++v13 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B8880C(this, *(_QWORD *)&eventId);
  }
LABEL_23:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v16 = System_Int32__ToString((int32_t)&v21, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_61707032(KEY_PREFIX_SPOT_DATA, v16, 0LL);
  if ( !v12 )
    goto LABEL_25;
  v17 = this;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                             v12,
                             v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v17, v18, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
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
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // [xsp+8h] [xbp-48h] BYREF
  __int64 v22; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5BA67 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5711/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/);
    byte_4A5BA67 = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v6 = totalRate + 1000;
    v7 = (totalRate + 1000) / 100 % 10;
    v8 = this->fields.customerAttractionRateLabel;
    v9 = v6 / 1000;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5711/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0LL);
    v22 = v9;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v11, v12, v13);
    v21 = v7;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v15, v16, v17);
    v19 = System_String__Format_61721404(v10, v14, v18, 0LL);
    if ( !v8
      || (UILabel__set_text(v8, v19, 0LL), (v19 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_1B8880C(v19, v20);
    }
    UILabel__SetCondensedScale((UILabel_o *)v19, this->fields.customerAttractionRateMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerNumLabel(
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
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BA69 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4A5BA69 = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v6 = this->fields.customerNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
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
    v17 = System_Math__Min_62526020(point, UserPointEventMax, 0LL);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v11, v12, v13);
    v15 = System_String__Format(v9, v14, 0LL);
    if ( !v6 || (UILabel__set_text(v6, v15, 0LL), (v15 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_1B8880C(v15, v16);
    UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.customerNumMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__Setup(
        EventInfoAreaImprovementControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v10; // x2
  struct EventUiEntity_o *v11; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w9
  int v16; // w22
  int32_t v17; // w20
  EventInfoAreaImprovementDrawComponent_o *v18; // x21
  const MethodInfo *v19; // x2
  struct EventUiEntity_o *v20; // x8
  int32_t Item; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v23; // x1
  int Level; // w8
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4A5BA63 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5BA63 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
      v3);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v8);
    v11 = this->fields.eventUiEntity;
    if ( !v11 )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadParkData(this, v11->fields.eventId, v10);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v12);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_21;
    max_length = drawComponentList->max_length;
    v16 = max_length - 1;
    if ( max_length >= 1 )
    {
      v17 = 0;
      do
      {
        if ( v17 >= drawComponentList->max_length )
          sub_1B88814(baseSpotIdList, v7);
        v18 = drawComponentList->m_Items[v17];
        if ( !v18 )
          break;
        baseSpotIdList = (struct System_Collections_Generic_List_int__o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                                            (EventInfoUIBase_o *)this,
                                                                            v18->fields.bgSprite,
                                                                            v18->fields.bgSpriteName,
                                                                            0LL);
        v20 = this->fields.eventUiEntity;
        if ( !v20 )
          break;
        v18->fields._EventId_k__BackingField = v20->fields.eventId;
        baseSpotIdList = this->fields.baseSpotIdList;
        if ( !baseSpotIdList )
          break;
        if ( v17 >= baseSpotIdList->fields._size )
          Item = 0;
        else
          Item = System_Collections_Generic_List_int___get_Item(
                   baseSpotIdList,
                   v17,
                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        v18->fields._SpotId_k__BackingField = Item;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, Item, v19);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v18->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v18, v23);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v18, v25);
        if ( v16 == v17 )
          goto LABEL_22;
        drawComponentList = this->fields.drawComponentList;
        ++v17;
      }
      while ( drawComponentList );
LABEL_21:
      sub_1B8880C(baseSpotIdList, v7);
    }
LABEL_22:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v13);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v26);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetupSlideComponentList(
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
  if ( (byte_4A5BA64 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoAreaImprovementControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A5BA64 = 1;
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
      if ( v7 >= slideComponentList->max_length )
        sub_1B88814(this, method);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
      if ( !this )
        break;
      v9 = slideComponentList->m_Items[v7];
      this = v7 >= SLODWORD(this->fields.m_CancellationTokenSource)
           ? 0LL
           : (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_int___get_Item(
                                                    (System_Collections_Generic_List_int__o *)this,
                                                    v7,
                                                    (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
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
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
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
      v8 = SpotData != 0LL;
    }
    while ( slideComponentList );
LABEL_21:
    sub_1B8880C(this, method);
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
      if ( v5 >= drawComponentList->max_length )
        sub_1B88814(this, method);
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
          *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1) = datas;
      }
      if ( max_length == ++v5 )
        return;
      drawComponentList = v4->fields.drawComponentList;
    }
    while ( drawComponentList );
LABEL_15:
    sub_1B8880C(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BA73 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoAreaImprovementControl___c_TypeInfo);
    byte_4A5BA73 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoAreaImprovementControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
  const MethodInfo *v2; // x2
  struct EventInfoAreaImprovementControl_o *_4__this; // x0
  const MethodInfo *v5; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoAreaImprovementControl__SetCustomerNumLabel(_4__this, _4__this->fields.customerNum, v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(_4__this, _4__this->fields.customerAttractionRate, v5);
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
  const MethodInfo *v2; // x2
  EventInfoAreaImprovementControl___c__DisplayClass32_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  EventInfoAreaImprovementSlideComponent_o *slideComponent; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  v3 = this;
  if ( (byte_4A5BA74 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_1B885B0(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__);
    byte_4A5BA74 = 1;
  }
  _9__1 = v3->fields.__9__1;
  slideComponent = v3->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !slideComponent )
    sub_1B8880C(this, method);
  EventInfoAreaImprovementSlideComponent__SlideIn(slideComponent, _9__1, v2);
}


void __fastcall EventInfoAreaImprovementControl___c__DisplayClass32_0___PlayAreaAddAnimSub_b__1(
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
    sub_1B8880C(this, v4);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v4,
    this->fields.targetIndexList,
    this->fields.callback,
    v2);
}