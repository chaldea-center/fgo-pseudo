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
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__35_0; // x22
  Il2CppObject *v19; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41886B0 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v7);
    sub_B2C35C(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v8);
    byte_41886B0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v12 = (UserServantMaster_o *)Instance;
  v13 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v14 = (CommonUI_o *)Instance;
      v15 = servantEquipSum[1];
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
        v19 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v19,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        v20 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v20->__9__35_0 = _9__35_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v20->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( v14 )
      {
        CommonUI__OpenSvtFrameShortDlg(v14, v15, svtKeep, 0, 1, _9__35_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B2C434(Instance, v11);
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

  if ( (byte_41886A8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&eventId);
    byte_41886A8 = 1;
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

  if ( (byte_41886B1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_41886B1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v3.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  return NetworkManager__getTime_26270684(v3, 0LL) - 1;
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
    sub_B2C434(this, eventId);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x26
  UserEventCooltimeRewardMaster_o *v13; // x22
  int v14; // w25
  int v15; // w27
  char v16; // w20
  unsigned __int64 v17; // x28
  int32_t v18; // w23
  UserEventCooltimeRewardEntity_o *v19; // x24
  const MethodInfo *v20; // x4
  __int64 v21; // x23
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-60h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_41886AC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41886AC = 1;
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_37;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = (UserEventCooltimeRewardMaster_o *)CurrentLevelEntity;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v13 )
        break;
      v18 = baseSpotIdList->fields._items->m_Items[v17 + 1];
      CurrentLevelEntity = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                      v13,
                                      v2->fields.eventId,
                                      v18,
                                      0LL);
      if ( CurrentLevelEntity )
      {
        if ( !Master_WarQuestSelectionMaster )
          break;
        v19 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
        CurrentLevelEntity = EventCooltimeRewardMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v2->fields.eventId,
                               v18,
                               *(_DWORD *)(CurrentLevelEntity + 32),
                               0LL);
        if ( (CurrentLevelEntity & 1) != 0 )
        {
          CurrentLevelEntity = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                 (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                 entity,
                                 v19,
                                 CurrentTime,
                                 v20);
          if ( CurrentLevelEntity >= 1 )
          {
            v21 = CurrentLevelEntity;
            CurrentLevelEntity = (__int64)entity;
            if ( !entity )
              break;
            CurrentLevelEntity = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( CurrentLevelEntity )
            {
              CurrentLevelEntity = GiftEntity__isQp((GiftEntity_o *)CurrentLevelEntity, 0LL);
              v15 |= CurrentLevelEntity ^ 1;
            }
            if ( !entity )
              break;
            v16 = 1;
            v14 |= v21 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( (__int64)++v17 >= size )
        goto LABEL_34;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_37:
    sub_B2C434(CurrentLevelEntity, v10);
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
LABEL_34:
  if ( ((v14 | v15) & 1) != 0 )
    return 2;
  else
    return v16 & 1;
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
    sub_B2C434(this, cooltimeRewardEntity);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x25
  UserEventCooltimeRewardMaster_o *v13; // x22
  unsigned __int64 v14; // x26
  int32_t v15; // w24
  UserEventCooltimeRewardEntity_o *v16; // x23
  const MethodInfo *v17; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x23
  const MethodInfo *v19; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_41886AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B2C35C(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v6);
    byte_41886AF = 1;
  }
  entity = 0LL;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_20:
    sub_B2C434(CurrentLevelEntity, v10);
  size = baseSpotIdList->fields._size;
  if ( (int)size < 1 )
    return 0;
  v13 = CurrentLevelEntity;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)baseSpotIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v13 )
      goto LABEL_20;
    v15 = baseSpotIdList->fields._items->m_Items[v14 + 1];
    CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                              v13,
                                                              v2->fields.eventId,
                                                              v15,
                                                              0LL);
    if ( CurrentLevelEntity )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_20;
      v16 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
      CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                v2->fields.eventId,
                                                                v15,
                                                                (int32_t)CurrentLevelEntity->fields.list,
                                                                0LL);
      if ( ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                                                                entity,
                                                                                v16,
                                                                                CurrentTime,
                                                                                v17);
        CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                                  ReceivedRewardUnitNum,
                                                                  entity,
                                                                  v19);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
          return 1;
      }
    }
    if ( (__int64)++v14 >= size )
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
  __int64 v17; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1

  if ( (byte_41886A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11506/*"RewardButtonBlink"*/, v15);
    byte_41886A4 = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_B2C2F8(
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v17);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11506/*"RewardButtonBlink"*/,
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
  __int64 v7; // x1
  unsigned int v8; // w8
  bool v9; // w0
  SoundManager_c *v10; // x8
  __int16 v11; // w9
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v14; // x1
  void *v15; // x0
  bool v16; // w0
  EventSpotCooltimeComponent_o *v17; // x20
  int32_t eventId; // w19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v21; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w0

  if ( (byte_41886A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v6);
    sub_B2C35C(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v7);
    byte_41886A7 = 1;
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
        v15 = this->fields.eventSpotCooltimeComponent;
        if ( v15 )
        {
          v16 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v15, 0LL);
          v10 = SoundManager_TypeInfo;
          v11 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( !v16 )
          {
LABEL_34:
            if ( (v11 & 0x400) != 0 && !v10->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v10);
            v29 = 0;
LABEL_38:
            SoundManager__playSystemSe(v29, 0LL);
            return;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          v17 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v15 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
            v15 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)v15 + 23);
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( (*((_BYTE *)v15 + 307) & 4) != 0 && !*((_DWORD *)v15 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v15);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v21 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
            System_Action_bool____ctor(
              _9__21_0,
              v21,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
            v22 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v22->__9__21_0 = _9__21_0;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v22->__9__21_0,
              (System_Int32_array **)_9__21_0,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
          }
          if ( v17 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v17, eventId, _9__21_0, 0LL);
            return;
          }
        }
        sub_B2C434(v15, v14);
      }
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v29 = 2;
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_41886AA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41886AA = 1;
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
      sub_B2C434(0LL, v4);
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
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_41886AD & 1) == 0 )
  {
    sub_B2C35C(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_41886AD = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v10);
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
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v21; // x8
  SpotCooltimeRewardDialog_o *v22; // x19
  BattleDropItem_array *_9__31_0; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *v25; // x21
  Il2CppObject *v26; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0

  if ( (byte_41886AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v9);
    sub_B2C35C(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16437/*"ar192"*/, v11);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v12);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v13);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v14);
    byte_41886AE = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v15 = (Il2CppObject *)System_String__Concat_44307816(
                            (System_String_o *)StringLiteral_15634/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15870/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                                 v15,
                                                                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
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
                                                                                       (System_String_o *)StringLiteral_16437/*"ar192"*/,
                                                                                       0LL);
          if ( *((_DWORD *)v17 + 6) )
          {
            v21 = v17[4];
            if ( !v21 )
              goto LABEL_32;
            v22 = this->fields.rewardDialog;
            _9__31_0 = (BattleDropItem_array *)v21->__9__31_0;
            v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v16 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v16[23];
            v25 = static_fields->__9__31_0;
            if ( !v25 )
            {
              if ( (*((_BYTE *)v16 + 307) & 4) != 0 && !*((_DWORD *)v16 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v16);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v26 = (Il2CppObject *)static_fields->__9;
              v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v25,
                v26,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              v27 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v27->__9__31_0 = v25;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v27->__9__31_0,
                (System_Int32_array **)v25,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33);
            }
            if ( !v22 )
LABEL_32:
              sub_B2C434(v16, v20);
            SpotCooltimeRewardDialog__Open(v22, _9__31_0, v25, 0LL);
            return;
          }
