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
  __int64 v9; // x2
  uint64_t v10; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8

  if ( (byte_4B1983F & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4625/*"CoinRoom"*/, v8, v9);
    byte_4B1983F = 1;
  }
  CoinRoomUtility_TypeInfo->static_fields->ASSET_NAME = (struct System_String_o *)StringLiteral_4625/*"CoinRoom"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CoinRoomUtility_TypeInfo->static_fields,
    StringLiteral_4625/*"CoinRoom"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11.fields._dateData = (uint64_t)&v10;
  CoinRoomUtility_TypeInfo->static_fields->EFFECT_FADE_TIME = 0.5;
  v10 = 0LL;
  System_DateTime___ctor_63080372(v11, 1970, 1, 1, 0, 0, 0, 1, 0LL);
  CoinRoomUtility_TypeInfo->static_fields->UnixEpoch.fields._dateData = v10;
}


int32_t __fastcall CoinRoomUtility__CalcPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19835 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3655/*"COIN_ROOM_GET"*/, v1, v2);
    byte_4B19835 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3655/*"COIN_ROOM_GET"*/, 0LL);
}


System_Collections_Generic_List_UIAtlas__o *__fastcall CoinRoomUtility__GetDownloadAtlas(
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x2
  __int64 v18; // x3
  int v19; // w23
  System_Collections_Generic_List_object__o *v20; // x21
  int v21; // w24
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *Object_object__49237568; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  AssetData_o *v35; // x1
  Il2CppClass **v36; // x0
  int v38; // [xsp+Ch] [xbp-54h] BYREF

  v4 = assetData;
  if ( (byte_4B1983D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, name, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v13, v14);
    assetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1983D = 1;
  }
  if ( !v4
    || (assetData = (AssetData_o *)AssetData__GetObjectList_object_(
                                     v4,
                                     (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___)) == 0LL )
  {
LABEL_18:
    sub_1BCAA3C(assetData, name);
  }
  v19 = (int)assetData->fields.name;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       name,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( v19 >= 1 )
  {
    v21 = 0;
    do
    {
      v38 = ++v21;
      v22 = System_Int32__ToString((int32_t)&v38, 0LL);
      v23 = System_String__Concat_62401220(name, v22, 0LL);
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  v4,
                                  v23,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      assetData = (AssetData_o *)UnityEngine_Object__op_Equality(
                                   (UnityEngine_Object_o *)Object_object__49237568,
                                   0LL,
                                   0LL);
      if ( ((unsigned __int8)assetData & 1) == 0 )
      {
        if ( !Object_object__49237568 )
          goto LABEL_18;
        assetData = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)Object_object__49237568,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !v20 )
          goto LABEL_18;
        items = v20->fields._items;
        v33 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v20->fields._size;
        v35 = assetData;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)assetData,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v35, v26, v27, v28, v29, v30, v31);
        }
      }
    }
    while ( v19 != v21 );
  }
  return (System_Collections_Generic_List_UIAtlas__o *)v20;
}


UserCoinRoomEntity_o *__fastcall CoinRoomUtility__GetUserCoinRoomEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B19838 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCoinRoomMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B19838 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCoinRoomMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v10);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
    &entity,
    (int64_t)Instance,
    (const MethodInfo_31B3040 *)Method_DataMasterBase_UserCoinRoomMaster__UserCoinRoomEntity__long__TryGetEntity__);
  return (UserCoinRoomEntity_o *)entity;
}


System_Collections_Generic_List_DataEntityBase__o *__fastcall CoinRoomUtility__GetUserSvtCoins(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x8
  UserSvtCoinEntity_c *v46; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  Il2CppClass **v51; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0

  if ( (byte_4B19839 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v3, v4);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&UserSvtCoinEntity_TypeInfo, v19, v20);
    byte_4B19839 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_DataEntityBase__TypeInfo,
                                                             v22,
                                                             v23,
                                                             v24),
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DataEntityBase___ctor__),
        !klass) )
  {
    sub_1BCAA3C(Master_object, v22);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v27);
  while ( 1 )
  {
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_12;
      }
      p_method = (__int64)&v29->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_19;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_19:
      v36 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v45 = v37;
    if ( !v37 )
      goto LABEL_38;
    v46 = UserSvtCoinEntity_TypeInfo;
    methodPtr_low = LOBYTE(UserSvtCoinEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)methodPtr_low
      || *(UserSvtCoinEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * methodPtr_low - 8) != UserSvtCoinEntity_TypeInfo )
    {
      sub_1BCACFC(v37);
LABEL_38:
      sub_1BCAA3C(v37, v38);
    }
    if ( *(_DWORD *)(v37 + 28) )
    {
      if ( !v26 )
        sub_1BCAA3C(v37, UserSvtCoinEntity_TypeInfo);
      items = v26->fields._items;
      v49 = Method_System_Collections_Generic_List_DataEntityBase__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1BCAA3C(v37, v46);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v37,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v45;
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v45, v39, v40, v41, v42, v43, v44);
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_34;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_34:
    v55 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return (System_Collections_Generic_List_DataEntityBase__o *)v26;
}


