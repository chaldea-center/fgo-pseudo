bool EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v5; // x1
  UserServantMaster_o *v6; // x20
  bool v7; // w19
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v11; // x22
  Il2CppObject *v12; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB8117 & 1) == 0 )
  {
    sub_1C6BA08(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__);
    sub_1C6BA08(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4CB8117 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v8 = (CommonUI_o *)Instance;
      v9 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v11 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
      if ( !v11 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
        }
        v12 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v11 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C6BC54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v11,
          v12,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0);
        static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)v11, v14, v15);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, v11, 2, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1C6BC60(Instance, v5);
  }
  return v7;
}


System_String_o *EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_4CB810F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB810F = 1;
  }
  EventInfo = EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(this, eventId, method);
  p_ButtonSpriteName = &EventInfo->fields.ButtonSpriteName;
  if ( !EventInfo )
    p_ButtonSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_ButtonSpriteName;
}


int32_t EventInfoSpotCooltimeRewardReceiveButton__GetCommonReleaseIdByEventId(
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


int64_t EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  System_DateTime_o v2; // x0

  if ( (byte_4CB8118 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB8118 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  return NetworkManager__getTime_41599764(v2, 0) - 1;
}


EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(
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
      if ( LODWORD(this->fields.m_CachedPtr) == eventId )
        return (EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_9:
    sub_1C6BC60(this, eventId);
  }
  return 0;
}


int32_t EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  Il2CppObject *Master_object; // x21
  __int64 Item; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w28
  UserEventCooltimeRewardMaster_o *v8; // x22
  int32_t v9; // w23
  unsigned __int8 v10; // w26
  unsigned __int8 v11; // w27
  char v12; // w20
  int32_t v13; // w24
  UserEventCooltimeRewardEntity_o *v14; // x25
  const MethodInfo *v15; // x4
  __int64 v16; // x24
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-70h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4CB8113 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8113 = 1;
  }
  entity = 0;
  if ( !v2->fields.mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0, 0) )
    {
      Item = (__int64)v2->fields.eventSpotCooltimeComponent;
      if ( !Item )
        goto LABEL_33;
      return EventSpotCooltimeComponent__GetReceivableRewardState((EventSpotCooltimeComponent_o *)Item, 0);
    }
    return 0;
  }
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_33;
  size = baseSpotIdList->fields._size;
  if ( size >= 1 )
  {
    v8 = (UserEventCooltimeRewardMaster_o *)Item;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v9,
               (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v8 )
        break;
      v13 = Item;
      Item = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v8, v2->fields.eventId, Item, 0);
      if ( Item )
      {
        if ( !Master_object )
          break;
        v14 = (UserEventCooltimeRewardEntity_o *)Item;
        Item = EventCooltimeRewardMaster__TryGetEntity(
                 (EventCooltimeRewardMaster_o *)Master_object,
                 &entity,
                 v2->fields.eventId,
                 v13,
                 *(_DWORD *)(Item + 32),
                 0);
        if ( (Item & 1) != 0 )
        {
          Item = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                   (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                   entity,
                   v14,
                   CurrentTime,
                   v15);
          if ( Item >= 1 )
          {
            v16 = Item;
            Item = (__int64)entity;
            if ( !entity )
              break;
            Item = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0);
            if ( Item )
            {
              Item = GiftEntity__isQp((GiftEntity_o *)Item, 0);
              v11 |= (unsigned __int8)Item ^ 1;
            }
            if ( !entity )
              break;
            v12 = 1;
            v10 |= v16 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( size == ++v9 )
        goto LABEL_30;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_33:
    sub_1C6BC60(Item, v5);
  }
  v10 = 0;
  v11 = 0;
  v12 = 0;
LABEL_30:
  if ( ((v10 | v11) & 1) != 0 )
    return 2;
  else
    return v12 & 1;
}


