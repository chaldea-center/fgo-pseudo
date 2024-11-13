void __fastcall EventInfoSpotCooltimeRewardReceiveButton___ctor(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


bool __fastcall EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v18; // x1
  UserServantMaster_o *v19; // x20
  bool v20; // w19
  __int64 v21; // x2
  __int64 v22; // x3
  CommonUI_o *v23; // x19
  int32_t v24; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v26; // x22
  Il2CppObject *v27; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17817 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v12, v13);
    sub_1BCA7E0(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v14, v15);
    byte_4B17817 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v19 = (UserServantMaster_o *)Instance;
  v20 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v19, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v23 = (CommonUI_o *)Instance;
      v24 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v18);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v26 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
      if ( !v26 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v18);
          Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
        }
        v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v26 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                v18,
                                                                v21,
                                                                v22);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v26,
          v27,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v26;
        sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__35_0, (int64_t)v26, v29, v30, v31, v32, v33, v34);
      }
      if ( v23 )
      {
        CommonUI__OpenSvtFrameShortDlg(v23, v24, svtKeep, 0, 1, v26, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(Instance, v18);
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_4B1780F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&eventId, method);
    byte_4B1780F = 1;
  }
  EventInfo = EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(this, eventId, method);
  p_ButtonSpriteName = &EventInfo->fields.ButtonSpriteName;
  if ( !EventInfo )
    p_ButtonSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_ButtonSpriteName;
}


int32_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetCommonReleaseIdByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0

  EventInfo = EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(this, eventId, method);
  if ( EventInfo )
    LODWORD(EventInfo) = EventInfo->fields.CommonReleaseId;
  return (int)EventInfo;
}


int64_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_DateTime_o v4; // 0:x0.8

  if ( (byte_4B17818 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17818 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v4.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  return NetworkManager__getTime_39269384(v4, 0LL) - 1;
}


// local variable allocation has failed, the output may be wrong!
EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeRewardReceiveButton_EventInfo_array *eventInfoList; // x8
  int max_length; // w9
  int v5; // w10

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (EventInfoSpotCooltimeRewardReceiveButton_o *)eventInfoList->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == eventId )
        return (EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
  return 0LL;
}


int32_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoSpotCooltimeRewardReceiveButton_o *v3; // x19
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
  Il2CppObject *Master_object; // x21
  __int64 Item; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w28
  UserEventCooltimeRewardMaster_o *v20; // x22
  int32_t v21; // w23
  int v22; // w26
  int v23; // w27
  char v24; // w20
  int32_t v25; // w24
  UserEventCooltimeRewardEntity_o *v26; // x25
  const MethodInfo *v27; // x4
  __int64 v28; // x24
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-70h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4B17813 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v10, v11);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B17813 = 1;
  }
  entity = 0LL;
  if ( !v3->fields.mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v3->fields.eventSpotCooltimeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0LL, 0LL) )
    {
      Item = (__int64)v3->fields.eventSpotCooltimeComponent;
      if ( !Item )
        goto LABEL_33;
      return EventSpotCooltimeComponent__GetReceivableRewardState((EventSpotCooltimeComponent_o *)Item, 0LL);
    }
    return 0;
  }
  if ( !v3->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v3->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_33;
  size = baseSpotIdList->fields._size;
  if ( size >= 1 )
  {
    v20 = (UserEventCooltimeRewardMaster_o *)Item;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v21,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v20 )
        break;
      v25 = Item;
      Item = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v20, v3->fields.eventId, Item, 0LL);
      if ( Item )
      {
        if ( !Master_object )
          break;
        v26 = (UserEventCooltimeRewardEntity_o *)Item;
        Item = EventCooltimeRewardMaster__TryGetEntity(
                 (EventCooltimeRewardMaster_o *)Master_object,
                 &entity,
                 v3->fields.eventId,
                 v25,
                 *(_DWORD *)(Item + 32),
                 0LL);
        if ( (Item & 1) != 0 )
        {
          Item = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                   (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                   entity,
                   v26,
                   CurrentTime,
                   v27);
          if ( Item >= 1 )
          {
            v28 = Item;
            Item = (__int64)entity;
            if ( !entity )
              break;
            Item = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( Item )
            {
              Item = GiftEntity__isQp((GiftEntity_o *)Item, 0LL);
              v23 |= Item ^ 1;
            }
            if ( !entity )
              break;
            v24 = 1;
            v22 |= v28 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( size == ++v21 )
        goto LABEL_30;
      baseSpotIdList = v3->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_33:
    sub_1BCAA3C(Item, v17);
  }
  v22 = 0;
  v23 = 0;
  v24 = 0;
LABEL_30:
  if ( ((v22 | v23) & 1) != 0 )
    return 2;
  else
    return v24 & 1;
}


int64_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        EventCooltimeRewardEntity_o *cooltimeRewardEntity,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        int64_t currentTime,
        const MethodInfo *method)
{
  int64_t v6; // x20
  int64_t upperLimitGiftNum; // x8
  int64_t v8; // x9
  int32_t RewardUnitTime; // w0

  if ( !userCooltimeRewardEntity || !cooltimeRewardEntity )
    sub_1BCAA3C(this, cooltimeRewardEntity);
  if ( cooltimeRewardEntity->fields.cooltime < 1 || cooltimeRewardEntity->fields.upperLimitGiftNum < 1 )
    return 0LL;
  v6 = (currentTime - userCooltimeRewardEntity->fields.collectedAt) & ~((currentTime
                                                                       - userCooltimeRewardEntity->fields.collectedAt) >> 63);
  if ( EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(cooltimeRewardEntity, 0LL) )
  {
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    v8 = v6 * upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
  }
  else
  {
    RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime(cooltimeRewardEntity, 0LL);
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    v8 = v6 / RewardUnitTime;
  }
  if ( v8 <= upperLimitGiftNum )
    return v8;
  else
    return upperLimitGiftNum;
}


