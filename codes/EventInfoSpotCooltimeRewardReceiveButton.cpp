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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v11; // x1
  UserServantMaster_o *v12; // x20
  bool v13; // w19
  CommonUI_o *v14; // x19
  int32_t v15; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6822B & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v7);
    sub_1BE4ACC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v8);
    byte_4B6822B = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v12 = (UserServantMaster_o *)Instance;
  v13 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v14 = (CommonUI_o *)Instance;
      v15 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v17 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
      if ( !v17 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
        }
        v18 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v17 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BE4D18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v17,
          v18,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v17;
        sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__35_0, (int64_t)v17, v20, v21, v22, v23, v24, v25);
      }
      if ( v14 )
      {
        CommonUI__OpenSvtFrameShortDlg(v14, v15, svtKeep, 0, 1, v17, 2, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1BE4D28(Instance, v11);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_4B68223 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, *(_QWORD *)&eventId);
    byte_4B68223 = 1;
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
  System_DateTime_o v3; // 0:x0.8

  if ( (byte_4B6822C & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B6822C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v3.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  return NetworkManager__getTime_39464948(v3, 0LL) - 1;
}


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
    sub_1BE4D28(this, eventId);
  }
  return 0LL;
}


int32_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  __int64 Item; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w28
  UserEventCooltimeRewardMaster_o *v13; // x22
  int32_t v14; // w23
  int v15; // w26
  int v16; // w27
  char v17; // w20
  int32_t v18; // w24
  UserEventCooltimeRewardEntity_o *v19; // x25
  const MethodInfo *v20; // x4
  __int64 v21; // x24
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-70h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4B68227 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B68227 = 1;
  }
  entity = 0LL;
  if ( !v2->fields.mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0LL, 0LL) )
    {
      Item = (__int64)v2->fields.eventSpotCooltimeComponent;
      if ( !Item )
        goto LABEL_33;
      return EventSpotCooltimeComponent__GetReceivableRewardState((EventSpotCooltimeComponent_o *)Item, 0LL);
    }
    return 0;
  }
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_33;
  size = baseSpotIdList->fields._size;
  if ( size >= 1 )
  {
    v13 = (UserEventCooltimeRewardMaster_o *)Item;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v14,
               (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v13 )
        break;
      v18 = Item;
      Item = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v13, v2->fields.eventId, Item, 0LL);
      if ( Item )
      {
        if ( !Master_object )
          break;
        v19 = (UserEventCooltimeRewardEntity_o *)Item;
        Item = EventCooltimeRewardMaster__TryGetEntity(
                 (EventCooltimeRewardMaster_o *)Master_object,
                 &entity,
                 v2->fields.eventId,
                 v18,
                 *(_DWORD *)(Item + 32),
                 0LL);
        if ( (Item & 1) != 0 )
        {
          Item = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                   (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                   entity,
                   v19,
                   CurrentTime,
                   v20);
          if ( Item >= 1 )
          {
            v21 = Item;
            Item = (__int64)entity;
            if ( !entity )
              break;
            Item = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( Item )
            {
              Item = GiftEntity__isQp((GiftEntity_o *)Item, 0LL);
              v16 |= Item ^ 1;
            }
            if ( !entity )
              break;
            v17 = 1;
            v15 |= v21 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( size == ++v14 )
        goto LABEL_30;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_33:
    sub_1BE4D28(Item, v10);
  }
  v15 = 0;
  v16 = 0;
  v17 = 0;
LABEL_30:
  if ( ((v15 | v16) & 1) != 0 )
    return 2;
  else
    return v17 & 1;
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
    sub_1BE4D28(this, cooltimeRewardEntity);
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
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t CurrentTime; // x20
  Il2CppObject *Master_object; // x21
  void *Item; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w24
  UserEventCooltimeRewardEntity_o *v16; // x25
  const MethodInfo *v17; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x24
  const MethodInfo *v19; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4B6822A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1BE4ACC(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v6);
    byte_4B6822A = 1;
  }
  entity = 0LL;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_17:
    sub_1BE4D28(Item, v10);
  size = baseSpotIdList->fields._size;
  if ( size < 1 )
    return 0;
  v13 = (UserEventCooltimeRewardMaster_o *)Item;
  v14 = 0;
  while ( 1 )
  {
    Item = (void *)System_Collections_Generic_List_int___get_Item(
                     baseSpotIdList,
                     v14,
                     (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v13 )
      goto LABEL_17;
    v15 = (int)Item;
    Item = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v13, v2->fields.eventId, (int32_t)Item, 0LL);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_17;
      v16 = (UserEventCooltimeRewardEntity_o *)Item;
      Item = (void *)EventCooltimeRewardMaster__TryGetEntity(
                       (EventCooltimeRewardMaster_o *)Master_object,
                       &entity,
                       v2->fields.eventId,
                       v15,
                       *((_DWORD *)Item + 8),
                       0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                                                                                entity,
                                                                                v16,
                                                                                CurrentTime,
                                                                                v17);
        Item = (void *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(ReceivedRewardUnitNum, entity, v19);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)Item & 1) != 0 )
          return 1;
      }
    }
    if ( size == ++v14 )
      return 0;
    baseSpotIdList = v2->fields.baseSpotIdList;
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
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1

  if ( (byte_4B6821F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_11544/*"RewardButtonBlink"*/, v15);
    byte_4B6821F = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_1BE4A70(
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v17);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          (EventCooltimeRewardMaster_o *)Master_object,
                          eventId,
                          0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.baseSpotIdList,
    (int64_t)SpotIdListByEventId,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11544/*"RewardButtonBlink"*/,
    v25);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v26);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v27);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  unsigned int v7; // w8
  bool v8; // w20
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v13; // x1
  EventSpotCooltimeComponent_o *v14; // x0
  bool v15; // w20
  _QWORD *v16; // x8
  EventSpotCooltimeComponent_o *v17; // x20
  int32_t eventId; // w19
  System_Action_bool__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _QWORD *v28; // x0
  int32_t v29; // w1

  if ( (byte_4B68222 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, method);
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v5);
    sub_1BE4ACC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v6);
    byte_4B68222 = 1;
  }
  v7 = this->fields.buttonState - 1;
  if ( this->fields.mode == 1 )
  {
    if ( v7 <= 1 )
    {
      v8 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
      v9 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
      if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BE4AE4(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
      if ( v8 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
        EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v11);
        return;
      }
      goto LABEL_28;
    }
LABEL_25:
    v28 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BE4AE4(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
    v29 = 2;
    goto LABEL_29;
  }
  if ( v7 > 1 )
    goto LABEL_25;
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0LL, 0LL) )
    goto LABEL_25;
  v14 = this->fields.eventSpotCooltimeComponent;
  if ( !v14 )
