void CoinRoomUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_DateTime_o v7; // x0
  uint64_t v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCB2B3 & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    sub_1C713B0(&StringLiteral_4521/*"CoinRoom"*/);
    byte_4CCB2B3 = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4521/*"CoinRoom"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)CoinRoomUtility_TypeInfo->static_fields,
    StringLiteral_4521/*"CoinRoom"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7.fields._dateData = (uint64_t)&v8;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v8 = 0;
  System_DateTime___ctor_65416840(v7, 1970, 1, 1, 0, 0, 0, 1, 0);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v8;
}


int32_t CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  if ( (byte_4CCB2A9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3540/*"COIN_ROOM_GET"*/);
    byte_4CCB2A9 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3540/*"COIN_ROOM_GET"*/, 0);
}


System_Collections_Generic_List_UIAtlas__o *CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  int v5; // w23
  System_Collections_Generic_List_object__o *v6; // x21
  int v7; // w24
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  Il2CppObject *Object_object__51560868; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  AssetData_o *v20; // x1
  Il2CppClass **v21; // x0
  int v23; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_4CCB2B1 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    assetData = (AssetData_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB2B1 = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_312C35C *)Method_AssetData_GetObjectList_GameObject___)) == 0 )
  {
LABEL_18:
    sub_1C71608(assetData, name);
  }
  v5 = (int)assetData->fields.name;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v23 = ++v7;
      v8 = System_Int32__ToString((int32_t)&v23, 0);
      v9 = System_String__Concat_64031724(name, v8, 0);
      Object_object__51560868 = AssetData__GetObject_object__51560868(
                                  v4,
                                  v9,
                                  (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51560868, 0, 0);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__51560868 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__51560868,
                                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v6 )
          goto LABEL_18;
        items = v6->fields._items;
        v18 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v6->fields._size;
        v20 = assetData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)assetData,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    while ( v5 != v7 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v6;
}


UserCoinRoomEntity_o *CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCB2AC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB2AC = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C71608(Instance, v2);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    (const MethodInfo_340B428 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *CoinRoomUtility__GetUserSvtCoins(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4CCB2AD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__getEntityList__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_DataEntityBase__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_4CCB2AD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v4,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !monitor) )
  {
    sub_1C71608(Master_object, v2);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserSvtCoinEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_19:
      v14 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v23 = v15;
    if ( !v15 )
      sub_1C71608(0, v16);
    if ( *(_DWORD *)(v15 + 28) )
    {
      if ( !v4 )
        sub_1C71608(v15, v16);
      items = v4->fields._items;
      v25 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C71608(v15, v16);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v15,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 4), v23, v17, v18, v19, v20, v21, v22);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_32:
    v31 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v4;
}


bool CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4CCB2B0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3545/*"COIN_ROOM_RELEASE_QUEST_ID"*/);
    byte_4CCB2B0 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3545/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C71608(Instance, v3);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           Value,
           0) > 0;
}


int32_t CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  if ( (byte_4CCB2AA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3543/*"COIN_ROOM_MAX"*/);
    byte_4CCB2AA = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3543/*"COIN_ROOM_MAX"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  if ( (byte_4CCB2AB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3544/*"COIN_ROOM_MAX_NUM"*/);
    byte_4CCB2AB = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3544/*"COIN_ROOM_MAX_NUM"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_4CCB2AF & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    byte_4CCB2AF = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v1);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  UserCoinRoomEntity_o *v3; // x8
  CoinRoomUtility_c *v4; // x0
  int32_t cnt; // w19

  if ( (byte_4CCB2AE & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    byte_4CCB2AE = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v1);
  if ( UserCoinRoomEntity )
  {
    v3 = UserCoinRoomEntity;
    v4 = CoinRoomUtility_TypeInfo;
    cnt = v3->fields.cnt;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v4) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4CCB2A8 & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    byte_4CCB2A8 = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v2 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v1);
  return CoinRoomUtility__MonthExchangeMaxNum(v2) - (_DWORD)v2;
}


int64_t CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  System_DateTime_o v1; // x0
  int32_t Year; // w19
  System_DateTime_o v3; // x0
  int32_t Month; // w2
  System_DateTime_o v5; // x0
  System_DateTime_o v6; // x0
  System_DateTime_o v7; // x0
  System_DateTime_o v8; // x0
  CoinRoomUtility_c *v9; // x8
  System_DateTime_o v10; // x0
  System_DateTime_o v11; // x1
  System_TimeSpan_o v12; // x0
  double TotalSeconds; // d0
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  int64_t ticks; // [xsp+10h] [xbp-40h] BYREF
  __int64 v17; // [xsp+18h] [xbp-38h] BYREF
  uint64_t v18; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CCB2B2 & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&System_TimeSpan_TypeInfo);
    byte_4CCB2B2 = 1;
  }
  v17 = 0;
  v18 = 0;
  ticks = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v1.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v1, 0);
  v3.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v3, 0);
  v5.fields._dateData = (uint64_t)&v15;
  v15 = 0;
  System_DateTime___ctor_65415888(v5, Year, Month, 1, 0);
  v6.fields._dateData = (uint64_t)&v17;
  v17 = v15;
  v18 = System_DateTime__AddMonths(v6, 1, 0).fields._dateData;
  v7.fields._dateData = (uint64_t)&v18;
  v8.fields._dateData = System_DateTime__ToUniversalTime(v7, 0).fields._dateData;
  v9 = CoinRoomUtility_TypeInfo;
  v18 = v8.fields._dateData;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v9 = CoinRoomUtility_TypeInfo;
  }
  v10.fields._dateData = (uint64_t)&v18;
  v11.fields._dateData = v9->static_fields->UnixEpoch.fields._dateData;
  ticks = System_DateTime__Subtract(v10, v11, 0).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v12.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v12, 0);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}