bool __fastcall EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoSpotCooltimeRewardReceiveButton_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  int64_t CurrentTime; // x20
  Il2CppObject *Master_object; // x21
  void *Item; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v19; // x22
  int32_t v20; // w23
  int32_t v21; // w24
  UserEventCooltimeRewardEntity_o *v22; // x25
  const MethodInfo *v23; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x24
  const MethodInfo *v25; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4B17816 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1BCA7E0(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v10,
                                                           v11);
    byte_4B17816 = 1;
  }
  entity = 0LL;
  if ( !v3->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v3->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_17:
    sub_1BCAA3C(Item, v16);
  size = baseSpotIdList->fields._size;
  if ( size < 1 )
    return 0;
  v19 = (UserEventCooltimeRewardMaster_o *)Item;
  v20 = 0;
  while ( 1 )
  {
    Item = (void *)System_Collections_Generic_List_int___get_Item(
                     baseSpotIdList,
                     v20,
                     (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v19 )
      goto LABEL_17;
    v21 = (int)Item;
    Item = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v19, v3->fields.eventId, (int32_t)Item, 0LL);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_17;
      v22 = (UserEventCooltimeRewardEntity_o *)Item;
      Item = (void *)EventCooltimeRewardMaster__TryGetEntity(
                       (EventCooltimeRewardMaster_o *)Master_object,
                       &entity,
                       v3->fields.eventId,
                       v21,
                       *((_DWORD *)Item + 8),
                       0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                                                                                entity,
                                                                                v22,
                                                                                CurrentTime,
                                                                                v23);
        Item = (void *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(ReceivedRewardUnitNum, entity, v25);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)Item & 1) != 0 )
          return 1;
      }
    }
    if ( size == ++v20 )
      return 0;
    baseSpotIdList = v3->fields.baseSpotIdList;
    if ( !baseSpotIdList )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Initialization(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        EventSpotCooltimeComponent_o *component,
        AssetData_o *asset,
        int32_t mode,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1

  if ( (byte_4B1780B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, *(_QWORD *)&eventId, component);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_11512/*"RewardButtonBlink"*/, v16, v17);
    byte_4B1780B = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSpotCooltimeComponent,
    (int64_t)component,
    (int64_t)component,
    (int32_t)asset,
    *(System_String_o **)&mode,
    (BattleSetupInfo_o *)dialogParent,
    (FollowerInfo_o *)method,
    v7);
  this->fields.mode = mode;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v20);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          (EventCooltimeRewardMaster_o *)Master_object,
                          eventId,
                          0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSpotIdList,
    (int64_t)SpotIdListByEventId,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11512/*"RewardButtonBlink"*/,
    v28);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v29);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v30);
}


bool __fastcall EventInfoSpotCooltimeRewardReceiveButton__IsButtonActiveState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.buttonState - 1) < 2;
}


bool __fastcall EventInfoSpotCooltimeRewardReceiveButton__IsPlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t buttonState; // w8
  bool v4; // w9
  bool v5; // w8

  buttonState = this->fields.buttonState;
  v4 = (unsigned int)(buttonState - 1) < 2;
  v5 = buttonState == 2;
  if ( mode == 1 )
    return v4;
  else
    return v5;
}


