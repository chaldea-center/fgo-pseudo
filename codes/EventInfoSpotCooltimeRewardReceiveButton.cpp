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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v12; // x20
  bool v13; // w19
  WebViewManager_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonUI_o *v19; // x19
  int32_t v20; // w20
  int32_t svtKeep; // w21
  EventInfoSpotCooltimeRewardReceiveButton___c_c *v22; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__35_0; // x22
  Il2CppObject *v25; // x23
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ServantAssetLoadManager_o *v33; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA17D & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__, v7);
    sub_B16FFC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v8);
    byte_40FA17D = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !EventInfoSpotCooltimeRewardReceiveButton__HasServantTypeRewards(this, method) )
    return 1;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  v12 = MasterData_WarQuestSelectionMaster;
  v13 = 1;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( UserServantMaster__CheckServantAdd(v12, 1, 0LL) )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v19 = (CommonUI_o *)v14;
      v20 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      v22 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
        v22 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__35_0 = static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                     v15,
                                                                     v16,
                                                                     v17,
                                                                     v18);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__35_0,
          v25,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__CheckServantSpaceShortage_b__35_0__,
          0LL);
        v26 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
        v26->__9__35_0 = _9__35_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v26->__9__35_0,
          (System_Int32_array **)_9__35_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      if ( v19 )
      {
        CommonUI__OpenSvtFrameShortDlg(v19, v20, svtKeep, 0, 1, _9__35_0, 2, 0LL);
        v33 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( v33 )
        {
          ServantAssetLoadManager__EndRetryTransition(v33, 0LL);
          return 0;
        }
      }
    }
LABEL_21:
    sub_B170D4();
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

  if ( (byte_40FA175 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, *(_QWORD *)&eventId);
    byte_40FA175 = 1;
  }
  EventInfo = EventInfoSpotCooltimeRewardReceiveButton__GetEventInfo(this, eventId, method);
  p_ButtonSpriteName = &EventInfo->fields.ButtonSpriteName;
  if ( !EventInfo )
    p_ButtonSpriteName = (System_String_o **)&StringLiteral_1;
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

  if ( (byte_40FA17E & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FA17E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v3.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  return NetworkManager__getTime_23684488(v3, 0LL) - 1;
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
  EventInfoSpotCooltimeRewardReceiveButton_EventInfo_o *result; // x0

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
      result = m_Items[v5];
      if ( !result )
        break;
      if ( result->fields.EventId == eventId )
        return result;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_9:
    sub_B170D4();
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
  WarQuestSelectionMaster_o *v9; // x0
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x26
  UserEventCooltimeRewardMaster_o *v12; // x22
  int v13; // w25
  int v14; // w27
  char v15; // w20
  unsigned __int64 v16; // x28
  int32_t v17; // w23
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v19; // x24
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x4
  int64_t ReceivedRewardUnitNum; // x0
  int64_t v23; // x23
  GiftEntity_o *GiftEntity; // x0
  UnityEngine_Object_o *eventSpotCooltimeComponent; // x20
  EventSpotCooltimeComponent_o *v27; // x0
  int64_t CurrentTime; // [xsp+0h] [xbp-60h]
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_40FA179 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA179 = 1;
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
      v27 = v2->fields.eventSpotCooltimeComponent;
      if ( !v27 )
        goto LABEL_37;
      return EventSpotCooltimeComponent__GetReceivableRewardState(v27, 0LL);
    }
    return 0;
  }
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  v9 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
    goto LABEL_37;
  size = baseSpotIdList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = (UserEventCooltimeRewardMaster_o *)v9;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)baseSpotIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v12 )
        break;
      v17 = baseSpotIdList->fields._items->m_Items[v16 + 1];
      CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v12, v2->fields.eventId, v17, 0LL);
      if ( CurrentLevelEntity )
      {
        if ( !Master_WarQuestSelectionMaster )
          break;
        v19 = CurrentLevelEntity;
        v20 = EventCooltimeRewardMaster__TryGetEntity(
                Master_WarQuestSelectionMaster,
                &entity,
                v2->fields.eventId,
                v17,
                CurrentLevelEntity->fields.lv,
                0LL);
        if ( v20 )
        {
          ReceivedRewardUnitNum = EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                    (EventInfoSpotCooltimeRewardReceiveButton_o *)v20,
                                    entity,
                                    v19,
                                    CurrentTime,
                                    v21);
          if ( ReceivedRewardUnitNum >= 1 )
          {
            v23 = ReceivedRewardUnitNum;
            if ( !entity )
              break;
            GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(entity, 0LL);
            if ( GiftEntity )
              v14 |= !GiftEntity__isQp(GiftEntity, 0LL);
            if ( !entity )
              break;
            v15 = 1;
            v13 |= v23 >= entity->fields.upperLimitGiftNum;
          }
        }
      }
      if ( (__int64)++v16 >= size )
        goto LABEL_34;
      baseSpotIdList = v2->fields.baseSpotIdList;
    }
    while ( baseSpotIdList );
