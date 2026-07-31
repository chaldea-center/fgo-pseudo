void EventInfoSpotCooltimeRewardReceiveButton___ctor(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


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
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__35_0; // x22
  Il2CppObject *v13; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593A493 & 1) == 0 )
  {
    sub_21FFC50(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__);
    sub_21FFC50(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_593A493 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v8 = (CommonUI_o *)Instance;
      v9 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( !*(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v5);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__35_0 = static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v5);
          static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v13,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0);
        v14 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v14->__9__35_0 = _9__35_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v14->__9__35_0,
          (int32_t)_9__35_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, _9__35_0, 2, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0);
          return 0;
        }
      }
    }
LABEL_19:
    sub_21FFECC(Instance, v5);
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

  if ( (byte_593A48B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A48B = 1;
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

  if ( (byte_593A494 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A494 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v2.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  return NetworkManager__getTime_48310584(v2, 0) - 1;
}


// local variable allocation has failed, the output may be wrong!
EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeRewardReceiveButton_EventInfo_array *eventInfoList; // x9
  int max_length; // w8
  EventInfoSpotCooltimeRewardReceiveButton_o **i; // x9

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = (EventInfoSpotCooltimeRewardReceiveButton_o **)eventInfoList->m_Items; ; ++i )
    {
      this = *i;
      if ( !*i )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == eventId )
        return (EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *)this;
      if ( !--max_length )
        return 0;
    }
LABEL_9:
    sub_21FFECC(this, *(_QWORD *)&eventId);
  }
  return 0;
}


int32_t EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  int32_t mode; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x21
  void *Item; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v10; // x22
  char v11; // w20
  unsigned __int8 v12; // w27
  unsigned __int8 v13; // w28
  int32_t i; // w23
  int32_t v15; // w24
  UserEventCooltimeRewardEntity_o *v16; // x25
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x4
  int64_t ReceivedRewardUnitNum; // x0
  int64_t v20; // x24
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-70h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_593A48F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A48F = 1;
  }
  mode = v2->fields.mode;
  entity = 0;
  if ( !mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0, 0) )
      return 0;
    Item = v2->fields.eventSpotCooltimeComponent;
    if ( Item )
      return EventSpotCooltimeComponent__GetReceivableRewardState((EventSpotCooltimeComponent_o *)Item, 0);
    goto LABEL_32;
  }
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_32:
    sub_21FFECC(Item, v7);
  size = baseSpotIdList->fields._size;
  if ( size < 1 )
    return 0;
  v10 = (UserEventCooltimeRewardMaster_o *)Item;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = v2->fields.baseSpotIdList;
    if ( !Item )
      goto LABEL_32;
    Item = (void *)System_Collections_Generic_List_int___get_Item(
                     (System_Collections_Generic_List_int__o *)Item,
                     i,
                     (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v10 )
      goto LABEL_32;
    v15 = (int)Item;
    Item = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v10, v2->fields.eventId, (int32_t)Item, 0);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_32;
      v16 = (UserEventCooltimeRewardEntity_o *)Item;
      v17 = EventCooltimeRewardMaster__TryGetEntity(
              (EventCooltimeRewardMaster_o *)Master_object,
              &entity,
              v2->fields.eventId,
              v15,
              *((_DWORD *)Item + 8),
              0);
      if ( v17 )
      {
        ReceivedRewardUnitNum = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                  (EventInfoSpotCooltimeRewardReceiveButton_o *)v17,
                                  entity,
                                  v16,
                                  CurrentTime,
                                  v18);
        if ( ReceivedRewardUnitNum >= 1 )
        {
          v20 = ReceivedRewardUnitNum;
          Item = entity;
          if ( !entity )
            goto LABEL_32;
          Item = EventCooltimeRewardEntity__GetGiftEntity(entity, 0);
          if ( Item )
          {
            Item = (void *)GiftEntity__isQp((GiftEntity_o *)Item, 0);
            v12 |= (unsigned __int8)Item ^ 1;
          }
          if ( !entity )
            goto LABEL_32;
          v11 = 1;
          v13 |= v20 >= entity->fields.upperLimitGiftNum;
        }
      }
    }
  }
  if ( ((v13 | v12) & 1) != 0 )
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

  if ( !userCooltimeRewardEntity || !cooltimeRewardEntity )
    sub_21FFECC(this, cooltimeRewardEntity);
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
    v8 = v6 / EventCooltimeRewardEntity__GetRewardUnitTime(cooltimeRewardEntity, 0);
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
  }
  if ( v8 >= upperLimitGiftNum )
    return upperLimitGiftNum;
  else
    return v8;
}


