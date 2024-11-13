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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B1699F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13063/*"SpotCooltime_ParkData_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13064/*"SpotCooltime_SpotData_"*/, v13, v14);
    byte_4B1699F = 1;
  }
  v15 = StringLiteral_13064/*"SpotCooltime_SpotData_"*/;
  this->fields.KEY_PREFIX_SPOT_DATA = (struct System_String_o *)StringLiteral_13064/*"SpotCooltime_SpotData_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.KEY_PREFIX_SPOT_DATA, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_13063/*"SpotCooltime_ParkData_"*/;
  this->fields.KEY_PREFIX_PARK_DATA = (struct System_String_o *)StringLiteral_13063/*"SpotCooltime_ParkData_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.KEY_PREFIX_PARK_DATA, v16, v17, v18, v19, v20, v21, v22);
  this->fields.customerAttractionRateMaxWidth = 126;
  this->fields.customerNumMaxWidth = 98;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData___ctor__);
  this->fields.spotDataList = (struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotDataList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v8; // x2
  int64_t v9; // x19
  System_Collections_Generic_List_object__o *spotDataList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B16999 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
      *(_QWORD *)&spotId,
      *(_QWORD *)&level);
    sub_1BCA7E0(&EventInfoAreaImprovementControl_SpotData_TypeInfo, v7, v8);
    byte_4B16999 = 1;
  }
  v9 = sub_1BCAA2C(EventInfoAreaImprovementControl_SpotData_TypeInfo, *(_QWORD *)&spotId, *(_QWORD *)&level, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = spotId,
        *(_DWORD *)(v9 + 20) = level,
        (spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList) == 0LL)
    || (items = spotDataList->fields._items,
        v19 = Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Add__,
        ++spotDataList->fields._version,
        !items) )
  {
    sub_1BCAA3C(spotDataList, v11);
  }
  size = spotDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      spotDataList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    spotDataList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), v9, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall EventInfoAreaImprovementControl__Awake(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1698E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventPointMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    byte_4B1698E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  this->fields.eventCooltimeRewardMaster = (struct EventCooltimeRewardMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventCooltimeRewardMaster,
    (int64_t)Master_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  this->fields.userEventCooltimeRewardMaster = (struct UserEventCooltimeRewardMaster_o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userEventCooltimeRewardMaster,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


System_Collections_Generic_List_int__o *__fastcall EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int size; // w8
  int v17; // w23
  int32_t v18; // w21
  int32_t Item; // w22
  const MethodInfo *v20; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10

  if ( (byte_4B1699B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B1699B = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_20;
  size = baseSpotIdList->fields._size;
  v17 = size - 1;
  if ( size >= 1 )
  {
    v18 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v18,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      baseSpotIdList = (System_Collections_Generic_List_int__o *)EventInfoAreaImprovementControl__GetSpotData(
                                                                   this,
                                                                   Item,
                                                                   v20);
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
          if ( !v13 )
            break;
          items = v13->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          v24 = v13->fields._size;
          if ( (unsigned int)v24 >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v18,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = v24 + 1;
            items->m_Items[v24 + 1] = v18;
          }
        }
      }
      if ( v17 == v18 )
        return v13;
      baseSpotIdList = this->fields.baseSpotIdList;
      ++v18;
    }
    while ( baseSpotIdList );
LABEL_20:
    sub_1BCAA3C(baseSpotIdList, v14);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
EventInfoAreaImprovementControl_SpotData_o *__fastcall EventInfoAreaImprovementControl__GetSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *spotDataList; // x0
  int size; // w8
  int v12; // w23
  int32_t v13; // w21

  if ( (byte_4B16998 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___,
      *(_QWORD *)&spotId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v7, v8);
    byte_4B16998 = 1;
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.spotDataList,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventInfoAreaImprovementControl_SpotData___) )
    return 0LL;
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_15;
  size = spotDataList->fields._size;
  v12 = size - 1;
  if ( size < 1 )
    return 0LL;
  v13 = 0;
  while ( 1 )
  {
    spotDataList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  spotDataList,
                                                                  v13,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
    if ( !spotDataList )
      goto LABEL_15;
    if ( LODWORD(spotDataList->fields._items) == spotId )
      break;
    if ( v12 == v13 )
      return 0LL;
    spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
    ++v13;
    if ( !spotDataList )
      goto LABEL_15;
  }
  spotDataList = (System_Collections_Generic_List_object__o *)this->fields.spotDataList;
  if ( !spotDataList )
LABEL_15:
    sub_1BCAA3C(spotDataList, v9);
  return (EventInfoAreaImprovementControl_SpotData_o *)System_Collections_Generic_List_object___get_Item(
                                                         spotDataList,
                                                         v13,
                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  int64_t v12; // x19
  __int64 v13; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  int32_t current; // w22
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-60h] BYREF
  EventCooltimeRewardEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B1699E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9, v10);
    byte_4B1699E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  entity = 0LL;
  baseSpotIdList = this->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    sub_1BCAA3C(0LL, *(_QWORD *)&eventId);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    baseSpotIdList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v12 = 0LL;
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = this->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1BCAA3C(0LL, v13);
    current = v22.fields._current;
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventId,
                       v22.fields._current,
                       0LL);
    if ( MaxLevelEntity )
    {
      if ( !this->fields.eventCooltimeRewardMaster )
        sub_1BCAA3C(MaxLevelEntity, v17);
      v18 = EventCooltimeRewardMaster__TryGetEntity(
              this->fields.eventCooltimeRewardMaster,
              &entity,
              eventId,
              current,
              MaxLevelEntity->fields.lv,
              0LL);
      if ( v18 )
      {
        if ( !entity )
          sub_1BCAA3C(v18, v19);
        v12 += entity->fields.addEventPointRate;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoAreaImprovementControl__GetUserEventPoint(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x1

  if ( (byte_4B16995 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    byte_4B16995 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
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
      sub_1BCAA44(this, *(_QWORD *)&eventId);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  EventCooltimeRewardMaster_o *eventCooltimeRewardMaster; // x0
  __int64 v15; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  EventUiEntity_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4B1698F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, v10, v11);
    sub_1BCA7E0(&StringLiteral_19343/*"event_bg_80384"*/, v12, v13);
    byte_4B1698F = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSpotIdList,
    (int64_t)SpotIdListByEventId,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = this->fields.eventUiEntity;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_EventInfoAreaImprovementControl__Initialization_b__25_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v24, v28, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.titleBgSprite,
    (System_String_o *)StringLiteral_19343/*"event_bg_80384"*/,
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
    sub_1BCAA3C(eventCooltimeRewardMaster, v15);
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
  if ( (byte_4B1699C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&eventId, method);
    byte_4B1699C = 1;
  }
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v5 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v6 = System_String__Concat_62401220(KEY_PREFIX_PARK_DATA, v5, 0LL);
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
      sub_1BCAA3C(IsNullOrEmpty, v9);
    v16 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24)
      || (IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL),
          this->fields.customerNum = IsNullOrEmpty,
          *(_DWORD *)(v16 + 24) <= 1u) )
    {
      sub_1BCAA44(IsNullOrEmpty, v9);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__o *spotDataList; // x8
  int32_t size; // w2
  int v18; // w9
  System_String_o *KEY_PREFIX_SPOT_DATA; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *String; // x20
  System_Collections_Generic_List_UserEventCooltimeRewardEntity__o *EntityListByEventId; // x0
  __int64 v24; // x1
  UserEventCooltimeRewardMaster_o *userEventCooltimeRewardMaster; // x0
  UserEventCooltimeRewardEntity_o *MaxLevelEntity; // x0
  const MethodInfo *v27; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  EventInfoAreaImprovementControl_o *v29; // x20
  int v30; // w23
  int v31; // w24
  EventInfoAreaImprovementControl_o *v32; // x21
  int32_t v33; // w22
  int32_t v34; // w0
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-34h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4B16997 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13);
    this = (EventInfoAreaImprovementControl_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B16997 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  spotDataList = v3->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_29;
  size = spotDataList->fields._size;
  v18 = spotDataList->fields._version + 1;
  spotDataList->fields._size = 0;
  spotDataList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)spotDataList->fields._items, 0, size, 0LL);
  KEY_PREFIX_SPOT_DATA = v3->fields.KEY_PREFIX_SPOT_DATA;
  v20 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v21 = System_String__Concat_62401220(KEY_PREFIX_SPOT_DATA, v20, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( String )
    {
      this = (EventInfoAreaImprovementControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
      if ( this )
      {
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v29 = this;
        v30 = (_DWORD)m_CancellationTokenSource - 1;
        if ( (int)m_CancellationTokenSource < 1 )
          return;
        v31 = 0;
        while ( 1 )
        {
          this = (EventInfoAreaImprovementControl_o *)*((_QWORD *)&v29->fields.datas + v31);
          if ( !this )
            break;
          this = (EventInfoAreaImprovementControl_o *)System_String__Split((System_String_o *)this, 0x3Au, 0, 0LL);
          if ( !this )
            break;
          v32 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (EventInfoAreaImprovementControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
            if ( LODWORD(v32->fields.m_CancellationTokenSource) > 1 )
            {
              v33 = (int)this;
              v34 = System_Int32__Parse(*(System_String_o **)&v32->fields.playType, 0LL);
              EventInfoAreaImprovementControl__AddSpotData(v3, v33, v34, v35);
              if ( v30 == v31 )
                return;
              if ( (unsigned int)++v31 < LODWORD(v29->fields.m_CancellationTokenSource) )
                continue;
            }
          }
          sub_1BCAA44(this, *(_QWORD *)&eventId);
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
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
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UserEventCooltimeRewardEntity___) )
    return;
  this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
  if ( !this )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    userEventCooltimeRewardMaster = v3->fields.userEventCooltimeRewardMaster;
    if ( !userEventCooltimeRewardMaster )
      sub_1BCAA3C(0LL, v24);
    MaxLevelEntity = UserEventCooltimeRewardMaster__GetMaxLevelEntity(
                       userEventCooltimeRewardMaster,
                       eventIda,
                       v37.fields._current,
                       0LL);
    if ( MaxLevelEntity )
      EventInfoAreaImprovementControl__AddSpotData(v3, MaxLevelEntity->fields.spotId, MaxLevelEntity->fields.lv, v27);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall EventInfoAreaImprovementControl__OnDestroy(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w22
  const MethodInfo *v37; // x1
  System_Collections_Generic_List_int__o *AddedEffectTargetIndexList; // x21
  const MethodInfo *v39; // x2
  _BOOL8 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  EventInfoAreaImprovementDrawComponent_o *v44; // x8
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x22
  const MethodInfo *v52; // x4
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B16992 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__, v16, v17);
    sub_1BCA7E0(&EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, v18, v19);
    byte_4B16992 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v20 = sub_1BCAA2C(EventInfoAreaImprovementControl___c__DisplayClass31_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  eventId = eventUiEntity->fields.eventId;
  EventInfoAreaImprovementControl__UpdateDrawComponentList(this, v22);
  AddedEffectTargetIndexList = EventInfoAreaImprovementControl__GetAddedEffectTargetIndexList(this, v37);
  v21 = System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)AddedEffectTargetIndexList,
          (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
  if ( !v21 )
    goto LABEL_14;
  if ( !AddedEffectTargetIndexList )
LABEL_18:
    sub_1BCAA3C(v21, v22);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    AddedEffectTargetIndexList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v40 )
      break;
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      sub_1BCAA3C(v40, v41);
    if ( v54.fields._current >= drawComponentList->max_length )
      sub_1BCAA44(v40, v41);
    v44 = drawComponentList->m_Items[v54.fields._current];
    if ( !v44 )
      sub_1BCAA3C(v40, v41);
    EventInfoAreaImprovementControl__AddSpotData(
      this,
      v44->fields._SpotId_k__BackingField,
      v44->fields._Level_k__BackingField,
      v42);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_14:
  EventInfoAreaImprovementControl__SaveSpotData(this, eventId, v39);
  this->fields.customerNum = EventInfoAreaImprovementControl__GetUserEventTotalPoint(this, eventId, v45);
  this->fields.customerAttractionRate = EventInfoAreaImprovementControl__GetTotalCustomerAttractionRate(
                                          this,
                                          eventId,
                                          v46);
  EventInfoAreaImprovementControl__SaveParkData(this, eventId, v47);
  UnityEngine_PlayerPrefs__Save(0LL);
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v20,
    Method_EventInfoAreaImprovementControl___c__DisplayClass31_0__PlayAreaAddAnim_b__0__,
    0LL);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(this, 0, AddedEffectTargetIndexList, v51, v52);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  System_Collections_Generic_List_int__o *Item; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t v38; // w1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int v46; // w21
  int64_t v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  struct EventInfoAreaImprovementSlideComponent_array *v50; // x8
  EventInfoAreaImprovementSlideComponent_o *v51; // x19
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x2

  if ( (byte_4B16993 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, targetIndexList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__, v13, v14);
    sub_1BCA7E0(&EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo, v15, v16);
    byte_4B16993 = 1;
  }
  v17 = sub_1BCAA2C(
          EventInfoAreaImprovementControl___c__DisplayClass32_0_TypeInfo,
          *(_QWORD *)&index,
          targetIndexList,
          callback);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_DWORD *)(v17 + 24) = index;
  *(_QWORD *)(v17 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = targetIndexList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)targetIndexList, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v17 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)callback, v32, v33, v34, v35, v36, v37);
  Item = *(System_Collections_Generic_List_int__o **)(v17 + 40);
  if ( !Item )
    goto LABEL_13;
  v38 = *(_DWORD *)(v17 + 24);
  if ( Item->fields._size > v38 )
  {
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                       Item,
                                                       v38,
                                                       (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    slideComponentList = this->fields.slideComponentList;
    if ( !slideComponentList )
      goto LABEL_13;
    v46 = (int)Item;
    if ( (unsigned int)Item >= slideComponentList->max_length )
      goto LABEL_14;
    v47 = (int64_t)slideComponentList->m_Items[(int)Item];
    *(_QWORD *)(v17 + 16) = v47;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), v47, v39, v40, v41, v42, v43, v44);
    v50 = this->fields.slideComponentList;
    if ( !v50 )
      goto LABEL_13;
    if ( v46 + 1 >= v50->max_length )