LABEL_37:
    sub_B170D4();
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
    sub_B170D4();
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
  WarQuestSelectionMaster_o *v9; // x0
  struct System_Collections_Generic_List_int__o *baseSpotIdList; // x23
  signed __int64 size; // x25
  UserEventCooltimeRewardMaster_o *v12; // x22
  unsigned __int64 v13; // x26
  int32_t v14; // w24
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v16; // x23
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x4
  EventInfoSpotCooltimeRewardReceiveButton_o *ReceivedRewardUnitNum; // x23
  const MethodInfo *v20; // x2
  bool IsServantTypeReward; // w0
  EventCooltimeRewardEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_40FA17C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    this = (EventInfoSpotCooltimeRewardReceiveButton_o *)sub_B16FFC(
                                                           &Method_System_Collections_Generic_List_int__get_Item__,
                                                           v6);
    byte_40FA17C = 1;
  }
  entity = 0LL;
  if ( !v2->fields.baseSpotIdList )
    return 0;
  CurrentTime = EventInfoSpotCooltimeRewardReceiveButton__GetCurrentTime(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  v9 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  baseSpotIdList = v2->fields.baseSpotIdList;
  if ( !baseSpotIdList )
LABEL_20:
    sub_B170D4();
  size = baseSpotIdList->fields._size;
  if ( (int)size < 1 )
    return 0;
  v12 = (UserEventCooltimeRewardMaster_o *)v9;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)baseSpotIdList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !v12 )
      goto LABEL_20;
    v14 = baseSpotIdList->fields._items->m_Items[v13 + 1];
    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(v12, v2->fields.eventId, v14, 0LL);
    if ( CurrentLevelEntity )
    {
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_20;
      v16 = CurrentLevelEntity;
      v17 = EventCooltimeRewardMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              v2->fields.eventId,
              v14,
              CurrentLevelEntity->fields.lv,
              0LL);
      if ( v17 )
      {
        ReceivedRewardUnitNum = (EventInfoSpotCooltimeRewardReceiveButton_o *)EventInfoSpotCooltimeRewardReceiveButton__GetReceivedRewardUnitNum(
                                                                                (EventInfoSpotCooltimeRewardReceiveButton_o *)v17,
                                                                                entity,
                                                                                v16,
                                                                                CurrentTime,
                                                                                v18);
        IsServantTypeReward = EventInfoSpotCooltimeRewardReceiveButton__IsServantTypeReward(
                                ReceivedRewardUnitNum,
                                entity,
                                v20);
        if ( (__int64)ReceivedRewardUnitNum >= 1 && IsServantTypeReward )
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

  if ( (byte_40FA171 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11470, v15);
    byte_40FA171 = 1;
  }
  this->fields.eventSpotCooltimeComponent = component;
  this->fields.eventId = eventId;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  SpotIdListByEventId = EventCooltimeRewardMaster__GetSpotIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  this->fields.baseSpotIdList = SpotIdListByEventId;
  sub_B16F98(
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
    (System_String_o *)StringLiteral_11470,
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
  EventSpotCooltimeComponent_o *v14; // x0
  bool v15; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  EventSpotCooltimeComponent_o *v20; // x20
  int32_t eventId; // w19
  EventInfoSpotCooltimeRewardReceiveButton___c_c *v22; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_bool__o *_9__21_0; // x21
  Il2CppObject *v25; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w0

  if ( (byte_40FA174 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__, v6);
    sub_B16FFC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v7);
    byte_40FA174 = 1;
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
          v15 = EventSpotCooltimeComponent__CheckServantSpaceShortage(v14, 0LL);
          v10 = SoundManager_TypeInfo;
          v11 = WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr);
          if ( !v15 )
          {
LABEL_34:
            if ( (v11 & 0x400) != 0 && !v10->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v10);
            v33 = 0;
LABEL_38:
            SoundManager__playSystemSe(v33, 0LL);
            return;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(8, 0LL);
          v20 = this->fields.eventSpotCooltimeComponent;
          eventId = this->fields.eventId;
          v22 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
            v22 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
          }
          static_fields = v22->static_fields;
          _9__21_0 = static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            }
            v25 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v16, v17, v18, v19);
            System_Action_bool____ctor(
              _9__21_0,
              v25,
              Method_EventInfoSpotCooltimeRewardReceiveButton___c__OnClickButton_b__21_0__,
              (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
            v26 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
            v26->__9__21_0 = _9__21_0;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v26->__9__21_0,
              (System_Int32_array **)_9__21_0,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
          }
          if ( v20 )
          {
            EventSpotCooltimeComponent__ReceiveCooltimeReward(v20, eventId, _9__21_0, 0LL);
            return;
          }
        }
        sub_B170D4();
      }
    }
