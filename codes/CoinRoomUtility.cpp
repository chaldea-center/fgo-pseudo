void __fastcall CoinRoomUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  uint64_t v9; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_4B6A2BC & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_4636/*"CoinRoom"*/, v8);
    byte_4B6A2BC = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4636/*"CoinRoom"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CoinRoomUtility_TypeInfo->static_fields,
    StringLiteral_4636/*"CoinRoom"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10.fields._dateData = (uint64_t)&v9;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v9 = 0LL;
  System_DateTime___ctor_63377960(v10, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v9;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6A2B2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3664/*"COIN_ROOM_GET"*/, v1);
    byte_4B6A2B2 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3664/*"COIN_ROOM_GET"*/, 0LL);
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
  System_Collections_Generic_List_object__o *v12; // x21
  int v13; // w24
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *Object_object__49525204; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  AssetData_o *v26; // x1
  Il2CppClass **v27; // x0
  int v29; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_4B6A2BA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObjectList_GameObject___, name);
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    assetData = (AssetData_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B6A2BA = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_2F3B38C *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_18:
    sub_1BE4D28(assetData, name);
  }
  v11 = (int)assetData->fields.name;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v11 >= 1 )
  {
    v13 = 0;
    do
    {
      v29 = ++v13;
      v14 = System_Int32__ToString((int32_t)&v29, 0LL);
      v15 = System_String__Concat_62698808(name, v14, 0LL);
      Object_object__49525204 = AssetData__GetObject_object__49525204(
                                  v4,
                                  v15,
                                  (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                   (UnityEngine_Object_o *)Object_object__49525204,
                                   0LL,
                                   0LL);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__49525204 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__49525204,
                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v12 )
          goto LABEL_18;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v12->fields._size;
        v26 = assetData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)assetData,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v26, v17, v18, v19, v20, v21, v22);
        }
      }
    }
    while ( v11 != v13 );
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
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6A2B5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, v1);
    sub_1BE4ACC(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__, v2);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B6A2B5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1BE4D28(Instance, v6);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
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
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  UserSvtCoinEntity_c *v34; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B6A2B6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v2);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&UserSvtCoinEntity_TypeInfo, v10);
    byte_4B6A2B6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_DataEntityBase__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v14,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !klass) )
  {
    sub_1BE4D28(Master_object, v12);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v15);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v33 = v25;
    if ( !v25 )
      goto LABEL_38;
    v34 = UserSvtCoinEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
    {
      sub_1BE4FE8(v25);
LABEL_38:
      sub_1BE4D28(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 28) )
    {
      if ( !v14 )
        sub_1BE4D28(v25, UserSvtCoinEntity_TypeInfo);
      items = v14->fields._items;
      v37 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BE4D28(v25, v34);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v25,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_34;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_34:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B6A2B9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestMaster___, v1);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v2);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1BE4ACC(&StringLiteral_3669/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v4);
    byte_4B6A2B9 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3669/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1BE4D28(Instance, v7);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           Value,
           0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6A2B3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3667/*"COIN_ROOM_MAX"*/, v1);
    byte_4B6A2B3 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3667/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6A2B4 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3668/*"COIN_ROOM_MAX_NUM"*/, v1);
    byte_4B6A2B4 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3668/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  __int64 v1; // x1
  CoinRoomUtility_c *v2; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_4B6A2B8 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v1);
    byte_4B6A2B8 = 1;
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

  if ( (byte_4B6A2B7 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v1);
    byte_4B6A2B7 = 1;
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

  if ( (byte_4B6A2B1 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v1);
    byte_4B6A2B1 = 1;
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

  if ( (byte_4B6A2BB & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomUtility_TypeInfo, v1);
    sub_1BE4ACC(&System_DateTime_TypeInfo, v2);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&System_TimeSpan_TypeInfo, v4);
    byte_4B6A2BB = 1;
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
  System_DateTime___ctor_63377016(v18, Year, Month, 1, 0LL);
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