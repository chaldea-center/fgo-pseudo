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
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_42137B9 & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, method);
    byte_42137B9 = 1;
  }
  entity = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_9;
  v4 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         v2,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v4 )
  {
    ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame((const MethodInfo *)v4);
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_22626560(
               entity->fields.bannerId,
               (ItemEntity_o *)entity,
               (UserGameEntity_o *)ItemMaster,
               v5);
LABEL_9:
    sub_B0D97C(ItemMaster);
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
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  UserOwnItemInfo_o *UserOwnItemInfo_22626560; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  v2 = itemType;
  if ( (byte_42137BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    *(_QWORD *)&itemType = sub_B0D8A4(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    byte_42137BA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)EntityListByType),
        v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v12, v13),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v14,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_B0D97C(ItemMaster);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields.current )
      sub_B0D97C(v15);
    UserOwnItemInfo_22626560 = UserOwnItemDetail__GetUserOwnItemInfo_22626560(
                                 (int32_t)v19.fields.current[3].klass,
                                 (ItemEntity_o *)v19.fields.current,
                                 SelfUserGame,
                                 v16);
    if ( UserOwnItemInfo_22626560 )
    {
      if ( !v14 )
        sub_B0D97C(UserOwnItemInfo_22626560);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)UserOwnItemInfo_22626560,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v14;
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
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  __int64 v10; // x2
  ItemEntity_o *v11; // x20
  UserItemEntity_o *v12; // x21
  UserOwnItemInfo_o *v13; // x19
  const MethodInfo *v14; // x3
  UserItemEntity_o *v16; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v4 = userGameEntity;
  if ( (byte_42137B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    userGameEntity = (UserGameEntity_o *)sub_B0D8A4(&UserOwnItemInfo_TypeInfo, v5);
    byte_42137B8 = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v7 )
    return 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
  if ( !v4 || !ItemMaster )
LABEL_11:
    sub_B0D97C(ItemMaster);
  if ( !UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v16, v4->fields.userId, itemId, v8) )
    return 0LL;
  v11 = (ItemEntity_o *)entity;
  v12 = v16;
  v13 = (UserOwnItemInfo_o *)sub_B0D974(UserOwnItemInfo_TypeInfo, v9, v10);
  UserOwnItemInfo___ctor_22626104(v13, v11, v12, v14);
  return v13;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  const MethodInfo *v13; // x0
  ItemMaster_o *ItemMaster; // x0
  _BOOL8 v15; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  const MethodInfo *v19; // x4
  UserItemEntity_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  UserOwnItemInfo_o *v23; // x21
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42137B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&UserOwnItemInfo_TypeInfo, v11);
    byte_42137B7 = 1;
  }
  entity = 0LL;
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserOwnItemInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v13);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_B0D97C(ItemMaster);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ItemMaster,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
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
      sub_B0D97C(UserId);
    if ( !UserItemMaster )
      sub_B0D97C(UserId);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, v19);
    v20 = entity;
    v23 = (UserOwnItemInfo_o *)sub_B0D974(UserOwnItemInfo_TypeInfo, v21, v22);
    UserOwnItemInfo___ctor_22626104(v23, current, v20, v24);
    if ( !v12 )
      sub_B0D97C(v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_22626560(
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
  if ( (byte_42137BB & 1) == 0 )
  {
    sub_B0D8A4(&UserOwnFriendPoint_TypeInfo, itemEntity);
    sub_B0D8A4(&UserOwnManaPrism_TypeInfo, v7);
    sub_B0D8A4(&UserOwnQp_TypeInfo, v8);
    sub_B0D8A4(&UserOwnRarePrism_TypeInfo, v9);
    sub_B0D8A4(&UserOwnStone_TypeInfo, v10);
    *(_QWORD *)&itemType = sub_B0D8A4(&UserOwnSvtCoin_TypeInfo, v11);
    byte_42137BB = 1;
  }
  if ( v6 > 13 )
  {
    if ( v6 == 22 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnRarePrism_TypeInfo, itemEntity, userGameEntity);
      UserOwnRarePrism___ctor(v12, itemEntity, userGameEntity, v17);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 29 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnSvtCoin_TypeInfo, itemEntity, userGameEntity);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v12, itemEntity, userGameEntity, v14);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  else if ( v6 > 4 )
  {
    if ( v6 == 5 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnManaPrism_TypeInfo, itemEntity, userGameEntity);
      UserOwnManaPrism___ctor((UserOwnManaPrism_o *)v12, itemEntity, userGameEntity, v19);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 13 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnFriendPoint_TypeInfo, itemEntity, userGameEntity);
      UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v12, itemEntity, userGameEntity, v15);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  else
  {
    if ( v6 == 1 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnQp_TypeInfo, itemEntity, userGameEntity);
      UserOwnQp___ctor((UserOwnQp_o *)v12, itemEntity, userGameEntity, v18);
      return (UserOwnItemInfo_o *)v12;
    }
    if ( v6 == 2 )
    {
      v12 = (UserOwnRarePrism_o *)sub_B0D974(UserOwnStone_TypeInfo, itemEntity, userGameEntity);
      UserOwnStone___ctor((UserOwnStone_o *)v12, itemEntity, userGameEntity, v13);
      return (UserOwnItemInfo_o *)v12;
    }
  }
  if ( !itemEntity )
    sub_B0D97C(*(_QWORD *)&itemType);
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

  if ( (byte_42137B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42137B5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_42137B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_42137B6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
}