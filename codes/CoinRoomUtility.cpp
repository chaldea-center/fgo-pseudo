void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  uint64_t v9; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_435208F & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&StringLiteral_4195/*"CoinRoom"*/);
    byte_435208F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CoinRoomUtility_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_4195/*"CoinRoom"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4195/*"CoinRoom"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v10.fields.dateData = (uint64_t)&v9;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v9 = 0LL;
  System_DateTime___ctor_42970000(v10, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields.dateData = v9;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  if ( (byte_4352085 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3206/*"COIN_ROOM_GET"*/);
    byte_4352085 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3206/*"COIN_ROOM_GET"*/, 0LL);
}


System_Collections_Generic_List_UIAtlas__o *__fastcall CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  int v5; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  int v7; // w24
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  int v12; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_435208D & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObjectList_GameObject___);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    assetData = (AssetData_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435208D = 1;
  }
  v12 = 0;
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_Texture2D_(
                                     v4,
                                     (const MethodInfo_1BD68D4 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_16:
    sub_B7076C(assetData, name);
  }
  v5 = (int)assetData->fields.name;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v12 = ++v7;
      v8 = System_Int32__ToString((int32_t)&v12, 0LL);
      v9 = System_String__Concat_44758168(name, v8, 0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v4,
                                                                 v9,
                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_WarBoardWaitTimeSetting )
          goto LABEL_16;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v6 )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)assetData,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
      }
    }
    while ( v7 < v5 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v6;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  UserServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_4352088 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_B70694(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352088 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v2);
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *__fastcall CoinRoomUtility__GetUserSvtCoins(
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x10
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0

  if ( (byte_4352089 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataEntityBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_B70694(&UserSvtCoinEntity_TypeInfo);
    byte_4352089 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v4,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !list) )
  {
    sub_B7076C(Master_WarQuestSelectionMaster, v2);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_20:
      v14 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v14 + 8));
    if ( !v15 )
      goto LABEL_36;
    v17 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (UserSvtCoinEntity_c *)v15->klass->_2.typeHierarchy[v17 - 1] != UserSvtCoinEntity_TypeInfo )
    {
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B70A60(v15);
LABEL_36:
      sub_B7076C(v15, v16);
    }
    if ( v15->fields.eventId )
    {
      if ( !v4 )
        sub_B7076C(v15, UserSvtCoinEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        v15,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_DataEntityBase__Add__);
    }
  }
  v18 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v21 = (__int64)&v18->vtable[*v20].method;
  }
  else
  {
LABEL_32:
    v21 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v4;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_435208C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3211/*"COIN_ROOM_RELEASE_QUEST_ID"*/);
    byte_435208C = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3211/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v3);
  return UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  if ( (byte_4352086 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3209/*"COIN_ROOM_MAX"*/);
    byte_4352086 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3209/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  if ( (byte_4352087 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3210/*"COIN_ROOM_MAX_NUM"*/);
    byte_4352087 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3210/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_435208B & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    byte_435208B = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v1);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  UserCoinRoomEntity_o *v3; // x8
  CoinRoomUtility_c *v4; // x0
  int32_t cnt; // w19

  if ( (byte_435208A & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    byte_435208A = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v1);
  if ( UserCoinRoomEntity )
  {
    v3 = UserCoinRoomEntity;
    v4 = CoinRoomUtility_TypeInfo;
    cnt = v3->fields.cnt;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v4) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4352084 & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    byte_4352084 = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v2 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v1);
  return CoinRoomUtility__MonthExchangeMaxNum(v2) - (_DWORD)v2;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  int32_t Year; // w19
  int32_t Month; // w2
  CoinRoomUtility_c *v3; // x8
  double TotalSeconds; // d0
  __int64 v6; // [xsp+0h] [xbp-30h] BYREF
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  __int64 v8; // [xsp+10h] [xbp-20h] BYREF
  uint64_t v9; // [xsp+18h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-8h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_TimeSpan_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x1.8

  if ( (byte_435208E & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_435208E = 1;
  }
  dateData = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v11, 0LL);
  v12.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v12, 0LL);
  v13.fields.dateData = (uint64_t)&v6;
  v6 = 0LL;
  System_DateTime___ctor_42968960(v13, Year, Month, 1, 0LL);
  v14.fields.dateData = (uint64_t)&v8;
  v8 = v6;
  v9 = System_DateTime__AddMonths(v14, 1, 0LL).fields.dateData;
  v15.fields.dateData = (uint64_t)&v9;
  v9 = System_DateTime__ToUniversalTime(v15, 0LL).fields.dateData;
  v3 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v3 = CoinRoomUtility_TypeInfo;
  }
  v16.fields.dateData = (uint64_t)&v9;
  v18.fields.dateData = v3->static_fields->UnixEpoch.fields.dateData;
  ticks = System_DateTime__Subtract(v16, v18, 0LL).fields._ticks;
  v17.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v17, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}