LABEL_30:
    sub_1BE4D28(v14, v13);
  v15 = EventSpotCooltimeComponent__CheckServantSpaceShortage(v14, 0LL);
  v16 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BE4AE4(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v16, v16[4]);
  if ( v15 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
    v17 = this->fields.eventSpotCooltimeComponent;
    eventId = this->fields.eventId;
    v14 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
      v14 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    }
    monitor = (System_Action_bool__o *)v14[1].fields.spotCooltimeList->monitor;
    if ( !monitor )
    {
      if ( !v14[2].fields.m_CachedPtr )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = (EventSpotCooltimeComponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      klass = (Il2CppObject *)v14[1].fields.spotCooltimeList->klass;
      monitor = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        monitor,
        klass,
        Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
        0LL);
      static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = monitor;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)monitor,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( v17 )
    {
      EventSpotCooltimeComponent__ReceiveCooltimeReward(v17, eventId, monitor, 0LL);
      return;
    }
    goto LABEL_30;
  }
LABEL_28:
  v29 = 0;
LABEL_29:
  OverwriteAssetSoundName__PlaySystemSe(v10, v29, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4B68225 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B68225 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4B68228 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4B68228 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1BE4D28(0LL, v10);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  Il2CppObject ***v16; // x0
  __int64 v17; // x1
  Il2CppObject ***v18; // x20
  Il2CppObject **v19; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject **v23; // x8
  SpotCooltimeRewardDialog_o *v24; // x19
  BattleDropItem_array *v25; // x20
  System_Action_o *v26; // x21
  Il2CppObject *v27; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B68229 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, result);
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, v5);
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v6);
    sub_1BE4ACC(&JsonManager_TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v9);
    sub_1BE4ACC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_17087/*"ar192"*/, v11);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v12);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v13);
    sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v14);
    byte_4B68229 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL) )
  {
    v15 = (Il2CppObject *)System_String__Concat_62710068(
                            (System_String_o *)StringLiteral_16018/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16276/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                              v15,
                              (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v16 )
    {
      v18 = v16;
      if ( !*((_DWORD *)v16 + 6) )
        goto LABEL_26;
      v19 = v16[4];
      if ( v19 && v19[2] )
      {
        rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        {
          v21 = Method_EventInfoSpotCooltimeRewardReceiveButton_Response__;
          if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1BE4AE4(Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
          v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
          v16 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v22, (System_String_o *)StringLiteral_17087/*"ar192"*/, 0LL);
          if ( *((_DWORD *)v18 + 6) )
          {
            v23 = v18[4];
            if ( !v23 )
              goto LABEL_27;
            v24 = this->fields.rewardDialog;
            v25 = (BattleDropItem_array *)v23[2];
            v16 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v16 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            v26 = (System_Action_o *)v16[23][2];
            if ( !v26 )
            {
              if ( !*((_DWORD *)v16 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v16);
                v16 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
              }
              v27 = *v16[23];
              v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(
                v26,
                v27,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              static_fields->__9__31_0 = v26;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
                (int64_t)v26,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            if ( !v24 )
LABEL_27:
              sub_1BE4D28(v16, v17);
            SpotCooltimeRewardDialog__Open(v24, v25, v26, 0LL);
            return;
          }
LABEL_26:
          sub_1BE4D30(v16, v17);
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
  __int64 v8; // x1
  UnityEngine_Object_o **p_buttonEffectPrefab; // x20
  UnityEngine_Object_o *buttonEffectPrefab; // x23
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  Il2CppObject *Object_object__49525204; // x21
  Il2CppObject *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B68224 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, asset);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B68224 = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v12 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1BE4D28(v12, v11);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_object__49525204 = AssetData__GetObject_object__49525204(
                                asset,
                                prefabName,
                                (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Object_object__49525204,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      if ( !Object_object__49525204 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__49525204, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__Instantiate_object_(
              Object_object__49525204,
              (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v14;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.buttonEffectPrefab,
        (int64_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v21 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_34492740(v21, gameObject, 0LL);
        v12 = this->fields.buttonEffectPrefab;
        if ( v12 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *ButtonSpriteNameByEventId; // x0
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v9; // x20
  UISprite_o *v10; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v16; // x2

  if ( (byte_4B68221 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_12388/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v6);
    byte_4B68221 = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v9 = ButtonSpriteNameByEventId;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
  {
    v10 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v10, v9, 0LL);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12388/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v12, 0LL), (v12 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_1BE4D28(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.buttonTextMaxWidth, 0, 0LL);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v14);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v16);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyOrganizationUtility_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v12; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *Object_object__49525204; // x21
  Il2CppObject *v17; // x21
  Il2CppObject *Component_object; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B68220 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, asset);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_13099/*"SpotCooltimeRewardDialog"*/, v10);
    byte_4B68220 = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (PartyOrganizationUtility_o *)&this->fields.rewardDialog;
    v12 = (UnityEngine_Object_o *)rewardDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( !v14 )
    {
      if ( asset )
      {
        Object_object__49525204 = AssetData__GetObject_object__49525204(
                                    asset,
                                    (System_String_o *)StringLiteral_13099/*"SpotCooltimeRewardDialog"*/,
                                    (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49525204, 0LL, 0LL) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__Instantiate_object_(
                Object_object__49525204,
                (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_34492740((UnityEngine_GameObject_o *)v17, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v17, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v17, 0LL);
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 0, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v17,
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (PartyOrganizationUtility_c *)Component_object;
          sub_1BE4A70(p_rewardDialog, (int64_t)Component_object, v19, v20, v21, v22, v23, v24);
          return;
        }
      }
      sub_1BE4D28(v14, v15);
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4B68226 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B68226 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
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
    sub_1BE4D28(receiveButton, *(_QWORD *)&state);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6822D & 1) == 0 )
  {
    sub_1BE4ACC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1);
    byte_4B6822D = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4B6822E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v5);
    sub_1BE4ACC(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v6);
    byte_4B6822E = 1;
  }
  v7 = sub_1BE4D18(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BE4D28(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4B6822F & 1) == 0 )
  {
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BE4ACC(&StringLiteral_12781/*"SellServant"*/, v4);
    sub_1BE4ACC(&StringLiteral_12818/*"ServantCombine"*/, v5);
    byte_4B6822F = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39576856(v8, (System_String_o *)StringLiteral_12781/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BE4D28(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39576768(v8, (System_String_o *)StringLiteral_12818/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
  }
}