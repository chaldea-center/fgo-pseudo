void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184547 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_4184547 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    63,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4184545 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_4184545 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x23
  int32_t v8; // w20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x23
  int32_t v10; // w21
  int32_t v11; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_4184548 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v4);
    byte_4184548 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v7 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                               (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v7 )
    goto LABEL_20;
  v8 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v7->fields.items;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               SelfUserGame,
               v11,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
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
      if ( ++v11 >= v8 )
        return v10;
    }
LABEL_20:
    sub_B2C434(SelfUserGame, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
OtherUserGameEntity_array *__fastcall TblFriendMaster__GetList(
        TblFriendMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UserGameEntity_o *SelfUserGame; // x24
  void *Instance; // x0
  int64_t v19; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  int64_t userId; // x25
  int32_t v23; // w23
  int32_t i; // w24
  __int64 v25; // x10
  int v26; // w8
  void *v28; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x22
  int32_t v30; // w21
  int32_t v31; // w23
  __int64 v32; // x10
  int32_t v33; // w24
  __int64 v34; // x10
  int64_t v35; // x8
  const MethodInfo_24E42F8 *v36; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v37; // x0

  if ( (byte_418454A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserProfileMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v15);
    sub_B2C35C(&UserFollowEntity_TypeInfo, v16);
    byte_418454A = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_64;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_64;
  Instance = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_64;
  userId = SelfUserGame->fields.userId;
  v23 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v28 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_62;
          v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)v28 + 4);
          if ( v29 )
          {
            v30 = (int)Instance;
            v31 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                           v29,
                           v31,
                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Instance )
                break;
              v32 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v32
                || *(UserFollowEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v32 - 8) != UserFollowEntity_TypeInfo
                || !MasterData_WarQuestSelectionMaster )
              {
                break;
              }
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v21 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
              if ( ++v31 >= v30 )
                goto LABEL_62;
            }
          }
        }
      }
LABEL_64:
      sub_B2C434(Instance, v19);
    }
    if ( (int)Instance < 1 )
      goto LABEL_62;
    v33 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v33,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v34 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v34
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v34 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v19 = *((_QWORD *)Instance + 2);
          v35 = *((_QWORD *)Instance + 3);
          if ( v19 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v36 = (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v37 = MasterData_WarQuestSelectionMaster;
            v19 = v35;
            goto LABEL_58;
          }
          if ( v35 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v36 = (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v37 = MasterData_WarQuestSelectionMaster;
LABEL_58:
            Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v37, v19, v36);
            if ( Instance )
            {
              if ( !v21 )
                goto LABEL_64;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v21,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
      }
      if ( ++v33 >= v23 )
        goto LABEL_62;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; i < v23; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   i,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v25
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == TblFriendEntity_TypeInfo )
        {
          v26 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v26 - 1) <= 1 )
          {
            v19 = *((_QWORD *)Instance + 2);
            if ( v19 == userId )
            {
              if ( v26 == kind )
              {
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_64;
                v19 = *((_QWORD *)Instance + 3);
                goto LABEL_22;
              }
            }
            else if ( v26 != kind && *((_QWORD *)Instance + 3) == userId )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_64;
LABEL_22:
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           v19,
                           (const MethodInfo_24E42F8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v21 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
LABEL_62:
  if ( !v21 )
    goto LABEL_64;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x24
  int32_t v13; // w21
  int32_t v14; // w22
  int32_t v15; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x0
  __int64 v17; // x10
  int klass; // w8
  int32_t v20; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10

  if ( (byte_4184549 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v8);
    byte_4184549 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v11 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v11 )
      goto LABEL_39;
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v11->fields.items;
    v13 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v14 = 0;
        v20 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   SelfUserGame,
                   v20,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v22 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
            {
              if ( Item[1].klass == items )
              {
                ++v14;
              }
              else if ( Item[1].monitor == items )
              {
                ++v14;
              }
            }
          }
          if ( ++v20 >= v13 )
            return v14;
        }
LABEL_39:
        sub_B2C434(SelfUserGame, v10);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v16 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                SelfUserGame,
                v15,
                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v16 )
        {
          v17 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17
            && (TblFriendEntity_c *)v16->klass->_2.typeHierarchy[v17 - 1] == TblFriendEntity_TypeInfo )
          {
            klass = (int)v16[2].klass;
            if ( (unsigned int)(klass - 1) <= 1 )
            {
              if ( v16[1].klass == items )
              {
                if ( klass == kind )
                  ++v14;
              }
              else
              {
                v14 += klass != kind && v16[1].monitor == items;
              }
            }
          }
        }
        if ( ++v15 >= v13 )
          return v14;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                 (DataManager_o *)SelfUserGame,
                                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  UserFollowMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v16; // w0
  void *v17; // x23
  int32_t v18; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418454C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v11);
    byte_418454C = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
        LOBYTE(v16) = UserFollowEntity__IsLock(entity, 0LL);
        return v16 & 1;
      }
LABEL_32:
      sub_B2C434(list, *(_QWORD *)&kind);
    }
LABEL_28:
    LOBYTE(v16) = 0;
    return v16 & 1;
  }
  if ( Count < 1 )
    goto LABEL_28;
  v17 = (void *)UserId;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_32;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v18,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v17 && Item[1].monitor == (void *)otherUserId )
        {
          v16 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v16 & 1;
        }
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v17 )
        {
          break;
        }
      }
    }
    if ( ++v18 >= Count )
      goto LABEL_28;
  }
  v16 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v16 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4184546 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_4184546 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v11; // x22
  int32_t v12; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_418454D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v7);
    byte_418454D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B2C434(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v11 = (void *)UserId;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v12,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v11 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v11 )
        {
          return 1;
        }
      }
    }
    if ( ++v12 >= Count )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v13; // x23
  int32_t v14; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_418454B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&TblFriendEntity_TypeInfo, v9);
    byte_418454B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_25:
    sub_B2C434(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v13 = (void *)UserId;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v13 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v13 )
        {
          break;
        }
      }
    }
    if ( ++v14 >= Count )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}