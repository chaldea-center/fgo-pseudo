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
  Il2CppObject *v4; // x1
  const MethodInfo *v5; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_4E05F68 & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_1CE6700(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4E05F68 = 1;
  }
  entity = 0;
  ItemMaster = (UserGameEntity_o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_8;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)ItemMaster,
         &entity,
         v2,
         (const MethodInfo_34E92A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    ItemMaster = UserGameMaster__getSelfUserGame(0);
    v4 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_44756384(
               (int32_t)entity[3].klass,
               (ItemEntity_o *)entity,
               ItemMaster,
               v5);
LABEL_8:
    sub_1CE6958(ItemMaster, v4);
  }
  return 0;
}


UserOwnItemInfo_o *UserOwnItemDetail__GetUserOwnItemInfo(
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
  if ( (byte_4E05F67 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    userGameEntity = (UserGameEntity_o *)sub_1CE6700(&UserOwnItemInfo_TypeInfo);
    byte_4E05F67 = 1;
  }
  v14 = 0;
  entity = 0;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_34E92A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v7 )
    return 0;
  ItemMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_1CE6958(ItemMaster, v6);
  v8 = UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v14, v4->fields.userId, itemId, 0);
  v9 = 0;
  if ( v8 )
  {
    v11 = v14;
    v10 = entity;
    v9 = (UserOwnItemInfo_o *)sub_1CE694C(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_44755960(v9, (ItemEntity_o *)v10, v11, v12);
  }
  return v9;
}


System_Collections_Generic_List_UserOwnItemInfo__o *UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  ItemEntity_o *current; // x21
  __int64 v9; // x1
  UserItemMaster_o *UserItemMaster; // x22
  NetworkManager_c *v11; // x0
  UserItemEntity_o *v12; // x23
  UserOwnItemInfo_o *v13; // x22
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+0h] [xbp-A0h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4E05F66 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&UserOwnItemInfo_TypeInfo);
    byte_4E05F66 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v4);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0)) == 0 )
    sub_1CE6958(ItemMaster, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)ItemMaster,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v30 = v28;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v7 )
      break;
    current = (ItemEntity_o *)v30.fields._current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
    }
    v11 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v11 = NetworkManager_TypeInfo;
    }
    if ( !current )
      sub_1CE6958(v11, v9);
    if ( !UserItemMaster )
      sub_1CE6958(v11, v9);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, v11->static_fields->userIdNumber, current->fields.id, 0);
    v12 = entity;
    v13 = (UserOwnItemInfo_o *)sub_1CE694C(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_44755960(v13, current, v12, v14);
    if ( !v3 )
      sub_1CE6958(v15, v16);
    items = v3->fields._items;
    v24 = Method_System_Collections_Generic_List_UserOwnItemInfo__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1CE6958(v15, v16);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v13,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v13;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v13, v17, v18, v19, v20, v21, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *UserOwnItemDetail__GetUserOwnItemInfo_44756384(
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
  if ( (byte_4E05F69 & 1) == 0 )
  {
    sub_1CE6700(&UserOwnFriendPoint_TypeInfo);
    sub_1CE6700(&UserOwnManaPrism_TypeInfo);
    sub_1CE6700(&UserOwnQp_TypeInfo);
    sub_1CE6700(&UserOwnRarePrism_TypeInfo);
    sub_1CE6700(&UserOwnStone_TypeInfo);
    *(_QWORD *)&itemType = sub_1CE6700(&UserOwnSvtCoin_TypeInfo);
    byte_4E05F69 = 1;
  }
  if ( v6 <= 13 )
  {
    if ( v6 > 4 )
    {
      if ( v6 == 5 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnManaPrism_TypeInfo);
        UserOwnManaPrism___ctor(v7, itemEntity, userGameEntity, v14);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 13 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnFriendPoint_TypeInfo);
        UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v7, itemEntity, userGameEntity, v10);
        return (UserOwnItemInfo_o *)v7;
      }
    }
    else
    {
      if ( v6 == 1 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnQp_TypeInfo);
        UserOwnQp___ctor((UserOwnQp_o *)v7, itemEntity, userGameEntity, v13);
        return (UserOwnItemInfo_o *)v7;
      }
      if ( v6 == 2 )
      {
        v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnStone_TypeInfo);
        UserOwnStone___ctor((UserOwnStone_o *)v7, itemEntity, userGameEntity, v9);
        return (UserOwnItemInfo_o *)v7;
      }
    }
  }
  else
  {
    if ( v6 == 22 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor((UserOwnRarePrism_o *)v7, itemEntity, userGameEntity, v12);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 29 )
    {
      v7 = (UserOwnManaPrism_o *)sub_1CE694C(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v7, itemEntity, userGameEntity, v8);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  if ( !itemEntity )
    sub_1CE6958(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4E05F64 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05F64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4E05F65 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05F65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
}