LABEL_31:
          v34 = sub_B2C460(v16);
          sub_B2C400(v34, 0LL);
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_41886A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, asset);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41886A9 = 1;
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
    v12 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
      return;
    }
LABEL_22:
    sub_B2C434(v12, v11);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               asset,
                                                               prefabName,
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) == 0 )
    {
      if ( !Object_WarBoardWaitTimeSetting )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v14 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v14;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.buttonEffectPrefab, v14, v15, v16, v17, v18, v19, v20);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v21 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_31331952(v21, gameObject, 0LL);
        v12 = this->fields.buttonEffectPrefab;
        if ( v12 )
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
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v16; // x2

  if ( (byte_41886A6 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12304/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v6);
    byte_41886A6 = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v12, 0LL), (v12 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_B2C434(v12, v13);
  }
  UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.buttonTextMaxWidth, 0LL);
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
  BattleServantConfConponent_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v12; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *v17; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_41886A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, asset);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_12994/*"SpotCooltimeRewardDialog"*/, v10);
    byte_41886A5 = 1;
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
                                                                   (System_String_o *)StringLiteral_12994/*"SpotCooltimeRewardDialog"*/,
                                                                   (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
        v17 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_31331952((UnityEngine_GameObject_o *)v17, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v17, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v17, 0LL);
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 0, 0LL);
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v17,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B2C2F8(p_rewardDialog, Component_srcLineSprite, v19, v20, v21, v22, v23, v24);
          return;
        }
      }
      sub_B2C434(v14, v15);
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

  if ( (byte_41886AB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41886AB = 1;
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
      sub_B2C434(0LL, v4);
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
    sub_B2C434(receiveButton, *(_QWORD *)&state);
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
  Il2CppObject *v2; // x19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0

  if ( (byte_4184B0F & 1) == 0 )
  {
    sub_B2C35C(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1);
    byte_4184B0F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4184B10 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v5);
    sub_B2C35C(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v6);
    byte_4184B10 = 1;
  }
  v7 = sub_B2C42C(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
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
  SceneJumpInfo_o *v8; // x20
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4184B11 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    sub_B2C35C(&StringLiteral_12707/*"ServantCombine"*/, v5);
    byte_4184B11 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v8, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(v9, v10);
    case 1:
      v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v8, (System_String_o *)StringLiteral_12707/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_12:
        v9 = (AvalonSceneManager_o *)Instance;
        v12 = (Il2CppObject *)v8;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}