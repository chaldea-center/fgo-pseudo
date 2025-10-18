System_Collections_Generic_List_UserOwnItemInfo__o *UserOwnItemDetail__GetContinueItemInfoList(
        const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  return UserOwnItemDetail__GetUserOwnItemInfoListByType(27, v1);
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *UserOwnItemDetail__GetUserOwnInfoByItemId(int32_t itemId, const MethodInfo *method)
{
  int32_t v2; // w19
  UserGameEntity_o *ItemMaster; // x0
  const MethodInfo *v4; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_4C4444F & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4C4444F = 1;
  }
  entity = 0;
  ItemMaster = (UserGameEntity_o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_8;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster,
         &entity,
         v2,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    ItemMaster = UserGameMaster__getSelfUserGame(0);
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_43551840(
               (int32_t)entity[3].klass,
               (ItemEntity_o *)entity,
               ItemMaster,
               v4);
LABEL_8:
    sub_1C372B4(ItemMaster);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserOwnItemInfo__o *UserOwnItemDetail__GetUserOwnInfoByType(
        int32_t itemType,
        const MethodInfo *method)
{
  int32_t v2; // w19
  ItemMaster_o *ItemMaster; // x0
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *UserOwnItemInfo_43551840; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  v2 = itemType;
  if ( (byte_4C44450 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    *(_QWORD *)&itemType = sub_1C37058(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    byte_4C44450 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0),
        SelfUserGame = UserGameMaster__getSelfUserGame(0),
        v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v6,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_1C372B4(ItemMaster);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)EntityListByType,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v19.fields._current )
      sub_1C372B4(v7);
    UserOwnItemInfo_43551840 = (Il2CppObject *)UserOwnItemDetail__GetUserOwnItemInfo_43551840(
                                                 (int32_t)v19.fields._current[3].klass,
                                                 (ItemEntity_o *)v19.fields._current,
                                                 SelfUserGame,
                                                 v8);
    v12 = UserOwnItemInfo_43551840;
    if ( UserOwnItemInfo_43551840 )
    {
      if ( !v6 )
        sub_1C372B4(UserOwnItemInfo_43551840);
      items = v6->fields._items;
      v14 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C372B4(UserOwnItemInfo_43551840);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          UserOwnItemInfo_43551840,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v6;
}


UserOwnItemInfo_o *UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *ItemMaster; // x0
  _BOOL8 v6; // x0
  bool v7; // w0
  UserOwnItemInfo_o *v8; // x19
  Il2CppObject *v9; // x20
  UserItemEntity_o *v10; // x21
  const MethodInfo *v11; // x3
  UserItemEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = userGameEntity;
  if ( (byte_4C4444E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    userGameEntity = (UserGameEntity_o *)sub_1C37058(&UserOwnItemInfo_TypeInfo);
    byte_4C4444E = 1;
  }
  v13 = 0;
  entity = 0;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v6 )
    return 0;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v6);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_1C372B4(ItemMaster);
  v7 = UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v13, v4->fields.userId, itemId, 0);
  v8 = 0;
  if ( v7 )
  {
    v10 = v13;
    v9 = entity;
    v8 = (UserOwnItemInfo_o *)sub_1C372A4(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_43551416(v8, (ItemEntity_o *)v9, v10, v11);
  }
  return v8;
}


System_Collections_Generic_List_UserOwnItemInfo__o *UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  ItemMaster_o *ItemMaster; // x0
  _BOOL8 v6; // x0
  ItemEntity_o *current; // x21
  UserItemMaster_o *UserItemMaster; // x22
  NetworkManager_c *v9; // x0
  UserItemEntity_o *v10; // x23
  UserOwnItemInfo_o *v11; // x22
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C4444D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UserOwnItemInfo_TypeInfo);
    byte_4C4444D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v4);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0)) == 0 )
    sub_1C372B4(ItemMaster);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)ItemMaster,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v23 = v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v6 )
      break;
    current = (ItemEntity_o *)v23.fields._current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v6);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    if ( !current )
      sub_1C372B4(v9);
    if ( !UserItemMaster )
      sub_1C372B4(v9);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, v9->static_fields->userIdNumber, current->fields.id, 0);
    v10 = entity;
    v11 = (UserOwnItemInfo_o *)sub_1C372A4(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_43551416(v11, current, v10, v12);
    if ( !v3 )
      sub_1C372B4(v13);
    items = v3->fields._items;
    v17 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C372B4(v13);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v11,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v11;
      sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *UserOwnItemDetail__GetUserOwnItemInfo_43551840(
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
  if ( (byte_4C44451 & 1) == 0 )
  {
    sub_1C37058(&UserOwnFriendPoint_TypeInfo);
    sub_1C37058(&UserOwnManaPrism_TypeInfo);
    sub_1C37058(&UserOwnQp_TypeInfo);
    sub_1C37058(&UserOwnRarePrism_TypeInfo);
    sub_1C37058(&UserOwnStone_TypeInfo);
    *(_QWORD *)&itemType = sub_1C37058(&UserOwnSvtCoin_TypeInfo);
    byte_4C44451 = 1;
  }
  if ( v6 <= 13 )
  {
    if ( v6 > 4 )
    {
      if ( v6 == 5 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnManaPrism_TypeInfo);
        UserOwnManaPrism___ctor(v7, itemEntity, userGameEntity, v14);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 13 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnFriendPoint_TypeInfo);
        UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v7, itemEntity, userGameEntity, v10);
        return (UserOwnItemInfo_o *)v7;
      }
    }
    else
    {
      if ( v6 == 1 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnQp_TypeInfo);
        UserOwnQp___ctor((UserOwnQp_o *)v7, itemEntity, userGameEntity, v13);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 2 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnStone_TypeInfo);
        UserOwnStone___ctor((UserOwnStone_o *)v7, itemEntity, userGameEntity, v9);
        return (UserOwnItemInfo_o *)v7;
      }
    }
  }
  else
  {
    if ( v6 == 22 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor((UserOwnRarePrism_o *)v7, itemEntity, userGameEntity, v12);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 29 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1C372A4(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v7, itemEntity, userGameEntity, v8);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  if ( !itemEntity )
    sub_1C372B4(*(_QWORD *)&itemType);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4444B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4444B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4444C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4444C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
}