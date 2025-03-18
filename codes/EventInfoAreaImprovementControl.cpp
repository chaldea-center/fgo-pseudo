void __fastcall EventInfoAreaImprovementControl___ctor(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C22709 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo, v9);
    sub_1C3B764(&StringLiteral_13193/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v10);
    sub_1C3B764(&StringLiteral_13194/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v11);
    byte_4C22709 = 1;
  }
  v12 = StringLiteral_13194/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13194/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v12, v2, v3, v4, v5, v6, v7);
  v13 = StringLiteral_13193/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13193/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.KEY_PREFIX_PARK_DATA, v13, v14, v15, v16, v17, v18, v19);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.spotDataList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
  int64_t v8; // x19
  System_Collections_Generic_List_object__o *spotDataList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4C22703 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
      *(_QWORD *)&spotId);
    sub_1C3B764(&EventInfoAreaImprovementControl_SpotData_TypeInfo, v7);
    byte_4C22703 = 1;
  }
  v8 = sub_1C3B9B0(EventInfoAreaImprovementControl_SpotData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        *(_DWORD *)(v8 + 20) = level,
        (spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList) == 0LL)
    || (items = spotDataList->fields._items,
        v18 = Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
        ++spotDataList->fields._version,
        !items) )
  {
    sub_1C3B9C0(spotDataList, v10);
  }
  size = spotDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotDataList,
      (Il2CppObject *)v8,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    spotDataList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C226F8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventPointMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C226F8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = (struct EventCooltimeRewardMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventCooltimeRewardMaster,
    (int64_t)Master_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  this->fields.userEventCooltimeRewardMaster = (struct UserEventCooltimeRewardMaster_o *)v13;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userEventCooltimeRewardMaster,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v20;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int size; // w8
  int v11; // w23
  int32_t v12; // w21
  int32_t Item; // w22
  const MethodInfo *v14; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10

  if ( (byte_4C22705 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4C22705 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_20;
  size = baseSpotIdList->fields._size;
  v11 = size - 1;
  if ( size >= 1 )
  {
    v12 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v12,
               (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      baseSpotIdList = (System_Collections_Generic_List_int__o *)EventInfoAreaImprovementControl__GetSpotData(
                                                                   this,
                                                                   Item,
                                                                   v14);
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
          if ( !v7 )
            break;
          items = v7->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          v18 = v7->fields._size;
          if ( (unsigned int)v18 >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = v18 + 1;
            items->m_Items[v18 + 1] = v12;
          }
        }
      }
      if ( v11 == v12 )
        return v7;
      baseSpotIdList = this->fields.baseSpotIdList;
      ++v12;
    }
    while ( baseSpotIdList );
LABEL_20:
    sub_1C3B9C0(baseSpotIdList, v8);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *spotDataList; // x0
  int size; // w8
  int v10; // w23
  int32_t v11; // w21

  if ( (byte_4C22702 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___, *(_QWORD *)&spotId);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v6);
    byte_4C22702 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
    return 0LL;
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_15;
  size = spotDataList->fields._size;
  v10 = size - 1;
  if ( size < 1 )
    return 0LL;
  v11 = 0;
  while ( 1 )
  {
    spotDataList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  spotDataList,
                                                                  v11,
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    if ( !spotDataList )
      goto LABEL_15;
    if ( LODWORD(spotDataList->fields._items) == spotId )
      break;
    if ( v10 == v11 )
      return 0LL;
    spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
    ++v11;
    if ( !spotDataList )
      goto LABEL_15;
  }
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
LABEL_15:
    sub_1C3B9C0(spotDataList, v7);
  return (EventInfoAreaImprovementControl_SpotData_o *)System_Collections_Generic_List_object___get_Item(
                                                         spotDataList,
                                                         v11,
                                                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
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
  __int64 v10; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-60h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4C22708 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4C22708 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_1C3B9C0(0LL, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    baseSpotIdList,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v9 = 0LL;
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v19,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C3B9C0(0LL, v10);
    current = v19.fields._current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v19.fields._current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_1C3B9C0(MaxLevelEntity, v14);
      v15 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v15 )
      {
        if ( !entity )
          sub_1C3B9C0(v15, v16);
        v9 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  NetworkManager_c *v8; // x0

  if ( (byte_4C226FF & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C226FF = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4C1C955 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0LL);
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
      sub_1C3B9C8(this, *(_QWORD *)&eventId);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v13; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  EventUiEntity_o *v22; // x20
  System_Action_o *v23; // x21

  if ( (byte_4C226F9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, entity);
    sub_1C3B764(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, v10);
    sub_1C3B764(&StringLiteral_19521/*"groupSeqIDs"*/, v11);
    byte_4C226F9 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.baseSpotIdList,
    (int64_t)SpotIdListByEventId,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.eventUiEntity;
  v23 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v22, v23, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_19521/*"groupSeqIDs"*/,
    0LL);
  eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.titleBgSprite;
  if ( !eventCooltimeRewardMaster
    || ((*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.thread_static_fields_offset)(
          eventCooltimeRewardMaster,
          *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.token),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerAttractionBgSprite,
          this->fields.customerAttractionBgName,
          0LL),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerAttractionBgSprite) == 0LL)
    || ((*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.thread_static_fields_offset)(
          eventCooltimeRewardMaster,
          *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.token),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.customerNumBgSprite,
          this->fields.customerNumBgName,
          0LL),
        (eventCooltimeRewardMaster = (EventCooltimeRewardMaster_o *)this->fields.customerNumBgSprite) == 0LL) )
  {
LABEL_9:
    sub_1C3B9C0(eventCooltimeRewardMaster, v13);
  }
  (*(void (__fastcall **)(EventCooltimeRewardMaster_o *, _QWORD))&eventCooltimeRewardMaster->klass[1]._2.thread_static_fields_offset)(
    eventCooltimeRewardMaster,
    *(_QWORD *)&eventCooltimeRewardMaster->klass[1]._2.token);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C22706 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, *(_QWORD *)&eventId);
    byte_4C22706 = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v6 = System_String__Concat_63368612(KEY_PREFIX_PARK_DATA, v5, 0LL);
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
      sub_1C3B9C0(IsNullOrEmpty, v9);
    v16 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24)
      || (IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL),
          this->fields.customerNum = IsNullOrEmpty,
          *(_DWORD *)(v16 + 24) <= 1u) )
    {
      sub_1C3B9C8(IsNullOrEmpty, v9);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x8
  int32_t size; // w2
  int v12; // w9
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  __int64 v18; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v21; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoAreaImprovementControl_o *v23; // x20
  int v24; // w23
  int v25; // w24
  EventInfoAreaImprovementControl_o *v26; // x21
  int32_t v27; // w22
  int32_t v28; // w0
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-34h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4C22701 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    this = (EventInfoAreaImprovementControl_o *)sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C22701 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  spotDataList = v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_29;
  size = spotDataList->fields._size;
  v12 = spotDataList->fields._version + 1;
  spotDataList->fields._size = 0;
  spotDataList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotDataList->fields._items, 0, size, 0LL);
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v14 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v15 = System_String__Concat_63368612(KEY_PREFIX_SPOT_DATA, v14, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoAreaImprovementControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v23 = this;
        v24 = (_DWORD)m_CancellationTokenSource - 1;
        if ( (int)m_CancellationTokenSource < 1 )
          return;
        v25 = 0;
        while ( 1 )
        {
          this = (EventInfoAreaImprovementControl_o *)*((_QWORD *)&v23->fields.datas + v25);
          if ( !this )
            break;
          this = (EventInfoAreaImprovementControl_o *)System_String__Split((System_String_o *)this, 0x3Au, 0, 0LL);
          if ( !this )
            break;
          v26 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (EventInfoAreaImprovementControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
            if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
            {
              v27 = (int)this;
              v28 = System_Int32__Parse(*(System_String_o **)&v26->fields.playType, 0LL);
              EventInfoAreaImprovementControl__AddSpotData(v3, v27, v28, v29);
              if ( v24 == v25 )
                return;
              if ( (unsigned int)++v25 < LODWORD(v23->fields.m_CancellationTokenSource) )
                continue;
            }
          }
          sub_1C3B9C8(this, *(_QWORD *)&eventId);
        }
      }
    }
