void CoinRoomUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_DateTime_o v3; // x0
  uint64_t v4; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46D92 & 1) == 0 )
  {
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&StringLiteral_4528/*"CoinRoom"*/);
    byte_4C46D92 = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4528/*"CoinRoom"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)CoinRoomUtility_TypeInfo->static_fields, StringLiteral_4528/*"CoinRoom"*/, v1, v2);
  v3.fields._dateData = (uint64_t)&v4;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v4 = 0;
  System_DateTime___ctor_64948384(v3, 1970, 1, 1, 0, 0, 0, 1, 0);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v4;
}


int32_t CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  if ( (byte_4C46D88 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3545/*"COIN_ROOM_GET"*/);
    byte_4C46D88 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3545/*"COIN_ROOM_GET"*/, 0);
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
  Il2CppObject *Object_object__51154888; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  AssetData_o *v16; // x1
  Il2CppClass **v17; // x0
  int v19; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_4C46D90 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    assetData = (AssetData_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46D90 = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___)) == 0 )
  {
LABEL_18:
    sub_1C372B4(assetData);
  }
  v5 = (int)assetData->fields.name;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v19 = ++v7;
      v8 = System_Int32__ToString((int32_t)&v19, 0);
      v9 = System_String__Concat_63561656(name, v8, 0);
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  v4,
                                  v9,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__51154888 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__51154888,
                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v6 )
          goto LABEL_18;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v6->fields._size;
        v16 = assetData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)assetData,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46D8B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_1C37058(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46D8B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C372B4(Instance);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    (const MethodInfo_33A3648 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *CoinRoomUtility__GetUserSvtCoins(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C46D8C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_DataEntityBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_4C46D8C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v3,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !monitor) )
  {
    sub_1C372B4(Master_object);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_12;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserSvtCoinEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_19;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_19:
      v12 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    v16 = v13;
    if ( !v13 )
      sub_1C372B4(0);
    if ( *(_DWORD *)(v13 + 28) )
    {
      if ( !v3 )
        sub_1C372B4(v13);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(v13);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v13,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), v16, v14, v15);
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_32;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_32:
    v24 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v3;
}


bool CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C46D8F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3550/*"COIN_ROOM_RELEASE_QUEST_ID"*/);
    byte_4C46D8F = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3550/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C372B4(Instance);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           Value,
           0) > 0;
}


int32_t CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  if ( (byte_4C46D89 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3548/*"COIN_ROOM_MAX"*/);
    byte_4C46D89 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3548/*"COIN_ROOM_MAX"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  if ( (byte_4C46D8A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3549/*"COIN_ROOM_MAX_NUM"*/);
    byte_4C46D8A = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3549/*"COIN_ROOM_MAX_NUM"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_4C46D8E & 1) == 0 )
  {
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    byte_4C46D8E = 1;
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

  if ( (byte_4C46D8D & 1) == 0 )
  {
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    byte_4C46D8D = 1;
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

  if ( (byte_4C46D87 & 1) == 0 )
  {
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    byte_4C46D87 = 1;
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

  if ( (byte_4C46D91 & 1) == 0 )
  {
    sub_1C37058(&CoinRoomUtility_TypeInfo);
    sub_1C37058(&System_DateTime_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&System_TimeSpan_TypeInfo);
    byte_4C46D91 = 1;
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
  System_DateTime___ctor_64947432(v5, Year, Month, 1, 0);
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