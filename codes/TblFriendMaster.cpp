void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
    byte_4A5BC73 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BC71 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
    byte_4A5BC71 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *v5; // x23
  int v6; // w20
  Il2CppClass *items; // x23
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BC74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    byte_4A5BC74 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v5 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v5 )
    goto LABEL_20;
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
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
      if ( v6 == ++v9 )
        return v8;
    }
LABEL_20:
    sub_1B8880C(SelfUserGame, v4);
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
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  int64_t userId; // x25
  int v11; // w23
  int32_t i; // w24
  __int64 v13; // x10
  int v14; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass *v20; // x1
  Il2CppClass **v21; // x0
  void *v23; // x22
  System_Collections_ObjectModel_Collection_T__o *v24; // x22
  int v25; // w21
  int32_t v26; // w23
  __int64 methodPtr_low; // x10
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass *v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w24
  __int64 v36; // x10
  int64_t v37; // x8
  const MethodInfo_311DAE0 *v38; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0

  if ( (byte_4A5BC76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1B885B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    sub_1B885B0(&UserFollowEntity_TypeInfo);
    byte_4A5BC76 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_73;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_73;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_73;
  userId = SelfUserGame->fields.userId;
  v11 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v23 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_71;
          v24 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)v23 + 4);
          if ( v24 )
          {
            v25 = (int)Instance;
            v26 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                           v24,
                           v26,
                           (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Instance )
                break;
              methodPtr_low = LOBYTE(UserFollowEntity_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
                || *(UserFollowEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserFollowEntity_TypeInfo
                || !MasterData_object )
              {
                break;
              }
              Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                           *((_QWORD *)Instance + 3),
                           (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v9 )
                  break;
                items = v9->fields._items;
                v31 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v9->fields._version;
                if ( !items )
                  break;
                size = v9->fields._size;
                v33 = (Il2CppClass *)Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v34 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v34[4] = v33;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
                }
              }
              if ( v25 == ++v26 )
                goto LABEL_71;
            }
          }
        }
      }
LABEL_73:
      sub_1B8880C(Instance, v7);
    }
    if ( (int)Instance < 1 )
      goto LABEL_71;
    v35 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v35,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v36 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v36
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v36 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v7 = *((_QWORD *)Instance + 2);
          v37 = *((_QWORD *)Instance + 3);
          if ( v7 == userId )
          {
            if ( !MasterData_object )
              goto LABEL_73;
            v38 = (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            v7 = v37;
          }
          else
          {
            if ( v37 != userId )
              goto LABEL_70;
            if ( !MasterData_object )
              goto LABEL_73;
            v38 = (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          }
          Instance = DataMasterBase_object__object__long___GetEntity(v39, v7, v38);
          if ( Instance )
          {
            if ( !v9 )
              goto LABEL_73;
            v42 = v9->fields._items;
            v43 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v9->fields._version;
            if ( !v42 )
              goto LABEL_73;
            v44 = v9->fields._size;
            v45 = (Il2CppClass *)Instance;
            if ( (unsigned int)v44 >= v42->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &v42->obj.klass + v44;
              v9->fields._size = v44 + 1;
              v46[4] = v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
            }
          }
        }
      }
LABEL_70:
      if ( v11 == ++v35 )
        goto LABEL_71;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v11 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v13 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v13
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) == TblFriendEntity_TypeInfo )
        {
          v14 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v14 - 1) <= 1 )
          {
            v7 = *((_QWORD *)Instance + 2);
            if ( v7 == userId )
            {
              if ( v14 != kind )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
              v7 = *((_QWORD *)Instance + 3);
            }
            else
            {
              if ( v14 == kind || *((_QWORD *)Instance + 3) != userId )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
            }
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v7,
                         (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
            if ( Instance )
            {
              if ( !v9 )
                goto LABEL_73;
              v17 = v9->fields._items;
              v18 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v9->fields._version;
              if ( !v17 )
                goto LABEL_73;
              v19 = v9->fields._size;
              v20 = (Il2CppClass *)Instance;
              if ( (unsigned int)v19 >= v17->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &v17->obj.klass + v19;
                v9->fields._size = v19 + 1;
                v21[4] = v20;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
              }
            }
          }
        }
      }
    }
  }
LABEL_71:
  if ( !v9 )
    goto LABEL_73;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x22
  Il2CppClass *items; // x24
  int v9; // w21
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *v12; // x0
  __int64 v13; // x10
  int klass; // w8
  int32_t v16; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BC75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserProfileMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    byte_4A5BC75 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v7 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v7 )
      goto LABEL_39;
    items = (Il2CppClass *)v7->fields.items;
    v9 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v10 = 0;
        v16 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v16,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
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
          if ( v9 == ++v16 )
            return v10;
        }
LABEL_39:
        sub_1B8880C(SelfUserGame, v6);
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
                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v12 )
        {
          v13 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v12->klass->vtable[0].methodPtr) >= (unsigned int)v13
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
        if ( v9 == ++v11 )
          return v10;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  Il2CppObject *MasterData_object; // x20
  int v11; // w0
  void *v12; // x23
  int32_t v13; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5BC78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    byte_4A5BC78 = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_30;
    if ( UserFollowMaster__TryGetEntity(
           (UserFollowMaster_o *)MasterData_object,
           &entity,
           (int64_t)list,
           otherUserId,
           0LL) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)entity;
      if ( entity )
      {
        LOBYTE(v11) = UserFollowEntity__IsLock(entity, 0LL);
        return v11 & 1;
      }
LABEL_30:
      sub_1B8880C(list, *(_QWORD *)&kind);
    }
LABEL_26:
    LOBYTE(v11) = 0;
    return v11 & 1;
  }
  if ( Count < 1 )
    goto LABEL_26;
  v12 = (void *)UserId;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v13,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v12 && Item[1].monitor == (void *)otherUserId )
        {
          v11 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v11 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v12 )
          break;
      }
    }
    if ( Count == ++v13 )
      goto LABEL_26;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5BC72 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
    byte_4A5BC72 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v8; // x22
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4A5BC79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    byte_4A5BC79 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B8880C(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v8 = (void *)UserId;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v8 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v8 )
          return 1;
      }
    }
    if ( Count == ++v9 )
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v10; // x23
  int32_t v11; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4A5BC77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TblFriendEntity_TypeInfo);
    byte_4A5BC77 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1B8880C(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v10 = (void *)UserId;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v11,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v10 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v10 )
          break;
      }
    }
    if ( Count == ++v11 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}