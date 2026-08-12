void CoinRoomUtility___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  uint64_t v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597486F & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&StringLiteral_4701/*"CoinRoom"*/);
    byte_597486F = 1;
  }
  v7 = StringLiteral_4701/*"CoinRoom"*/;
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4701/*"CoinRoom"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)CoinRoomUtility_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v8 = 0;
  System_DateTime___ctor_77014684((System_DateTime_o)&v8, 1970, 1, 1, 0, 0, 0, 1, 0);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v8;
}


int32_t CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  if ( (byte_5974865 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3687/*"COIN_ROOM_GET"*/);
    byte_5974865 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3687/*"COIN_ROOM_GET"*/, 0);
}


System_Collections_Generic_List_UIAtlas__o *CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  int v5; // w23
  System_Collections_Generic_List_object__o *v6; // x21
  int v7; // w28
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__58532980; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  AssetData_o *v21; // x1
  Il2CppClass **v22; // x0
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_597486D & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObjectList_GameObject___);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    assetData = (AssetData_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597486D = 1;
  }
  v24 = 0;
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_37D2608 *)Method_AssetData_GetObjectList_GameObject___)) == 0 )
  {
LABEL_18:
    sub_2213CDC(assetData, name);
  }
  v5 = (int)assetData->fields.name;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v24 = ++v7;
      v8 = System_Int32__ToString((int32_t)&v24, 0);
      v9 = System_String__Concat_75651716(name, v8, 0);
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  v4,
                                  v9,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__58532980 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__58532980,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v6 )
          goto LABEL_18;
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v6->fields._size;
        v21 = assetData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)assetData,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_5974868 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974868 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v2);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v2);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v2);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    (const MethodInfo_3F131DC *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *CoinRoomUtility__GetUserSvtCoins(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  System_Collections_Generic_IEnumerator_T__o *v36; // [xsp+18h] [xbp-38h]

  if ( (byte_5974869 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserSvtCoinMaster__UserSvtCoinEntity__string__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    byte_5974869 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v5,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !monitor) )
  {
    sub_2213CDC(Master_object, v3);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserSvtCoinEntity__GetEnumerator__);
  v36 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v36 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v36 )
      sub_2213CDC(v13, v14);
    v15 = v36->klass;
    v16 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserSvtCoinEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_21:
      v18 = sub_224BC3C(v36, System_Collections_Generic_IEnumerator_UserSvtCoinEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v36,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( !v19 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v19 + 28) )
    {
      if ( !v5
        || (items = v5->fields._items,
            v28 = Method_System_Collections_Generic_List_DataEntityBase__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v19);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v36 )
  {
    v31 = v36->klass;
    v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
    if ( *(_WORD *)&v36->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_37;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_37:
      v34 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v36, *(_QWORD *)(v34 + 8));
  }
  return (System_Collections_Generic_List_DataEntityBase__o *)v5;
}


bool CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_597486C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3692/*"COIN_ROOM_RELEASE_QUEST_ID"*/);
    byte_597486C = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3692/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v3);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           Value,
           0) > 0;
}


int32_t CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  if ( (byte_5974866 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3690/*"COIN_ROOM_MAX"*/);
    byte_5974866 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3690/*"COIN_ROOM_MAX"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  if ( (byte_5974867 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3691/*"COIN_ROOM_MAX_NUM"*/);
    byte_5974867 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3691/*"COIN_ROOM_MAX_NUM"*/, 0);
}


int32_t CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_597486B & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    byte_597486B = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v2);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  __int64 v4; // x1
  UserCoinRoomEntity_o *v5; // x8
  CoinRoomUtility_c *v6; // x0
  int32_t cnt; // w19

  if ( (byte_597486A & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    byte_597486A = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v2);
  if ( UserCoinRoomEntity )
  {
    v5 = UserCoinRoomEntity;
    v6 = CoinRoomUtility_TypeInfo;
    cnt = v5->fields.cnt;
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v4);
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v6) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_5974864 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    byte_5974864 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  v3 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v2);
  return CoinRoomUtility__MonthExchangeMaxNum(v3) - (_DWORD)v3;
}


int64_t CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w8
  System_DateTime_o v3; // x1
  int32_t Year; // w19
  int32_t Month; // w0
  System_DateTime_o v6; // x0
  System_DateTime_o v7; // x1
  CoinRoomUtility_c *v8; // x8
  System_TimeSpan_o v9; // x1
  double TotalSeconds; // d0
  __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  int64_t ticks; // [xsp+10h] [xbp-40h] BYREF
  __int64 v14; // [xsp+18h] [xbp-38h] BYREF
  uint64_t v15; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_597486E & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    byte_597486E = 1;
  }
  v15 = 0;
  dateData = 0;
  v2 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  ticks = 0;
  v14 = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v3.fields._dateData);
  Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  v12 = 0;
  System_DateTime___ctor_77013752((System_DateTime_o)&v12, Year, Month, 1, 0);
  v14 = v12;
  v15 = System_DateTime__AddMonths((System_DateTime_o)&v14, 1, 0).fields._dateData;
  v6.fields._dateData = System_DateTime__ToUniversalTime((System_DateTime_o)&v15, 0).fields._dateData;
  v8 = CoinRoomUtility_TypeInfo;
  v15 = v6.fields._dateData;
  if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v7.fields._dateData);
    v8 = CoinRoomUtility_TypeInfo;
  }
  ticks = System_DateTime__Subtract((System_DateTime_o)&v15, v8->static_fields->UnixEpoch, 0).fields._ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v9.fields._ticks);
  TotalSeconds = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&ticks, 0);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}