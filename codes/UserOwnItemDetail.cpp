System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetContinueItemInfoList(
        const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  return UserOwnItemDetail__GetUserOwnItemInfoListByType(27, v1);
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnInfoByItemId(int32_t itemId, const MethodInfo *method)
{
  int32_t v2; // w19
  UserGameEntity_o *ItemMaster; // x0
  Il2CppObject *v4; // x1
  const MethodInfo *v5; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_4A5C3D5 & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4A5C3D5 = 1;
  }
  entity = 0LL;
  ItemMaster = (UserGameEntity_o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_8;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster,
         &entity,
         v2,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    ItemMaster = UserGameMaster__getSelfUserGame(0LL);
    v4 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_40556584(
               (int32_t)entity[3].klass,
               (ItemEntity_o *)entity,
               ItemMaster,
               v5);
LABEL_8:
    sub_1B8880C(ItemMaster, v4);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnInfoByType(
        int32_t itemType,
        const MethodInfo *method)
{
  int32_t v2; // w19
  ItemMaster_o *ItemMaster; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  System_Collections_Generic_List_object__o *v7; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  Il2CppObject *UserOwnItemInfo_40556584; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  v2 = itemType;
  if ( (byte_4A5C3D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    *(_QWORD *)&itemType = sub_1B885B0(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    byte_4A5C3D6 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL),
        v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_1B8880C(ItemMaster, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)EntityListByType,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v20.fields._current )
      sub_1B8880C(v8, 0LL);
    UserOwnItemInfo_40556584 = (Il2CppObject *)UserOwnItemDetail__GetUserOwnItemInfo_40556584(
                                                 (int32_t)v20.fields._current[3].klass,
                                                 (ItemEntity_o *)v20.fields._current,
                                                 SelfUserGame,
                                                 v9);
    v13 = UserOwnItemInfo_40556584;
    if ( UserOwnItemInfo_40556584 )
    {
      if ( !v7 )
        sub_1B8880C(UserOwnItemInfo_40556584, UserOwnItemInfo_40556584);
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(UserOwnItemInfo_40556584, UserOwnItemInfo_40556584);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          UserOwnItemInfo_40556584,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v7;
}


UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *ItemMaster; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  bool v8; // w0
  UserOwnItemInfo_o *v9; // x19
  Il2CppObject *v10; // x20
  UserItemEntity_o *v11; // x21
  const MethodInfo *v12; // x3
  UserItemEntity_o *v14; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = userGameEntity;
  if ( (byte_4A5C3D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    userGameEntity = (UserGameEntity_o *)sub_1B885B0(&UserOwnItemInfo_TypeInfo);
    byte_4A5C3D4 = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v7 )
    return 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_1B8880C(ItemMaster, v6);
  v8 = UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v14, v4->fields.userId, itemId, 0LL);
  v9 = 0LL;
  if ( v8 )
  {
    v11 = v14;
    v10 = entity;
    v9 = (UserOwnItemInfo_o *)sub_1B887FC(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_40556160(v9, (ItemEntity_o *)v10, v11, v12);
  }
  return v9;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  __int64 v11; // x1
  UserItemEntity_o *v12; // x22
  UserOwnItemInfo_o *v13; // x21
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-90h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5C3D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserOwnItemInfo_TypeInfo);
    byte_4A5C3D3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  entity = 0LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v4);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_1B8880C(ItemMaster, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)ItemMaster,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v26 = v24;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v7 )
      break;
    current = (ItemEntity_o *)v26.fields._current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_1B8880C(UserId, v11);
    if ( !UserItemMaster )
      sub_1B8880C(UserId, v11);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, 0LL);
    v12 = entity;
    v13 = (UserOwnItemInfo_o *)sub_1B887FC(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_40556160(v13, current, v12, v14);
    if ( !v3 )
      sub_1B8880C(v15, v16);
    items = v3->fields._items;
    v20 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v15, v16);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v13,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v13, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_40556584(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  UserOwnManaPrism_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  v6 = itemType;
  if ( (byte_4A5C3D7 & 1) == 0 )
  {
    sub_1B885B0(&UserOwnFriendPoint_TypeInfo);
    sub_1B885B0(&UserOwnManaPrism_TypeInfo);
    sub_1B885B0(&UserOwnQp_TypeInfo);
    sub_1B885B0(&UserOwnRarePrism_TypeInfo);
    sub_1B885B0(&UserOwnStone_TypeInfo);
    *(_QWORD *)&itemType = sub_1B885B0(&UserOwnSvtCoin_TypeInfo);
    byte_4A5C3D7 = 1;
  }
  if ( v6 <= 13 )
  {
    if ( v6 > 4 )
    {
      if ( v6 == 5 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnManaPrism_TypeInfo);
        UserOwnManaPrism___ctor(v7, itemEntity, userGameEntity, v14);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 13 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnFriendPoint_TypeInfo);
        UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v7, itemEntity, userGameEntity, v10);
        return (UserOwnItemInfo_o *)v7;
      }
    }
    else
    {
      if ( v6 == 1 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnQp_TypeInfo);
        UserOwnQp___ctor((UserOwnQp_o *)v7, itemEntity, userGameEntity, v13);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 2 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnStone_TypeInfo);
        UserOwnStone___ctor((UserOwnStone_o *)v7, itemEntity, userGameEntity, v9);
        return (UserOwnItemInfo_o *)v7;
      }
    }
  }
  else
  {
    if ( v6 == 22 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor((UserOwnRarePrism_o *)v7, itemEntity, userGameEntity, v12);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 29 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1B887FC(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v7, itemEntity, userGameEntity, v8);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  if ( !itemEntity )
    sub_1B8880C(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5C3D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C3D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5C3D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C3D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
}