LABEL_29:
    sub_1C3B9C0(this, *(_QWORD *)&eventId);
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
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v31,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = v3->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1C3B9C0(0LL, v18);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v31.fields._current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(v3, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v21);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v31,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
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
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v31; // x2
  _BOOL8 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v36; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C226FC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_int___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1C3B764(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__, v10);
    sub_1C3B764(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, v11);
    byte_4C226FC = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v12 = sub_1C3B9B0(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)callback, v21, v22, v23, v24, v25, v26);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v14);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v29);
  v13 = System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
          (const MethodInfo_2FFB6D0 *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v13 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_1C3B9C0(v13, v14);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    AddedEffectTargetIndexList,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v43,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v32 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_1C3B9C0(v32, v33);
    if ( v43.fields._current >= drawComponentList->max_length )
      sub_1C3B9C8(v32, v33);
    v36 = drawComponentList->m_Items[v43.fields._current];
    if ( !v36 )
      sub_1C3B9C0(v32, v33);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v36->fields._SpotId_k__BackingField,
      v36->fields._Level_k__BackingField,
      v34);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v43,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v31);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v37);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v38);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v39);
  UnityEngine_PlayerPrefs__Save(0LL);
  v40 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v12,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v40, v41);
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
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t v34; // w1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int v42; // w21
  int64_t v43; // x1
  struct EventInfoAreaImprovementSlideComponent_array *v44; // x8
  EventInfoAreaImprovementSlideComponent_o *v45; // x19
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_4C226FD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1C3B764(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__, v11);
    sub_1C3B764(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, v12);
    byte_4C226FD = 1;
  }
  v13 = sub_1C3B9B0(EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_DWORD *)(v13 + 24) = index;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = targetIndexList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)targetIndexList, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 48) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  Item = *(System_Collections_Generic_List_int__o **)(v13 + 40);
  if ( !Item )
    goto LABEL_13;
  v34 = *(_DWORD *)(v13 + 24);
  if ( Item->fields._size > v34 )
  {
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                       Item,
                                                       v34,
                                                       (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
    slideComponentList = this->fields.slideComponentList;
    if ( !slideComponentList )
      goto LABEL_13;
    v42 = (int)Item;
    if ( (unsigned int)Item >= slideComponentList->max_length )
      goto LABEL_14;
    v43 = (int64_t)slideComponentList->m_Items[(int)Item];
    *(_QWORD *)(v13 + 16) = v43;
    sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 16), v43, v35, v36, v37, v38, v39, v40);
    v44 = this->fields.slideComponentList;
    if ( !v44 )
      goto LABEL_13;
    if ( v42 + 1 >= v44->max_length )
