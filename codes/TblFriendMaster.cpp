void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5248 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_4BB5248 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB5246 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_4BB5246 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_323D0DC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *v6; // x23
  int v7; // w20
  Il2CppClass *items; // x23
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0

  if ( (byte_4BB5249 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v3);
    byte_4BB5249 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_18;
  v6 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !v6 )
    goto LABEL_18;
  v7 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (Il2CppClass *)v6->fields.items;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               SelfUserGame,
               v10,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Item && LODWORD(Item[2].klass) == 3 )
      {
        if ( Item[1].klass == items )
        {
          ++v9;
        }
        else if ( Item[1].monitor == items )
        {
          ++v9;
        }
      }
      if ( v7 == ++v10 )
        return v9;
    }
LABEL_18:
    sub_1C13F80(SelfUserGame, v5);
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
  int64_t Instance; // x0
  int64_t v19; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v21; // x19
  int64_t userId; // x25
  int v23; // w23
  int32_t i; // w24
  int v25; // w8
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  int64_t v38; // x22
  System_Collections_ObjectModel_Collection_T__o *v39; // x22
  int v40; // w21
  int32_t v41; // w23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  int32_t v53; // w24
  int64_t v54; // x8
  const MethodInfo_323AB80 *v55; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  int64_t v66; // x1
  Il2CppClass **v67; // x0

  if ( (byte_4BB524B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, *(_QWORD *)&kind);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserProfileMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v10);
    sub_1C13D24(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__getEntityList__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v14);
    sub_1C13D24(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB524B = 1;
  }
  if ( !kind )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_67;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_67;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_67;
  userId = SelfUserGame->fields.userId;
  v23 = Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v38 = Instance;
          Instance = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_65;
          v39 = *(System_Collections_ObjectModel_Collection_T__o **)(v38 + 40);
          if ( v39 )
          {
            v40 = Instance;
            v41 = 0;
            while ( 1 )
            {
              Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                    v39,
                                    v41,
                                    (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                break;
              Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    *(_QWORD *)(Instance + 24),
                                    (const MethodInfo_323AB80 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v21 )
                  break;
                items = v21->fields._items;
                v49 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v21->fields._version;
                if ( !items )
                  break;
                size = v21->fields._size;
                v51 = Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v52[4] = (Il2CppClass *)v51;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v52 + 4), v51, v42, v43, v44, v45, v46, v47);
                }
              }
              if ( v40 == ++v41 )
                goto LABEL_65;
            }
          }
        }
      }
LABEL_67:
      sub_1C13F80(Instance, v19);
    }
    if ( (int)Instance < 1 )
      goto LABEL_65;
    v53 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_67;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v53,
                            (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance && *(_DWORD *)(Instance + 32) == kind )
      {
        v19 = *(_QWORD *)(Instance + 16);
        v54 = *(_QWORD *)(Instance + 24);
        if ( v19 == userId )
        {
          if ( !MasterData_object )
            goto LABEL_67;
          v55 = (const MethodInfo_323AB80 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          v19 = v54;
        }
        else
        {
          if ( v54 != userId )
            goto LABEL_64;
          if ( !MasterData_object )
            goto LABEL_67;
          v55 = (const MethodInfo_323AB80 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        }
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(v56, v19, v55);
        if ( Instance )
        {
          if ( !v21 )
            goto LABEL_67;
          v63 = v21->fields._items;
          v64 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
          ++v21->fields._version;
          if ( !v63 )
            goto LABEL_67;
          v65 = v21->fields._size;
          v66 = Instance;
          if ( (unsigned int)v65 >= v63->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)Instance,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v63->obj.klass + v65;
            v21->fields._size = v65 + 1;
            v67[4] = (Il2CppClass *)v66;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v67 + 4), v66, v57, v58, v59, v60, v61, v62);
          }
        }
      }
