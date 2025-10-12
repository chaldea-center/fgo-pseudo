bool EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  UserServantMaster_o *v5; // x20
  bool v6; // w19
  CommonUI_o *v7; // x19
  int32_t v8; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C397EC & 1) == 0 )
  {
    sub_1C32C20(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__);
    sub_1C32C20(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4C397EC = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v5 = (UserServantMaster_o *)Instance;
  v6 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v7 = (CommonUI_o *)Instance;
      v8 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Instance + 23) + 24LL);
      if ( !v10 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
        }
        v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C32E6C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v10,
          v11,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0);
        static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v10;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)v10, v13, v14);
      }
      if ( v7 )
      {
        CommonUI__OpenSvtFrameShortDlg(v7, v8, svtKeep, 0, 1, v10, 2, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
          return 0;
        }
      }
    }
LABEL_19:
    sub_1C32E7C(Instance);
  }
  return v6;
}


System_String_o *EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_4C397E4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C397E4 = 1;
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

  if ( (byte_4C397ED & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C397ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v2.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  return NetworkManager__getTime_41266888(v2, 0) - 1;
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
    sub_1C32E7C(this);
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
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w28
  UserEventCooltimeRewardMaster_o *v7; // x22
  int32_t v8; // w23
  unsigned __int8 v9; // w26
  unsigned __int8 v10; // w27
  char v11; // w20
  int32_t v12; // w24
  UserEventCooltimeRewardEntity_o *v13; // x25
  const MethodInfo *v14; // x4
  __int64 v15; // x24
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-70h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4C397E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C397E8 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_33;
  size = baseSpotIdList->fields._size;
  if ( size >= 1 )
  {
    v7 = (UserEventCooltimeRewardMaster_o *)Item;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               baseSpotIdList,
               v8,
               (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v7 )
        break;
      v12 = Item;
      Item = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v7, v2->fields.eventId, Item, 0);
      if ( Item )
      {
        if ( !Master_object )
          break;
        v13 = (UserEventCooltimeRewardEntity_o *)Item;
        Item = EventCooltimeRewardMaster__TryGetEntity(
                 (EventCooltimeRewardMaster_o *)Master_object,
                 &entity,
                 v2->fields.eventId,
                 v12,
                 *(_DWORD *)(Item + 32),
                 0);
        if ( (Item & 1) != 0 )
        {
          Item = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                   (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                   entity,
                   v13,
                   CurrentTime,
                   v14);
          if ( Item >= 1 )
          {
            v15 = Item;
            Item = (__int64)entity;
            if ( !entity )
              break;
            Item = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0);
            if ( Item )
            {
              Item = GiftEntity__isQp((GiftEntity_o *)Item, 0);
              v10 |= (unsigned __int8)Item ^ 1;
            }
            if ( !entity )
              break;
            v11 = 1;
            v9 |= v15 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( size == ++v8 )
        goto LABEL_30;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_33:
    sub_1C32E7C(Item);
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
LABEL_30:
  if ( ((v9 | v10) & 1) != 0 )
    return 2;
  else
    return v11 & 1;
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
    sub_1C32E7C(this);
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
  System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v8; // x22
  int32_t v9; // w23
  int32_t v10; // w24
  UserEventCooltimeRewardEntity_o *v11; // x25
  const MethodInfo *v12; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x24
  const MethodInfo *v14; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4C397EB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C397EB = 1;
  }
  entity = 0;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_17:
    sub_1C32E7C(Item);
  size = baseSpotIdList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = Item;
  v9 = 0;
  while ( 1 )
  {
    Item = (UserEventCooltimeRewardMaster_o *)System_Collections_Generic_List_int___get_Item(
                                                baseSpotIdList,
                                                v9,
                                                (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v8 )
      goto LABEL_17;
    v10 = (int)Item;
    Item = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                v8,
                                                v2->fields.eventId,
                                                (int32_t)Item,
                                                0);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_17;
      v11 = (UserEventCooltimeRewardEntity_o *)Item;
      Item = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                  (EventCooltimeRewardMaster_o *)Master_object,
                                                  &entity,
                                                  v2->fields.eventId,
                                                  v10,
                                                  Item->fields.revision,
                                                  0);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)Item,
                                                                                entity,
                                                                                v11,
                                                                                CurrentTime,
                                                                                v12);
        Item = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                    ReceivedRewardUnitNum,
                                                    entity,
                                                    v14);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)Item & 1) != 0 )
          return 1;
      }
    }
    if ( size == ++v9 )
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
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  if ( (byte_4C397E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11404/*"RewardButtonBlink"*/);
    byte_4C397E0 = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.eventSpotCooltimeComponent,
    (int32_t)component,
    (int32_t)component,
    (const MethodInfo *)asset);
  this->fields.mode = mode;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          (EventCooltimeRewardMaster_o *)Master_object,
                          eventId,
                          0);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseSpotIdList, (int32_t)SpotIdListByEventId, v15, v16);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11404/*"RewardButtonBlink"*/,
    v17);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v18);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v19);
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
  void *v9; // x0
  bool v10; // w20
  _QWORD *v11; // x8
  EventSpotCooltimeComponent_o *v12; // x20
  int32_t eventId; // w19
  System_Action_bool__o *v14; // x21
  Il2CppObject *v15; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x0
  int32_t v20; // w1

  if ( (byte_4C397E3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__);
    sub_1C32C20(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4C397E3 = 1;
  }
  v3 = this->fields.buttonState - 1;
  if ( this->fields.mode == 1 )
  {
    if ( v3 <= 1 )
    {
      v4 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
      v5 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
      if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      if ( v4 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
        EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v7);
        return;
      }
      goto LABEL_28;
    }
LABEL_25:
    v19 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C32C38(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v19, v19[4]);
    v20 = 2;
    goto LABEL_29;
  }
  if ( v3 > 1 )
    goto LABEL_25;
  eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
    goto LABEL_25;
  v9 = this->fields.eventSpotCooltimeComponent;
  if ( !v9 )
