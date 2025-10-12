void TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38665 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
    byte_4C38665 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38663 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
    byte_4C38663 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  System_Collections_ObjectModel_Collection_T__o *v4; // x23
  int v5; // w20
  Il2CppClass *items; // x23
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0

  if ( (byte_4C38666 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    byte_4C38666 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.list )
    goto LABEL_18;
  v4 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !v4 )
    goto LABEL_18;
  v5 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (Il2CppClass *)v4->fields.items;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               SelfUserGame,
               v8,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Item && LODWORD(Item[2].klass) == 3 )
      {
        if ( Item[1].klass == items )
        {
          ++v7;
        }
        else if ( Item[1].monitor == items )
        {
          ++v7;
        }
      }
      if ( v5 == ++v8 )
        return v7;
    }
LABEL_18:
    sub_1C32E7C(SelfUserGame);
  }
  return 0;
}


OtherUserGameEntity_array *TblFriendMaster__GetList(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x24
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t userId; // x25
  int v10; // w23
  int32_t i; // w24
  int v12; // w8
  int64_t v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass *v19; // x1
  Il2CppClass **v20; // x0
  void *v22; // x22
  System_Collections_ObjectModel_Collection_T__o *v23; // x22
  int v24; // w21
  int32_t v25; // w23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass *v31; // x1
  Il2CppClass **v32; // x0
  int32_t v33; // w24
  int64_t v34; // x1
  int64_t v35; // x8
  const MethodInfo_3398D94 *v36; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass *v43; // x1
  Il2CppClass **v44; // x0

  if ( (byte_4C38668 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1C32C20(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38668 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0);
    }
    goto LABEL_67;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_67;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_67;
  userId = SelfUserGame->fields.userId;
  v10 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v22 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
          if ( (int)Instance < 1 )
            goto LABEL_65;
          v23 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)v22 + 5);
          if ( v23 )
          {
            v24 = (int)Instance;
            v25 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                           v23,
                           v25,
                           (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                break;
              Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_3398D94 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v8 )
                  break;
                items = v8->fields._items;
                v29 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v8->fields._version;
                if ( !items )
                  break;
                size = v8->fields._size;
                v31 = (Il2CppClass *)Instance;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v32[4] = v31;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
                }
              }
              if ( v24 == ++v25 )
                goto LABEL_65;
            }
          }
        }
      }
LABEL_67:
      sub_1C32E7C(Instance);
    }
    if ( (int)Instance < 1 )
      goto LABEL_65;
    v33 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_67;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v33,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance && *((_DWORD *)Instance + 8) == kind )
      {
        v34 = *((_QWORD *)Instance + 2);
        v35 = *((_QWORD *)Instance + 3);
        if ( v34 == userId )
        {
          if ( !MasterData_object )
            goto LABEL_67;
          v36 = (const MethodInfo_3398D94 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          v34 = v35;
        }
        else
        {
          if ( v35 != userId )
            goto LABEL_64;
          if ( !MasterData_object )
            goto LABEL_67;
          v36 = (const MethodInfo_3398D94 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        }
        Instance = DataMasterBase_object__object__long___GetEntity(v37, v34, v36);
        if ( Instance )
        {
          if ( !v8 )
            goto LABEL_67;
          v40 = v8->fields._items;
          v41 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
          ++v8->fields._version;
          if ( !v40 )
            goto LABEL_67;
          v42 = v8->fields._size;
          v43 = (Il2CppClass *)Instance;
          if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)Instance,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v40->obj.klass + v42;
            v8->fields._size = v42 + 1;
            v44[4] = v43;
            sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v43, v38, v39);
          }
        }
      }
