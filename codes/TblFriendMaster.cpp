void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCE20 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_49FCE20 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCE1E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_49FCE1E = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  System_Collections_ObjectModel_Collection_T__o *v6; // x23
  int v7; // w20
  Il2CppClass *items; // x23
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FCE21 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v4);
    byte_49FCE21 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v6 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v6 )
    goto LABEL_20;
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
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
      }
      if ( v7 == ++v10 )
        return v9;
    }
LABEL_20:
    sub_1B64324(SelfUserGame);
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
  Il2CppObject *MasterData_object; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  int64_t userId; // x25
  int v24; // w23
  int32_t i; // w24
  __int64 v26; // x10
  int v27; // w8
  int64_t v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass *v34; // x1
  Il2CppClass **v35; // x0
  void *v37; // x22
  System_Collections_ObjectModel_Collection_T__o *v38; // x22
  int v39; // w21
  int32_t v40; // w23
  __int64 methodPtr_low; // x10
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass *v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w24
  __int64 v50; // x10
  int64_t v51; // x1
  int64_t v52; // x8
  const MethodInfo_30D4050 *v53; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass *v60; // x1
  Il2CppClass **v61; // x0

  if ( (byte_49FCE23 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserProfileMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v15);
    sub_1B640C8(&UserFollowEntity_TypeInfo, v16);
    byte_49FCE23 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_73;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_OtherUserGameEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_73;
  Instance = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                       (System_Collections_ObjectModel_Collection_T__o *)Instance,
                       (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_73;
  userId = SelfUserGame->fields.userId;
  v24 = (int)Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v37 = Instance;
          Instance = (void *)UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_71;
          v38 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)v37 + 4);
          if ( v38 )
          {
            v39 = (int)Instance;
            v40 = 0;
            while ( 1 )
            {
              Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                           v38,
                           v40,
                           (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                           (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v22 )
                  break;
                items = v22->fields._items;
                v45 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v22->fields._version;
                if ( !items )
                  break;
                size = v22->fields._size;
                v47 = (Il2CppClass *)Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v22,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v48 = &items->obj.klass + size;
                  v22->fields._size = size + 1;
                  v48[4] = v47;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v47, v42, v43);
                }
              }
              if ( v39 == ++v40 )
                goto LABEL_71;
            }
          }
        }
      }
LABEL_73:
      sub_1B64324(Instance);
    }
    if ( (int)Instance < 1 )
      goto LABEL_71;
    v49 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v49,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v50 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v50
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v50 - 8) == TblFriendEntity_TypeInfo
          && *((_DWORD *)Instance + 8) == kind )
        {
          v51 = *((_QWORD *)Instance + 2);
          v52 = *((_QWORD *)Instance + 3);
          if ( v51 == userId )
          {
            if ( !MasterData_object )
              goto LABEL_73;
            v53 = (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            v51 = v52;
          }
          else
          {
            if ( v52 != userId )
              goto LABEL_70;
            if ( !MasterData_object )
              goto LABEL_73;
            v53 = (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          }
          Instance = DataMasterBase_object__object__long___GetEntity(v54, v51, v53);
          if ( Instance )
          {
            if ( !v22 )
              goto LABEL_73;
            v57 = v22->fields._items;
            v58 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v22->fields._version;
            if ( !v57 )
              goto LABEL_73;
            v59 = v22->fields._size;
            v60 = (Il2CppClass *)Instance;
            if ( (unsigned int)v59 >= v57->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &v57->obj.klass + v59;
              v22->fields._size = v59 + 1;
              v61[4] = v60;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v60, v55, v56);
            }
          }
        }
      }
LABEL_70:
      if ( v24 == ++v49 )
        goto LABEL_71;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v24 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v26 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v26
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v26 - 8) == TblFriendEntity_TypeInfo )
        {
          v27 = *((_DWORD *)Instance + 8);
          if ( (unsigned int)(v27 - 1) <= 1 )
          {
            v28 = *((_QWORD *)Instance + 2);
            if ( v28 == userId )
            {
              if ( v27 != kind )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
              v28 = *((_QWORD *)Instance + 3);
            }
            else
            {
              if ( v27 == kind || *((_QWORD *)Instance + 3) != userId )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
            }
            Instance = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         v28,
                         (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
            if ( Instance )
            {
              if ( !v22 )
                goto LABEL_73;
              v31 = v22->fields._items;
              v32 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v22->fields._version;
              if ( !v31 )
                goto LABEL_73;
              v33 = v22->fields._size;
              v34 = (Il2CppClass *)Instance;
              if ( (unsigned int)v33 >= v31->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &v31->obj.klass + v33;
                v22->fields._size = v33 + 1;
                v35[4] = v34;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
              }
            }
          }
        }
      }
    }
  }
LABEL_71:
  if ( !v22 )
    goto LABEL_73;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v22,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  System_Collections_ObjectModel_Collection_T__o *v10; // x22
  Il2CppClass *items; // x24
  int v12; // w21
  int32_t v13; // w22
  int32_t v14; // w23
  Il2CppObject *v15; // x0
  __int64 v16; // x10
  int klass; // w8
  int32_t v19; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FCE22 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v8);
    byte_49FCE22 = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v10 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v10 )
      goto LABEL_39;
    items = (Il2CppClass *)v10->fields.items;
    v12 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v13 = 0;
        v19 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v19,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
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
          }
          if ( v12 == ++v19 )
            return v13;
        }
LABEL_39:
        sub_1B64324(SelfUserGame);
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
                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v15 )
        {
          v16 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v15->klass->vtable[0].methodPtr) >= (unsigned int)v16
            && (TblFriendEntity_c *)v15->klass->_2.typeHierarchy[v16 - 1] == TblFriendEntity_TypeInfo )
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
        }
        if ( v12 == ++v14 )
          return v13;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserProfileMaster___);
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

  if ( (byte_49FCE25 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v11);
    byte_49FCE25 = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
      sub_1B64324(list);
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
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_49FCE1F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_49FCE1F = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
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

  if ( (byte_49FCE26 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v7);
    byte_49FCE26 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_49FCE24 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&TblFriendEntity_TypeInfo, v9);
    byte_49FCE24 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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