LABEL_30:
    sub_1C32E7C(v9);
  v10 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v9, 0);
  v11 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C32C38(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
  if ( v10 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    v12 = this->fields.eventSpotCooltimeComponent;
    eventId = this->fields.eventId;
    v9 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
      v9 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
    }
    v14 = *(System_Action_bool__o **)(*((_QWORD *)v9 + 23) + 8LL);
    if ( !v14 )
    {
      if ( !*((_DWORD *)v9 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      v15 = (Il2CppObject *)**((_QWORD **)v9 + 23);
      v14 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v14,
        v15,
        Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
        0);
      static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = v14;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)v14, v17, v18);
    }
    if ( v12 )
    {
      EventSpotCooltimeComponent__ReceiveCooltimeReward(v12, eventId, v14, 0);
      return;
    }
    goto LABEL_30;
  }
LABEL_28:
  v20 = 0;
LABEL_29:
  OverwriteAssetSoundName__PlaySystemSe(v6, v20, 0, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C397E6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C397E6 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v4 = this->fields.buttonEffectPrefab;
    if ( !v4 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v4, 1, 0);
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0

  if ( (byte_4C397E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_1C32C20(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C397E9 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
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
  Il2CppObject **v12; // x8
  SpotCooltimeRewardDialog_o *v13; // x19
  BattleDropItem_array *v14; // x20
  System_Action_o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C397EA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__);
    sub_1C32C20(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    sub_1C32C20(&StringLiteral_16852/*"ar192"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C397EA = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    v5 = (Il2CppObject *)System_String__Concat_63556792(
                           (System_String_o *)StringLiteral_15802/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16056/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v6 = (Il2CppObject ***)JsonManager__DeserializeArray_object_(
                             v5,
                             (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
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
            v10 = (_QWORD *)sub_1C32C38(Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
          v6 = (Il2CppObject ***)OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_16852/*"ar192"*/, 0, 0);
          if ( *((_DWORD *)v7 + 6) )
          {
            v12 = v7[4];
            if ( !v12 )
              goto LABEL_27;
            v13 = this->fields.rewardDialog;
            v14 = (BattleDropItem_array *)v12[2];
            v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            v15 = (System_Action_o *)v6[23][2];
            if ( !v15 )
            {
              if ( !*((_DWORD *)v6 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v6);
                v6 = (Il2CppObject ***)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
              }
              v16 = *v6[23];
              v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(v15, v16, Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, 0);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              static_fields->__9__31_0 = v15;
              sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)v15, v18, v19);
            }
            if ( !v13 )
LABEL_27:
              sub_1C32E7C(v6);
            SpotCooltimeRewardDialog__Open(v13, v14, v15, 0);
            return;
          }
LABEL_26:
          sub_1C32E84(v6);
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
  UnityEngine_GameObject_o *v9; // x0
  Il2CppObject *Object_object__51111776; // x21
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C397E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C397E5 = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonEffectPrefab, 0, 0) )
  {
    v9 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive(v9, 0, 0);
      return;
    }