bool __fastcall CoinRoomUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t Value; // w19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B1983C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_3660/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v7, v8);
    byte_4B1983C = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3660/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v11);
  return UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)MasterData_object, (int64_t)Instance, Value, 0LL) > 0;
}


int32_t __fastcall CoinRoomUtility__MaxPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19836 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3658/*"COIN_ROOM_MAX"*/, v1, v2);
    byte_4B19836 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3658/*"COIN_ROOM_MAX"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeMaxNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19837 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3659/*"COIN_ROOM_MAX_NUM"*/, v1, v2);
    byte_4B19837 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_3659/*"COIN_ROOM_MAX_NUM"*/, 0LL);
}


int32_t __fastcall CoinRoomUtility__MonthExchangeNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CoinRoomUtility_c *v3; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0

  if ( (byte_4B1983B & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v1, v2);
    byte_4B1983B = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  if ( UserCoinRoomEntity )
    LODWORD(UserCoinRoomEntity) = UserCoinRoomEntity->fields.num;
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthExchangePoint(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CoinRoomUtility_c *v3; // x0
  UserCoinRoomEntity_o *UserCoinRoomEntity; // x0
  __int64 v5; // x1
  UserCoinRoomEntity_o *v6; // x8
  CoinRoomUtility_c *v7; // x0
  int32_t cnt; // w19

  if ( (byte_4B1983A & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v1, v2);
    byte_4B1983A = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  UserCoinRoomEntity = CoinRoomUtility__GetUserCoinRoomEntity((const MethodInfo *)v3);
  if ( UserCoinRoomEntity )
  {
    v6 = UserCoinRoomEntity;
    v7 = CoinRoomUtility_TypeInfo;
    cnt = v6->fields.cnt;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v5);
    LODWORD(UserCoinRoomEntity) = CoinRoomUtility__CalcPoint((const MethodInfo *)v7) * cnt;
  }
  return (int)UserCoinRoomEntity;
}


int32_t __fastcall CoinRoomUtility__MonthRemainingNum(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CoinRoomUtility_c *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4B19834 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v1, v2);
    byte_4B19834 = 1;
  }
  v3 = CoinRoomUtility_TypeInfo;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v1);
  v4 = (const MethodInfo *)CoinRoomUtility__MonthExchangeNum((const MethodInfo *)v3);
  return CoinRoomUtility__MonthExchangeMaxNum(v4) - (_DWORD)v4;
}


int64_t __fastcall CoinRoomUtility__NextMonthUnixTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  int32_t Year; // w19
  int32_t Month; // w2
  System_DateTime_o v12; // x0
  System_DateTime_o v13; // x1
  CoinRoomUtility_c *v14; // x8
  __int64 v15; // x1
  double TotalSeconds; // d0
  __int64 v18; // [xsp+8h] [xbp-48h] BYREF
  int64_t ticks; // [xsp+10h] [xbp-40h] BYREF
  __int64 v20; // [xsp+18h] [xbp-38h] BYREF
  uint64_t v21; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_TimeSpan_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x1.8

  if ( (byte_4B1983E & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v7, v8);
    byte_4B1983E = 1;
  }
  v20 = 0LL;
  v21 = 0LL;
  ticks = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
  v23.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v23, 0LL);
  v24.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v24, 0LL);
  v25.fields._dateData = (uint64_t)&v18;
  v18 = 0LL;
  System_DateTime___ctor_63079428(v25, Year, Month, 1, 0LL);
  v26.fields._dateData = (uint64_t)&v20;
  v20 = v18;
  v21 = System_DateTime__AddMonths(v26, 1, 0LL).fields._dateData;
  v27.fields._dateData = (uint64_t)&v21;
  v12.fields._dateData = System_DateTime__ToUniversalTime(v27, 0LL).fields._dateData;
  v14 = CoinRoomUtility_TypeInfo;
  v21 = v12.fields._dateData;
  if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v13.fields._dateData);
    v14 = CoinRoomUtility_TypeInfo;
  }
  v28.fields._dateData = (uint64_t)&v21;
  v30.fields._dateData = v14->static_fields->UnixEpoch.fields._dateData;
  ticks = System_DateTime__Subtract(v28, v30, 0LL).fields._ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v15);
  v29.fields._ticks = (int64_t)&ticks;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v29, 0LL);
  if ( TotalSeconds >= 0.0 )
    return (unsigned int)TotalSeconds;
  else
    return (unsigned int)(int)TotalSeconds;
}