LABEL_64:
      if ( v10 == ++v33 )
        goto LABEL_65;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v10 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_67;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance )
      {
        v12 = *((_DWORD *)Instance + 8);
        if ( (unsigned int)(v12 - 1) <= 1 )
        {
          v13 = *((_QWORD *)Instance + 2);
          if ( v13 == userId )
          {
            if ( v12 != kind )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
            v13 = *((_QWORD *)Instance + 3);
          }
          else
          {
            if ( v12 == kind || *((_QWORD *)Instance + 3) != userId )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
          }
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v13,
                       (const MethodInfo_3398D94 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( Instance )
          {
            if ( !v8 )
              goto LABEL_67;
            v16 = v8->fields._items;
            v17 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v8->fields._version;
            if ( !v16 )
              goto LABEL_67;
            v18 = v8->fields._size;
            v19 = (Il2CppClass *)Instance;
            if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)Instance,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &v16->obj.klass + v18;
              v8->fields._size = v18 + 1;
              v20[4] = v19;
              sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
      }
    }
  }
LABEL_65:
  if ( !v8 )
    goto LABEL_67;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v8,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  System_Collections_ObjectModel_Collection_T__o *v6; // x22
  Il2CppClass *items; // x24
  int v8; // w21
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *v11; // x0
  int klass; // w8
  int32_t v14; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4C38667 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38667 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0);
    if ( !this->fields.list )
      goto LABEL_35;
    v6 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    if ( !v6 )
      goto LABEL_35;
    items = (Il2CppClass *)v6->fields.items;
    v8 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v9 = 0;
        v14 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v14,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
          if ( Item && LODWORD(Item[2].klass) == kind )
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
          if ( v8 == ++v14 )
            return v9;
        }
LABEL_35:
        sub_1C32E7C(SelfUserGame);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v11 = System_Collections_ObjectModel_Collection_object___get_Item(
                SelfUserGame,
                v10,
                (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
        if ( v11 )
        {
          klass = (int)v11[2].klass;
          if ( (unsigned int)(klass - 1) <= 1 )
          {
            if ( v11[1].klass == items )
            {
              if ( klass == kind )
                ++v9;
            }
            else
            {
              v9 += klass != kind && v11[1].monitor == items;
            }
          }
        }
        if ( v8 == ++v10 )
          return v9;
      }
      goto LABEL_35;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_35;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserProfileMaster___);
    if ( !SelfUserGame )
      goto LABEL_35;
    return UserProfileMaster__GetOtherUserSum((UserProfileMaster_o *)SelfUserGame, 0);
  }
}


bool TblFriendMaster__IsLockUser(TblFriendMaster_o *this, int32_t kind, int64_t otherUserId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v9; // x0
  Il2CppObject *MasterData_object; // x20
  int v11; // w0
  int32_t v12; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3866A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3866A = 1;
  }
  entity = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_36;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
           0) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)entity;
      if ( entity )
      {
        LOBYTE(v11) = UserFollowEntity__IsLock(entity, 0);
        return v11 & 1;
      }
LABEL_36:
      sub_1C32E7C(list);
    }
LABEL_32:
    LOBYTE(v11) = 0;
    return v11 & 1;
  }
  if ( Count < 1 )
    goto LABEL_32;
  v12 = 0;
  userIdNumber = (void *)v9->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_36;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
        {
          v11 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v11 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          break;
      }
    }
    if ( Count == ++v12 )
      goto LABEL_32;
  }
  v11 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v11 & 1;
}


bool TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38664 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
    byte_4C38664 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  NetworkManager_c *v7; // x0
  int32_t v8; // w22
  void *userIdNumber; // x23
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C3866B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3866B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1C32E7C(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( Count < 1 )
    return 0;
  v8 = 0;
  userIdNumber = (void *)v7->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    if ( Item && LODWORD(Item[2].klass) == 3 )
    {
      klass = Item[1].klass;
      if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
        return 1;
      if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
        return 1;
    }
    if ( Count == ++v8 )
      return 0;
  }
}


bool TblFriendMaster__isMessageDisp(
        TblFriendMaster_o *this,
        int32_t kind,
        int64_t otherUserId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v9; // x0
  int32_t v10; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C38669 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38669 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_26:
    sub_1C32E7C(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
      goto LABEL_26;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
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
    if ( Count == ++v10 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}