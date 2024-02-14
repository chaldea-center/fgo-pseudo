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
  UserServantMaster_o *v11; // x20
  bool v12; // w19
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *v15; // x19
  int32_t v16; // w20
  int32_t svtKeep; // w21
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__35_0; // x22
  Il2CppObject *v20; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421563E & 1) == 0 )
  {
    sub_B0D8A4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v7);
    sub_B0D8A4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v8);
    byte_421563E = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v11 = (UserServantMaster_o *)Instance;
  v12 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v11, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v15 = (CommonUI_o *)Instance;
      v16 = servantEquipSum[1];
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
        v20 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v13,
                                                                     v14);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v20,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        v21 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v21->__9__35_0 = _9__35_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v21->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      if ( v15 )
      {
        CommonUI__OpenSvtFrameShortDlg(v15, v16, svtKeep, 0, 1, _9__35_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_4215636 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, *(_QWORD *)&eventId);
    byte_4215636 = 1;
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

  if ( (byte_421563F & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_421563F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v3.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  return NetworkManager__getTime_25503776(v3, 0LL) - 1;
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
    sub_B0D97C(this);
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
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 CurrentLevelEntity; // x0
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x26
  UserEventCooltimeRewardMaster_o *v12; // x22
  int v13; // w25
  int v14; // w27
  char v15; // w20
  unsigned __int64 v16; // x28
  int32_t v17; // w23
  UserEventCooltimeRewardEntity_o *v18; // x24
  const MethodInfo *v19; // x4
  __int64 v20; // x23
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-60h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_421563A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421563A = 1;
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_37;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = (UserEventCooltimeRewardMaster_o *)CurrentLevelEntity;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v12 )
        break;
      v17 = baseSpotIdList->fields._items->m_Items[v16 + 1];
      CurrentLevelEntity = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                      v12,
                                      v2->fields.eventId,
                                      v17,
                                      0LL);
      if ( CurrentLevelEntity )
      {
        if ( !Master_WarQuestSelectionMaster )
          break;
        v18 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
        CurrentLevelEntity = EventCooltimeRewardMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v2->fields.eventId,
                               v17,
                               *(_DWORD *)(CurrentLevelEntity + 32),
                               0LL);
        if ( (CurrentLevelEntity & 1) != 0 )
        {
          CurrentLevelEntity = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                 (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                 entity,
                                 v18,
                                 CurrentTime,
                                 v19);
          if ( CurrentLevelEntity >= 1 )
          {
            v20 = CurrentLevelEntity;
            CurrentLevelEntity = (__int64)entity;
            if ( !entity )
              break;
            CurrentLevelEntity = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( CurrentLevelEntity )
            {
              CurrentLevelEntity = GiftEntity__isQp((GiftEntity_o *)CurrentLevelEntity, 0LL);
              v14 |= CurrentLevelEntity ^ 1;
            }
            if ( !entity )
              break;
            v15 = 1;
            v13 |= v20 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( (__int64)++v16 >= size )
        goto LABEL_34;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_37:
    sub_B0D97C(CurrentLevelEntity);
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
LABEL_34:
  if ( ((v13 | v14) & 1) != 0 )
    return 2;
  else
    return v15 & 1;
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
    sub_B0D97C(this);
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
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  UserEventCooltimeRewardMaster_o *CurrentLevelEntity; // x0
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x25
  UserEventCooltimeRewardMaster_o *v12; // x22
  unsigned __int64 v13; // x26
  int32_t v14; // w24
  UserEventCooltimeRewardEntity_o *v15; // x23
  const MethodInfo *v16; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x23
  const MethodInfo *v18; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_421563D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B0D8A4(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v6);
    byte_421563D = 1;
  }
  entity = 0LL;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_20:
    sub_B0D97C(CurrentLevelEntity);
  size = baseSpotIdList->fields._size;
  if ( (int)size < 1 )
    return 0;
  v12 = CurrentLevelEntity;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)baseSpotIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v12 )
      goto LABEL_20;
    v14 = baseSpotIdList->fields._items->m_Items[v13 + 1];
    CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                              v12,
                                                              v2->fields.eventId,
                                                              v14,
                                                              0LL);
    if ( CurrentLevelEntity )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_20;
      v15 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
      CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                v2->fields.eventId,
                                                                v14,
                                                                (int32_t)CurrentLevelEntity->fields.list,
                                                                0LL);
      if ( ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                                                                entity,
                                                                                v15,
                                                                                CurrentTime,
                                                                                v16);
        CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                                  ReceivedRewardUnitNum,
                                                                  entity,
                                                                  v18);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
          return 1;
      }
    }
    if ( (__int64)++v13 >= size )
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
  __int64 v14; // x1
  __int64 v15; // x1
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1

  if ( (byte_4215632 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_11533/*"RewardButtonBlink"*/, v15);
    byte_4215632 = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_B0D840(
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11533/*"RewardButtonBlink"*/,
    v24);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v25);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v26);
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
  __int64 v7; // x1
  unsigned int v8; // w8
  bool v9; // w0
  SoundManager_c *v10; // x8
  __int16 v11; // w9
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  void *v14; // x0
  bool v15; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  EventSpotCooltimeComponent_o *v18; // x20
  int32_t eventId; // w19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v22; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w0

  if ( (byte_4215635 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v6);
    sub_B0D8A4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v7);
    byte_4215635 = 1;
  }
  v8 = this->fields.buttonState - 1;
  if ( this->fields.mode != 1 )
  {
    if ( v8 <= 1 )
    {
      eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0LL, 0LL) )
      {
        v14 = this->fields.eventSpotCooltimeComponent;
        if ( v14 )
        {
          v15 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v14, 0LL);
          v10 = SoundManager_TypeInfo;
          v11 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( !v15 )
          {
LABEL_34:
            if ( (v11 & 0x400) != 0 && !v10->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v10);
            v30 = 0;
LABEL_38:
            SoundManager__playSystemSe(v30, 0LL);
            return;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          v18 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v14 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
            v14 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)v14 + 23);
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( (*((_BYTE *)v14 + 307) & 4) != 0 && !*((_DWORD *)v14 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v14);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v22 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v16, v17);
            System_Action_bool____ctor(
              _9__21_0,
              v22,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
            v23 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v23->__9__21_0 = _9__21_0;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v23->__9__21_0,
              (System_Int32_array **)_9__21_0,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
          }
          if ( v18 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v18, eventId, _9__21_0, 0LL);
            return;
          }
        }
        sub_B0D97C(v14);
      }
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v30 = 2;
    goto LABEL_38;
  }
  if ( v8 > 1 )
    goto LABEL_30;
  v9 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
  v10 = SoundManager_TypeInfo;
  v11 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( !v9 )
    goto LABEL_34;
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v12);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4215638 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215638 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v4 = this->fields.buttonEffectPrefab;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
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
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_421563B & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_421563B = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&eventId,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v8,
                                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  EventReceiveCooltimeRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, 0LL);
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
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v16; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v17; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v18; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v22; // x8
  SpotCooltimeRewardDialog_o *v23; // x19
  BattleDropItem_array *_9__31_0; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *v26; // x21
  Il2CppObject *v27; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0

  if ( (byte_421563C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v5);
    sub_B0D8A4(&JsonManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v9);
    sub_B0D8A4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16486/*"ar192"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v13);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v14);
    byte_421563C = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    v15 = (Il2CppObject *)System_String__Concat_43852188(
                            (System_String_o *)StringLiteral_15681/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15917/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                                 v15,
                                                                                 (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v16 )
    {
      v17 = v16;
      if ( !*((_DWORD *)v16 + 6) )
        goto LABEL_31;
      v18 = v16[4];
      if ( v18 && v18->__9__31_0 )
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
          v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)SoundManager__playSe(
                                                                                       (System_String_o *)StringLiteral_16486/*"ar192"*/,
                                                                                       0LL);
          if ( *((_DWORD *)v17 + 6) )
          {
            v22 = v17[4];
            if ( !v22 )
              goto LABEL_32;
            v23 = this->fields.rewardDialog;
            _9__31_0 = (BattleDropItem_array *)v22->__9__31_0;
            v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v16[23];
            v26 = static_fields->__9__31_0;
            if ( !v26 )
            {
              if ( (*((_BYTE *)v16 + 307) & 4) != 0 && !*((_DWORD *)v16 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v16);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
              System_Action___ctor(
                v26,
                v27,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              v28 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v28->__9__31_0 = v26;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v28->__9__31_0,
                (System_Int32_array **)v26,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            if ( !v23 )
LABEL_32:
              sub_B0D97C(v16);
            SpotCooltimeRewardDialog__Open(v23, _9__31_0, v26, 0LL);
            return;
          }
LABEL_31:
          v35 = sub_B0D9A8(v16);
          sub_B0D948(v35, 0LL);
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4215637 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, asset);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4215637 = 1;
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
    v11 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive(v11, 0, 0LL);
      return;
    }
LABEL_22:
    sub_B0D97C(v11);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               asset,
                                                               prefabName,
                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
      if ( !Object_WarBoardWaitTimeSetting )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v13;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.buttonEffectPrefab, v13, v14, v15, v16, v17, v18, v19);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v20 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_31184716(v20, gameObject, 0LL);
        v11 = this->fields.buttonEffectPrefab;
        if ( v11 )
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *ButtonSpriteNameByEventId; // x0
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v9; // x20
  UISprite_o *v10; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v15; // x2

  if ( (byte_4215634 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12342/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v6);
    byte_4215634 = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v9 = ButtonSpriteNameByEventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
  {
    v10 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v10, v9, 0LL);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v12, 0LL), (v12 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_B0D97C(v12);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.buttonTextMaxWidth, 0LL);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v13);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v15);
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
  BattleServantConfConponent_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v12; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v14; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *v16; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4215633 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, asset);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_13038/*"SpotCooltimeRewardDialog"*/, v10);
    byte_4215633 = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
    v12 = (UnityEngine_Object_o *)rewardDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( !v14 )
    {
      if ( asset )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   (System_String_o *)StringLiteral_13038/*"SpotCooltimeRewardDialog"*/,
                                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
        v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v16, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v16, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v16, 0LL);
        if ( v16 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v16,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B0D840(p_rewardDialog, Component_srcLineSprite, v18, v19, v20, v21, v22, v23);
          return;
        }
      }
      sub_B0D97C(v14);
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4215639 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215639 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v4 = this->fields.buttonEffectPrefab;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
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
    sub_B0D97C(receiveButton);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0

  if ( (byte_4211B74 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1);
    byte_4211B74 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211B75 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v5);
    sub_B0D8A4(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v6);
    byte_4211B75 = 1;
  }
  v7 = sub_B0D974(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
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
  WebViewManager_o *Instance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  AvalonSceneManager_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_4211B76 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v5);
    byte_4211B76 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651652(v10, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(v11);
    case 1:
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v13 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v11, v12, 1, v13, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_16651556(v10, (System_String_o *)StringLiteral_12746/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        v11 = (AvalonSceneManager_o *)Instance;
        v13 = (Il2CppObject *)v10;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}