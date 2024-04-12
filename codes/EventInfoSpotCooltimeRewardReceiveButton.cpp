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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0E69 & 1) == 0 )
  {
    sub_B52984(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__);
    sub_B52984(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_42B0E69 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v6 = (UserServantMaster_o *)Instance;
  v7 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v6, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v8 = (CommonUI_o *)Instance;
      v9 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
        Instance = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__35_0 = static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B52A54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v13,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        v14 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v14->__9__35_0 = _9__35_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v14->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v8 )
      {
        CommonUI__OpenSvtFrameShortDlg(v8, v9, svtKeep, 0, 1, _9__35_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B52A5C(Instance, v5);
  }
  return v7;
}


System_String_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_42B0E61 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0E61 = 1;
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

  if ( (byte_42B0E6A & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0E6A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v3.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  return NetworkManager__getTime_25741128(v3, 0LL) - 1;
}


EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeRewardReceiveButton_EventInfo_array *eventInfoList; // x10
  int max_length; // w8
  __int64 v5; // x9
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o **m_Items; // x10

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    m_Items = eventInfoList->m_Items;
    while ( 1 )
    {
      this = (EventInfoSpotCooltimeRewardReceiveButton_o *)m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == eventId )
        return (EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_9:
    sub_B52A5C(this, eventId);
  }
  return 0LL;
}


int32_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_o *v2; // x19
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 CurrentLevelEntity; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x26
  UserEventCooltimeRewardMaster_o *v8; // x22
  int v9; // w25
  int v10; // w27
  char v11; // w20
  unsigned __int64 v12; // x28
  int32_t v13; // w23
  UserEventCooltimeRewardEntity_o *v14; // x24
  const MethodInfo *v15; // x4
  __int64 v16; // x23
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-60h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_42B0E65 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0E65 = 1;
  }
  entity = 0LL;
  if ( !v2->fields.mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v2->fields.eventSpotCooltimeComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0LL, 0LL) )
    {
      CurrentLevelEntity = (__int64)v2->fields.eventSpotCooltimeComponent;
      if ( !CurrentLevelEntity )
        goto LABEL_37;
      return EventSpotCooltimeComponent__GetReceivableRewardState(
               (EventSpotCooltimeComponent_o *)CurrentLevelEntity,
               0LL);
    }
    return 0;
  }
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_37;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = (UserEventCooltimeRewardMaster_o *)CurrentLevelEntity;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v8 )
        break;
      v13 = baseSpotIdList->fields._items->m_Items[v12 + 1];
      CurrentLevelEntity = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                      v8,
                                      v2->fields.eventId,
                                      v13,
                                      0LL);
      if ( CurrentLevelEntity )
      {
        if ( !Master_WarQuestSelectionMaster )
          break;
        v14 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
        CurrentLevelEntity = EventCooltimeRewardMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v2->fields.eventId,
                               v13,
                               *(_DWORD *)(CurrentLevelEntity + 32),
                               0LL);
        if ( (CurrentLevelEntity & 1) != 0 )
        {
          CurrentLevelEntity = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                 (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                 entity,
                                 v14,
                                 CurrentTime,
                                 v15);
          if ( CurrentLevelEntity >= 1 )
          {
            v16 = CurrentLevelEntity;
            CurrentLevelEntity = (__int64)entity;
            if ( !entity )
              break;
            CurrentLevelEntity = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( CurrentLevelEntity )
            {
              CurrentLevelEntity = GiftEntity__isQp((GiftEntity_o *)CurrentLevelEntity, 0LL);
              v10 |= CurrentLevelEntity ^ 1;
            }
            if ( !entity )
              break;
            v11 = 1;
            v9 |= v16 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( (__int64)++v12 >= size )
        goto LABEL_34;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_37:
    sub_B52A5C(CurrentLevelEntity, v5);
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
LABEL_34:
  if ( ((v9 | v10) & 1) != 0 )
    return 2;
  else
    return v11 & 1;
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
    sub_B52A5C(this, cooltimeRewardEntity);
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
  int64_t CurrentTime; // x20
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  UserEventCooltimeRewardMaster_o *CurrentLevelEntity; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x25
  UserEventCooltimeRewardMaster_o *v9; // x22
  unsigned __int64 v10; // x26
  int32_t v11; // w24
  UserEventCooltimeRewardEntity_o *v12; // x23
  const MethodInfo *v13; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x23
  const MethodInfo *v15; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_42B0E68 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_42B0E68 = 1;
  }
  entity = 0LL;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_20:
    sub_B52A5C(CurrentLevelEntity, v6);
  size = baseSpotIdList->fields._size;
  if ( (int)size < 1 )
    return 0;
  v9 = CurrentLevelEntity;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)baseSpotIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( !v9 )
      goto LABEL_20;
    v11 = baseSpotIdList->fields._items->m_Items[v10 + 1];
    CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                              v9,
                                                              v2->fields.eventId,
                                                              v11,
                                                              0LL);
    if ( CurrentLevelEntity )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_20;
      v12 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
      CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                v2->fields.eventId,
                                                                v11,
                                                                (int32_t)CurrentLevelEntity->fields.list,
                                                                0LL);
      if ( ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                                                                entity,
                                                                                v12,
                                                                                CurrentTime,
                                                                                v13);
        CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                                  ReceivedRewardUnitNum,
                                                                  entity,
                                                                  v15);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
          return 1;
      }
    }
    if ( (__int64)++v10 >= size )
      return 0;
    baseSpotIdList = v2->fields.baseSpotIdList;
    if ( !baseSpotIdList )
      goto LABEL_20;
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
  System_Int32_array *v7; // x7
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1

  if ( (byte_42B0E5D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&StringLiteral_11593/*"RewardButtonBlink"*/);
    byte_42B0E5D = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventSpotCooltimeComponent,
    (System_Int32_array **)component,
    (System_String_array **)component,
    (System_String_array **)asset,
    *(System_Boolean_array ***)&mode,
    (System_Int32_array **)dialogParent,
    (System_Int32_array *)method,
    v7);
  this->fields.mode = mode;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v15);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11593/*"RewardButtonBlink"*/,
    v23);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v24);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v25);
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
  unsigned int v3; // w8
  bool v4; // w0
  SoundManager_c *v5; // x8
  __int16 v6; // w9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v9; // x1
  void *v10; // x0
  bool v11; // w0
  EventSpotCooltimeComponent_o *v12; // x20
  int32_t eventId; // w19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v16; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w0

  if ( (byte_42B0E60 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool___ctor__);
    sub_B52984(&System_Action_bool__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__);
    sub_B52984(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_42B0E60 = 1;
  }
  v3 = this->fields.buttonState - 1;
  if ( this->fields.mode != 1 )
  {
    if ( v3 <= 1 )
    {
      eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0LL, 0LL) )
      {
        v10 = this->fields.eventSpotCooltimeComponent;
        if ( v10 )
        {
          v11 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v10, 0LL);
          v5 = SoundManager_TypeInfo;
          v6 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( !v11 )
          {
LABEL_34:
            if ( (v6 & 0x400) != 0 && !v5->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v5);
            v24 = 0;
LABEL_38:
            SoundManager__playSystemSe(v24, 0LL);
            return;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          v12 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v10 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
            v10 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)v10 + 23);
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( (*((_BYTE *)v10 + 307) & 4) != 0 && !*((_DWORD *)v10 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v10);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v16 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_B52A54(System_Action_bool__TypeInfo);
            System_Action_bool____ctor(
              _9__21_0,
              v16,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              (const MethodInfo_2623838 *)Method_System_Action_bool___ctor__);
            v17 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v17->__9__21_0 = _9__21_0;
            sub_B52920(
              (BattleServantConfConponent_o *)&v17->__9__21_0,
              (System_Int32_array **)_9__21_0,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
          }
          if ( v12 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v12, eventId, _9__21_0, 0LL);
            return;
          }
        }
        sub_B52A5C(v10, v9);
      }
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v24 = 2;
    goto LABEL_38;
  }
  if ( v3 > 1 )
    goto LABEL_30;
  v4 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
  v5 = SoundManager_TypeInfo;
  v6 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( !v4 )
    goto LABEL_34;
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v7);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_42B0E63 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0E63 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_42B0E66 & 1) == 0 )
  {
    sub_B52984(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__);
    sub_B52984(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_42B0E66 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v5,
                                                                               (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B52A5C(0LL, v7);
  EventReceiveCooltimeRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v6; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v7; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v8; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v10; // x1
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v11; // x8
  SpotCooltimeRewardDialog_o *v12; // x19
  BattleDropItem_array *_9__31_0; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0

  if ( (byte_42B0E67 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__);
    sub_B52984(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    sub_B52984(&StringLiteral_16549/*"ar192"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B0E67 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    v5 = (Il2CppObject *)System_String__Concat_44570600(
                           (System_String_o *)StringLiteral_15739/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_15976/*"]"*/,
                           0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v6 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                                v5,
                                                                                (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v6 )
    {
      v7 = v6;
      if ( !*((_DWORD *)v6 + 6) )
        goto LABEL_31;
      v8 = v6[4];
      if ( v8 && v8->__9__31_0 )
      {
        rewardDialog = (UnityEngine_Object_o *)this->fields.rewardDialog;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(rewardDialog, 0LL, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v6 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)SoundManager__playSe(
                                                                                      (System_String_o *)StringLiteral_16549/*"ar192"*/,
                                                                                      0LL);
          if ( *((_DWORD *)v7 + 6) )
          {
            v11 = v7[4];
            if ( !v11 )
              goto LABEL_32;
            v12 = this->fields.rewardDialog;
            _9__31_0 = (BattleDropItem_array *)v11->__9__31_0;
            v6 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v6 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v6[23];
            v15 = static_fields->__9__31_0;
            if ( !v15 )
            {
              if ( (*((_BYTE *)v6 + 307) & 4) != 0 && !*((_DWORD *)v6 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v6);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v16 = (Il2CppObject *)static_fields->__9;
              v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(
                v15,
                v16,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              v17 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v17->__9__31_0 = v15;
              sub_B52920(
                (BattleServantConfConponent_o *)&v17->__9__31_0,
                (System_Int32_array **)v15,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            if ( !v12 )
LABEL_32:
              sub_B52A5C(v6, v10);
            SpotCooltimeRewardDialog__Open(v12, _9__31_0, v15, 0LL);
            return;
          }
LABEL_31:
          v24 = sub_B52A88(v6);
          sub_B52A28(v24, 0LL);
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
  UnityEngine_Object_o **p_buttonEffectPrefab; // x20
  UnityEngine_Object_o *buttonEffectPrefab; // x23
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42B0E62 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0E62 = 1;
  }
  p_buttonEffectPrefab = (UnityEngine_Object_o **)&this->fields.buttonEffectPrefab;
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v10 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive(v10, 0, 0LL);
      return;
    }
LABEL_22:
    sub_B52A5C(v10, v9);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               asset,
                                                               prefabName,
                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) == 0 )
    {
      if ( !Object_WarBoardWaitTimeSetting )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v12;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.buttonEffectPrefab, v12, v13, v14, v15, v16, v17, v18);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v19 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_32091088(v19, gameObject, 0LL);
        v10 = this->fields.buttonEffectPrefab;
        if ( v10 )
          goto LABEL_8;
        goto LABEL_22;
      }
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(
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

  if ( (byte_42B0E5F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_12393/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/);
    byte_42B0E5F = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v6 = ButtonSpriteNameByEventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v6, 0LL) )
  {
    v7 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v7, v6, 0LL);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12393/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v9, 0LL), (v9 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_B52A5C(v9, v10);
  }
  UILabel__SetCondensedScale((UILabel_o *)v9, this->fields.buttonTextMaxWidth, 0LL);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v11);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v13);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v8; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *v13; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42B0E5E & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13091/*"SpotCooltimeRewardDialog"*/);
    byte_42B0E5E = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
    v8 = (UnityEngine_Object_o *)rewardDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( !v10 )
    {
      if ( asset )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   (System_String_o *)StringLiteral_13091/*"SpotCooltimeRewardDialog"*/,
                                                                   (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v13 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_32091088((UnityEngine_GameObject_o *)v13, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v13, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v13, 0LL);
        if ( v13 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 0, 0LL);
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v13,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B52920(p_rewardDialog, Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
          return;
        }
      }
      sub_B52A5C(v10, v11);
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

  if ( (byte_42B0E64 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0E64 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v5 = this->fields.buttonEffectPrefab;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
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
  UIWidget_o *v5; // x20
  int v6; // s0
  UIWidget_o *buttonTextLabel; // x20
  int v11; // s0
  UIWidget_o *buttonSprite; // x20
  int v16; // s0
  const MethodInfo *v20; // x1
  int32_t buttonState; // w8
  _BOOL4 v22; // w10
  _BOOL4 v23; // w8

  receiveButton = (UnityEngine_Behaviour_o *)this->fields.receiveButton;
  this->fields.buttonState = state;
  if ( !receiveButton )
    goto LABEL_13;
  if ( (unsigned int)(state - 1) > 1 )
  {
    UnityEngine_Behaviour__set_enabled(receiveButton, 0, 0LL);
    buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
    if ( buttonSprite )
    {
      UIWidget__set_color(buttonSprite, *(UnityEngine_Color_o *)&v16, 0LL);
      buttonTextLabel = (UIWidget_o *)this->fields.buttonTextLabel;
      *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL);
      if ( buttonTextLabel )
        goto LABEL_8;
    }
LABEL_13:
    sub_B52A5C(receiveButton, *(_QWORD *)&state);
  }
  UnityEngine_Behaviour__set_enabled(receiveButton, 1, 0LL);
  v5 = (UIWidget_o *)this->fields.buttonSprite;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !v5 )
    goto LABEL_13;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v6, 0LL);
  buttonTextLabel = (UIWidget_o *)this->fields.buttonTextLabel;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !buttonTextLabel )
    goto LABEL_13;
LABEL_8:
  UIWidget__set_color(buttonTextLabel, *(UnityEngine_Color_o *)&v11, 0LL);
  buttonState = this->fields.buttonState;
  v22 = (unsigned int)(buttonState - 1) < 2;
  v23 = buttonState == 2;
  if ( this->fields.mode == 1 )
    v23 = v22;
  if ( v23 )
    EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(this, v20);
  else
    EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(this, v20);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton_EventInfo___ctor(
        EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0

  if ( (byte_42AD90B & 1) == 0 )
  {
    sub_B52984(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
    byte_42AD90B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___ctor(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton___c___CheckServantSpaceShortage_b__35_0(
        EventInfoSpotCooltimeRewardReceiveButton___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_42AD90C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__);
    sub_B52984(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
    byte_42AD90C = 1;
  }
  v4 = sub_B52A54(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
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
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_42AD90D & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    sub_B52984(&StringLiteral_12799/*"ServantCombine"*/);
    byte_42AD90D = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466224(v5, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B52A5C(v6, v7);
    case 1:
      v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v5, (System_String_o *)StringLiteral_12799/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        v6 = (AvalonSceneManager_o *)Instance;
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}