void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6C59 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_40F6C59 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    63,
    (const MethodInfo_266F73C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F6C57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_40F6C57 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v6; // x23
  int32_t Count; // w0
  int32_t v8; // w20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *userId; // x23
  int32_t v10; // w21
  int32_t v11; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x10

  if ( (byte_40F6C5A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v4);
    byte_40F6C5A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v6 = SelfUserGame;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v6 )
    goto LABEL_20;
  v8 = Count;
  if ( Count >= 1 )
  {
    userId = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v6->fields.userId;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
        {
          if ( Item[1].klass == userId )
          {
            ++v10;
          }
          else if ( Item[1].monitor == userId )
          {
            ++v10;
          }
        }
      }
      if ( ++v11 >= v8 )
        return v10;
    }
LABEL_20:
    sub_B170D4();
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
  WebViewManager_o *v18; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  void *userId; // x25
  int32_t v28; // w23
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v30; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x0
  __int64 v32; // x10
  int v33; // w8
  int64_t v34; // x1
  UserServantEntity_o *v35; // x0
  WebViewManager_o *Instance; // x0
  UserProfileMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v39; // x0
  UserFollowMaster_o *v40; // x0
  UserFollowMaster_o *v41; // x22
  int32_t FollowSum; // w0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v43; // x22
  int32_t v44; // w21
  int32_t v45; // w23
  int64_t *Item; // x0
  __int64 v47; // x10
  UserServantEntity_o *Entity; // x0
  int32_t v49; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v50; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v51; // x0
  __int64 v52; // x10
  int64_t klass; // x1
  void *monitor; // x8
  const MethodInfo_266F5B0 *v55; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v56; // x0
  UserServantEntity_o *v57; // x0

  if ( (byte_40F6C5C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserProfileMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v15);
    sub_B16FFC(&UserFollowEntity_TypeInfo, v16);
    byte_40F6C5C = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( MasterData_WarQuestSelectionMaster )
        return UserProfileMaster__GetOtherUserList(MasterData_WarQuestSelectionMaster, 0LL);
    }
    goto LABEL_64;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_64;
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v18,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_OtherUserGameEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_64;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_64;
  userId = (void *)SelfUserGame->fields.userId;
  v28 = Count;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v39 )
      {
        v40 = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v39,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( v40 )
        {
          v41 = v40;
          FollowSum = UserFollowMaster__GetFollowSum(v40, 0LL);
          if ( FollowSum < 1 )
            goto LABEL_62;
          v43 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v41->fields.list;
          if ( v43 )
          {
            v44 = FollowSum;
            v45 = 0;
            while ( 1 )
            {
              Item = (int64_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  v43,
                                  v45,
                                  (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Item )
                break;
              v47 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*Item + 300) < (unsigned int)v47
                || *(UserFollowEntity_c **)(*(_QWORD *)(*Item + 200) + 8 * v47 - 8) != UserFollowEntity_TypeInfo
                || !v19 )
              {
                break;
              }
              Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                         v19,
                         Item[3],
                         (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Entity )
              {
                if ( !v24 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
              if ( ++v45 >= v44 )
                goto LABEL_62;
            }
          }
        }
      }
LABEL_64:
      sub_B170D4();
    }
    if ( Count < 1 )
      goto LABEL_62;
    v49 = 0;
    while ( 1 )
    {
      v50 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v50 )
        goto LABEL_64;
      v51 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
              v50,
              v49,
              (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( v51 )
      {
        v52 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v51->klass->_2.bitflags2 + 1) >= (unsigned int)v52
          && (TblFriendEntity_c *)v51->klass->_2.typeHierarchy[v52 - 1] == TblFriendEntity_TypeInfo
          && LODWORD(v51[2].klass) == kind )
        {
          klass = (int64_t)v51[1].klass;
          monitor = v51[1].monitor;
          if ( (void *)klass == userId )
          {
            if ( !v19 )
              goto LABEL_64;
            v55 = (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v56 = v19;
            klass = (int64_t)monitor;
            goto LABEL_58;
          }
          if ( monitor == userId )
          {
            if ( !v19 )
              goto LABEL_64;
            v55 = (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v56 = v19;
LABEL_58:
            v57 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v56, klass, v55);
            if ( v57 )
            {
              if ( !v24 )
                goto LABEL_64;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
      }
      if ( ++v49 >= v28 )
        goto LABEL_62;
    }
  }
  if ( Count >= 1 )
  {
    for ( i = 0; i < v28; ++i )
    {
      v30 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v30 )
        goto LABEL_64;
      v31 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
              v30,
              i,
              (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( v31 )
      {
        v32 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (TblFriendEntity_c *)v31->klass->_2.typeHierarchy[v32 - 1] == TblFriendEntity_TypeInfo )
        {
          v33 = (int)v31[2].klass;
          if ( (unsigned int)(v33 - 1) <= 1 )
          {
            v34 = (int64_t)v31[1].klass;
            if ( (void *)v34 == userId )
            {
              if ( v33 == kind )
              {
                if ( !v19 )
                  goto LABEL_64;
                v34 = (int64_t)v31[1].monitor;
                goto LABEL_22;
              }
            }
            else if ( v33 != kind && v31[1].monitor == userId )
            {
              if ( !v19 )
                goto LABEL_64;
LABEL_22:
              v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      v19,
                      v34,
                      (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( v35 )
              {
                if ( !v24 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
LABEL_62:
  if ( !v24 )
    goto LABEL_64;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v10; // x22
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *userId; // x24
  int32_t v13; // w21
  int32_t v14; // w22
  int32_t v15; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v17; // x0
  __int64 v18; // x10
  int klass; // w8
  WebViewManager_o *Instance; // x0
  UserProfileMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v23; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v26; // x10

  if ( (byte_40F6C5B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v8);
    byte_40F6C5B = 1;
  }
  if ( kind )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v10 = SelfUserGame;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v10 )
      goto LABEL_39;
    userId = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v10->fields.userId;
    v13 = Count;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( Count >= 1 )
      {
        v14 = 0;
        v23 = 0;
        while ( 1 )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            break;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   list,
                   v23,
                   (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v26 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
            {
              if ( Item[1].klass == userId )
              {
                ++v14;
              }
              else if ( Item[1].monitor == userId )
              {
                ++v14;
              }
            }
          }
          if ( ++v23 >= v13 )
            return v14;
        }
LABEL_39:
        sub_B170D4();
      }
    }
    else if ( Count >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v16 )
          break;
        v17 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                v16,
                v15,
                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v17 )
        {
          v18 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v18
            && (TblFriendEntity_c *)v17->klass->_2.typeHierarchy[v18 - 1] == TblFriendEntity_TypeInfo )
          {
            klass = (int)v17[2].klass;
            if ( (unsigned int)(klass - 1) <= 1 )
            {
              if ( v17[1].klass == userId )
              {
                if ( klass == kind )
                  ++v14;
              }
              else
              {
                v14 += klass != kind && v17[1].monitor == userId;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserProfileMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserProfileMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    return UserProfileMaster__GetOtherUserSum(MasterData_WarQuestSelectionMaster, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserFollowMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v17; // x0
  int v18; // w0
  void *v19; // x23
  int32_t v20; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v23; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F6C5E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v11);
    byte_40F6C5E = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v17 = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_32;
    if ( UserFollowMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v17, otherUserId, 0LL) )
    {
      if ( entity )
      {
        LOBYTE(v18) = UserFollowEntity__IsLock(entity, 0LL);
        return v18 & 1;
      }
LABEL_32:
      sub_B170D4();
    }
LABEL_28:
    LOBYTE(v18) = 0;
    return v18 & 1;
  }
  if ( Count < 1 )
    goto LABEL_28;
  v19 = (void *)UserId;
  v20 = 0;
  while ( 1 )
  {
    v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v21 )
      goto LABEL_32;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v21,
             v20,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v19 && Item[1].monitor == (void *)otherUserId )
        {
          v18 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v18 & 1;
        }
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v19 )
        {
          break;
        }
      }
    }
    if ( ++v20 >= Count )
      goto LABEL_28;
  }
  v18 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v18 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F6C58 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_40F6C58 = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_40F6C5F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v7);
    byte_40F6C5F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v13,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v15 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == TblFriendEntity_TypeInfo
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_40F6C5D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&TblFriendEntity_TypeInfo, v9);
    byte_40F6C5D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_25:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v15,
             v14,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == TblFriendEntity_TypeInfo
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