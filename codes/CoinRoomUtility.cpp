void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  uint64_t v11; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v12; // 0:x0.8

  if ( (byte_41888AD & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_4117/*"CoinRoom"*/, v8);
    byte_41888AD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CoinRoomUtility_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_4117/*"CoinRoom"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4117/*"CoinRoom"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v12.fields.dateData = (uint64_t)&v11;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v11 = 0LL;
  System_DateTime___ctor_15271124(v12, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields.dateData = v11;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41888A3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3132/*"COIN_ROOM_GET"*/, v1);
    byte_41888A3 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3132/*"COIN_ROOM_GET"*/, 0LL);
}


System_Collections_Generic_List_UIAtlas__o *__fastcall CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  int v13; // w24
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  int v18; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_41888AB & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObjectList_GameObject___, name);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    assetData = (AssetData_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41888AB = 1;
  }
  v18 = 0;
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_Texture2D_(
                                     v4,
                                     (const MethodInfo_17204F8 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_16:
    sub_B2C434(assetData, name);
  }
  v11 = (int)assetData->fields.name;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v11 >= 1 )
  {
    v13 = 0;
    do
    {
      v18 = ++v13;
      v14 = System_Int32__ToString((int32_t)&v18, 0LL);
      v15 = System_String__Concat_44305532(name, v14, 0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v4,
                                                                 v15,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v12 )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)assetData,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
      }
    }
    while ( v13 < v11 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v12;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  UserServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_41888A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, v1);
    sub_B2C35C(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__, v2);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41888A6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v6);
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *__fastcall CoinRoomUtility__GetUserSvtCoins(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_41888A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v2);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&UserSvtCoinEntity_TypeInfo, v10);
    byte_41888A7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v14,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !list) )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_20:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_36;
    v29 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (UserSvtCoinEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UserSvtCoinEntity_TypeInfo )
    {
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_36:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.eventId )
    {
      if ( !v14 )
        sub_B2C434(v27, UserSvtCoinEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DataEntityBase__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_32:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v14;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_41888AA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_3137/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v4);
    byte_41888AA = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3137/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v7);
  return UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41888A4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3135/*"COIN_ROOM_MAX"*/, v1);
    byte_41888A4 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3135/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41888A5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3136/*"COIN_ROOM_MAX_NUM"*/, v1);
    byte_41888A5 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3136/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_41888A9 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v1);
    byte_41888A9 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v2);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  UserCoinRoomEntity_o *v4; // x8
  CoinRoomUtility_c *v5; // x0
  int32_t cnt; // w19

  if ( (byte_41888A8 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v1);
    byte_41888A8 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v2);
  if ( UserCoinRoomEntity )
  {
    v4 = UserCoinRoomEntity;
    v5 = CoinRoomUtility_TypeInfo;
    cnt = v4->fields.cnt;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v5) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_41888A2 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v1);
    byte_41888A2 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v3 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v2);
  return CoinRoomUtility__MonthExchangeMaxNum(v3) - (_DWORD)v3;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t Year; // w19
  int32_t Month; // w2
  CoinRoomUtility_c *v5; // x8
  double TotalSeconds; // d0
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  __int64 v10; // [xsp+10h] [xbp-20h] BYREF
  uint64_t v11; // [xsp+18h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-8h] BYREF
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_TimeSpan_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x1.8

  if ( (byte_41888AC & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v1);
    sub_B2C35C(&NetworkManager_TypeInfo, v2);
    byte_41888AC = 1;
  }
  dateData = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v13.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v13, 0LL);
  v14.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v14, 0LL);
  v15.fields.dateData = (uint64_t)&v8;
  v8 = 0LL;
  System_DateTime___ctor_15270084(v15, Year, Month, 1, 0LL);
  v16.fields.dateData = (uint64_t)&v10;
  v10 = v8;
  v11 = System_DateTime__AddMonths(v16, 1, 0LL).fields.dateData;
  v17.fields.dateData = (uint64_t)&v11;
  v11 = System_DateTime__ToUniversalTime(v17, 0LL).fields.dateData;
  v5 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v5 = CoinRoomUtility_TypeInfo;
  }
  v18.fields.dateData = (uint64_t)&v11;
  v20.fields.dateData = v5->static_fields->UnixEpoch.fields.dateData;
  ticks = System_DateTime__Subtract(v18, v20, 0LL).fields._ticks;
  v19.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v19, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}