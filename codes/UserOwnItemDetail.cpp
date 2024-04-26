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
  if ( (byte_435079C & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_435079C = 1;
  }
  entity = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_9;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         v2,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v5 )
  {
    ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame((const MethodInfo *)v5);
    v4 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_22858972(
               entity->fields.bannerId,
               (ItemEntity_o *)entity,
               (UserGameEntity_o *)ItemMaster,
               v6);
LABEL_9:
    sub_B7076C(ItemMaster, v4);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  UserOwnItemInfo_o *UserOwnItemInfo_22858972; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  v2 = itemType;
  if ( (byte_435079D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    *(_QWORD *)&itemType = sub_B70694(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    byte_435079D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)EntityListByType),
        v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v7,
          (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_B7076C(ItemMaster, v4);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v8 )
      break;
    if ( !v12.fields.current )
      sub_B7076C(v8, 0LL);
    UserOwnItemInfo_22858972 = UserOwnItemDetail__GetUserOwnItemInfo_22858972(
                                 (int32_t)v12.fields.current[3].klass,
                                 (ItemEntity_o *)v12.fields.current,
                                 SelfUserGame,
                                 v9);
    if ( UserOwnItemInfo_22858972 )
    {
      if ( !v7 )
        sub_B7076C(UserOwnItemInfo_22858972, UserOwnItemInfo_22858972);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)UserOwnItemInfo_22858972,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v7;
}


UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *ItemMaster; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x4
  ItemEntity_o *v9; // x20
  UserItemEntity_o *v10; // x21
  UserOwnItemInfo_o *v11; // x19
  const MethodInfo *v12; // x3
  UserItemEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v4 = userGameEntity;
  if ( (byte_435079B & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    userGameEntity = (UserGameEntity_o *)sub_B70694(&UserOwnItemInfo_TypeInfo);
    byte_435079B = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v7 )
    return 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_B7076C(ItemMaster, v6);
  if ( !UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v14, v4->fields.userId, itemId, v8) )
    return 0LL;
  v9 = (ItemEntity_o *)entity;
  v10 = v14;
  v11 = (UserOwnItemInfo_o *)sub_B70764(UserOwnItemInfo_TypeInfo);
  UserOwnItemInfo___ctor_22858516(v11, v9, v10, v12);
  return v11;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  UserItemEntity_o *v13; // x22
  UserOwnItemInfo_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+0h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_435079A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserOwnItemInfo_TypeInfo);
    byte_435079A = 1;
  }
  entity = 0LL;
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v4);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_B7076C(ItemMaster, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ItemMaster,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v21 = v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v7 )
      break;
    current = (ItemEntity_o *)v21.fields.current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_B7076C(UserId, v11);
    if ( !UserItemMaster )
      sub_B7076C(UserId, v11);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, v12);
    v13 = entity;
    v14 = (UserOwnItemInfo_o *)sub_B70764(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_22858516(v14, current, v13, v15);
    if ( !v3 )
      sub_B7076C(v16, v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_22858972(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  UserOwnRarePrism_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  v6 = itemType;
  if ( (byte_435079E & 1) == 0 )
  {
    sub_B70694(&UserOwnFriendPoint_TypeInfo);
    sub_B70694(&UserOwnManaPrism_TypeInfo);
    sub_B70694(&UserOwnQp_TypeInfo);
    sub_B70694(&UserOwnRarePrism_TypeInfo);
    sub_B70694(&UserOwnStone_TypeInfo);
    *(_QWORD *)&itemType = sub_B70694(&UserOwnSvtCoin_TypeInfo);
    byte_435079E = 1;
  }
  if ( v6 > 13 )
  {
    if ( v6 == 22 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor(v7, itemEntity, userGameEntity, v12);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 29 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v7, itemEntity, userGameEntity, v9);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  else if ( v6 > 4 )
  {
    if ( v6 == 5 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnManaPrism_TypeInfo);
      UserOwnManaPrism___ctor((UserOwnManaPrism_o *)v7, itemEntity, userGameEntity, v14);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 13 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnFriendPoint_TypeInfo);
      UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v7, itemEntity, userGameEntity, v10);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  else
  {
    if ( v6 == 1 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnQp_TypeInfo);
      UserOwnQp___ctor((UserOwnQp_o *)v7, itemEntity, userGameEntity, v13);
      return (UserOwnItemInfo_o *)v7;
    }
    if ( v6 == 2 )
    {
      v7 = (UserOwnRarePrism_o *)sub_B70764(UserOwnStone_TypeInfo);
      UserOwnStone___ctor((UserOwnStone_o *)v7, itemEntity, userGameEntity, v8);
      return (UserOwnItemInfo_o *)v7;
    }
  }
  if ( !itemEntity )
    sub_B7076C(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4350798 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350798 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4350799 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350799 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
}