bool EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x8
  __int64 v4; // x1
  int64_t CurrentTime; // x20
  Il2CppObject *Master_object; // x21
  UserEventCooltimeRewardMaster_o *Item; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_int__o *v9; // x8
  int size; // w26
  UserEventCooltimeRewardMaster_o *v11; // x22
  int32_t v12; // w23
  int32_t v13; // w24
  UserEventCooltimeRewardEntity_o *v14; // x25
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x24
  const MethodInfo *v18; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_593A492 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_593A492 = 1;
  }
  baseSpotIdList = v2->fields.baseSpotIdList;
  entity = 0;
  if ( !baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  Item = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  v9 = v2->fields.baseSpotIdList;
  if ( !v9 )
LABEL_20:
    sub_21FFECC(Item, v8);
  size = v9->fields._size;
  if ( size < 1 )
    return 0;
  v11 = Item;
  v12 = 0;
  while ( 1 )
  {
    Item = (UserEventCooltimeRewardMaster_o *)v2->fields.baseSpotIdList;
    if ( !Item )
      goto LABEL_20;
    Item = (UserEventCooltimeRewardMaster_o *)System_Collections_Generic_List_int___get_Item(
                                                (System_Collections_Generic_List_int__o *)Item,
                                                v12,
                                                (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v11 )
      goto LABEL_20;
    v13 = (int)Item;
    Item = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                v11,
                                                v2->fields.eventId,
                                                (int32_t)Item,
                                                0);
    if ( Item )
    {
      if ( !Master_object )
        goto LABEL_20;
      v14 = (UserEventCooltimeRewardEntity_o *)Item;
      v15 = EventCooltimeRewardMaster__TryGetEntity(
              (EventCooltimeRewardMaster_o *)Master_object,
              &entity,
              v2->fields.eventId,
              v13,
              Item->fields.revision,
              0);
      if ( v15 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)v15,
                                                                                entity,
                                                                                v14,
                                                                                CurrentTime,
                                                                                v16);
        if ( EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(ReceivedRewardUnitNum, entity, v18)
          && (__int64)ReceivedRewardUnitNum > 0 )
        {
          return 1;
        }
      }
    }
    if ( size == ++v12 )
      return 0;
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
  bool v7; // w7
  __int64 v14; // x1
  DataManager_c *v15; // x0
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1

  if ( (byte_593A487 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11880/*"RewardButtonBlink"*/);
    byte_593A487 = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSpotCooltimeComponent,
    (int32_t)component,
    (System_String_o *)component,
    (System_String_o *)asset,
    mode,
    (int32_t)dialogParent,
    (bool)method,
    v7);
  v15 = DataManager_TypeInfo;
  this->fields.mode = mode;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v17);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(
                          (EventCooltimeRewardMaster_o *)Master_object,
                          eventId,
                          0);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpotIdList,
    (int32_t)SpotIdListByEventId,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11880/*"RewardButtonBlink"*/,
    v25);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v26);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v27);
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
  bool v4; // zf
  unsigned int v5; // w8
  bool v6; // w9
  bool v7; // w8

  buttonState = this->fields.buttonState;
  v4 = buttonState == 2;
  v5 = buttonState - 1;
  v6 = v4;
  v7 = v5 < 2;
  if ( mode == 1 )
    return v7;
  else
    return v6;
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
  bool v4; // w8
  _QWORD *v5; // x0
  char v6; // w9
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v10; // x1
  void *v11; // x0
  bool v12; // w8
  System_Reflection_MethodBase_o *v13; // x0
  EventSpotCooltimeComponent_o *v14; // x20
  int32_t eventId; // w19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v18; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  int32_t v28; // w1

  if ( (byte_593A48A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__);
    sub_21FFC50(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_593A48A = 1;
  }
  v3 = this->fields.buttonState - 1;
  if ( this->fields.mode != 1 )
  {
    if ( v3 <= 1 )
    {
      eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0, 0) )
      {
        v11 = this->fields.eventSpotCooltimeComponent;
        if ( v11 )
        {
          v12 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v11, 0);
          v5 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
          v6 = *((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83);
          if ( !v12 )
            goto LABEL_28;
          if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
            v5 = (_QWORD *)sub_21FFC68(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
          v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
          v14 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v11 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( !*(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10);
            v11 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)v11 + 23);
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( !*((_DWORD *)v11 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v11, v10);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v18 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
            System_Action_bool____ctor(
              _9__21_0,
              v18,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              0);
            v19 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v19->__9__21_0 = _9__21_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v19->__9__21_0,
              (int32_t)_9__21_0,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
          }
          if ( v14 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v14, eventId, _9__21_0, 0);
            return;
          }
        }
        sub_21FFECC(v11, v10);
      }
    }
