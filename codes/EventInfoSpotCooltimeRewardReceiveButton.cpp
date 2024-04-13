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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  __int64 v25; // x1
  UserServantMaster_o *v26; // x20
  bool v27; // w19
  CommonUI_o *v28; // x19
  int32_t v29; // w20
  int32_t svtKeep; // w21
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__35_0; // x22
  Il2CppObject *v33; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E955A & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v17, v18, v19);
    sub_B5D5C4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v20, v21, v22);
    byte_42E955A = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  v26 = (UserServantMaster_o *)Instance;
  v27 = 1;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v26, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v28 = (CommonUI_o *)Instance;
      v29 = servantEquipSum[1];
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
        v33 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v33,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        v34 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v34->__9__35_0 = _9__35_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v34->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      if ( v28 )
      {
        CommonUI__OpenSvtFrameShortDlg(v28, v29, svtKeep, 0, 1, _9__35_0, 2, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( Instance )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B5D69C(Instance, v25);
  }
  return v27;
}


System_String_o *__fastcall EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_ButtonSpriteName; // x8

  if ( (byte_42E9552 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, eventId, (_DWORD)method, v3);
    byte_42E9552 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  System_DateTime_o v5; // 0:x0.8

  if ( (byte_42E955B & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E955B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  return NetworkManager__getTime_26076684(v5, 0LL) - 1;
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
    sub_B5D69C(this, eventId);
  }
  return 0LL;
}


int32_t __fastcall EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoSpotCooltimeRewardReceiveButton_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  __int64 CurrentLevelEntity; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x26
  UserEventCooltimeRewardMaster_o *v25; // x22
  int v26; // w25
  int v27; // w27
  char v28; // w20
  unsigned __int64 v29; // x28
  int32_t v30; // w23
  UserEventCooltimeRewardEntity_o *v31; // x24
  const MethodInfo *v32; // x4
  __int64 v33; // x23
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  int64_t CurrentTime; // [xsp+0h] [xbp-60h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_42E9556 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v14, v15, v16);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E9556 = 1;
  }
  entity = 0LL;
  if ( !v4->fields.mode )
  {
    eventSpotCooltimeComponent = (UnityEngine_Object_o *)v4->fields.eventSpotCooltimeComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(eventSpotCooltimeComponent, 0LL, 0LL) )
    {
      CurrentLevelEntity = (__int64)v4->fields.eventSpotCooltimeComponent;
      if ( !CurrentLevelEntity )
        goto LABEL_37;
      return EventSpotCooltimeComponent__GetReceivableRewardState(
               (EventSpotCooltimeComponent_o *)CurrentLevelEntity,
               0LL);
    }
    return 0;
  }
  if ( !v4->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v4->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_37;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v25 = (UserEventCooltimeRewardMaster_o *)CurrentLevelEntity;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v25 )
        break;
      v30 = baseSpotIdList->fields._items->m_Items[v29 + 1];
      CurrentLevelEntity = (__int64)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                      v25,
                                      v4->fields.eventId,
                                      v30,
                                      0LL);
      if ( CurrentLevelEntity )
      {
        if ( !Master_WarQuestSelectionMaster )
          break;
        v31 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
        CurrentLevelEntity = EventCooltimeRewardMaster__TryGetEntity(
                               Master_WarQuestSelectionMaster,
                               &entity,
                               v4->fields.eventId,
                               v30,
                               *(_DWORD *)(CurrentLevelEntity + 32),
                               0LL);
        if ( (CurrentLevelEntity & 1) != 0 )
        {
          CurrentLevelEntity = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                 (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                 entity,
                                 v31,
                                 CurrentTime,
                                 v32);
          if ( CurrentLevelEntity >= 1 )
          {
            v33 = CurrentLevelEntity;
            CurrentLevelEntity = (__int64)entity;
            if ( !entity )
              break;
            CurrentLevelEntity = (__int64)EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( CurrentLevelEntity )
            {
              CurrentLevelEntity = GiftEntity__isQp((GiftEntity_o *)CurrentLevelEntity, 0LL);
              v27 |= CurrentLevelEntity ^ 1;
            }
            if ( !entity )
              break;
            v28 = 1;
            v26 |= v33 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( (__int64)++v29 >= size )
        goto LABEL_34;
      baseSpotIdList = v4->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_37:
    sub_B5D69C(CurrentLevelEntity, v22);
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
LABEL_34:
  if ( ((v26 | v27) & 1) != 0 )
    return 2;
  else
    return v28 & 1;
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
    sub_B5D69C(this, cooltimeRewardEntity);
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoSpotCooltimeRewardReceiveButton_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int64_t CurrentTime; // x20
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x21
  UserEventCooltimeRewardMaster_o *CurrentLevelEntity; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x25
  UserEventCooltimeRewardMaster_o *v23; // x22
  unsigned __int64 v24; // x26
  int32_t v25; // w24
  UserEventCooltimeRewardEntity_o *v26; // x23
  const MethodInfo *v27; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x23
  const MethodInfo *v29; // x2
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E9559 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12, v13);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B5D5C4(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v14,
                                                           v15,
                                                           v16);
    byte_42E9559 = 1;
  }
  entity = 0LL;
  if ( !v4->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v4->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_20:
    sub_B5D69C(CurrentLevelEntity, v20);
  size = baseSpotIdList->fields._size;
  if ( (int)size < 1 )
    return 0;
  v23 = CurrentLevelEntity;
  v24 = 0LL;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)baseSpotIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v23 )
      goto LABEL_20;
    v25 = baseSpotIdList->fields._items->m_Items[v24 + 1];
    CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                              v23,
                                                              v4->fields.eventId,
                                                              v25,
                                                              0LL);
    if ( CurrentLevelEntity )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_20;
      v26 = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
      CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventCooltimeRewardMaster__TryGetEntity(
                                                                Master_WarQuestSelectionMaster,
                                                                &entity,
                                                                v4->fields.eventId,
                                                                v25,
                                                                (int32_t)CurrentLevelEntity->fields.list,
                                                                0LL);
      if ( ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)CurrentLevelEntity,
                                                                                entity,
                                                                                v26,
                                                                                CurrentTime,
                                                                                v27);
        CurrentLevelEntity = (UserEventCooltimeRewardMaster_o *)EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                                                  ReceivedRewardUnitNum,
                                                                  entity,
                                                                  v29);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && ((unsigned __int8)CurrentLevelEntity & 1) != 0 )
          return 1;
      }
    }
    if ( (__int64)++v24 >= size )
      return 0;
    baseSpotIdList = v4->fields.baseSpotIdList;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *SpotIdListByEventId; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1

  if ( (byte_42E954E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, eventId, (_DWORD)component, asset);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11639/*"RewardButtonBlink"*/, v17, v18, v19);
    byte_42E954E = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_B5D560(
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v21);
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSpotIdList,
    (System_Int32_array **)SpotIdListByEventId,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  EventInfoSpotCooltimeRewardReceiveButton__SetupBaseButtonEffect(
    this,
    asset,
    (System_String_o *)StringLiteral_11639/*"RewardButtonBlink"*/,
    v29);
  EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(this, asset, dialogParent, v30);
  EventInfoSpotCooltimeRewardReceiveButton__SetupButtonDisp(this, v31);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  unsigned int v20; // w8
  bool v21; // w0
  SoundManager_c *v22; // x8
  __int16 v23; // w9
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  __int64 v26; // x1
  void *v27; // x0
  bool v28; // w0
  EventSpotCooltimeComponent_o *v29; // x20
  int32_t eventId; // w19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v33; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t v41; // w0

  if ( (byte_42E9551 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v14, v15, v16);
    sub_B5D5C4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v17, v18, v19);
    byte_42E9551 = 1;
  }
  v20 = this->fields.buttonState - 1;
  if ( this->fields.mode != 1 )
  {
    if ( v20 <= 1 )
    {
      eventSpotCooltimeComponent = (UnityEngine_Object_o *)this->fields.eventSpotCooltimeComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventSpotCooltimeComponent, 0LL, 0LL) )
      {
        v27 = this->fields.eventSpotCooltimeComponent;
        if ( v27 )
        {
          v28 = EventSpotCooltimeComponent__CheckServantSpaceShortage((EventSpotCooltimeComponent_o *)v27, 0LL);
          v22 = SoundManager_TypeInfo;
          v23 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( !v28 )
          {
LABEL_34:
            if ( (v23 & 0x400) != 0 && !v22->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v22);
            v41 = 0;
LABEL_38:
            SoundManager__playSystemSe(v41, 0LL);
            return;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          v29 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v27 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
            v27 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *)*((_QWORD *)v27 + 23);
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( (*((_BYTE *)v27 + 307) & 4) != 0 && !*((_DWORD *)v27 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v27);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v33 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
            System_Action_bool____ctor(
              _9__21_0,
              v33,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
            v34 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v34->__9__21_0 = _9__21_0;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v34->__9__21_0,
              (System_Int32_array **)_9__21_0,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          if ( v29 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v29, eventId, _9__21_0, 0LL);
            return;
          }
        }
        sub_B5D69C(v27, v26);
      }
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v41 = 2;
    goto LABEL_38;
  }
  if ( v20 > 1 )
    goto LABEL_30;
  v21 = EventInfoSpotCooltimeRewardReceiveButton__CheckServantSpaceShortage(this, method);
  v22 = SoundManager_TypeInfo;
  v23 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( !v21 )
    goto LABEL_34;
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(this, this->fields.eventId, v24);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__PlayButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E9554 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9554 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.buttonEffectPrefab;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1

  if ( (byte_42E9557 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E9557 = 1;
  }
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v15,
                                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v17);
  EventReceiveCooltimeRewardRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, 0LL);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__Response(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  Il2CppObject *v36; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v37; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **v38; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v39; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v41; // x1
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v42; // x8
  SpotCooltimeRewardDialog_o *v43; // x19
  BattleDropItem_array *_9__31_0; // x20
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *v46; // x21
  Il2CppObject *v47; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0

  if ( (byte_42E9558 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v6, v7, v8);
    sub_B5D5C4(&JsonManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v18, v19, v20);
    sub_B5D5C4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16635/*"ar192"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v33, v34, v35);
    byte_42E9558 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v36 = (Il2CppObject *)System_String__Concat_44580072(
                            (System_String_o *)StringLiteral_15824/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16061/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v37 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                                 v36,
                                                                                 (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v37 )
    {
      v38 = v37;
      if ( !*((_DWORD *)v37 + 6) )
        goto LABEL_31;
      v39 = v37[4];
      if ( v39 && v39->__9__31_0 )
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
          v37 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)SoundManager__playSe(
                                                                                       (System_String_o *)StringLiteral_16635/*"ar192"*/,
                                                                                       0LL);
          if ( *((_DWORD *)v38 + 6) )
          {
            v42 = v38[4];
            if ( !v42 )
              goto LABEL_32;
            v43 = this->fields.rewardDialog;
            _9__31_0 = (BattleDropItem_array *)v42->__9__31_0;
            v37 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v37 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields **)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v37[23];
            v46 = static_fields->__9__31_0;
            if ( !v46 )
            {
              if ( (*((_BYTE *)v37 + 307) & 4) != 0 && !*((_DWORD *)v37 + 56) )
              {
                j_il2cpp_runtime_class_init_0(v37);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v47 = (Il2CppObject *)static_fields->__9;
              v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v46,
                v47,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              v48 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v48->__9__31_0 = v46;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v48->__9__31_0,
                (System_Int32_array **)v46,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
            }
            if ( !v43 )
LABEL_32:
              sub_B5D69C(v37, v41);
            SpotCooltimeRewardDialog__Open(v43, _9__31_0, v46, 0LL);
            return;
          }
LABEL_31:
          v55 = sub_B5D6C8(v37);
          sub_B5D668(v55, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o **p_buttonEffectPrefab; // x20
  UnityEngine_Object_o *buttonEffectPrefab; // x23
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42E9553 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)asset, (_DWORD)prefabName, method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42E9553 = 1;
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
    v16 = (UnityEngine_GameObject_o *)*p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive(v16, 0, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v16, v15);
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               asset,
                                                               prefabName,
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) == 0 )
    {
      if ( !Object_WarBoardWaitTimeSetting )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v18 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v18;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.buttonEffectPrefab, v18, v19, v20, v21, v22, v23, v24);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v25 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_32436524(v25, gameObject, 0LL);
        v16 = this->fields.buttonEffectPrefab;
        if ( v16 )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *ButtonSpriteNameByEventId; // x0
  UnityEngine_Object_o *buttonSprite; // x21
  System_String_o *v16; // x20
  UISprite_o *v17; // x21
  UILabel_o *buttonTextLabel; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v23; // x2

  if ( (byte_42E9550 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12451/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, v11, v12, v13);
    byte_42E9550 = 1;
  }
  ButtonSpriteNameByEventId = EventInfoSpotCooltimeRewardReceiveButton__GetButtonSpriteNameByEventId(
                                this,
                                this->fields.eventId,
                                v2);
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  v16 = ButtonSpriteNameByEventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    v17 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v17, v16, 0LL);
  }
  buttonTextLabel = this->fields.buttonTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SPOT_COOLTIME_REWARD_BUTTON_TEXT"*/, 0LL);
  if ( !buttonTextLabel
    || (UILabel__set_text(buttonTextLabel, v19, 0LL), (v19 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
  {
    sub_B5D69C(v19, v20);
  }
  UILabel__SetCondensedScale((UILabel_o *)v19, this->fields.buttonTextMaxWidth, 0LL);
  ReceivableRewardState = EventInfoSpotCooltimeRewardReceiveButton__GetReceivableRewardState(this, v21);
  EventInfoSpotCooltimeRewardReceiveButton__UpdateButtonDisp(this, ReceivableRewardState, v23);
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__SetupRewardReceivedDialog(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        AssetData_o *asset,
        UnityEngine_GameObject_o *dialogParent,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BattleServantConfConponent_o *p_rewardDialog; // x19
  UnityEngine_Object_o *v20; // x22
  struct SpotCooltimeRewardDialog_o *rewardDialog; // t1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *v25; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E954F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)asset, (_DWORD)dialogParent, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_13150/*"SpotCooltimeRewardDialog"*/, v16, v17, v18);
    byte_42E954F = 1;
  }
  if ( this->fields.mode == 1 )
  {
    rewardDialog = this->fields.rewardDialog;
    p_rewardDialog = (BattleServantConfConponent_o *)&this->fields.rewardDialog;
    v20 = (UnityEngine_Object_o *)rewardDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( !v22 )
    {
      if ( asset )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   (System_String_o *)StringLiteral_13150/*"SpotCooltimeRewardDialog"*/,
                                                                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
        v25 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality(v25, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v25, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v25, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v25, 0LL);
        if ( v25 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 0, 0LL);
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v25,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B5D560(p_rewardDialog, Component_srcLineSprite, v27, v28, v29, v30, v31, v32);
          return;
        }
      }
      sub_B5D69C(v22, v23);
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_42E9555 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9555 = 1;
  }
  buttonEffectPrefab = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(buttonEffectPrefab, 0LL, 0LL) )
  {
    v7 = this->fields.buttonEffectPrefab;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
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
    sub_B5D69C(receiveButton, *(_QWORD *)&state);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x0

  if ( (byte_42E6549 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1, v2, v3);
    byte_42E6549 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSpotCooltimeRewardReceiveButton___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E654A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v11, v12, v13);
    byte_42E654A = 1;
  }
  v14 = sub_B5D694(EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v16; // x20
  AvalonSceneManager_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  Il2CppObject *v20; // x3

  if ( (byte_42E654B & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v11, v12, v13);
    byte_42E654B = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v16, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v19 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(v17, v18);
    case 1:
      v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v17 )
      {
        v19 = 71;
        v20 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v17, v19, 1, v20, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v16, (System_String_o *)StringLiteral_12858/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v19 = 32;
LABEL_12:
        v17 = (AvalonSceneManager_o *)Instance;
        v20 = (Il2CppObject *)v16;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}