LABEL_14:
      sub_1BCAA44(Item, v19);
    v51 = v50->m_Items[v46 + 1];
    v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v48, v49);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v17,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__0__,
      0LL);
    if ( v51 )
    {
      EventInfoAreaImprovementSlideComponent__SlideDown(v51, v52, v53);
      return;
    }
LABEL_13:
    sub_1BCAA3C(Item, v19);
  }
  ActionExtensions__Call(*(System_Action_o **)(v17 + 48), 0LL);
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B1699D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_863/*","*/, *(_QWORD *)&eventId, method);
    byte_4B1699D = 1;
  }
  v4 = System_Int64__ToString((int64_t)&this->fields.customerNum, 0LL);
  v5 = System_Int64__ToString((int64_t)&this->fields.customerAttractionRate, 0LL);
  v6 = System_String__Concat_62412480(v4, (System_String_o *)StringLiteral_863/*","*/, v5, 0LL);
  KEY_PREFIX_PARK_DATA = this->fields.KEY_PREFIX_PARK_DATA;
  v8 = v6;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_62401220(KEY_PREFIX_PARK_DATA, v9, 0LL);
  UnityEngine_PlayerPrefs__SetString(v10, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImprovementControl__SaveSpotData(
        EventInfoAreaImprovementControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoAreaImprovementControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *spotDataList; // x20
  int size; // w23
  EventInfoAreaImprovementControl___c_c *v23; // x0
  System_Comparison_T__o *_9__40_0; // x21
  Il2CppObject *v25; // x22
  struct EventInfoAreaImprovementControl___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Text_StringBuilder_o *v33; // x20
  int32_t v34; // w21
  System_String_o *v35; // x0
  System_String_o *KEY_PREFIX_SPOT_DATA; // x19
  System_String_o *v37; // x0
  EventInfoAreaImprovementControl_o *v38; // x19
  System_String_o *v39; // x0
  int v40; // [xsp+4h] [xbp-4Ch] BYREF
  intptr_t m_CachedPtr; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  v42 = eventId;
  if ( (byte_4B1699A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__, v13, v14);
    sub_1BCA7E0(&EventInfoAreaImprovementControl___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    this = (EventInfoAreaImprovementControl_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, v19, v20);
    byte_4B1699A = 1;
  }
  v40 = 0;
  m_CachedPtr = 0;
  spotDataList = (System_Collections_Generic_List_object__o *)v4->fields.spotDataList;
  if ( !spotDataList )
    goto LABEL_25;
  size = spotDataList->fields._size;
  if ( size > 1 )
  {
    v23 = EventInfoAreaImprovementControl___c_TypeInfo;
    if ( !EventInfoAreaImprovementControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAreaImprovementControl___c_TypeInfo, *(_QWORD *)&eventId);
      v23 = EventInfoAreaImprovementControl___c_TypeInfo;
    }
    _9__40_0 = (System_Comparison_T__o *)v23->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23, *(_QWORD *)&eventId);
        v23 = EventInfoAreaImprovementControl___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__40_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                             System_Comparison_EventInfoAreaImprovementControl_SpotData__TypeInfo,
                                             *(_QWORD *)&eventId,
                                             method,
                                             v3);
      System_Comparison_object____ctor(
        _9__40_0,
        v25,
        Method_EventInfoAreaImprovementControl___c__SaveSpotData_b__40_0__,
        0LL);
      static_fields = EventInfoAreaImprovementControl___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Comparison_EventInfoAreaImprovementControl_SpotData__o *)_9__40_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
        (int64_t)_9__40_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      spotDataList,
      _9__40_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__Sort__);
  }
  v33 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Text_StringBuilder___ctor(v33, 0LL);
  if ( size >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 )
      {
        if ( !v33 )
          break;
        System_Text_StringBuilder__Append_61563116(v33, (System_String_o *)StringLiteral_863/*","*/, 0LL);
      }
      this = (EventInfoAreaImprovementControl_o *)v4->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v34,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoAreaImprovementControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v33 )
        break;
      System_Text_StringBuilder__Append_61563116(v33, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_61563116(v33, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
      this = (EventInfoAreaImprovementControl_o *)v4->fields.spotDataList;
      if ( !this )
        break;
      this = (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    v34,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoAreaImprovementControl_SpotData__get_Item__);
      if ( !this )
        break;
      v40 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
      v35 = System_Int32__ToString((int32_t)&v40, 0LL);
      this = (EventInfoAreaImprovementControl_o *)System_Text_StringBuilder__Append_61563116(v33, v35, 0LL);
      if ( size == ++v34 )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
LABEL_23:
  KEY_PREFIX_SPOT_DATA = v4->fields.KEY_PREFIX_SPOT_DATA;
  v37 = System_Int32__ToString((int32_t)&v42, 0LL);
  this = (EventInfoAreaImprovementControl_o *)System_String__Concat_62401220(KEY_PREFIX_SPOT_DATA, v37, 0LL);
  if ( !v33 )
    goto LABEL_25;
  v38 = this;
  v39 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v33->klass->vtable._3_ToString.method)(
                             v33,
                             v33->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v38, v39, 0LL);
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t totalRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *customerAttractionRateLabel; // x21
  __int64 v12; // x1
  int64_t v13; // x9
  int64_t v14; // x23
  UILabel_o *v15; // x20
  __int64 v16; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int64_t v22; // [xsp+8h] [xbp-48h] BYREF
  __int64 v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B16994 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, totalRate, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5795/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, v9, v10);
    byte_4B16994 = 1;
  }
  customerAttractionRateLabel = (UnityEngine_Object_o *)this->fields.customerAttractionRateLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, totalRate);
  if ( !UnityEngine_Object__op_Equality(customerAttractionRateLabel, 0LL, 0LL) )
  {
    v13 = totalRate + 1000;
    v14 = (totalRate + 1000) / 100 % 10;
    v15 = this->fields.customerAttractionRateLabel;
    v16 = v13 / 1000;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5795/*"EVENT_SPOT_COOLTIME_CUSTOMER_RATE_FORMAT"*/, 0LL);
    v23 = v16;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
    v22 = v14;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22);
    v20 = System_String__Format_62415592(v17, v18, v19, 0LL);
    if ( !v15
      || (UILabel__set_text(v15, v20, 0LL), (v20 = (System_String_o *)this->fields.customerAttractionRateLabel) == 0LL) )
    {
      sub_1BCAA3C(v20, v21);
    }
    UILabel__SetCondensedScale((UILabel_o *)v20, this->fields.customerAttractionRateMaxWidth, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetCustomerNumLabel(
        EventInfoAreaImprovementControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *customerNumLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x21
  System_String_o *v18; // x0
  __int64 v19; // x1
  BalanceConfig_c *v20; // x8
  System_String_o *v21; // x22
  int64_t UserPointEventMax; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  int64_t v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16996 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, point, method);
    sub_1BCA7E0(&long_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Math_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v13, v14);
    byte_4B16996 = 1;
  }
  customerNumLabel = (UnityEngine_Object_o *)this->fields.customerNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(customerNumLabel, 0LL, 0LL) )
  {
    v17 = this->fields.customerNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v20 = BalanceConfig_TypeInfo;
    v21 = v18;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
      v20 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v20->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
    v26 = System_Math__Min_63220536(point, UserPointEventMax, 0LL);
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
    v24 = System_String__Format(v21, v23, 0LL);
    if ( !v17 || (UILabel__set_text(v17, v24, 0LL), (v24 = (System_String_o *)this->fields.customerNumLabel) == 0LL) )
      sub_1BCAA3C(v24, v25);
    UILabel__SetCondensedScale((UILabel_o *)v24, this->fields.customerNumMaxWidth, 0LL);
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
  __int64 v11; // x2
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v16; // x2
  struct EventUiEntity_o *v17; // x8
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct EventInfoAreaImprovementDrawComponent_array *drawComponentList; // x8
  int max_length; // w9
  int v22; // w22
  int32_t v23; // w20
  EventInfoAreaImprovementDrawComponent_o *v24; // x21
  const MethodInfo *v25; // x2
  struct EventUiEntity_o *v26; // x8
  int32_t Item; // w1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x0
  const MethodInfo *v29; // x1
  int Level; // w8
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2

  if ( (byte_4B16990 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, entitys, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11);
    byte_4B16990 = 1;
  }
  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1BCA784(
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
    EventInfoAreaImprovementControl__LoadSpotData(this, eventUiEntity->fields.eventId, v14);
    v17 = this->fields.eventUiEntity;
    if ( !v17 )
      goto LABEL_21;
    EventInfoAreaImprovementControl__LoadParkData(this, v17->fields.eventId, v16);
    EventInfoAreaImprovementControl__SetupSlideComponentList(this, v18);
    drawComponentList = this->fields.drawComponentList;
    if ( !drawComponentList )
      goto LABEL_21;
    max_length = drawComponentList->max_length;
    v22 = max_length - 1;
    if ( max_length >= 1 )
    {
      v23 = 0;
      do
      {
        if ( v23 >= drawComponentList->max_length )
          sub_1BCAA44(baseSpotIdList, v13);
        v24 = drawComponentList->m_Items[v23];
        if ( !v24 )
          break;
        baseSpotIdList = (struct System_Collections_Generic_List_int__o *)EventInfoUIBase__SetSpriteByLocalAtlas(
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
        if ( v23 >= baseSpotIdList->fields._size )
          Item = 0;
        else
          Item = System_Collections_Generic_List_int___get_Item(
                   baseSpotIdList,
                   v23,
                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        v24->fields._SpotId_k__BackingField = Item;
        SpotData = EventInfoAreaImprovementControl__GetSpotData(this, Item, v25);
        if ( SpotData )
          Level = SpotData->fields.Level;
        else
          Level = 1;
        v24->fields._Level_k__BackingField = Level;
        EventInfoAreaImprovementDrawComponent__UpdateLevelLabel(v24, v29);
        EventInfoAreaImprovementDrawComponent__UpdateAreaName(v24, v31);
        if ( v22 == v23 )
          goto LABEL_22;
        drawComponentList = this->fields.drawComponentList;
        ++v23;
      }
      while ( drawComponentList );
LABEL_21:
      sub_1BCAA3C(baseSpotIdList, v13);
    }
LABEL_22:
    EventInfoAreaImprovementControl__SetCustomerNumLabel(this, this->fields.customerNum, v19);
    EventInfoAreaImprovementControl__SetCustomerAttractionRateLabel(this, this->fields.customerAttractionRate, v32);
  }
}


void __fastcall EventInfoAreaImprovementControl__SetupSlideComponentList(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoAreaImprovementControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventInfoAreaImprovementSlideComponent_array *slideComponentList; // x8
  int max_length; // w9
  int v8; // w23
  int32_t v9; // w20
  bool v10; // w22
  EventInfoAreaImprovementSlideComponent_o *v11; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  EventInfoAreaImprovementControl_SpotData_o *SpotData; // x22

  v3 = this;
  if ( (byte_4B16991 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    this = (EventInfoAreaImprovementControl_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                  v4,
                                                  v5);
    byte_4B16991 = 1;
  }
  slideComponentList = v3->fields.slideComponentList;
  if ( !slideComponentList )
    goto LABEL_21;
  max_length = slideComponentList->max_length;
  v8 = max_length - 1;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v9 >= slideComponentList->max_length )
        sub_1BCAA44(this, method);
      this = (EventInfoAreaImprovementControl_o *)v3->fields.baseSpotIdList;
      if ( !this )
        break;
      v11 = slideComponentList->m_Items[v9];
      this = v9 >= SLODWORD(this->fields.m_CancellationTokenSource)
           ? 0LL
           : (EventInfoAreaImprovementControl_o *)System_Collections_Generic_List_int___get_Item(
                                                    (System_Collections_Generic_List_int__o *)this,
                                                    v9,
                                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v11 )
        break;
      v11->fields._SpotId_k__BackingField = (int)this;
      if ( v9 )
      {
        if ( v10 )
        {
          EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(v11, method);
        }
        else
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
        }
      }
      SpotData = EventInfoAreaImprovementControl__GetSpotData(v3, v11->fields._SpotId_k__BackingField, v2);
      if ( SpotData )
        EventInfoAreaImprovementSlideComponent__SetupDisp(v11, v13);
      else
        EventInfoAreaImprovementSlideComponent__SetupHidden(v11, v13);
      if ( v8 == v9 )
        return;
      slideComponentList = v3->fields.slideComponentList;
      ++v9;
      v10 = SpotData != 0LL;
    }
    while ( slideComponentList );
LABEL_21:
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
}


void __fastcall EventInfoAreaImprovementControl___Initialization_b__25_0(
        EventInfoAreaImprovementControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B169A0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoAreaImprovementControl___c_TypeInfo, v1, v2);
    byte_4B169A0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoAreaImprovementControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoAreaImprovementControl___c_TypeInfo->static_fields->__9 = (struct EventInfoAreaImprovementControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoAreaImprovementControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x3
  EventInfoAreaImprovementControl___c__DisplayClass32_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  EventInfoAreaImprovementSlideComponent_o *slideComponent; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B169A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventInfoAreaImprovementControl___c__DisplayClass32_0_o *)sub_1BCA7E0(
                                                                        &Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
                                                                        v5,
                                                                        v6);
    byte_4B169A1 = 1;
  }
  _9__1 = v4->fields.__9__1;
  slideComponent = v4->fields.slideComponent;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventInfoAreaImprovementControl___c__DisplayClass32_0__PlayAreaAddAnimSub_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !slideComponent )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, v4);
  EventInfoAreaImprovementControl__PlayAreaAddAnimSub(
    _4__this,
    v4,
    this->fields.targetIndexList,
    this->fields.callback,
    v2);
}