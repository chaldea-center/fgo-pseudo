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
  if ( (byte_4A4F86F & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, method);
    byte_4A4F86F = 1;
  }
  entity = 0LL;
  ItemMaster = (UserGameEntity_o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_8;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster,
         &entity,
         v2,
         (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    ItemMaster = UserGameMaster__getSelfUserGame(0LL);
    v4 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_41610116(
               (int32_t)entity[3].klass,
               (ItemEntity_o *)entity,
               ItemMaster,
               v5);
LABEL_8:
    sub_1B86614(ItemMaster, v4);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnInfoByType(
        int32_t itemType,
        const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ItemMaster_o *ItemMaster; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  System_Collections_Generic_List_object__o *v13; // x19
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  Il2CppObject *UserOwnItemInfo_41610116; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  v2 = itemType;
  if ( (byte_4A4F870 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    *(_QWORD *)&itemType = sub_1B863B8(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    byte_4A4F870 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL),
        v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_1B86614(ItemMaster, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)EntityListByType,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !v26.fields._current )
      sub_1B86614(v14, 0LL);
    UserOwnItemInfo_41610116 = (Il2CppObject *)UserOwnItemDetail__GetUserOwnItemInfo_41610116(
                                                 (int32_t)v26.fields._current[3].klass,
                                                 (ItemEntity_o *)v26.fields._current,
                                                 SelfUserGame,
                                                 v15);
    v19 = UserOwnItemInfo_41610116;
    if ( UserOwnItemInfo_41610116 )
    {
      if ( !v13 )
        sub_1B86614(UserOwnItemInfo_41610116, UserOwnItemInfo_41610116);
      items = v13->fields._items;
      v21 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B86614(UserOwnItemInfo_41610116, UserOwnItemInfo_41610116);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          UserOwnItemInfo_41610116,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B8635C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *ItemMaster; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  bool v9; // w0
  UserOwnItemInfo_o *v10; // x19
  Il2CppObject *v11; // x20
  UserItemEntity_o *v12; // x21
  const MethodInfo *v13; // x3
  UserItemEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = userGameEntity;
  if ( (byte_4A4F86E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    userGameEntity = (UserGameEntity_o *)sub_1B863B8(&UserOwnItemInfo_TypeInfo, v5);
    byte_4A4F86E = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_32142CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v8 )
    return 0LL;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v8);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_1B86614(ItemMaster, v7);
  v9 = UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v15, v4->fields.userId, itemId, 0LL);
  v10 = 0LL;
  if ( v9 )
  {
    v12 = v15;
    v11 = entity;
    v10 = (UserOwnItemInfo_o *)sub_1B86604(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_41609692(v10, (ItemEntity_o *)v11, v12, v13);
  }
  return v10;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  const MethodInfo *v12; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  ItemEntity_o *current; // x21
  __int64 v17; // x1
  UserItemMaster_o *UserItemMaster; // x22
  NetworkManager_c *v19; // x0
  UserItemEntity_o *v20; // x23
  UserOwnItemInfo_o *v21; // x22
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+0h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4F86D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&UserOwnItemInfo_TypeInfo, v10);
    byte_4A4F86D = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v12);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_1B86614(ItemMaster, v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ItemMaster,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v34 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v15 )
      break;
    current = (ItemEntity_o *)v34.fields._current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v15);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v17);
      byte_4A48C25 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    if ( !current )
      sub_1B86614(v19, v17);
    if ( !UserItemMaster )
      sub_1B86614(v19, v17);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, v19->static_fields->userIdNumber, current->fields.id, 0LL);
    v20 = entity;
    v21 = (UserOwnItemInfo_o *)sub_1B86604(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_41609692(v21, current, v20, v22);
    if ( !v11 )
      sub_1B86614(v23, v24);
    items = v11->fields._items;
    v28 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
    ++v11->fields._version;
    if ( !items )
      sub_1B86614(v23, v24);
    size = v11->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v21,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v11->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v21;
      sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v21, v25, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_41610116(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UserOwnManaPrism_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  v6 = itemType;
  if ( (byte_4A4F871 & 1) == 0 )
  {
    sub_1B863B8(&UserOwnFriendPoint_TypeInfo, itemEntity);
    sub_1B863B8(&UserOwnManaPrism_TypeInfo, v7);
    sub_1B863B8(&UserOwnQp_TypeInfo, v8);
    sub_1B863B8(&UserOwnRarePrism_TypeInfo, v9);
    sub_1B863B8(&UserOwnStone_TypeInfo, v10);
    *(_QWORD *)&itemType = sub_1B863B8(&UserOwnSvtCoin_TypeInfo, v11);
    byte_4A4F871 = 1;
  }
  if ( v6 <= 13 )
  {
    if ( v6 > 4 )
    {
      if ( v6 == 5 )
      {
        v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnManaPrism_TypeInfo);
        UserOwnManaPrism___ctor(v12, itemEntity, userGameEntity, v19);
        return (UserOwnItemInfo_o *)v12;
      }
      if ( v6 == 13 )
      {
        v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnFriendPoint_TypeInfo);
        UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v12, itemEntity, userGameEntity, v15);
        return (UserOwnItemInfo_o *)v12;
      }
    }
    else
    {
      if ( v6 == 1 )
      {
        v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnQp_TypeInfo);
        UserOwnQp___ctor((UserOwnQp_o *)v12, itemEntity, userGameEntity, v18);
        return (UserOwnItemInfo_o *)v12;
      }
      if ( v6 == 2 )
      {
        v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnStone_TypeInfo);
        UserOwnStone___ctor((UserOwnStone_o *)v12, itemEntity, userGameEntity, v14);
        return (UserOwnItemInfo_o *)v12;
      }
    }
  }
  else
  {
    if ( v6 == 22 )
    {
      v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor((UserOwnRarePrism_o *)v12, itemEntity, userGameEntity, v17);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 29 )
    {
      v12 = (UserOwnManaPrism_o *)sub_1B86604(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v12, itemEntity, userGameEntity, v13);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  if ( !itemEntity )
    sub_1B86614(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A4F86B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A4F86B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A4F86C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A4F86C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
}