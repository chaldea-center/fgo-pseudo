void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  uint64_t v3; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v4; // 0:x0.8

  if ( (byte_4A5E711 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&StringLiteral_4557/*"CoinRoom"*/);
    byte_4A5E711 = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4557/*"CoinRoom"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)CoinRoomUtility_TypeInfo->static_fields, StringLiteral_4557/*"CoinRoom"*/, v1, v2);
  v4.fields._dateData = (uint64_t)&v3;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v3 = 0LL;
  System_DateTime___ctor_62385856(v4, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v3;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  if ( (byte_4A5E707 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3625/*"COIN_ROOM_GET"*/);
    byte_4A5E707 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3625/*"COIN_ROOM_GET"*/, 0LL);
}


System_Collections_Generic_List_UIAtlas__o *__fastcall CoinRoomUtility__GetDownloadAtlas(
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
  Il2CppObject *Object_object__48635516; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  AssetData_o *v16; // x1
  Il2CppClass **v17; // x0
  int v19; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_4A5E70F & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObjectList_GameObject___);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    assetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E70F = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_2E62034 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_18:
    sub_1B8880C(assetData, name);
  }
  v5 = (int)assetData->fields.name;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v19 = ++v7;
      v8 = System_Int32__ToString((int32_t)&v19, 0LL);
      v9 = System_String__Concat_61707032(name, v8, 0LL);
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  v4,
                                  v9,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                   (UnityEngine_Object_o *)Object_object__48635516,
                                   0LL,
                                   0LL);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__48635516 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__48635516,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v6 )
          goto LABEL_18;
        items = v6->fields._items;
        v14 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v6->fields._size;
        v16 = assetData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)assetData,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
        }
      }
    }
    while ( v5 != v7 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v6;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5E70A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCoinRoomMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E70A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v2);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *__fastcall CoinRoomUtility__GetUserSvtCoins(
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v7; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  UserSvtCoinEntity_c *v20; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4A5E70B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DataEntityBase__TypeInfo);
    sub_1B885B0(&UserSvtCoinEntity_TypeInfo);
    byte_4A5E70B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v4,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !klass) )
  {
    sub_1B8880C(Master_object, v2);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    v7 = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v7->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      p_method = (__int64)&v7->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_19:
      v14 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v19 = v15;
    if ( !v15 )
      goto LABEL_38;
    v20 = UserSvtCoinEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
      || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
    {
      sub_1B88ACC(v15);
LABEL_38:
      sub_1B8880C(v15, v16);
    }
    if ( *(_DWORD *)(v15 + 28) )
    {
      if ( !v4 )
        sub_1B8880C(v15, UserSvtCoinEntity_TypeInfo);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1B8880C(v15, v20);
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v19, v17, v18);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_34;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_34:
    v29 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v4;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5E70E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3630/*"COIN_ROOM_RELEASE_QUEST_ID"*/);
    byte_4A5E70E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3630/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v3);
  return UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)MasterData_object, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  if ( (byte_4A5E708 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3628/*"COIN_ROOM_MAX"*/);
    byte_4A5E708 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3628/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  if ( (byte_4A5E709 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3629/*"COIN_ROOM_MAX_NUM"*/);
    byte_4A5E709 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3629/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_4A5E70D & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    byte_4A5E70D = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
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

  if ( (byte_4A5E70C & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    byte_4A5E70C = 1;
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


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  CoinRoomUtility_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4A5E706 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    byte_4A5E706 = 1;
  }
  v1 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v2 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v1);
  return CoinRoomUtility__MonthExchangeMaxNum(v2) - (_DWORD)v2;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  int32_t Year; // w19
  int32_t Month; // w2
  System_DateTime_o v3; // x0
  CoinRoomUtility_c *v4; // x8
  double TotalSeconds; // d0
  __int64 v7; // [xsp+8h] [xbp-48h] BYREF
  int64_t ticks; // [xsp+10h] [xbp-40h] BYREF
  __int64 v9; // [xsp+18h] [xbp-38h] BYREF
  uint64_t v10; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_TimeSpan_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x1.8

  if ( (byte_4A5E710 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    byte_4A5E710 = 1;
  }
  v9 = 0LL;
  v10 = 0LL;
  ticks = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v12, 0LL);
  v13.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v13, 0LL);
  v14.fields._dateData = (uint64_t)&v7;
  v7 = 0LL;
  System_DateTime___ctor_62384912(v14, Year, Month, 1, 0LL);
  v15.fields._dateData = (uint64_t)&v9;
  v9 = v7;
  v10 = System_DateTime__AddMonths(v15, 1, 0LL).fields._dateData;
  v16.fields._dateData = (uint64_t)&v10;
  v3.fields._dateData = System_DateTime__ToUniversalTime(v16, 0LL).fields._dateData;
  v4 = CoinRoomUtility_TypeInfo;
  v10 = v3.fields._dateData;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v4 = CoinRoomUtility_TypeInfo;
  }
  v17.fields._dateData = (uint64_t)&v10;
  v19.fields._dateData = v4->static_fields->UnixEpoch.fields._dateData;
  ticks = System_DateTime__Subtract(v17, v19, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v18.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v18, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}