void TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F83 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
    byte_4CB6F83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6F81 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
    byte_4CB6F81 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_33FDB94 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *v5; // x23
  int v6; // w20
  Il2CppClass *items; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *Item; // x0

  if ( (byte_4CB6F84 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    byte_4CB6F84 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.list )
    goto LABEL_18;
  v5 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !v5 )
    goto LABEL_18;
  v6 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (Il2CppClass *)v5->fields.items;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               SelfUserGame,
               v9,
               (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Item && LODWORD(Item[2].klass) == 3 )
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
      if ( v6 == ++v9 )
        return v8;
    }
LABEL_18:
    sub_1C6BC60(SelfUserGame, v4);
  }
  return 0;
}


OtherUserGameEntity_array *TblFriendMaster__GetList(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x24
  void *Instance; // x0
  int64_t v7; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  int64_t userId; // x25
  int v11; // w23
  int32_t i; // w24
  int v13; // w8
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
  int64_t v34; // x8
  const MethodInfo_33FB638 *v35; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass *v42; // x1
  Il2CppClass **v43; // x0

  if ( (byte_4CB6F86 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1C6BA08(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserFollowMaster__UserFollowEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6F86 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0);
    }
    goto LABEL_67;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_67;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_67;
  userId = SelfUserGame->fields.userId;
  v11 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
                           (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserFollowEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                break;
              Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v9 )
                  break;
                items = v9->fields._items;
                v29 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v9->fields._version;
                if ( !items )
                  break;
                size = v9->fields._size;
                v31 = (Il2CppClass *)Instance;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v32[4] = v31;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
                }
              }
              if ( v24 == ++v25 )
                goto LABEL_65;
            }
          }
        }
      }
LABEL_67:
      sub_1C6BC60(Instance, v7);
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
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance && *((_DWORD *)Instance + 8) == kind )
      {
        v7 = *((_QWORD *)Instance + 2);
        v34 = *((_QWORD *)Instance + 3);
        if ( v7 == userId )
        {
          if ( !MasterData_object )
            goto LABEL_67;
          v35 = (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          v7 = v34;
        }
        else
        {
          if ( v34 != userId )
            goto LABEL_64;
          if ( !MasterData_object )
            goto LABEL_67;
          v35 = (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
          v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        }
        Instance = DataMasterBase_object__object__long___GetEntity(v36, v7, v35);
        if ( Instance )
        {
          if ( !v9 )
            goto LABEL_67;
          v39 = v9->fields._items;
          v40 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
          ++v9->fields._version;
          if ( !v39 )
            goto LABEL_67;
          v41 = v9->fields._size;
          v42 = (Il2CppClass *)Instance;
          if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)Instance,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &v39->obj.klass + v41;
            v9->fields._size = v41 + 1;
            v43[4] = v42;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v42, v37, v38);
          }
        }
      }
LABEL_64:
      if ( v11 == ++v33 )
        goto LABEL_65;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v11 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_67;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
      if ( Instance )
      {
        v13 = *((_DWORD *)Instance + 8);
        if ( (unsigned int)(v13 - 1) <= 1 )
        {
          v7 = *((_QWORD *)Instance + 2);
          if ( v7 == userId )
          {
            if ( v13 != kind )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
            v7 = *((_QWORD *)Instance + 3);
          }
          else
          {
            if ( v13 == kind || *((_QWORD *)Instance + 3) != userId )
              continue;
            if ( !MasterData_object )
              goto LABEL_67;
          }
          Instance = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v7,
                       (const MethodInfo_33FB638 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
          if ( Instance )
          {
            if ( !v9 )
              goto LABEL_67;
            v16 = v9->fields._items;
            v17 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v9->fields._version;
            if ( !v16 )
              goto LABEL_67;
            v18 = v9->fields._size;
            v19 = (Il2CppClass *)Instance;
            if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)Instance,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &v16->obj.klass + v18;
              v9->fields._size = v18 + 1;
              v20[4] = v19;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
      }
    }
  }
LABEL_65:
  if ( !v9 )
    goto LABEL_67;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x22
  Il2CppClass *items; // x24
  int v9; // w21
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *v12; // x0
  int klass; // w8
  int32_t v15; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4CB6F85 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6F85 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0);
    if ( !this->fields.list )
      goto LABEL_35;
    v7 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    if ( !v7 )
      goto LABEL_35;
    items = (Il2CppClass *)v7->fields.items;
    v9 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v10 = 0;
        v15 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v15,
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
          if ( Item && LODWORD(Item[2].klass) == kind )
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
          if ( v9 == ++v15 )
            return v10;
        }
LABEL_35:
        sub_1C6BC60(SelfUserGame, v6);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v12 = System_Collections_ObjectModel_Collection_object___get_Item(
                SelfUserGame,
                v11,
                (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
        if ( v12 )
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
        if ( v9 == ++v11 )
          return v10;
      }
      goto LABEL_35;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_35;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserProfileMaster___);
    if ( !SelfUserGame )
      goto LABEL_35;
    return UserProfileMaster__GetOtherUserSum((UserProfileMaster_o *)SelfUserGame, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB6F88 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6F88 = 1;
  }
  entity = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_36;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
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
      sub_1C6BC60(list, *(_QWORD *)&kind);
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
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
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

  if ( (byte_4CB6F82 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
    byte_4CB6F82 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
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

  if ( (byte_4CB6F89 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6F89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_22:
    sub_1C6BC60(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB6F87 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6F87 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_26:
    sub_1C6BC60(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
             (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_TblFriendEntity__get_Item__);
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