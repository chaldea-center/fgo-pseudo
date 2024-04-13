System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetContinueItemInfoList(
        const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  return UserOwnItemDetail__GetUserOwnItemInfoListByType(27, v1);
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnInfoByItemId(int32_t itemId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *ItemMaster; // x0
  WarEntity_o *v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = itemId;
  if ( (byte_42E71D5 & 1) == 0 )
  {
    *(_QWORD *)&itemId = sub_B5D5C4(
                           &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__,
                           (_DWORD)method,
                           v2,
                           v3);
    byte_42E71D5 = 1;
  }
  entity = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemId);
  if ( !ItemMaster )
    goto LABEL_9;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         ItemMaster,
         &entity,
         v4,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( v7 )
  {
    ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserGameMaster__getSelfUserGame((const MethodInfo *)v7);
    v6 = entity;
    if ( entity )
      return UserOwnItemDetail__GetUserOwnItemInfo_22544512(
               entity->fields.bannerId,
               (ItemEntity_o *)entity,
               (UserGameEntity_o *)ItemMaster,
               v8);
LABEL_9:
    sub_B5D69C(ItemMaster, v6);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnInfoByType(
        int32_t itemType,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v4; // w19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ItemMaster_o *ItemMaster; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_ItemEntity__o *EntityListByType; // x21
  UserGameEntity_o *SelfUserGame; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x3
  UserOwnItemInfo_o *UserOwnItemInfo_22544512; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-38h] BYREF

  v4 = itemType;
  if ( (byte_42E71D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v17, v18, v19);
    *(_QWORD *)&itemType = sub_B5D5C4(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v20, v21, v22);
    byte_42E71D6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ItemMaster = UserOwnItemDetail__get_ItemMaster(*(const MethodInfo **)&itemType);
  if ( !ItemMaster
    || (EntityListByType = ItemMaster__GetEntityListByType(ItemMaster, v4, 0LL),
        SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)EntityListByType),
        v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v27,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__),
        !EntityListByType) )
  {
    sub_B5D69C(ItemMaster, v24);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListByType,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v28 )
      break;
    if ( !v32.fields.current )
      sub_B5D69C(v28, 0LL);
    UserOwnItemInfo_22544512 = UserOwnItemDetail__GetUserOwnItemInfo_22544512(
                                 (int32_t)v32.fields.current[3].klass,
                                 (ItemEntity_o *)v32.fields.current,
                                 SelfUserGame,
                                 v29);
    if ( UserOwnItemInfo_22544512 )
    {
      if ( !v27 )
        sub_B5D69C(UserOwnItemInfo_22544512, UserOwnItemInfo_22544512);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)UserOwnItemInfo_22544512,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v27;
}


UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo(
        UserGameEntity_o *userGameEntity,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserGameEntity_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *ItemMaster; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4
  ItemEntity_o *v13; // x20
  UserItemEntity_o *v14; // x21
  UserOwnItemInfo_o *v15; // x19
  const MethodInfo *v16; // x3
  UserItemEntity_o *v18; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  v5 = userGameEntity;
  if ( (byte_42E71D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, itemId, (_DWORD)method, v3);
    userGameEntity = (UserGameEntity_o *)sub_B5D5C4(&UserOwnItemInfo_TypeInfo, v6, v7, v8);
    byte_42E71D4 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_ItemMaster((const MethodInfo *)userGameEntity);
  if ( !ItemMaster )
    goto LABEL_11;
  v11 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          ItemMaster,
          &entity,
          itemId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( !v11 )
    return 0LL;
  ItemMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v11);
  if ( !v5 || !ItemMaster )
LABEL_11:
    sub_B5D69C(ItemMaster, v10);
  if ( !UserItemMaster__TryGetEntity((UserItemMaster_o *)ItemMaster, &v18, v5->fields.userId, itemId, v12) )
    return 0LL;
  v13 = (ItemEntity_o *)entity;
  v14 = v18;
  v15 = (UserOwnItemInfo_o *)sub_B5D694(UserOwnItemInfo_TypeInfo);
  UserOwnItemInfo___ctor_22544056(v15, v13, v14, v16);
  return v15;
}


