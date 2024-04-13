void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  uint64_t v13; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_42E8D52 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_4186/*"CoinRoom"*/, v8, v9, v10);
    byte_42E8D52 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CoinRoomUtility_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_4186/*"CoinRoom"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4186/*"CoinRoom"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v14.fields.dateData = (uint64_t)&v13;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v13 = 0LL;
  System_DateTime___ctor_15565784(v14, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields.dateData = v13;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D48 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3197/*"COIN_ROOM_GET"*/, v1, v2, v3);
    byte_42E8D48 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3197/*"COIN_ROOM_GET"*/, 0LL);
}


System_Collections_Generic_List_UIAtlas__o *__fastcall CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AssetData_o *v5; // x20
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
  int v24; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  int v26; // w24
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v5 = assetData;
  if ( (byte_42E8D50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObjectList_GameObject___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v18, v19, v20);
    assetData = (AssetData_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    byte_42E8D50 = 1;
  }
  v31 = 0;
  if ( !v5
    || (assetData = (AssetData_o *)AssetData__GetObjectList_Texture2D_(
                                     v5,
                                     (const MethodInfo_1AD0B80 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(assetData, name);
  }
  v24 = (int)assetData->fields.name;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v24 >= 1 )
  {
    v26 = 0;
    do
    {
      v31 = ++v26;
      v27 = System_Int32__ToString((int32_t)&v31, 0LL);
      v28 = System_String__Concat_44577788(name, v27, 0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v5,
                                                                 v28,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v25 )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          (EventMissionProgressRequest_Argument_ProgressData_o *)assetData,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
      }
    }
    while ( v26 < v24 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v25;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  UserServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( (byte_42E8D4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8D4B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v14);
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_23FB094 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *__fastcall CoinRoomUtility__GetUserSvtCoins(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x10
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0

  if ( (byte_42E8D4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v4, v5, v6);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&UserSvtCoinEntity_TypeInfo, v28, v29, v30);
    byte_42E8D4C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v34,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !list) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_20:
      v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v46 + 8));
    if ( !v47 )
      goto LABEL_36;
    v49 = *(&UserSvtCoinEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v49
      || (UserSvtCoinEntity_c *)v47->klass->_2.typeHierarchy[v49 - 1] != UserSvtCoinEntity_TypeInfo )
    {
      v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v47);
LABEL_36:
      sub_B5D69C(v47, v48);
    }
    if ( v47->fields.eventId )
    {
      if ( !v34 )
        sub_B5D69C(v47, UserSvtCoinEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v34,
        v47,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DataEntityBase__Add__);
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_32:
    v53 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v34;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42E8D4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v1, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_3202/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v10, v11, v12);
    byte_42E8D4F = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3202/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v15);
  return UserQuestMaster__getClearCountsFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D49 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3200/*"COIN_ROOM_MAX"*/, v1, v2, v3);
    byte_42E8D49 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3200/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D4A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3201/*"COIN_ROOM_MAX_NUM"*/, v1, v2, v3);
    byte_42E8D4A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3201/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CoinRoomUtility_c *v4; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_42E8D4E & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v1, v2, v3);
    byte_42E8D4E = 1;
  }
  v4 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v4);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CoinRoomUtility_c *v4; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  UserCoinRoomEntity_o *v6; // x8
  CoinRoomUtility_c *v7; // x0
  int32_t cnt; // w19

  if ( (byte_42E8D4D & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v1, v2, v3);
    byte_42E8D4D = 1;
  }
  v4 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v4);
  if ( UserCoinRoomEntity )
  {
    v6 = UserCoinRoomEntity;
    v7 = CoinRoomUtility_TypeInfo;
    cnt = v6->fields.cnt;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v7) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CoinRoomUtility_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_42E8D47 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v1, v2, v3);
    byte_42E8D47 = 1;
  }
  v4 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  }
  v5 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v4);
  return CoinRoomUtility__MonthExchangeMaxNum(v5) - (_DWORD)v5;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t Year; // w19
  int32_t Month; // w2
  CoinRoomUtility_c *v9; // x8
  double TotalSeconds; // d0
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  int64_t ticks; // [xsp+8h] [xbp-28h] BYREF
  __int64 v14; // [xsp+10h] [xbp-20h] BYREF
  uint64_t v15; // [xsp+18h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-8h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_TimeSpan_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x1.8

  if ( (byte_42E8D51 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    byte_42E8D51 = 1;
  }
  dateData = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  ticks = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v17.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v17, 0LL);
  v18.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v18, 0LL);
  v19.fields.dateData = (uint64_t)&v12;
  v12 = 0LL;
  System_DateTime___ctor_15564744(v19, Year, Month, 1, 0LL);
  v20.fields.dateData = (uint64_t)&v14;
  v14 = v12;
  v15 = System_DateTime__AddMonths(v20, 1, 0LL).fields.dateData;
  v21.fields.dateData = (uint64_t)&v15;
  v15 = System_DateTime__ToUniversalTime(v21, 0LL).fields.dateData;
  v9 = CoinRoomUtility_TypeInfo;
  if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v9 = CoinRoomUtility_TypeInfo;
  }
  v22.fields.dateData = (uint64_t)&v15;
  v24.fields.dateData = v9->static_fields->UnixEpoch.fields.dateData;
  ticks = System_DateTime__Subtract(v22, v24, 0LL).fields._ticks;
  v23.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v23, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}