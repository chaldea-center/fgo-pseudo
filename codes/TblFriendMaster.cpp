void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AD007 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
    byte_42AD007 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    64,
    (const MethodInfo_23E268C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AD005 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
    byte_42AD005 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v5; // x23
  int32_t v6; // w20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_42AD008 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&TblFriendEntity_TypeInfo);
    byte_42AD008 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v5 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                               (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v5 )
    goto LABEL_20;
  v6 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v5->fields.items;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               SelfUserGame,
               v9,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
        {
          if ( Item[1].klass == items )
          {
            ++v8;
          }
          else if ( Item[1].monitor == items )
          {
            ++v8;
          }
        }
      }
      if ( ++v9 >= v6 )
        return v8;
    }
LABEL_20:
    sub_B52A5C(SelfUserGame, v4);
  }
  return 0;
}


OtherUserGameEntity_array *__fastcall TblFriendMaster__GetList(
        TblFriendMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x24
  void *Instance; // x0
  int64_t v7; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  int64_t userId; // x25
  int32_t v11; // w23
  int32_t i; // w24
  __int64 v13; // x10
  int v14; // w8
  void *v16; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x22
  int32_t v18; // w21
  int32_t v19; // w23
  __int64 v20; // x10
  int32_t v21; // w24
  __int64 v22; // x10
  int64_t v23; // x8
  const MethodInfo_23E2500 *v24; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v25; // x0

  if ( (byte_42AD00A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_B52984(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TblFriendEntity_TypeInfo);
    sub_B52984(&UserFollowEntity_TypeInfo);
    byte_42AD00A = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_64;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_64;
  Instance = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_64;
  userId = SelfUserGame->fields.userId;
  v11 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v16 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_62;
          v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)v16 + 4);
          if ( v17 )
          {
            v18 = (int)Instance;
            v19 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                           v17,
                           v19,
                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Instance )
                break;
              v20 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v20
                || *(UserFollowEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v20 - 8) != UserFollowEntity_TypeInfo
                || !MasterData_WarQuestSelectionMaster )
              {
                break;
              }
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_23E2500 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v9 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
              if ( ++v19 >= v18 )
                goto LABEL_62;
            }
          }
        }
      }
LABEL_64:
      sub_B52A5C(Instance, v7);
    }
    if ( (int)Instance < 1 )
      goto LABEL_62;
    v21 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v21,
                   (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v22
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v22 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v7 = *((_QWORD *)Instance + 2);
          v23 = *((_QWORD *)Instance + 3);
          if ( v7 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v24 = (const MethodInfo_23E2500 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v25 = MasterData_WarQuestSelectionMaster;
            v7 = v23;
            goto LABEL_58;
          }
          if ( v23 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v24 = (const MethodInfo_23E2500 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v25 = MasterData_WarQuestSelectionMaster;
LABEL_58:
            Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v25, v7, v24);
            if ( Instance )
            {
              if ( !v9 )
                goto LABEL_64;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v9,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
      }
      if ( ++v21 >= v11 )
        goto LABEL_62;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; i < v11; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   i,
                   (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v13 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v13
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) == TblFriendEntity_TypeInfo )
        {
          v14 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v14 - 1) <= 1 )
          {
            v7 = *((_QWORD *)Instance + 2);
            if ( v7 == userId )
            {
              if ( v14 == kind )
              {
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_64;
                v7 = *((_QWORD *)Instance + 3);
                goto LABEL_22;
              }
            }
            else if ( v14 != kind && *((_QWORD *)Instance + 3) == userId )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_64;
LABEL_22:
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           v7,
                           (const MethodInfo_23E2500 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v9 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
LABEL_62:
  if ( !v9 )
    goto LABEL_64;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x24
  int32_t v9; // w21
  int32_t v10; // w22
  int32_t v11; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x0
  __int64 v13; // x10
  int klass; // w8
  int32_t v16; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_42AD009 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TblFriendEntity_TypeInfo);
    byte_42AD009 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v7 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v7 )
      goto LABEL_39;
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v7->fields.items;
    v9 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v10 = 0;
        v16 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   SelfUserGame,
                   v16,
                   (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v18 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
            {
              if ( Item[1].klass == items )
              {
                ++v10;
              }
              else if ( Item[1].monitor == items )
              {
                ++v10;
              }
            }
          }
          if ( ++v16 >= v9 )
            return v10;
        }
LABEL_39:
        sub_B52A5C(SelfUserGame, v6);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                SelfUserGame,
                v11,
                (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v12 )
        {
          v13 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v12->klass->_2.bitflags2 + 1) >= (unsigned int)v13
            && (TblFriendEntity_c *)v12->klass->_2.typeHierarchy[v13 - 1] == TblFriendEntity_TypeInfo )
          {
            klass = (int)v12[2].klass;
            if ( (unsigned int)(klass - 1) <= 1 )
            {
              if ( v12[1].klass == items )
              {
                if ( klass == kind )
                  ++v10;
              }
              else
              {
                v10 += klass != kind && v12[1].monitor == items;
              }
            }
          }
        }
        if ( ++v11 >= v9 )
          return v10;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                 (DataManager_o *)SelfUserGame,
                                                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserProfileMaster___);
    if ( !SelfUserGame )
      goto LABEL_39;
    return UserProfileMaster__GetOtherUserSum((UserProfileMaster_o *)SelfUserGame, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TblFriendMaster__IsLockUser(
        TblFriendMaster_o *this,
        int32_t kind,
        int64_t otherUserId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  UserFollowMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v11; // w0
  void *v12; // x23
  int32_t v13; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AD00C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TblFriendEntity_TypeInfo);
    byte_42AD00C = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( UserFollowMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)list, otherUserId, 0LL) )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)entity;
      if ( entity )
      {
        LOBYTE(v11) = UserFollowEntity__IsLock(entity, 0LL);
        return v11 & 1;
      }
LABEL_32:
      sub_B52A5C(list, *(_QWORD *)&kind);
    }
LABEL_28:
    LOBYTE(v11) = 0;
    return v11 & 1;
  }
  if ( Count < 1 )
    goto LABEL_28;
  v12 = (void *)UserId;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_32;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v13,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v15 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v12 && Item[1].monitor == (void *)otherUserId )
        {
          v11 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v11 & 1;
        }
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v12 )
        {
          break;
        }
      }
    }
    if ( ++v13 >= Count )
      goto LABEL_28;
  }
  v11 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v11 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AD006 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
    byte_42AD006 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v8; // x22
  int32_t v9; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_42AD00D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TblFriendEntity_TypeInfo);
    byte_42AD00D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B52A5C(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v8 = (void *)UserId;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v9,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v8 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v8 )
        {
          return 1;
        }
      }
    }
    if ( ++v9 >= Count )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TblFriendMaster__isMessageDisp(
        TblFriendMaster_o *this,
        int32_t kind,
        int64_t otherUserId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v10; // x23
  int32_t v11; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_42AD00B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TblFriendEntity_TypeInfo);
    byte_42AD00B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_25:
    sub_B52A5C(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v10 = (void *)UserId;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v11,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v10 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v10 )
        {
          break;
        }
      }
    }
    if ( ++v11 >= Count )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}