bool __fastcall EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        EventCooltimeRewardEntity_o *cooltimeRewardEntity,
        const MethodInfo *method)
{
  GiftEntity_o *GiftEntity; // x0

  return cooltimeRewardEntity
      && (GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(cooltimeRewardEntity, 0LL)) != 0LL
      && GiftEntity__checkGiftType(GiftEntity, 1, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__OnClickButton(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned int v12; // w8
  bool v13; // w20
  _QWORD *v14; // x8
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v18; // x1
  EventSpotCooltimeComponent_o *v19; // x0
  bool v20; // w20
  _QWORD *v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  EventSpotCooltimeComponent_o *v24; // x20
  int32_t eventId; // w19
  System_Action_bool__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  _QWORD *v35; // x0
  int32_t v36; // w1

  if ( (byte_4B1780E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v8, v9);
    sub_1BCA7E0(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10, v11);
    byte_4B1780E = 1;
  }
  v12 = this->fields.buttonState - 1;
  if ( this->fields.mode == 1 )
  {
    if ( v12 <= 1 )
    {
      v13 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
      v14 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
      if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      if ( v13 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
        EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v16);
        return;
      }
      goto LABEL_28;
    }
LABEL_25:
    v35 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1BCA7F8(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
    v36 = 2;
    goto LABEL_29;
  }
  if ( v12 > 1 )
    goto LABEL_25;
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0LL, 0LL) )
    goto LABEL_25;
  v19 = this->fields.eventSpotCooltimeComponent;
  if ( !v19 )
LABEL_30:
    sub_1BCAA3C(v19, v18);
  v20 = EventSpotCooltimeComponent__CheckServantSpaceShortage(v19, 0LL);
  v21 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  if ( v20 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
    v24 = this->fields.eventSpotCooltimeComponent;
    eventId = this->fields.eventId;
    v19 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v18);
      v19 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    }
    monitor = (System_Action_bool__o *)v19[1].fields.spotCooltimeList->monitor;
    if ( !monitor )
    {
      if ( !v19[2].fields.m_CachedPtr )
      {
        j_il2cpp_runtime_class_init_0(v19, v18);
        v19 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      klass = (Il2CppObject *)v19[1].fields.spotCooltimeList->klass;
      monitor = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v18, v22, v23);
      System_Action_bool____ctor(
        monitor,
        klass,
        Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
        0LL);
      static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = monitor;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)monitor,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( v24 )
    {
      EventSpotCooltimeComponent__ReceiveCooltimeReward(v24, eventId, monitor, 0LL);
      return;
    }
    goto LABEL_30;
  }
LABEL_28:
  v36 = 0;
LABEL_29:
  OverwriteAssetSoundName__PlaySystemSe(v15, v36, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B17811 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17811 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v6 = this->fields.buttonEffectPrefab;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4B17814 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B17814 = 1;
  }
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&eventId,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v15);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  Il2CppObject *v26; // x20
  Il2CppObject ***v27; // x0
  __int64 v28; // x1
  Il2CppObject ***v29; // x20
  Il2CppObject **v30; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject **v36; // x8
  SpotCooltimeRewardDialog_o *v37; // x19
  BattleDropItem_array *v38; // x20
  System_Action_o *v39; // x21
  Il2CppObject *v40; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B17815 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v13, v14);
    sub_1BCA7E0(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_17045/*"ar192"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v23, v24);
    byte_4B17815 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v26 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v25);
    v27 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                              v26,
                              (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v27 )
    {
      v29 = v27;
      if ( !*((_DWORD *)v27 + 6) )
        goto LABEL_26;
      v30 = v27[4];
      if ( v30 && v30[2] )
      {
        rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        if ( UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        {
          v32 = Method_EventInfoSpotCooltimeRewardReceiveButton_Response__;
          if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__ + 83) & 2) != 0 )
            v32 = (_QWORD *)sub_1BCA7F8(Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
          v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
          v27 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v33, (System_String_o *)StringLiteral_17045/*"ar192"*/, 0LL);
          if ( *((_DWORD *)v29 + 6) )
          {
            v36 = v29[4];
            if ( !v36 )
              goto LABEL_27;
            v37 = this->fields.rewardDialog;
            v38 = (BattleDropItem_array *)v36[2];
            v27 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v28);
              v27 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            v39 = (System_Action_o *)v27[23][2];
            if ( !v39 )
            {
              if ( !*((_DWORD *)v27 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v27, v28);
                v27 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
              }
              v40 = *v27[23];
              v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v34, v35);
              System_Action___ctor(
                v39,
                v40,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              static_fields->__9__31_0 = v39;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
                (int64_t)v39,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
            }
            if ( !v37 )
LABEL_27:
              sub_1BCAA3C(v27, v28);
            SpotCooltimeRewardDialog__Open(v37, v38, v39, 0LL);
            return;
          }
