void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5B40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E5B40 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    64,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E5B3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId, friendId, method);
    byte_42E5B3E = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x23
  int32_t v14; // w20
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x23
  int32_t v16; // w21
  int32_t v17; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10

  if ( (byte_42E5B41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v8, v9, v10);
    byte_42E5B41 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v13 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                               (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v13 )
    goto LABEL_20;
  v14 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v13->fields.items;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               SelfUserGame,
               v17,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
        {
          if ( Item[1].klass == items )
          {
            ++v16;
          }
          else if ( Item[1].monitor == items )
          {
            ++v16;
          }
        }
      }
      if ( ++v17 >= v14 )
        return v16;
    }
LABEL_20:
    sub_B5D69C(SelfUserGame, v12);
  }
  return 0;
}


OtherUserGameEntity_array *__fastcall TblFriendMaster__GetList(
        TblFriendMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UserGameEntity_o *SelfUserGame; // x24
  void *Instance; // x0
  int64_t v44; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  int64_t userId; // x25
  int32_t v48; // w23
  int32_t i; // w24
  __int64 v50; // x10
  int v51; // w8
  void *v53; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v54; // x22
  int32_t v55; // w21
  int32_t v56; // w23
  __int64 v57; // x10
  int32_t v58; // w24
  __int64 v59; // x10
  int64_t v60; // x8
  const MethodInfo_23FB038 *v61; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v62; // x0

  if ( (byte_42E5B43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserProfileMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UserFollowEntity_TypeInfo, v39, v40, v41);
    byte_42E5B43 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_64;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_64;
  Instance = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_64;
  userId = SelfUserGame->fields.userId;
  v48 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v53 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_62;
          v54 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*((_QWORD *)v53 + 4);
          if ( v54 )
          {
            v55 = (int)Instance;
            v56 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                           v54,
                           v56,
                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Instance )
                break;
              v57 = *(&UserFollowEntity_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v57
                || *(UserFollowEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v57 - 8) != UserFollowEntity_TypeInfo
                || !MasterData_WarQuestSelectionMaster )
              {
                break;
              }
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
              if ( ++v56 >= v55 )
                goto LABEL_62;
            }
          }
        }
      }
LABEL_64:
      sub_B5D69C(Instance, v44);
    }
    if ( (int)Instance < 1 )
      goto LABEL_62;
    v58 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v58,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v59 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v59
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v59 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v44 = *((_QWORD *)Instance + 2);
          v60 = *((_QWORD *)Instance + 3);
          if ( v44 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v61 = (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v62 = MasterData_WarQuestSelectionMaster;
            v44 = v60;
            goto LABEL_58;
          }
          if ( v60 == userId )
          {
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_64;
            v61 = (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v62 = MasterData_WarQuestSelectionMaster;
LABEL_58:
            Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v62, v44, v61);
            if ( Instance )
            {
              if ( !v46 )
                goto LABEL_64;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v46,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
            }
          }
        }
      }
      if ( ++v58 >= v48 )
        goto LABEL_62;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; i < v48; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_64;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   i,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v50 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v50
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v50 - 8) == TblFriendEntity_TypeInfo )
        {
          v51 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v51 - 1) <= 1 )
          {
            v44 = *((_QWORD *)Instance + 2);
            if ( v44 == userId )
            {
              if ( v51 == kind )
              {
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_64;
                v44 = *((_QWORD *)Instance + 3);
                goto LABEL_22;
              }
            }
            else if ( v51 != kind && *((_QWORD *)Instance + 3) == userId )
            {
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_64;
LABEL_22:
              Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           v44,
                           (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v46 )
                  goto LABEL_64;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
              }
            }
          }
        }
      }
    }
  }
LABEL_62:
  if ( !v46 )
    goto LABEL_64;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *SelfUserGame; // x0
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x22
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *items; // x24
  int32_t v22; // w21
  int32_t v23; // w22
  int32_t v24; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x0
  __int64 v26; // x10
  int klass; // w8
  int32_t v29; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v31; // x10

  if ( (byte_42E5B42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserProfileMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v15, v16, v17);
    byte_42E5B42 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v20 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                                                 (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v20 )
      goto LABEL_39;
    items = (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)v20->fields.items;
    v22 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v23 = 0;
        v29 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   SelfUserGame,
                   v29,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            v31 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
            {
              if ( Item[1].klass == items )
              {
                ++v23;
              }
              else if ( Item[1].monitor == items )
              {
                ++v23;
              }
            }
          }
          if ( ++v29 >= v22 )
            return v23;
        }
LABEL_39:
        sub_B5D69C(SelfUserGame, v19);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v25 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                SelfUserGame,
                v24,
                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v25 )
        {
          v26 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26
            && (TblFriendEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == TblFriendEntity_TypeInfo )
          {
            klass = (int)v25[2].klass;
            if ( (unsigned int)(klass - 1) <= 1 )
            {
              if ( v25[1].klass == items )
              {
                if ( klass == kind )
                  ++v23;
              }
              else
              {
                v23 += klass != kind && v25[1].monitor == items;
              }
            }
          }
        }
        if ( ++v24 >= v22 )
          return v23;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                 (DataManager_o *)SelfUserGame,
                                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  UserFollowMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v26; // w0
  void *v27; // x23
  int32_t v28; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v30; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E5B45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, kind, otherUserId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v19, v20, v21);
    byte_42E5B45 = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_32;
    MasterData_WarQuestSelectionMaster = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)list,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
        LOBYTE(v26) = UserFollowEntity__IsLock(entity, 0LL);
        return v26 & 1;
      }
LABEL_32:
      sub_B5D69C(list, *(_QWORD *)&kind);
    }
LABEL_28:
    LOBYTE(v26) = 0;
    return v26 & 1;
  }
  if ( Count < 1 )
    goto LABEL_28;
  v27 = (void *)UserId;
  v28 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_32;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v28,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v30 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v27 && Item[1].monitor == (void *)otherUserId )
        {
          v26 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v26 & 1;
        }
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v27 )
        {
          break;
        }
      }
    }
    if ( ++v28 >= Count )
      goto LABEL_28;
  }
  v26 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v26 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E5B3F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      friendId);
    byte_42E5B3F = 1;
  }
  PK = TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v18; // x22
  int32_t v19; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_42E5B46 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      otherUserId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v12, v13, v14);
    byte_42E5B46 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B5D69C(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v18 = (void *)UserId;
  v19 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v19,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v21 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v18 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v18 )
        {
          return 1;
        }
      }
    }
    if ( ++v19 >= Count )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v19; // x23
  int32_t v20; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8

  if ( (byte_42E5B44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, kind, otherUserId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TblFriendEntity_TypeInfo, v13, v14, v15);
    byte_42E5B44 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_25:
    sub_B5D69C(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v19 = (void *)UserId;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v20,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v22 = *(&TblFriendEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v19 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (System_Net_NetworkInformation_UnicastIPAddressInformation_c *)otherUserId
          && Item[1].monitor == v19 )
        {
          break;
        }
      }
    }
    if ( ++v20 >= Count )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}