int64_t EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
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
    sub_1C6BC60(this, cooltimeRewardEntity);
  if ( cooltimeRewardEntity->fields.cooltime < 1 || cooltimeRewardEntity->fields.upperLimitGiftNum < 1 )
    return 0;
  v6 = (currentTime - userCooltimeRewardEntity->fields.collectedAt)
     & ~((currentTime - userCooltimeRewardEntity->fields.collectedAt) >> 63);
  if ( EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(cooltimeRewardEntity, 0) )
  {
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    v8 = v6 * upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
  }
  else
  {
    RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime(cooltimeRewardEntity, 0);
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    v8 = v6 / RewardUnitTime;
  }
  if ( v8 <= upperLimitGiftNum )
    return v8;
  else
    return upperLimitGiftNum;
}


bool EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  int64_t CurrentTime; // x20
  Il2CppObject *Master_object; // x21
  UserEventCooltimeRewardMaster_o *Item; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v9; // x22
  int32_t v10; // w23
  int32_t v11; // w24
  UserEventCooltimeRewardEntity_o *v12; // x25
  const MethodInfo *v13; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x24
  const MethodInfo *v15; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4CB8116 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4CB8116 = 1;
  }
  entity = 0;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_17:
    sub_1C6BC60(Item, v6);
  size = baseSpotIdList->fields._size;
  if ( size < 1 )
    return 0;
  v9 = Item;
  v10 = 0;
  while ( 1 )
  {
    Item = (UserEventCooltimeRewardMaster_o *)System_Collections_Generic_List_int___get_Item(
                                                baseSpotIdList,
                                                v10,
                                                (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v9 )
      goto LABEL_17;
    v11 = (int)Item;
    Item = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                v9,
                                                v2->fields.eventId,
                                                (int32_t)Item,
                                                0);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_17;
      v12 = (UserEventCooltimeRewardEntity_o *)Item;
      Item = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                  (EventCooltimeRewardMaster_o *)Master_object,
                                                  &entity,
                                                  v2->fields.eventId,
                                                  v11,
                                                  Item->fields.revision,
                                                  0);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                                                                                entity,
                                                                                v12,
                                                                                CurrentTime,
                                                                                v13);
        Item = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                    ReceivedRewardUnitNum,
                                                    entity,
                                                    v15);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)Item & 1) != 0 )
          return 1;
      }
    }
    if ( size == ++v10 )
      return 0;
    baseSpotIdList = v2->fields.baseSpotIdList;
    if ( !baseSpotIdList )
      goto LABEL_17;
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__Initialization(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        EventSpotCooltimeComponent_o *component,
        AssetData_o *asset,
        int32_t mode,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4CB810B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11404/*"RewardButtonBlink"*/);
    byte_4CB810B = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.eventSpotCooltimeComponent,
    (int32_t)component,
    (int32_t)component,
    (const MethodInfo *)asset);
  this->fields.mode = mode;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v14);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          (EventCooltimeRewardMaster_o *)Master_object,
                          eventId,
                          0);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSpotIdList, (int32_t)SpotIdListByEventId, v16, v17);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11404/*"RewardButtonBlink"*/,
    v18);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v19);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v20);
}


bool EventInfoSpotCooltimeRewardReceiveButton__IsButtonActiveState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.buttonState - 1) < 2;
}


