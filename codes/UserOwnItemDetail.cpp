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
  ItemMaster_o *ItemMaster; // x0
  _BOOL8 v4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v6; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = itemId;
  if ( (byte_40F977D & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, method);
    byte_40F977D = 1;
  }
  entity = 0LL;
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_9;
  v4 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)ItemMaster,
         &entity,
         v2,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)v4);
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_24062632(
               entity->fields.bannerId,
               (ItemEntity_o *)entity,
               SelfUserGame,
               v6);
LABEL_9:
    sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  const MethodInfo *v17; // x3
  UserOwnItemInfo_o *UserOwnItemInfo_24062632; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  v2 = itemType;
  if ( (byte_40F977E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v7);
    *(_QWORD *)&itemType = sub_B16FFC(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v8);
    byte_40F977E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v2, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)EntityListByType),
        v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v12, v13, v14, v15),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v16,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B170D4();
    UserOwnItemInfo_24062632 = UserOwnItemDetail__GetUserOwnItemInfo_24062632(
                                 (int32_t)v20.fields.current[3].klass,
                                 (ItemEntity_o *)v20.fields.current,
                                 SelfUserGame,
                                 v17);
    if ( UserOwnItemInfo_24062632 )
    {
      if ( !v16 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)UserOwnItemInfo_24062632,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  UserGameEntity_o *v4; // x20
  __int64 v5; // x1
  ItemMaster_o *ItemMaster; // x0
  _BOOL8 v7; // x0
  UserItemMaster_o *UserItemMaster; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ItemEntity_o *v14; // x20
  UserItemEntity_o *v15; // x21
  UserOwnItemInfo_o *v16; // x19
  const MethodInfo *v17; // x3
  UserItemEntity_o *v19; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v4 = userGameEntity;
  if ( (byte_40F977C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, *(_QWORD *)&itemId);
    userGameEntity = (UserGameEntity_o *)sub_B16FFC(&UserOwnItemInfo_TypeInfo, v5);
    byte_40F977C = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  ItemMaster = UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)ItemMaster,
         &entity,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v7 )
    return 0LL;
  UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v7);
  if ( !v4 || !UserItemMaster )
LABEL_11:
    sub_B170D4();
  if ( !UserItemMaster__TryGetEntity(UserItemMaster, &v19, v4->fields.userId, itemId, v9) )
    return 0LL;
  v14 = (ItemEntity_o *)entity;
  v15 = v19;
  v16 = (UserOwnItemInfo_o *)sub_B170CC(UserOwnItemInfo_TypeInfo, v10, v11, v12, v13);
  UserOwnItemInfo___ctor_24062176(v16, v14, v15, v17);
  return v16;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x0
  ItemMaster_o *ItemMaster; // x0
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x0
  _BOOL8 v18; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  const MethodInfo *v22; // x4
  UserItemEntity_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UserOwnItemInfo_o *v28; // x21
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+0h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F977B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&UserOwnItemInfo_TypeInfo, v13);
    byte_40F977B = 1;
  }
  entity = 0LL;
  memset(&v33, 0, sizeof(v33));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserOwnItemInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v15);
  if ( !ItemMaster || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v33 = v31;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v18 )
      break;
    current = (ItemEntity_o *)v33.fields.current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v18);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_B170D4();
    if ( !UserItemMaster )
      sub_B170D4();
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, v22);
    v23 = entity;
    v28 = (UserOwnItemInfo_o *)sub_B170CC(UserOwnItemInfo_TypeInfo, v24, v25, v26, v27);
    UserOwnItemInfo___ctor_24062176(v28, current, v23, v29);
    if ( !v14 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v14;
}


UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_24062632(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserOwnRarePrism_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_40F977F & 1) == 0 )
  {
    sub_B16FFC(&UserOwnFriendPoint_TypeInfo, itemEntity);
    sub_B16FFC(&UserOwnManaPrism_TypeInfo, v8);
    sub_B16FFC(&UserOwnQp_TypeInfo, v9);
    sub_B16FFC(&UserOwnRarePrism_TypeInfo, v10);
    sub_B16FFC(&UserOwnStone_TypeInfo, v11);
    sub_B16FFC(&UserOwnSvtCoin_TypeInfo, v12);
    byte_40F977F = 1;
  }
  if ( itemType > 13 )
  {
    if ( itemType == 22 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnRarePrism_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnRarePrism___ctor(v13, itemEntity, userGameEntity, v18);
      return (UserOwnItemInfo_o *)v13;
    }
    if ( itemType == 29 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnSvtCoin_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v13, itemEntity, userGameEntity, v15);
      return (UserOwnItemInfo_o *)v13;
    }
  }
  else if ( itemType > 4 )
  {
    if ( itemType == 5 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnManaPrism_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnManaPrism___ctor((UserOwnManaPrism_o *)v13, itemEntity, userGameEntity, v20);
      return (UserOwnItemInfo_o *)v13;
    }
    if ( itemType == 13 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnFriendPoint_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v13, itemEntity, userGameEntity, v16);
      return (UserOwnItemInfo_o *)v13;
    }
  }
  else
  {
    if ( itemType == 1 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnQp_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnQp___ctor((UserOwnQp_o *)v13, itemEntity, userGameEntity, v19);
      return (UserOwnItemInfo_o *)v13;
    }
    if ( itemType == 2 )
    {
      v13 = (UserOwnRarePrism_o *)sub_B170CC(UserOwnStone_TypeInfo, itemEntity, userGameEntity, method, v4);
      UserOwnStone___ctor((UserOwnStone_o *)v13, itemEntity, userGameEntity, v14);
      return (UserOwnItemInfo_o *)v13;
    }
  }
  if ( !itemEntity )
    sub_B170D4();
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

  if ( (byte_40F9779 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F9779 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F977A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F977A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
}