LABEL_64:
      if ( v23 == ++v53 )
        goto LABEL_65;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v23 != i; ++i )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_67;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            i,
                            (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance )
      {
        v25 = *(_DWORD *)(Instance + 32);
        if ( (unsigned int)(v25 - 1) <= 1 )
        {
          v19 = *(_QWORD *)(Instance + 16);
          if ( v19 == userId )
          {
            if ( v25 != kind )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
            v19 = *(_QWORD *)(Instance + 24);
          }
          else
          {
            if ( v25 == kind || *(_QWORD *)(Instance + 24) != userId )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
          }
          Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                v19,
                                (const MethodInfo_323AB80 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( Instance )
          {
            if ( !v21 )
              goto LABEL_67;
            v32 = v21->fields._items;
            v33 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v21->fields._version;
            if ( !v32 )
              goto LABEL_67;
            v34 = v21->fields._size;
            v35 = Instance;
            if ( (unsigned int)v34 >= v32->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)Instance,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &v32->obj.klass + v34;
              v21->fields._size = v34 + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
    }
  }
LABEL_65:
  if ( !v21 )
    goto LABEL_67;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v21,
                                        (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *v10; // x22
  Il2CppClass *items; // x24
  int v12; // w21
  int32_t v13; // w22
  int32_t v14; // w23
  Il2CppObject *v15; // x0
  int klass; // w8
  int32_t v18; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4BB524A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, *(_QWORD *)&kind);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB524A = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_35;
    v10 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    if ( !v10 )
      goto LABEL_35;
    items = (Il2CppClass *)v10->fields.items;
    v12 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v13 = 0;
        v18 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v18,
                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
          if ( Item && LODWORD(Item[2].klass) == kind )
          {
            if ( Item[1].klass == items )
            {
              ++v13;
            }
            else if ( Item[1].monitor == items )
            {
              ++v13;
            }
          }
          if ( v12 == ++v18 )
            return v13;
        }
LABEL_35:
        sub_1C13F80(SelfUserGame, v9);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v15 = System_Collections_ObjectModel_Collection_object___get_Item(
                SelfUserGame,
                v14,
                (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
        if ( v15 )
        {
          klass = (int)v15[2].klass;
          if ( (unsigned int)(klass - 1) <= 1 )
          {
            if ( v15[1].klass == items )
            {
              if ( klass == kind )
                ++v13;
            }
            else
            {
              v13 += klass != kind && v15[1].monitor == items;
            }
          }
        }
        if ( v12 == ++v14 )
          return v13;
      }
      goto LABEL_35;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_35;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserProfileMaster___);
    if ( !SelfUserGame )
      goto LABEL_35;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v13; // x0
  Il2CppObject *MasterData_object; // x20
  int v15; // w0
  int32_t v16; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB524D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, *(_QWORD *)&kind);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB524D = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4BAF1E5 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_36;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BAF1E5 )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
      byte_4BAF1E5 = 1;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_36;
    if ( UserFollowMaster__TryGetEntity(
           (UserFollowMaster_o *)MasterData_object,
           &entity,
           (int64_t)list[7].fields.items[4].klass,
           otherUserId,
           0LL) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)entity;
      if ( entity )
      {
        LOBYTE(v15) = UserFollowEntity__IsLock(entity, 0LL);
        return v15 & 1;
      }
LABEL_36:
      sub_1C13F80(list, *(_QWORD *)&kind);
    }
LABEL_32:
    LOBYTE(v15) = 0;
    return v15 & 1;
  }
  if ( Count < 1 )
    goto LABEL_32;
  v16 = 0;
  userIdNumber = (void *)v13->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_36;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v16,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
        {
          v15 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v15 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          break;
      }
    }
    if ( Count == ++v16 )
      goto LABEL_32;
  }
  v15 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v15 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB5247 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_4BB5247 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  NetworkManager_c *v9; // x0
  int32_t v10; // w22
  void *userIdNumber; // x23
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4BB524E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, otherUserId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    byte_4BB524E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1C13F80(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, otherUserId);
    byte_4BAF1E5 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( Count < 1 )
    return 0;
  v10 = 0;
  userIdNumber = (void *)v9->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    if ( Item && LODWORD(Item[2].klass) == 3 )
    {
      klass = Item[1].klass;
      if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
        return 1;
      if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
        return 1;
    }
    if ( Count == ++v10 )
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v11; // x0
  int32_t v12; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4BB524C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__, *(_QWORD *)&kind);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    byte_4BB524C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_26:
    sub_1C13F80(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4BAF1E5 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  if ( Count < 1 )
    return 0;
  v12 = 0;
  userIdNumber = (void *)v11->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          break;
      }
    }
    if ( Count == ++v12 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}