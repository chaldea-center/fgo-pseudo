System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetContinueItemInfoList(
        const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  return UserOwnItemDetail__GetUserOwnItemInfoListByType(27, v1);
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnInfoByItemId(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w19
  UserGameEntity_o *ItemMaster; // x0
  Il2CppObject *v5; // x1
  const MethodInfo *v6; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  v3 = itemId;
  if ( (byte_4B1749E & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, method, v2);
    byte_4B1749E = 1;
  }
  entity = 0LL;
  ItemMaster = (UserGameEntity_o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_8;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster,
         &entity,
         v3,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    ItemMaster = UserGameMaster__getSelfUserGame(0LL);
    v5 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_41294988(
               (int32_t)entity[3].klass,
               (ItemEntity_o *)entity,
               ItemMaster,
               v6);
LABEL_8:
    sub_1BCAA3C(ItemMaster, v5);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnInfoByType(
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ItemMaster_o *ItemMaster; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  Il2CppObject *UserOwnItemInfo_41294988; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-60h] BYREF

  v3 = itemType;
  if ( (byte_4B1749F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v12, v13);
    *(_QWORD *)&itemType = sub_1BCA7E0(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v14, v15);
    byte_4B1749F = 1;
  }
  memset(&v40, 0, sizeof(v40));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v3, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL),
        v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_UserOwnItemInfo__TypeInfo,
                                                             v20,
                                                             v21,
                                                             v22),
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_1BCAA3C(ItemMaster, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)EntityListByType,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v24 )
      break;
    if ( !v40.fields._current )
      sub_1BCAA3C(v24, 0LL);
    UserOwnItemInfo_41294988 = (Il2CppObject *)UserOwnItemDetail__GetUserOwnItemInfo_41294988(
                                                 (int32_t)v40.fields._current[3].klass,
                                                 (ItemEntity_o *)v40.fields._current,
                                                 SelfUserGame,
                                                 v25);
    v33 = (int64_t)UserOwnItemInfo_41294988;
    if ( UserOwnItemInfo_41294988 )
    {
      if ( !v23 )
        sub_1BCAA3C(UserOwnItemInfo_41294988, UserOwnItemInfo_41294988);
      items = v23->fields._items;
      v35 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BCAA3C(UserOwnItemInfo_41294988, UserOwnItemInfo_41294988);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          UserOwnItemInfo_41294988,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *ItemMaster; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  bool v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  UserOwnItemInfo_o *v14; // x19
  Il2CppObject *v15; // x20
  UserItemEntity_o *v16; // x21
  const MethodInfo *v17; // x3
  UserItemEntity_o *v19; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = userGameEntity;
  if ( (byte_4B1749D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId, method);
    userGameEntity = (UserGameEntity_o *)sub_1BCA7E0(&UserOwnItemInfo_TypeInfo, v5, v6);
    byte_4B1749D = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v9 )
    return 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v9);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_1BCAA3C(ItemMaster, v8);
  v10 = UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v19, v4->fields.userId, itemId, 0LL);
  v14 = 0LL;
  if ( v10 )
  {
    v16 = v19;
    v15 = entity;
    v14 = (UserOwnItemInfo_o *)sub_1BCAA2C(UserOwnItemInfo_TypeInfo, v11, v12, v13);
    UserOwnItemInfo___ctor_41294564(v14, (ItemEntity_o *)v15, v16, v17);
  }
  return v14;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v21; // x19
  const MethodInfo *v22; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  ItemEntity_o *current; // x20
  __int64 v27; // x1
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  __int64 v30; // x1
  UserItemEntity_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  UserOwnItemInfo_o *v35; // x21
  const MethodInfo *v36; // x3
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+0h] [xbp-90h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1749C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserOwnItemInfo_TypeInfo, v19, v20);
    byte_4B1749C = 1;
  }
  memset(&v52, 0, sizeof(v52));
  entity = 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserOwnItemInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v22);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_1BCAA3C(ItemMaster, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)ItemMaster,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v52 = v50;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v25 )
      break;
    current = (ItemEntity_o *)v52.fields._current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v25);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_1BCAA3C(UserId, v30);
    if ( !UserItemMaster )
      sub_1BCAA3C(UserId, v30);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, 0LL);
    v31 = entity;
    v35 = (UserOwnItemInfo_o *)sub_1BCAA2C(UserOwnItemInfo_TypeInfo, v32, v33, v34);
    UserOwnItemInfo___ctor_41294564(v35, current, v31, v36);
    if ( !v21 )
      sub_1BCAA3C(v37, v38);
    items = v21->fields._items;
    v46 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
    ++v21->fields._version;
    if ( !items )
      sub_1BCAA3C(v37, v38);
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)v35,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v35;
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v35, v39, v40, v41, v42, v43, v44);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_41294988(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
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
  UserOwnManaPrism_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  v6 = itemType;
  if ( (byte_4B174A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UserOwnFriendPoint_TypeInfo, itemEntity, userGameEntity);
    sub_1BCA7E0(&UserOwnManaPrism_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserOwnQp_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserOwnRarePrism_TypeInfo, v11, v12);
    sub_1BCA7E0(&UserOwnStone_TypeInfo, v13, v14);
    *(_QWORD *)&itemType = sub_1BCA7E0(&UserOwnSvtCoin_TypeInfo, v15, v16);
    byte_4B174A0 = 1;
  }
  if ( v6 <= 13 )
  {
    if ( v6 > 4 )
    {
      if ( v6 == 5 )
      {
        v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnManaPrism_TypeInfo, itemEntity, userGameEntity, method);
        UserOwnManaPrism___ctor(v17, itemEntity, userGameEntity, v24);
        return (UserOwnItemInfo_o *)v17;
      }
      if ( v6 == 13 )
      {
        v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnFriendPoint_TypeInfo, itemEntity, userGameEntity, method);
        UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v17, itemEntity, userGameEntity, v20);
        return (UserOwnItemInfo_o *)v17;
      }
    }
    else
    {
      if ( v6 == 1 )
      {
        v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnQp_TypeInfo, itemEntity, userGameEntity, method);
        UserOwnQp___ctor((UserOwnQp_o *)v17, itemEntity, userGameEntity, v23);
        return (UserOwnItemInfo_o *)v17;
      }
      if ( v6 == 2 )
      {
        v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnStone_TypeInfo, itemEntity, userGameEntity, method);
        UserOwnStone___ctor((UserOwnStone_o *)v17, itemEntity, userGameEntity, v19);
        return (UserOwnItemInfo_o *)v17;
      }
    }
  }
  else
  {
    if ( v6 == 22 )
    {
      v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnRarePrism_TypeInfo, itemEntity, userGameEntity, method);
      UserOwnRarePrism___ctor((UserOwnRarePrism_o *)v17, itemEntity, userGameEntity, v22);
      return (UserOwnItemInfo_o *)v17;
    }
    if ( v6 == 29 )
    {
      v17 = (UserOwnManaPrism_o *)sub_1BCAA2C(UserOwnSvtCoin_TypeInfo, itemEntity, userGameEntity, method);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v17, itemEntity, userGameEntity, v18);
      return (UserOwnItemInfo_o *)v17;
    }
  }
  if ( !itemEntity )
    sub_1BCAA3C(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1749A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1749A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1749B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1749B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
}