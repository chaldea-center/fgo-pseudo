void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  uint64_t v5; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v6; // 0:x0.8

  if ( (byte_49FF92A & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_4534/*"CoinRoom"*/, v4);
    byte_49FF92A = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4534/*"CoinRoom"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)CoinRoomUtility_TypeInfo->static_fields, StringLiteral_4534/*"CoinRoom"*/, v2, v3);
  v6.fields._dateData = (uint64_t)&v5;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v5 = 0LL;
  System_DateTime___ctor_62054212(v6, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v5;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF920 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3603/*"COIN_ROOM_GET"*/, v1);
    byte_49FF920 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3603/*"COIN_ROOM_GET"*/, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w23
  System_Collections_Generic_List_object__o *v14; // x21
  int v15; // w24
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *Object_object__48347676; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  AssetData_o *v24; // x1
  Il2CppClass **v25; // x0
  int v27; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_49FF928 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, name);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    assetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF928 = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_18:
    sub_1B64324(assetData);
  }
  v13 = (int)assetData->fields.name;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v13 >= 1 )
  {
    v15 = 0;
    do
    {
      v27 = ++v15;
      v16 = System_Int32__ToString((int32_t)&v27, 0LL);
      v17 = System_String__Concat_61375396(name, v16, 0LL);
      Object_object__48347676 = AssetData__GetObject_object__48347676(
                                  v4,
                                  v17,
                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                   (UnityEngine_Object_o *)Object_object__48347676,
                                   0LL,
                                   0LL);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__48347676 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__48347676,
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v14 )
          goto LABEL_18;
        items = v14->fields._items;
        v22 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v14->fields._size;
        v24 = assetData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)assetData,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
      }
    }
    while ( v13 != v15 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v14;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FF923 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, v1);
    sub_1B640C8(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF923 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64324(Instance);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
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
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_49FF924 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_1B640C8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v2);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&UserSvtCoinEntity_TypeInfo, v10);
    byte_49FF924 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                             v12,
                                                             v13),
        System_Collections_Generic_List_object____ctor(
          v15,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !klass) )
  {
    sub_1B64324(Master_object);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&v17->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( !v25 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
    {
      sub_1B645E4(v25);
LABEL_38:
      sub_1B64324(v25);
    }
    if ( *(_DWORD *)(v25 + 28) )
    {
      if ( !v15 )
        sub_1B64324(v25);
      items = v15->fields._items;
      v31 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(v25);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), v28, v26, v27);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_34;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_34:
    v37 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v15;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FF927 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_3608/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v4);
    byte_49FF927 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3608/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64324(Instance);
  return UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)MasterData_object, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF921 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3606/*"COIN_ROOM_MAX"*/, v1);
    byte_49FF921 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3606/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF922 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3607/*"COIN_ROOM_MAX_NUM"*/, v1);
    byte_49FF922 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3607/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_49FF926 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v1);
    byte_49FF926 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
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

  if ( (byte_49FF925 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v1);
    byte_49FF925 = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v2);
  if ( UserCoinRoomEntity )
  {
    v4 = UserCoinRoomEntity;
    v5 = CoinRoomUtility_TypeInfo;
    cnt = v4->fields.cnt;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v5) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_49FF91F & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v1);
    byte_49FF91F = 1;
  }
  v2 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
  v3 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v2);
  return CoinRoomUtility__MonthExchangeMaxNum(v3) - (_DWORD)v3;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Year; // w19
  int32_t Month; // w2
  System_DateTime_o v7; // x0
  CoinRoomUtility_c *v8; // x8
  double TotalSeconds; // d0
  __int64 v11; // [xsp+8h] [xbp-48h] BYREF
  int64_t ticks; // [xsp+10h] [xbp-40h] BYREF
  __int64 v13; // [xsp+18h] [xbp-38h] BYREF
  uint64_t v14; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_TimeSpan_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x1.8

  if ( (byte_49FF929 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v1);
    sub_1B640C8(&System_DateTime_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v4);
    byte_49FF929 = 1;
  }
  v13 = 0LL;
  v14 = 0LL;
  ticks = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v16.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v16, 0LL);
  v17.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v17, 0LL);
  v18.fields._dateData = (uint64_t)&v11;
  v11 = 0LL;
  System_DateTime___ctor_62053268(v18, Year, Month, 1, 0LL);
  v19.fields._dateData = (uint64_t)&v13;
  v13 = v11;
  v14 = System_DateTime__AddMonths(v19, 1, 0LL).fields._dateData;
  v20.fields._dateData = (uint64_t)&v14;
  v7.fields._dateData = System_DateTime__ToUniversalTime(v20, 0LL).fields._dateData;
  v8 = CoinRoomUtility_TypeInfo;
  v14 = v7.fields._dateData;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v8 = CoinRoomUtility_TypeInfo;
  }
  v21.fields._dateData = (uint64_t)&v14;
  v23.fields._dateData = v8->static_fields->UnixEpoch.fields._dateData;
  ticks = System_DateTime__Subtract(v21, v23, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v22.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v22, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}