LABEL_14:
      sub_1C3B9C8(Item, v15);
    v45 = v44->m_Items[v42 + 1];
    v46 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v13,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
      0LL);
    if ( v45 )
    {
      EventInfoAreaImprovementSlideComponent__SlideDown(v45, v46, v47);
      return;
    }
LABEL_13:
    sub_1C3B9C0(Item, v15);
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
  int64_t TotalCustomerAttractionRate; // x1
  const MethodInfo *v14; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = eventId;
  if ( (byte_4C22707 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, *(_QWORD *)&eventId);
    byte_4C22707 = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_63379872(v4, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_63368612(KEY_PREFIX_PARK_DATA, v9, 0LL);
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
  System_Collections_Generic_List_object__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v14; // x0
  System_Comparison_T__o *_9__40_0; // x21
  Il2CppObject *v16; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Text_StringBuilder_o *v24; // x20
  int32_t v25; // w21
  System_String_o *v26; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v28; // x0
  EventInfoAreaImprovementControl_o *v29; // x19
  System_String_o *v30; // x0
  int v31; // [xsp+4h] [xbp-4Ch] BYREF
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  v33 = eventId;
  if ( (byte_4C22704 & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v6);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v7);
    sub_1C3B764(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__, v8);
    sub_1C3B764(&EventInfoAreaImprovementControl___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v10);
    this = (EventInfoAreaImprovementControl_o *)sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v11);
    byte_4C22704 = 1;
  }
  v31 = 0;
  m_CachedPtr = 0;
  spotDataList = (System_Collections_Generic_List_object__o *)v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_25;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v14 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo);
      v14 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    _9__40_0 = (System_Comparison_T__o *)v14->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventInfoAreaImprovementControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__40_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo);
      System_Comparison_object____ctor(
        _9__40_0,
        v16,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        0LL);
      static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
        (int64_t)_9__40_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    System_Collections_Generic_List_object___Sort_57202480(
      spotDataList,
      _9__40_0,
      (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v24 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  if ( size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 )
      {
        if ( !v24 )
          break;
        System_Text_StringBuilder__Append_62529764(v24, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, 0LL);
      }
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v25,
                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v24 )
        break;
      System_Text_StringBuilder__Append_62529764(v24, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_62529764(v24, (System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, 0LL);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v25,
                                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      v31 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
      v26 = System_Int32__ToString((int32_t)&v31, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_62529764(v24, v26, 0LL);
      if ( size == ++v25 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C3B9C0(this, *(_QWORD *)&eventId);
  }
LABEL_23:
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v28 = System_Int32__ToString((int32_t)&v33, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_63368612(KEY_PREFIX_SPOT_DATA, v28, 0LL);
  if ( !v24 )
    goto LABEL_25;
  v29 = this;
  v30 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                             v24,
                             v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v29, v30, 0LL);
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
  int64_t v9; // x9
  int64_t v10; // x23
  UILabel_o *v11; // x20
  __int64 v12; // x22
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // [xsp+8h] [xbp-48h] BYREF
  __int64 v25; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C226FE & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, totalRate);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_5830/*"Element Start Tag"*/, v7);
    byte_4C226FE = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v9 = totalRate + 1000;
    v10 = (totalRate + 1000) / 100 % 10;
    v11 = this->fields.customerAttractionRateLabel;
    v12 = v9 / 1000;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5830/*"Element Start Tag"*/, 0LL);
    v25 = v12;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25, v14, v15, v16);
    v24 = v10;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v18, v19, v20);
    v22 = System_String__Format_63382984(v13, v17, v21, 0LL);
    if ( !v11
      || (UILabel__set_text(v11, v22, 0LL), (v22 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_1C3B9C0(v22, v23);
    }
    UILabel__SetCondensedScale((UILabel_o *)v22, this->fields.customerAttractionRateMaxWidth, 0, 0LL);
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
  System_String_o *v12; // x0
  BalanceConfig_c *v13; // x8
  System_String_o *v14; // x22
  int64_t UserPointEventMax; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int64_t v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C22700 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, point);
    sub_1C3B764(&long_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&System_Math_TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_5763/*"Effect/Dedicate"*/, v9);
    byte_4C22700 = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v11 = this->fields.customerNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"Effect/Dedicate"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    v14 = v12;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v22 = System_Math__Min_64188096(point, UserPointEventMax, 0LL);
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v16, v17, v18);
    v20 = System_String__Format(v14, v19, 0LL);
    if ( !v11 || (UILabel__set_text(v11, v20, 0LL), (v20 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_1C3B9C0(v20, v21);
    UILabel__SetCondensedScale((UILabel_o *)v20, this->fields.customerNumMaxWidth, 0, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__Setup(
        EventInfoAreaImprovementControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v15; // x2
  struct EventUiEntity_o *v16; // x8
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w9
  int v21; // w22
  int32_t v22; // w20
  EventInfoAreaImprovementDrawComponent_o *v23; // x21
  const MethodInfo *v24; // x2
  struct EventUiEntity_o *v25; // x8
  int32_t Item; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v28; // x1
  int Level; // w8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2

  if ( (byte_4C226FA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, entitys);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    byte_4C226FA = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)entitys,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v13);
    v16 = this->fields.eventUiEntity;
    if ( !v16 )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadParkData(this, v16->fields.eventId, v15);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v17);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_21;
    max_length = drawComponentList->max_length;
    v21 = max_length - 1;
    if ( max_length >= 1 )
    {
      v22 = 0;
      do
      {
        if ( v22 >= drawComponentList->max_length )
          sub_1C3B9C8(baseSpotIdList, v12);
        v23 = drawComponentList->m_Items[v22];
        if ( !v23 )
          break;
        baseSpotIdList = (struct System_Collections_Generic_List_int__o *)EventInfoUIBase__SetSpriteByLocalAtlas(
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
        if ( v22 >= baseSpotIdList->fields._size )
          Item = 0;
        else
          Item = System_Collections_Generic_List_int___get_Item(
                   baseSpotIdList,
                   v22,
                   (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
        v23->fields._SpotId_k__BackingField = Item;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, Item, v24);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v23->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v23, v28);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v23, v30);
        if ( v21 == v22 )
          goto LABEL_22;
        drawComponentList = this->fields.drawComponentList;
        ++v22;
      }
      while ( drawComponentList );
LABEL_21:
      sub_1C3B9C0(baseSpotIdList, v12);
    }
LABEL_22:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v18);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v31);
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
  int max_length; // w9
  int v7; // w23
  int32_t v8; // w20
  bool v9; // w22
  EventInfoAreaImprovementSlideComponent_o *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x22

  v3 = this;
  if ( (byte_4C226FB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (EventInfoAreaImprovementControl_o *)sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    byte_4C226FB = 1;
  }
  slideComponentList = v3->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_21;
  max_length = slideComponentList->max_length;
  v7 = max_length - 1;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v8 >= slideComponentList->max_length )
        sub_1C3B9C8(this, method);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
      if ( !this )
        break;
      v10 = slideComponentList->m_Items[v8];
      this = v8 >= SLODWORD(this->fields.m_CancellationTokenSource)
           ? 0LL
           : (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_int___get_Item(
                                                    (System_Collections_Generic_List_int__o *)this,
                                                    v8,
                                                    (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        break;
      v10->fields._SpotId_k__BackingField = (int)this;
      if ( v8 )
      {
        if ( v9 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v10, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
        }
      }
      SpotData = EventInfoAreaImprovementControl__GetSpotData(v3, v10->fields._SpotId_k__BackingField, v2);
      if ( SpotData )
        EventInfoAreaImprovementSlideComponent__SetupDisp(v10, v12);
      else
        EventInfoAreaImprovementSlideComponent__SetupHidden(v10, v12);
      if ( v7 == v8 )
        return;
      slideComponentList = v3->fields.slideComponentList;
      ++v8;
      v9 = SpotData != 0LL;
    }
    while ( slideComponentList );
LABEL_21:
    sub_1C3B9C0(this, method);
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
        sub_1C3B9C8(this, method);
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
    sub_1C3B9C0(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2270A & 1) == 0 )
  {
    sub_1C3B764(&EventInfoAreaImprovementControl___c_TypeInfo, v1);
    byte_4C2270A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoAreaImprovementControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoAreaImprovementControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(_4__this, method);
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
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  EventInfoAreaImprovementSlideComponent_o *slideComponent; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4C2270B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_1C3B764(
                                                                        &Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
                                                                        v4);
    byte_4C2270B = 1;
  }
  _9__1 = v3->fields.__9__1;
  slideComponent = v3->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !slideComponent )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, v4);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v4,
    this->fields.targetIndexList,
    this->fields.callback,
    v2);
}