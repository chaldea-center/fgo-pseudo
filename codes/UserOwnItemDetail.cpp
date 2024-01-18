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
  DataMasterBase_WarMaster__WarEntity__int__o *ItemMaster; // x0
  WarEntity_o *v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_4187073 & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, method);
    byte_4187073 = 1;
  }
  entity = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_9;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         v2,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v5 )
  {
    ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame((const MethodInfo *)v5);
    v4 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_24020228(
               entity->fields.bannerId,
               (ItemEntity_o *)entity,
               (UserGameEntity_o *)ItemMaster,
               v6);
LABEL_9:
    sub_B2C434(ItemMaster, v4);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  UserOwnItemInfo_o *UserOwnItemInfo_24020228; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  v2 = itemType;
  if ( (byte_4187074 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    *(_QWORD *)&itemType = sub_B2C35C(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    byte_4187074 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)EntityListByType),
        v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v13,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_B2C434(ItemMaster, v10);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !v18.fields.current )
      sub_B2C434(v14, 0LL);
    UserOwnItemInfo_24020228 = UserOwnItemDetail__GetUserOwnItemInfo_24020228(
                                 (int32_t)v18.fields.current[3].klass,
                                 (ItemEntity_o *)v18.fields.current,
                                 SelfUserGame,
                                 v15);
    if ( UserOwnItemInfo_24020228 )
    {
      if ( !v13 )
        sub_B2C434(UserOwnItemInfo_24020228, UserOwnItemInfo_24020228);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)UserOwnItemInfo_24020228,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *ItemMaster; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x4
  ItemEntity_o *v10; // x20
  UserItemEntity_o *v11; // x21
  UserOwnItemInfo_o *v12; // x19
  const MethodInfo *v13; // x3
  UserItemEntity_o *v15; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v4 = userGameEntity;
  if ( (byte_4187072 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    userGameEntity = (UserGameEntity_o *)sub_B2C35C(&UserOwnItemInfo_TypeInfo, v5);
    byte_4187072 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v8 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v8 )
    return 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v8);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_B2C434(ItemMaster, v7);
  if ( !UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v15, v4->fields.userId, itemId, v9) )
    return 0LL;
  v10 = (ItemEntity_o *)entity;
  v11 = v15;
  v12 = (UserOwnItemInfo_o *)sub_B2C42C(UserOwnItemInfo_TypeInfo);
  UserOwnItemInfo___ctor_24019772(v12, v10, v11, v13);
  return v12;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  const MethodInfo *v12; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v14; // x1
  _BOOL8 v15; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  UserItemEntity_o *v21; // x22
  UserOwnItemInfo_o *v22; // x21
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4187071 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&UserOwnItemInfo_TypeInfo, v10);
    byte_4187071 = 1;
  }
  entity = 0LL;
  memset(&v29, 0, sizeof(v29));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v12);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_B2C434(ItemMaster, v14);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ItemMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v15 )
      break;
    current = (ItemEntity_o *)v29.fields.current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v15);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_B2C434(UserId, v19);
    if ( !UserItemMaster )
      sub_B2C434(UserId, v19);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, v20);
    v21 = entity;
    v22 = (UserOwnItemInfo_o *)sub_B2C42C(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_24019772(v22, current, v21, v23);
    if ( !v11 )
      sub_B2C434(v24, v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_24020228(
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
  UserOwnRarePrism_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  v6 = itemType;
  if ( (byte_4187075 & 1) == 0 )
  {
    sub_B2C35C(&UserOwnFriendPoint_TypeInfo, itemEntity);
    sub_B2C35C(&UserOwnManaPrism_TypeInfo, v7);
    sub_B2C35C(&UserOwnQp_TypeInfo, v8);
    sub_B2C35C(&UserOwnRarePrism_TypeInfo, v9);
    sub_B2C35C(&UserOwnStone_TypeInfo, v10);
    *(_QWORD *)&itemType = sub_B2C35C(&UserOwnSvtCoin_TypeInfo, v11);
    byte_4187075 = 1;
  }
  if ( v6 > 13 )
  {
    if ( v6 == 22 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor(v12, itemEntity, userGameEntity, v17);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 29 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v12, itemEntity, userGameEntity, v14);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  else if ( v6 > 4 )
  {
    if ( v6 == 5 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnManaPrism_TypeInfo);
      UserOwnManaPrism___ctor((UserOwnManaPrism_o *)v12, itemEntity, userGameEntity, v19);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 13 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnFriendPoint_TypeInfo);
      UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v12, itemEntity, userGameEntity, v15);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  else
  {
    if ( v6 == 1 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnQp_TypeInfo);
      UserOwnQp___ctor((UserOwnQp_o *)v12, itemEntity, userGameEntity, v18);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 2 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B2C42C(UserOwnStone_TypeInfo);
      UserOwnStone___ctor((UserOwnStone_o *)v12, itemEntity, userGameEntity, v13);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  if ( !itemEntity )
    sub_B2C434(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418706F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_418706F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187070 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4187070 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
}