LABEL_26:
          sub_1BCAA44(v27, v28);
        }
      }
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        System_String_o *prefabName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o **p_buttonEffectPrefab; // x20
  UnityEngine_Object_o *buttonEffectPrefab; // x23
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B17810 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, asset, prefabName);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B17810 = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, asset);
  if ( UnityEngine_Object__op_Inequality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v14 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive(v14, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1BCAA3C(v14, v13);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                asset,
                                prefabName,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Object_object__49237568,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)v14 & 1) == 0 )
    {
      if ( !Object_object__49237568 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__49237568, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v18 = UnityEngine_Object__Instantiate_object_(
              Object_object__49237568,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v18;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.buttonEffectPrefab,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v25 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_34336992(v25, gameObject, 0LL);
        v14 = this->fields.buttonEffectPrefab;
        if ( v14 )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *ButtonSpriteNameByEventId; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v13; // x20
  __int64 v14; // x1
  UISprite_o *v15; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4B1780D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12355/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v8, v9);
    byte_4B1780D = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v13 = ButtonSpriteNameByEventId;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v13, 0LL) )
  {
    v15 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
    AtlasManager__SetEventUI(v15, v13, 0LL);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12355/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v17, 0LL), (v17 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_1BCAA3C(v17, v18);
  }
  UILabel__SetCondensedScale((UILabel_o *)v17, this->fields.buttonTextMaxWidth, 0LL);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v19);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v21);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  PartyOrganizationUtility_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v16; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  __int64 v24; // x1
  Il2CppObject *Component_object; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B1780C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, asset, dialogParent);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_13062/*"SpotCooltimeRewardDialog"*/, v13, v14);
    byte_4B1780C = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (PartyOrganizationUtility_o *)&this->fields.rewardDialog;
    v16 = (UnityEngine_Object_o *)rewardDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, asset);
    v18 = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( !v18 )
    {
      if ( asset )
      {
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    asset,
                                    (System_String_o *)StringLiteral_13062/*"SpotCooltimeRewardDialog"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        v23 = UnityEngine_Object__Instantiate_object_(
                Object_object__49237568,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v23, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v23, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v23, 0LL);
        if ( v23 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 0, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v23,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (PartyOrganizationUtility_c *)Component_object;
          sub_1BCA784(p_rewardDialog, (int64_t)Component_object, v26, v27, v28, v29, v30, v31);
          return;
        }
      }
      sub_1BCAA3C(v18, v19);
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B17812 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17812 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v6 = this->fields.buttonEffectPrefab;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Update(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  int32_t ReceivableRewardState; // w0
  const MethodInfo *v4; // x2

  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, method);
  if ( ReceivableRewardState != this->fields.buttonState )
    EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *receiveButton; // x0
  float v5; // s8
  float v6; // s9
  const MethodInfo *v7; // x1
  int32_t buttonState; // w8
  _BOOL4 v9; // w10
  _BOOL4 v10; // w8
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  receiveButton = (UnityEngine_Behaviour_o *)this->fields.receiveButton;
  this->fields.buttonState = state;
  if ( !receiveButton )
    goto LABEL_13;
  if ( (unsigned int)(state - 1) <= 1 )
  {
    UnityEngine_Behaviour__set_enabled(receiveButton, 1, 0LL);
    receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
    if ( receiveButton )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      v5 = 1.0;
      UIWidget__set_color((UIWidget_o *)receiveButton, v11, 0LL);
      receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
      if ( receiveButton )
      {
        v6 = 1.0;
        goto LABEL_8;
      }
    }
LABEL_13:
    sub_1BCAA3C(receiveButton, *(_QWORD *)&state);
  }
  UnityEngine_Behaviour__set_enabled(receiveButton, 0, 0LL);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !receiveButton )
    goto LABEL_13;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  v5 = 0.5;
  v6 = 1.0;
  UIWidget__set_color((UIWidget_o *)receiveButton, v12, 0LL);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
  if ( !receiveButton )
    goto LABEL_13;
LABEL_8:
  v13.fields.r = v5;
  v13.fields.g = v5;
  v13.fields.b = v5;
  v13.fields.a = v6;
  UIWidget__set_color((UIWidget_o *)receiveButton, v13, 0LL);
  buttonState = this->fields.buttonState;
  v9 = (unsigned int)(buttonState - 1) < 2;
  v10 = buttonState == 2;
  if ( this->fields.mode == 1 )
    v10 = v9;
  if ( v10 )
    EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(this, v7);
  else
    EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(this, v7);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton_EventInfo___ctor(
        EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B17819 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1, v2);
    byte_4B17819 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___ctor(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___CheckServantSpaceShortage_b__35_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B1781A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v7,
      v8);
    sub_1BCA7E0(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v9, v10);
    byte_4B1781A = 1;
  }
  v11 = sub_1BCAA2C(
          EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo,
          *(_QWORD *)&result,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___OnClickButton_b__21_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        bool result,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___Response_b__31_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0___ctor(
        EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0___CheckServantSpaceShortage_b__1(
        EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B1781B & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B1781B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
        return;
      }
      goto LABEL_15;
  }
}