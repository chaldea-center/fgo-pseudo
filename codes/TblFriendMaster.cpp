void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A0967E & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_4A0967E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A0967C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_4A0967C = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30E4818 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x23
  int v8; // w20
  Il2CppClass *items; // x23
  int32_t v10; // w21
  int32_t v11; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A0967F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v4);
    byte_4A0967F = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v7 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v7 )
    goto LABEL_20;
  v8 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (Il2CppClass *)v7->fields.items;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               SelfUserGame,
               v11,
               (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
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
      if ( v8 == ++v11 )
        return v10;
    }
LABEL_20:
    sub_1B68930(SelfUserGame, v6);
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
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v21; // x19
  int64_t userId; // x25
  int v23; // w23
  int32_t i; // w24
  __int64 v25; // x10
  int v26; // w8
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass *v32; // x1
  Il2CppClass **v33; // x0
  void *v35; // x22
  System_Collections_ObjectModel_Collection_T__o *v36; // x22
  int v37; // w21
  int32_t v38; // w23
  __int64 methodPtr_low; // x10
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w24
  __int64 v48; // x10
  int64_t v49; // x8
  const MethodInfo_30E466C *v50; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass *v57; // x1
  Il2CppClass **v58; // x0

  if ( (byte_4A09681 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserProfileMaster___, v8);
    sub_1B686D4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12);
    sub_1B686D4(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v15);
    sub_1B686D4(&UserFollowEntity_TypeInfo, v16);
    byte_4A09681 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_73;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_73;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_73;
  userId = SelfUserGame->fields.userId;
  v23 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v35 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_71;
          v36 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)v35 + 4);
          if ( v36 )
          {
            v37 = (int)Instance;
            v38 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                           v36,
                           v38,
                           (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                           (const MethodInfo_30E466C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v21 )
                  break;
                items = v21->fields._items;
                v43 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v21->fields._version;
                if ( !items )
                  break;
                size = v21->fields._size;
                v45 = (Il2CppClass *)Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34BC278 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                }
                else
                {
                  v46 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v46[4] = v45;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
                }
              }
              if ( v37 == ++v38 )
                goto LABEL_71;
            }
          }
        }
      }
LABEL_73:
      sub_1B68930(Instance, v19);
    }
    if ( (int)Instance < 1 )
      goto LABEL_71;
    v47 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v47,
                   (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v48
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v48 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v19 = *((_QWORD *)Instance + 2);
          v49 = *((_QWORD *)Instance + 3);
          if ( v19 == userId )
          {
            if ( !MasterData_object )
              goto LABEL_73;
            v50 = (const MethodInfo_30E466C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            v19 = v49;
          }
          else
          {
            if ( v49 != userId )
              goto LABEL_70;
            if ( !MasterData_object )
              goto LABEL_73;
            v50 = (const MethodInfo_30E466C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          }
          Instance = DataMasterBase_object__object__long___GetEntity(v51, v19, v50);
          if ( Instance )
          {
            if ( !v21 )
              goto LABEL_73;
            v54 = v21->fields._items;
            v55 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v21->fields._version;
            if ( !v54 )
              goto LABEL_73;
            v56 = v21->fields._size;
            v57 = (Il2CppClass *)Instance;
            if ( (unsigned int)v56 >= v54->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &v54->obj.klass + v56;
              v21->fields._size = v56 + 1;
              v58[4] = v57;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v57, v52, v53);
            }
          }
        }
      }
LABEL_70:
      if ( v23 == ++v47 )
        goto LABEL_71;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v23 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v25
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == TblFriendEntity_TypeInfo )
        {
          v26 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v26 - 1) <= 1 )
          {
            v19 = *((_QWORD *)Instance + 2);
            if ( v19 == userId )
            {
              if ( v26 != kind )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
              v19 = *((_QWORD *)Instance + 3);
            }
            else
            {
              if ( v26 == kind || *((_QWORD *)Instance + 3) != userId )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
            }
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v19,
                         (const MethodInfo_30E466C *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
            if ( Instance )
            {
              if ( !v21 )
                goto LABEL_73;
              v29 = v21->fields._items;
              v30 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v21->fields._version;
              if ( !v29 )
                goto LABEL_73;
              v31 = v21->fields._size;
              v32 = (Il2CppClass *)Instance;
              if ( (unsigned int)v31 >= v29->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &v29->obj.klass + v31;
                v21->fields._size = v31 + 1;
                v33[4] = v32;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
              }
            }
          }
        }
      }
    }
  }
LABEL_71:
  if ( !v21 )
    goto LABEL_73;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v21,
                                        (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x22
  Il2CppClass *items; // x24
  int v13; // w21
  int32_t v14; // w22
  int32_t v15; // w23
  Il2CppObject *v16; // x0
  __int64 v17; // x10
  int klass; // w8
  int32_t v20; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A09680 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v8);
    byte_4A09680 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v11 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v11 )
      goto LABEL_39;
    items = (Il2CppClass *)v11->fields.items;
    v13 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v14 = 0;
        v20 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v20,
                   (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
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
          if ( v13 == ++v20 )
            return v14;
        }
LABEL_39:
        sub_1B68930(SelfUserGame, v10);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v16 = System_Collections_ObjectModel_Collection_object___get_Item(
                SelfUserGame,
                v15,
                (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v16 )
        {
          v17 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v16->klass->vtable[0].methodPtr) >= (unsigned int)v17
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
        if ( v13 == ++v15 )
          return v14;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  Il2CppObject *MasterData_object; // x20
  int v16; // w0
  void *v17; // x23
  int32_t v18; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A09683 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_1B686D4(&NetworkManager_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v11);
    byte_4A09683 = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
        LOBYTE(v16) = UserFollowEntity__IsLock(entity, 0LL);
        return v16 & 1;
      }
LABEL_30:
      sub_1B68930(list, *(_QWORD *)&kind);
    }
LABEL_26:
    LOBYTE(v16) = 0;
    return v16 & 1;
  }
  if ( Count < 1 )
    goto LABEL_26;
  v17 = (void *)UserId;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v18,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v17 && Item[1].monitor == (void *)otherUserId )
        {
          v16 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v16 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v17 )
          break;
      }
    }
    if ( Count == ++v18 )
      goto LABEL_26;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A0967D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_4A0967D = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v11; // x22
  int32_t v12; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4A09684 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v7);
    byte_4A09684 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B68930(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v11 = (void *)UserId;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v11 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v11 )
          return 1;
      }
    }
    if ( Count == ++v12 )
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v13; // x23
  int32_t v14; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4A09682 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B686D4(&NetworkManager_TypeInfo, v8);
    sub_1B686D4(&TblFriendEntity_TypeInfo, v9);
    byte_4A09682 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1B68930(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v13 = (void *)UserId;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v14,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v13 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v13 )
          break;
      }
    }
    if ( Count == ++v14 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}