bool EventInfoSpotCooltimeRewardReceiveButton__IsPlayButtonEffect(
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


bool EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        EventCooltimeRewardEntity_o *cooltimeRewardEntity,
        const MethodInfo *method)
{
  GiftEntity_o *GiftEntity; // x0

  return cooltimeRewardEntity
      && (GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(cooltimeRewardEntity, 0)) != 0
      && GiftEntity__checkGiftType(GiftEntity, 1, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton__OnClickButton(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  bool v4; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v9; // x1
  void *v10; // x0
  bool v11; // w20
  _QWORD *v12; // x8
  EventSpotCooltimeComponent_o *v13; // x20
  int32_t eventId; // w19
  System_Action_bool__o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  int32_t v21; // w1

  if ( (byte_4CB810E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__);
    sub_1C6BA08(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4CB810E = 1;
  }
  v3 = this->fields.buttonState - 1;
  if ( this->fields.mode == 1 )
  {
    if ( v3 <= 1 )
    {
      v4 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
      v5 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
      if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C6BA20(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
      if ( v4 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
        EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v7);
        return;
      }
      goto LABEL_28;
    }
LABEL_25:
    v20 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1C6BA20(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v20, v20[4]);
    v21 = 2;
    goto LABEL_29;
  }
  if ( v3 > 1 )
    goto LABEL_25;
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
    goto LABEL_25;
  v10 = this->fields.eventSpotCooltimeComponent;
  if ( !v10 )
LABEL_30:
    sub_1C6BC60(v10, v9);
  v11 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v10, 0);
  v12 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C6BA20(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v12, v12[4]);
  if ( v11 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    v13 = this->fields.eventSpotCooltimeComponent;
    eventId = this->fields.eventId;
    v10 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
      v10 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    }
    v15 = *(System_Action_bool__o **)(*((_QWORD *)v10 + 23) + 8LL);
    if ( !v15 )
    {
      if ( !*((_DWORD *)v10 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v16 = (Il2CppObject *)**((_QWORD **)v10 + 23);
      v15 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v15,
        v16,
        Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
        0);
      static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)v15, v18, v19);
    }
    if ( v13 )
    {
      EventSpotCooltimeComponent__ReceiveCooltimeReward(v13, eventId, v15, 0);
      return;
    }
    goto LABEL_30;
  }
LABEL_28:
  v21 = 0;
LABEL_29:
  OverwriteAssetSoundName__PlaySystemSe(v6, v21, 0, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CB8111 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8111 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0);
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4CB8114 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB8114 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1C6BC60(0, v7);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject ***v6; // x0
  Il2CppObject ***v7; // x20
  Il2CppObject **v8; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  Il2CppObject **v13; // x8
  SpotCooltimeRewardDialog_o *v14; // x19
  BattleDropItem_array *v15; // x20
  System_Action_o *v16; // x21
  Il2CppObject *v17; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4CB8115 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__);
    sub_1C6BA08(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_16866/*"ar192"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB8115 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
  {
    v5 = (Il2CppObject *)System_String__Concat_64005056(
                           (System_String_o *)StringLiteral_15801/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16051/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v6 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                             v5,
                             (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v6 )
    {
      v7 = v6;
      if ( !*((_DWORD *)v6 + 6) )
        goto LABEL_26;
      v8 = v6[4];
      if ( v8 && v8[2] )
      {
        rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
        {
          v10 = Method_EventInfoSpotCooltimeRewardReceiveButton_Response__;
          if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C6BA20(Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
          v6 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_16866/*"ar192"*/, 0, 0);
          if ( *((_DWORD *)v7 + 6) )
          {
            v13 = v7[4];
            if ( !v13 )
              goto LABEL_27;
            v14 = this->fields.rewardDialog;
            v15 = (BattleDropItem_array *)v13[2];
            v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            v16 = (System_Action_o *)v6[23][2];
            if ( !v16 )
            {
              if ( !*((_DWORD *)v6 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v6);
                v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
              }
              v17 = *v6[23];
              v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
              System_Action___ctor(v16, v17, Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, 0);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              static_fields->__9__31_0 = v16;
              sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)v16, v19, v20);
            }
            if ( !v14 )
LABEL_27:
              sub_1C6BC60(v6, v12);
            SpotCooltimeRewardDialog__Open(v14, v15, v16, 0);
            return;
          }
LABEL_26:
          sub_1C6BC68(v6);
        }
      }
    }
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        System_String_o *prefabName,
        const MethodInfo *method)
{
  UnityEngine_Object_o **p_buttonEffectPrefab; // x20
  UnityEngine_Object_o *buttonEffectPrefab; // x23
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  Il2CppObject *Object_object__51495936; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CB8110 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8110 = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonEffectPrefab, 0, 0) )
  {
    v10 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive(v10, 0, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(v10, v9);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0) )
  {
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                asset,
                                prefabName,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Object_object__51495936,
                                        0,
                                        0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !Object_object__51495936 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__51495936, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              Object_object__51495936,
              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.buttonEffectPrefab, (int32_t)v12, v13, v14);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0, 0) )
      {
        v15 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_36361932(v15, gameObject, 0);
        v10 = this->fields.buttonEffectPrefab;
        if ( v10 )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *ButtonSpriteNameByEventId; // x0
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v6; // x20
  UISprite_o *v7; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4CB810D & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_12282/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/);
    byte_4CB810D = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v6 = ButtonSpriteNameByEventId;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) && !System_String__IsNullOrEmpty(v6, 0) )
  {
    v7 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v7, v6, 0);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v9, 0), (v9 = (System_String_o *)this->fields.buttonTextLabel) == 0) )
  {
    sub_1C6BC60(v9, v10);
  }
  UILabel__SetCondensedScale((UILabel_o *)v9, this->fields.buttonTextMaxWidth, 0, 0);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v11);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v13);
}


void EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v8; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Object_object__51495936; // x21
  Il2CppObject *v13; // x21
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4CB810C & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_13004/*"SpotCooltimeRewardDialog"*/);
    byte_4CB810C = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (CGThumbnailListItem_o *)&this->fields.rewardDialog;
    v8 = (UnityEngine_Object_o *)rewardDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( !v10 )
    {
      if ( asset )
      {
        Object_object__51495936 = AssetData__GetObject_object__51495936(
                                    asset,
                                    (System_String_o *)StringLiteral_13004/*"SpotCooltimeRewardDialog"*/,
                                    (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object_(
                Object_object__51495936,
                (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0, 0) )
          GameObjectExtensions__SafeSetParent_36361932((UnityEngine_GameObject_o *)v13, dialogParent, 0);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v13, 0);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v13, 0);
        if ( v13 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 0, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v13,
                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1C6B9AC(p_rewardDialog, (int32_t)Component_object, v15, v16);
          return;
        }
      }
      sub_1C6BC60(v10, v11);
    }
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CB8112 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8112 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0);
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__Update(
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
void EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(
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
    UnityEngine_Behaviour__set_enabled(receiveButton, 1, 0);
    receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
    if ( receiveButton )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      v5 = 1.0;
      UIWidget__set_color((UIWidget_o *)receiveButton, v11, 0);
      receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
      if ( receiveButton )
      {
        v6 = 1.0;
        goto LABEL_8;
      }
    }
LABEL_13:
    sub_1C6BC60(receiveButton, *(_QWORD *)&state);
  }
  UnityEngine_Behaviour__set_enabled(receiveButton, 0, 0);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !receiveButton )
    goto LABEL_13;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  v5 = 0.5;
  v6 = 1.0;
  UIWidget__set_color((UIWidget_o *)receiveButton, v12, 0);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
  if ( !receiveButton )
    goto LABEL_13;
LABEL_8:
  v13.fields.r = v5;
  v13.fields.g = v5;
  v13.fields.b = v5;
  v13.fields.a = v6;
  UIWidget__set_color((UIWidget_o *)receiveButton, v13, 0);
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


void EventInfoSpotCooltimeRewardReceiveButton_EventInfo___ctor(
        EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB8119 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4CB8119 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void EventInfoSpotCooltimeRewardReceiveButton___c___ctor(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton___c___CheckServantSpaceShortage_b__35_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4CB811A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__);
    sub_1C6BA08(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
    byte_4CB811A = 1;
  }
  v4 = sub_1C6BC54(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0),
        !Instance) )
  {
    sub_1C6BC60(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton___c___OnClickButton_b__21_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        bool result,
        const MethodInfo *method)
{
  ;
}


void EventInfoSpotCooltimeRewardReceiveButton___c___Response_b__31_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0___ctor(
        EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0___CheckServantSpaceShortage_b__1(
        EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4CB811B & 1) == 0 )
  {
    sub_1C6BA08(&SceneJumpInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_12691/*"SellServant"*/);
    sub_1C6BA08(&StringLiteral_12727/*"ServantCombine"*/);
    byte_4CB811B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C6BC54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41713068(v5, (System_String_o *)StringLiteral_12691/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C6BC60(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C6BC54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41712980(v5, (System_String_o *)StringLiteral_12727/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
  }
}