LABEL_30:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v33 = 2;
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

  if ( (byte_40FA177 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA177 = 1;
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
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeRewardReceiveButton__ReceiveCooltimeReward(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  EventReceiveCooltimeRewardRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FA17A & 1) == 0 )
  {
    sub_B16FFC(&Method_EventInfoSpotCooltimeRewardReceiveButton_Response__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40FA17A = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&eventId,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventInfoSpotCooltimeRewardReceiveButton_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventReceiveCooltimeRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v10,
                                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventReceiveCooltimeRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  _DWORD *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  _DWORD *v19; // x20
  __int64 v20; // x8
  UnityEngine_Object_o *rewardDialog; // x21
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x8
  SpotCooltimeRewardDialog_o *v25; // x19
  BattleDropItem_array *v26; // x20
  EventInfoSpotCooltimeRewardReceiveButton___c_c *v27; // x0
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *static_fields; // x8
  System_Action_o *_9__31_0; // x21
  Il2CppObject *v30; // x22
  struct EventInfoSpotCooltimeRewardReceiveButton___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40FA17B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__, v9);
    sub_B16FFC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_16373, v11);
    sub_B16FFC(&StringLiteral_20980, v12);
    sub_B16FFC(&StringLiteral_15571, v13);
    sub_B16FFC(&StringLiteral_15807, v14);
    byte_40FA17B = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    v15 = (Il2CppObject *)System_String__Concat_43746016(
                            (System_String_o *)StringLiteral_15571,
                            result,
                            (System_String_o *)StringLiteral_15807,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            v15,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventSpotCooltimeComponent_RewardResponseData___);
    if ( v16 )
    {
      v19 = v16;
      if ( !v16[6] )
        goto LABEL_31;
      v20 = *((_QWORD *)v16 + 4);
      if ( v20 && *(_QWORD *)(v20 + 16) )
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
          v16 = SoundManager__playSe((System_String_o *)StringLiteral_16373, 0LL);
          if ( v19[6] )
          {
            v24 = *((_QWORD *)v19 + 4);
            if ( !v24 )
              goto LABEL_32;
            v25 = this->fields.rewardDialog;
            v26 = *(BattleDropItem_array **)(v24 + 16);
            v27 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            if ( (BYTE3(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo);
              v27 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo;
            }
            static_fields = v27->static_fields;
            _9__31_0 = static_fields->__9__31_0;
            if ( !_9__31_0 )
            {
              if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v27);
                static_fields = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              }
              v30 = (Il2CppObject *)static_fields->__9;
              _9__31_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v22, v23);
              System_Action___ctor(
                _9__31_0,
                v30,
                Method_EventInfoSpotCooltimeRewardReceiveButton___c__Response_b__31_0__,
                0LL);
              v31 = EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
              v31->__9__31_0 = _9__31_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v31->__9__31_0,
                (System_Int32_array **)_9__31_0,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
            }
            if ( !v25 )
LABEL_32:
              sub_B170D4();
            SpotCooltimeRewardDialog__Open(v25, v26, _9__31_0, 0LL);
            return;
          }