System_Collections_Generic_List_UserOwnItemInfo__o *__fastcall UserOwnItemDetail__GetUserOwnItemInfoListByType(
        int32_t itemType,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  const MethodInfo *v30; // x0
  ItemMaster_o *ItemMaster; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  ItemEntity_o *current; // x20
  UserItemMaster_o *UserItemMaster; // x21
  int64_t UserId; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x4
  UserItemEntity_o *v39; // x22
  UserOwnItemInfo_o *v40; // x21
  const MethodInfo *v41; // x3
  __int64 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+0h] [xbp-80h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E71D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_UserOwnItemInfo__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserOwnItemInfo_TypeInfo, v26, v27, v28);
    byte_42E71D3 = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserOwnItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserOwnItemInfo___ctor__);
  ItemMaster = UserOwnItemDetail__get_ItemMaster(v30);
  if ( !ItemMaster || (ItemMaster = (ItemMaster_o *)ItemMaster__GetEntityListByType(ItemMaster, itemType, 0LL)) == 0LL )
    sub_B5D69C(ItemMaster, v32);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ItemMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v47 = v45;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    if ( !v33 )
      break;
    current = (ItemEntity_o *)v47.fields.current;
    UserItemMaster = UserOwnItemDetail__get_UserItemMaster((const MethodInfo *)v33);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !current )
      sub_B5D69C(UserId, v37);
    if ( !UserItemMaster )
      sub_B5D69C(UserId, v37);
    UserItemMaster__TryGetEntity(UserItemMaster, &entity, UserId, current->fields.id, v38);
    v39 = entity;
    v40 = (UserOwnItemInfo_o *)sub_B5D694(UserOwnItemInfo_TypeInfo);
    UserOwnItemInfo___ctor_22544056(v40, current, v39, v41);
    if ( !v29 )
      sub_B5D69C(v42, v43);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  return (System_Collections_Generic_List_UserOwnItemInfo__o *)v29;
}


// local variable allocation has failed, the output may be wrong!
UserOwnItemInfo_o *__fastcall UserOwnItemDetail__GetUserOwnItemInfo_22544512(
        int32_t itemType,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v6; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UserOwnRarePrism_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3

  v6 = itemType;
  if ( (byte_42E71D7 & 1) == 0 )
  {
    sub_B5D5C4(&UserOwnFriendPoint_TypeInfo, (_DWORD)itemEntity, (_DWORD)userGameEntity, method);
    sub_B5D5C4(&UserOwnManaPrism_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UserOwnQp_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserOwnRarePrism_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserOwnStone_TypeInfo, v16, v17, v18);
    *(_QWORD *)&itemType = sub_B5D5C4(&UserOwnSvtCoin_TypeInfo, v19, v20, v21);
    byte_42E71D7 = 1;
  }
  if ( v6 > 13 )
  {
    if ( v6 == 22 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnRarePrism_TypeInfo);
      UserOwnRarePrism___ctor(v22, itemEntity, userGameEntity, v27);
      return (UserOwnItemInfo_o *)v22;
    }
    if ( v6 == 29 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnSvtCoin_TypeInfo);
      UserOwnSvtCoin___ctor((UserOwnSvtCoin_o *)v22, itemEntity, userGameEntity, v24);
      return (UserOwnItemInfo_o *)v22;
    }
  }
  else if ( v6 > 4 )
  {
    if ( v6 == 5 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnManaPrism_TypeInfo);
      UserOwnManaPrism___ctor((UserOwnManaPrism_o *)v22, itemEntity, userGameEntity, v29);
      return (UserOwnItemInfo_o *)v22;
    }
    if ( v6 == 13 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnFriendPoint_TypeInfo);
      UserOwnFriendPoint___ctor((UserOwnFriendPoint_o *)v22, itemEntity, userGameEntity, v25);
      return (UserOwnItemInfo_o *)v22;
    }
  }
  else
  {
    if ( v6 == 1 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnQp_TypeInfo);
      UserOwnQp___ctor((UserOwnQp_o *)v22, itemEntity, userGameEntity, v28);
      return (UserOwnItemInfo_o *)v22;
    }
    if ( v6 == 2 )
    {
      v22 = (UserOwnRarePrism_o *)sub_B5D694(UserOwnStone_TypeInfo);
      UserOwnStone___ctor((UserOwnStone_o *)v22, itemEntity, userGameEntity, v23);
      return (UserOwnItemInfo_o *)v22;
    }
  }
  if ( !itemEntity )
    sub_B5D69C(*(_QWORD *)&itemType, itemEntity);
  return UserOwnItemDetail__GetUserOwnItemInfo(
           userGameEntity,
           itemEntity->fields.id,
           (const MethodInfo *)userGameEntity);
}


ItemMaster_o *__fastcall UserOwnItemDetail__get_ItemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E71D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E71D1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall UserOwnItemDetail__get_UserItemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E71D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E71D2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
}