LABEL_19:
    sub_1C32E7C(v9);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0) )
  {
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                asset,
                                prefabName,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                       (UnityEngine_Object_o *)Object_object__51111776,
                                       0,
                                       0);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      if ( !Object_object__51111776 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__51111776, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              Object_object__51111776,
              (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v11;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonEffectPrefab, (int32_t)v11, v12, v13);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0, 0) )
      {
        v14 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_36042552(v14, gameObject, 0);
        v9 = this->fields.buttonEffectPrefab;
        if ( v9 )
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
  const MethodInfo *v10; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v12; // x2

  if ( (byte_4C397E2 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_12279/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/);
    byte_4C397E2 = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v9, 0), (v9 = (System_String_o *)this->fields.buttonTextLabel) == 0) )
  {
    sub_1C32E7C(v9);
  }
  UILabel__SetCondensedScale((UILabel_o *)v9, this->fields.buttonTextMaxWidth, 0, 0);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v10);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v12);
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
  Il2CppObject *Object_object__51111776; // x21
  Il2CppObject *v12; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C397E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_12999/*"SpotCooltimeRewardDialog"*/);
    byte_4C397E1 = 1;
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
        Object_object__51111776 = AssetData__GetObject_object__51111776(
                                    asset,
                                    (System_String_o *)StringLiteral_12999/*"SpotCooltimeRewardDialog"*/,
                                    (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object_(
                Object_object__51111776,
                (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0, 0) )
          GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)v12, dialogParent, 0);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v12, 0);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v12, 0);
        if ( v12 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 0, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v12,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (CGThumbnailListItem_c *)Component_object;
          sub_1C32BC4(p_rewardDialog, (int32_t)Component_object, v14, v15);
          return;
        }
      }
      sub_1C32E7C(v10);
    }
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C397E7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C397E7 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v4 = this->fields.buttonEffectPrefab;
    if ( !v4 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v4, 0, 0);
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
    sub_1C32E7C(receiveButton);
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

  if ( (byte_4C397EE & 1) == 0 )
  {
    sub_1C32C20(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_4C397EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v1;
  sub_1C32BC4(
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
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C397EF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__);
    sub_1C32C20(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
    byte_4C397EF = 1;
  }
  v4 = sub_1C32E6C(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
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
  int32_t v7; // w1
  Il2CppObject *v8; // x3

  if ( (byte_4C397F0 & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12686/*"SellServant"*/);
    sub_1C32C20(&StringLiteral_12722/*"ServantCombine"*/);
    byte_4C397F0 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379640(v5, (System_String_o *)StringLiteral_12686/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v7 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C32E7C(v6);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v7 = 71;
        v8 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v5, (System_String_o *)StringLiteral_12722/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v7 = 32;
LABEL_10:
        v6 = Instance;
        v8 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v7, 1, v8, 0);
        return;
      }
      goto LABEL_15;
  }
}