LABEL_31:
          sub_B17100(v16, v17, v18);
          sub_B170A0();
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
  UnityEngine_Object_o *v11; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA176 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, asset);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA176 = 1;
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
    v11 = *p_buttonEffectPrefab;
    if ( *p_buttonEffectPrefab )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 0, 0LL);
      return;
    }
LABEL_22:
    sub_B170D4();
  }
  if ( asset && !System_String__IsNullOrEmpty(prefabName, 0LL) )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   prefabName,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( !Object_WarBoardWaitTimeSetting )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(Object_WarBoardWaitTimeSetting, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_buttonEffectPrefab = (UnityEngine_Object_o *)v13;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.buttonEffectPrefab, v13, v14, v15, v16, v17, v18, v19);
      if ( !UnityEngine_Object__op_Equality(*p_buttonEffectPrefab, 0LL, 0LL) )
      {
        v20 = this->fields.buttonEffectPrefab;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SafeSetParent_27425996(v20, gameObject, 0LL);
        v11 = (UnityEngine_Object_o *)this->fields.buttonEffectPrefab;
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
  UILabel_o *v13; // x0
  const MethodInfo *v14; // x1
  int32_t ReceivableRewardState; // w1
  const MethodInfo *v16; // x2

  if ( (byte_40FA173 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12251, v6);
    byte_40FA173 = 1;
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12251, 0LL);
  if ( !buttonTextLabel || (UILabel__set_text(buttonTextLabel, v12, 0LL), (v13 = this->fields.buttonTextLabel) == 0LL) )
    sub_B170D4();
  UILabel__SetCondensedScale(v13, this->fields.buttonTextMaxWidth, 0LL);
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Object_o *v15; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FA172 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, asset);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12938, v10);
    byte_40FA172 = 1;
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
    if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      if ( asset )
      {
        Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   asset,
                                                                   (System_String_o *)StringLiteral_12938,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
        v15 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
          return;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)dialogParent, 0LL, 0LL) )
          GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v15, dialogParent, 0LL);
        GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v15, 0LL);
        GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v15, 0LL);
        if ( v15 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, 0, 0LL);
          Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v15,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeRewardDialog___);
          p_rewardDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
          sub_B16F98(p_rewardDialog, Component_srcLineSprite, v17, v18, v19, v20, v21, v22);
          return;
        }
      }
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoSpotCooltimeRewardReceiveButton__StopButtonEffect(
        EventInfoSpotCooltimeRewardReceiveButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonEffectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_40FA178 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA178 = 1;
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
      sub_B170D4();
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FDC & 1) == 0 )
  {
    sub_B16FFC(&EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1);
    byte_40F6FDC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoSpotCooltimeRewardReceiveButton___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F6FDD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(
      &Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
      v7);
    sub_B16FFC(&EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo, v8);
    byte_40F6FDD = 1;
  }
  v9 = sub_B170CC(
         EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0_TypeInfo,
         *(_QWORD *)&result,
         method,
         v3,
         v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventInfoSpotCooltimeRewardReceiveButton___c__DisplayClass35_0__CheckServantSpaceShortage_b__1__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  SceneJumpInfo_o *v12; // x20
  int32_t v13; // w1
  AvalonSceneManager_o *v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4

  if ( (byte_40F6FDE & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612, v4);
    sub_B16FFC(&StringLiteral_12651, v5);
    byte_40F6FDE = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v16, v17, v18, v19);
      SceneJumpInfo___ctor_29748028(v12, (System_String_o *)StringLiteral_12612, 0, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    case 1:
      v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v14 )
      {
        v13 = 71;
        v15 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v14, v13, 1, v15, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v8, v9, v10, v11);
      SceneJumpInfo___ctor_29747932(v12, (System_String_o *)StringLiteral_12651, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        v14 = (AvalonSceneManager_o *)Instance;
        v15 = (Il2CppObject *)v12;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}