LABEL_25:
    v26 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
    if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_21FFC68(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v26, v26[4]);
    v28 = 2;
    goto LABEL_31;
  }
  if ( v3 > 1 )
    goto LABEL_25;
  v4 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
  v5 = Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__;
  v6 = *((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83);
  if ( !v4 )
  {
LABEL_28:
    if ( (v6 & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(v5);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    v28 = 0;
LABEL_31:
    OverwriteAssetSoundName__PlaySystemSe(v27, v28, 0, 0);
    return;
  }
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_EventInfoSpotCooltimeRewardReceiveButton_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v8);
}


void EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_593A48D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A48D = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_21FFECC(0, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0);
  }
}


void EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_593A490 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_21FFC50(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_593A490 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v8);
  EventReceiveCooltimeRewardRequest__beginRequest((EventReceiveCooltimeRewardRequest_o *)Request_object, eventId, 0);
}


void EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v7; // x0
  __int64 v8; // x1
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v9; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v10; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v14; // x8
  SpotCooltimeRewardDialog_o *v15; // x19
  BattleDropItem_array *_9__31_0; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *v18; // x21
  Il2CppObject *v19; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_593A491 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__);
    sub_21FFC50(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    sub_21FFC50(&StringLiteral_17528/*"ar192"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593A491 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
    v7 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)JsonManager__DeserializeArray_object_(
                                                                                v6,
                                                                                (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v7 )
    {
      v9 = v7;
      if ( !*((_DWORD *)v7 + 6) )
        goto LABEL_24;
      v10 = v7[4];
      if ( v10 && v10->__9__31_0 )
      {
        rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(rewardDialog, 0, 0) )
        {
          v12 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
          v7 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)OverwriteAssetSoundName__PlaySe(
                                                                                      v12,
                                                                                      (System_String_o *)StringLiteral_17528/*"ar192"*/,
                                                                                      0,
                                                                                      0);
          if ( *((_DWORD *)v9 + 6) )
          {
            v14 = v9[4];
            if ( !v14 )
              goto LABEL_25;
            v15 = this->fields.rewardDialog;
            _9__31_0 = (BattleDropItem_array *)v14->__9__31_0;
            v7 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( !*(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v13);
              v7 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v7[23];
            v18 = static_fields->__9__31_0;
            if ( !v18 )
            {
              if ( !*((_DWORD *)v7 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v7, v13);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v19 = (Il2CppObject *)static_fields->__9;
              v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(v18, v19, Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, 0);
              v20 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v20->__9__31_0 = v18;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v20->__9__31_0,
                (int32_t)v18,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
            }
            if ( !v15 )
LABEL_25:
              sub_21FFECC(v7, v13);
            SpotCooltimeRewardDialog__Open(v15, _9__31_0, v18, 0);
            return;
          }
LABEL_24:
          sub_21FFED4(v7);
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
  __int64 v11; // x1
  Il2CppObject *Object_object__58323140; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_593A48C & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A48C = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, asset);
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
    sub_21FFECC(v10, v9);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0) )
  {
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                asset,
                                prefabName,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Object_object__58323140,
                                        0,
                                        0);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !Object_object__58323140 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_object__58323140, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v14 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v14;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.buttonEffectPrefab,
        (int32_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0, 0) )
      {
        v21 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SafeSetParent_42881912(v21, gameObject, 0);
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
  __int64 v5; // x1
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  UISprite_o *v9; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v15; // x2

  if ( (byte_593A489 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12775/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/);
    byte_593A489 = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v7 = ButtonSpriteNameByEventId;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) && !System_String__IsNullOrEmpty(v7, 0) )
  {
    v9 = this->fields.buttonSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
    AtlasManager__SetEventUI(v9, v7, 0);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12775/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v11, 0), (v11 = (System_String_o *)this->fields.buttonTextLabel) == 0) )
  {
    sub_21FFECC(v11, v12);
  }
  UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.buttonTextMaxWidth, 0, 0);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v13);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v15);
}


void EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v8; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Object_object__58323140; // x21
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  __int64 v16; // x1
  Il2CppObject *Component_object; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593A488 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13521/*"SpotCooltimeRewardDialog"*/);
    byte_593A488 = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (MissionNaviTransitionBoardItem_o *)&this->fields.rewardDialog;
    v8 = (UnityEngine_Object_o *)rewardDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, asset);
    v10 = UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( !v10 )
    {
      if ( asset )
      {
        Object_object__58323140 = AssetData__GetObject_object__58323140(
                                    asset,
                                    (System_String_o *)StringLiteral_13521/*"SpotCooltimeRewardDialog"*/,
                                    (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
          return;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        v15 = UnityEngine_Object__Instantiate_object_(
                Object_object__58323140,
                (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0) )
          return;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0, 0) )
          GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v15, dialogParent, 0);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v15, 0);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v15, 0);
        if ( v15 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, 0, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v15,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
          sub_21FFBF4(p_rewardDialog, (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
          return;
        }
      }
      sub_21FFECC(v10, v11);
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

  if ( (byte_593A48E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A48E = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0, 0) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_21FFECC(0, v4);
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
  float v5; // s0 OVERLAPPED
  float v6; // s1
  float v7; // s2
  float v8; // s3
  const MethodInfo *v9; // x1
  int32_t buttonState; // w8
  bool v11; // zf
  unsigned int v12; // w8
  int v13; // w10
  _BOOL4 v14; // w8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  receiveButton = (UnityEngine_Behaviour_o *)this->fields.receiveButton;
  this->fields.buttonState = state;
  if ( (unsigned int)(state - 1) <= 1 )
  {
    if ( receiveButton )
    {
      UnityEngine_Behaviour__set_enabled(receiveButton, 1, 0);
      receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
      if ( receiveButton )
      {
        v15.fields.r = 1.0;
        v15.fields.g = 1.0;
        v15.fields.b = 1.0;
        v15.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)receiveButton, v15, 0);
        receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
        if ( receiveButton )
        {
          v5 = 1.0;
          v6 = 1.0;
          v7 = 1.0;
          goto LABEL_10;
        }
      }
    }
LABEL_18:
    sub_21FFECC(receiveButton, *(_QWORD *)&state);
  }
  if ( !receiveButton )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled(receiveButton, 0, 0);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonSprite;
  if ( !receiveButton )
    goto LABEL_18;
  v16.fields.r = 0.5;
  v16.fields.g = 0.5;
  v16.fields.b = 0.5;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)receiveButton, v16, 0);
  receiveButton = (UnityEngine_Behaviour_o *)this->fields.buttonTextLabel;
  if ( !receiveButton )
    goto LABEL_18;
  v5 = 0.5;
  v6 = 0.5;
  v7 = 0.5;
LABEL_10:
  v8 = 1.0;
  UIWidget__set_color((UIWidget_o *)receiveButton, *(UnityEngine_Color_o *)&v5, 0);
  buttonState = this->fields.buttonState;
  v11 = buttonState == 2;
  v12 = buttonState - 1;
  v13 = v11;
  v14 = v12 < 2;
  if ( this->fields.mode != 1 )
    v14 = v13;
  if ( v14 )
    EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(this, v9);
  else
    EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(this, v9);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A495 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_593A495 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_593A496 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__);
    sub_21FFC50(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
    byte_593A496 = 1;
  }
  v4 = sub_21FFEBC(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_593A497 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_593A497 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}