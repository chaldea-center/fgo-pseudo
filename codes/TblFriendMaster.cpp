void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method, v2);
    byte_4B16D28 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16D26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId, friendId);
    byte_4B16D26 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
}


int32_t __fastcall TblFriendMaster__GetFriendSum(TblFriendMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *v10; // x23
  int v11; // w20
  Il2CppClass *items; // x23
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16D29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v6, v7);
    byte_4B16D29 = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v10 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !v10 )
    goto LABEL_20;
  v11 = (int)SelfUserGame;
  if ( (int)SelfUserGame >= 1 )
  {
    items = (Il2CppClass *)v10->fields.items;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !SelfUserGame )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               SelfUserGame,
               v14,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
          && LODWORD(Item[2].klass) == 3 )
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
      if ( v11 == ++v14 )
        return v13;
    }
LABEL_20:
    sub_1BCAA3C(SelfUserGame, v9);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UserGameEntity_o *SelfUserGame; // x24
  int64_t Instance; // x0
  int64_t v31; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x19
  int64_t userId; // x25
  int v38; // w23
  int32_t i; // w24
  __int64 v40; // x10
  int v41; // w8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  int64_t v54; // x22
  System_Collections_ObjectModel_Collection_T__o *v55; // x22
  int v56; // w21
  int32_t v57; // w23
  __int64 methodPtr_low; // x10
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  int64_t v68; // x1
  Il2CppClass **v69; // x0
  int32_t v70; // w24
  __int64 v71; // x10
  int64_t v72; // x8
  const MethodInfo_31B2FEC *v73; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  int64_t v84; // x1
  Il2CppClass **v85; // x0

  if ( (byte_4B16D2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserProfileMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v25, v26);
    sub_1BCA7E0(&UserFollowEntity_TypeInfo, v27, v28);
    byte_4B16D2B = 1;
  }
  if ( !kind )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_73;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OtherUserGameEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_73;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_73;
  userId = SelfUserGame->fields.userId;
  v38 = Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v54 = Instance;
          Instance = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_71;
          v55 = *(System_Collections_ObjectModel_Collection_T__o **)(v54 + 32);
          if ( v55 )
          {
            v56 = Instance;
            v57 = 0;
            while ( 1 )
            {
              Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                    v55,
                                    v57,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
              if ( !Instance )
                break;
              methodPtr_low = LOBYTE(UserFollowEntity_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
                || *(UserFollowEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserFollowEntity_TypeInfo
                || !MasterData_object )
              {
                break;
              }
              Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    *(_QWORD *)(Instance + 24),
                                    (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v36 )
                  break;
                items = v36->fields._items;
                v66 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v36->fields._version;
                if ( !items )
                  break;
                size = v36->fields._size;
                v68 = Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v36,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = &items->obj.klass + size;
                  v36->fields._size = size + 1;
                  v69[4] = (Il2CppClass *)v68;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v68, v59, v60, v61, v62, v63, v64);
                }
              }
              if ( v56 == ++v57 )
                goto LABEL_71;
            }
          }
        }
      }
LABEL_73:
      sub_1BCAA3C(Instance, v31);
    }
    if ( (int)Instance < 1 )
      goto LABEL_71;
    v70 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v70,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v71 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v71
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v71 - 8) == TblFriendEntity_TypeInfo
          && *(_DWORD *)(Instance + 32) == kind )
        {
          v31 = *(_QWORD *)(Instance + 16);
          v72 = *(_QWORD *)(Instance + 24);
          if ( v31 == userId )
          {
            if ( !MasterData_object )
              goto LABEL_73;
            v73 = (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            v31 = v72;
          }
          else
          {
            if ( v72 != userId )
              goto LABEL_70;
            if ( !MasterData_object )
              goto LABEL_73;
            v73 = (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          }
          Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(v74, v31, v73);
          if ( Instance )
          {
            if ( !v36 )
              goto LABEL_73;
            v81 = v36->fields._items;
            v82 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v36->fields._version;
            if ( !v81 )
              goto LABEL_73;
            v83 = v36->fields._size;
            v84 = Instance;
            if ( (unsigned int)v83 >= v81->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v36,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &v81->obj.klass + v83;
              v36->fields._size = v83 + 1;
              v85[4] = (Il2CppClass *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 4), v84, v75, v76, v77, v78, v79, v80);
            }
          }
        }
      }
LABEL_70:
      if ( v38 == ++v70 )
        goto LABEL_71;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v38 != i; ++i )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            i,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v40
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v40 - 8) == TblFriendEntity_TypeInfo )
        {
          v41 = *(_DWORD *)(Instance + 32);
          if ( (unsigned int)(v41 - 1) <= 1 )
          {
            v31 = *(_QWORD *)(Instance + 16);
            if ( v31 == userId )
            {
              if ( v41 != kind )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
              v31 = *(_QWORD *)(Instance + 24);
            }
            else
            {
              if ( v41 == kind || *(_QWORD *)(Instance + 24) != userId )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
            }
            Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  v31,
                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
            if ( Instance )
            {
              if ( !v36 )
                goto LABEL_73;
              v48 = v36->fields._items;
              v49 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v36->fields._version;
              if ( !v48 )
                goto LABEL_73;
              v50 = v36->fields._size;
              v51 = Instance;
              if ( (unsigned int)v50 >= v48->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v36,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &v48->obj.klass + v50;
                v36->fields._size = v50 + 1;
                v52[4] = (Il2CppClass *)v51;
                sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), v51, v42, v43, v44, v45, v46, v47);
              }
            }
          }
        }
      }
    }
  }
LABEL_71:
  if ( !v36 )
    goto LABEL_73;
  return (OtherUserGameEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v36,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TblFriendMaster__GetSum(TblFriendMaster_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *SelfUserGame; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *v15; // x22
  Il2CppClass *items; // x24
  int v17; // w21
  int32_t v18; // w22
  int32_t v19; // w23
  Il2CppObject *v20; // x0
  __int64 v21; // x10
  int klass; // w8
  int32_t v24; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16D2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserProfileMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v11, v12);
    byte_4B16D2A = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v15 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( !v15 )
      goto LABEL_39;
    items = (Il2CppClass *)v15->fields.items;
    v17 = (int)SelfUserGame;
    if ( (unsigned int)(kind - 1) >= 2 )
    {
      if ( (int)SelfUserGame >= 1 )
      {
        v18 = 0;
        v24 = 0;
        while ( 1 )
        {
          SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !SelfUserGame )
            break;
          Item = System_Collections_ObjectModel_Collection_object___get_Item(
                   SelfUserGame,
                   v24,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( Item )
          {
            methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
              && LODWORD(Item[2].klass) == kind )
            {
              if ( Item[1].klass == items )
              {
                ++v18;
              }
              else if ( Item[1].monitor == items )
              {
                ++v18;
              }
            }
          }
          if ( v17 == ++v24 )
            return v18;
        }
LABEL_39:
        sub_1BCAA3C(SelfUserGame, v14);
      }
    }
    else if ( (int)SelfUserGame >= 1 )
    {
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !SelfUserGame )
          break;
        v20 = System_Collections_ObjectModel_Collection_object___get_Item(
                SelfUserGame,
                v19,
                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( v20 )
        {
          v21 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v20->klass->vtable[0].methodPtr) >= (unsigned int)v21
            && (TblFriendEntity_c *)v20->klass->_2.typeHierarchy[v21 - 1] == TblFriendEntity_TypeInfo )
          {
            klass = (int)v20[2].klass;
            if ( (unsigned int)(klass - 1) <= 1 )
            {
              if ( v20[1].klass == items )
              {
                if ( klass == kind )
                  ++v18;
              }
              else
              {
                v18 += klass != kind && v20[1].monitor == items;
              }
            }
          }
        }
        if ( v17 == ++v19 )
          return v18;
      }
      goto LABEL_39;
    }
    return 0;
  }
  else
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  int32_t Count; // w22
  int64_t UserId; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x20
  int v23; // w0
  void *v24; // x23
  int32_t v25; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16D2D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&kind,
      otherUserId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v15, v16);
    byte_4B16D2D = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  UserId = NetworkManager__get_UserId(0LL);
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_30;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
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
        LOBYTE(v23) = UserFollowEntity__IsLock(entity, 0LL);
        return v23 & 1;
      }
LABEL_30:
      sub_1BCAA3C(list, *(_QWORD *)&kind);
    }
LABEL_26:
    LOBYTE(v23) = 0;
    return v23 & 1;
  }
  if ( Count < 1 )
    goto LABEL_26;
  v24 = (void *)UserId;
  v25 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_30;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v25,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v24 && Item[1].monitor == (void *)otherUserId )
        {
          v23 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v23 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v24 )
          break;
      }
    }
    if ( Count == ++v25 )
      goto LABEL_26;
  }
  v23 = (BYTE4(Item[2].klass) >> 4) & 1;
  return v23 & 1;
}


bool __fastcall TblFriendMaster__TryGetEntity(
        TblFriendMaster_o *this,
        TblFriendEntity_o **entity,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16D27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity, userId);
    byte_4B16D27 = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  int32_t Count; // w21
  int64_t UserId; // x0
  void *v15; // x22
  int32_t v16; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4B16D2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v9, v10);
    byte_4B16D2E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_1BCAA3C(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v15 = (void *)UserId;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v16,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == v15 && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v15 )
          return 1;
      }
    }
    if ( Count == ++v16 )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  int32_t Count; // w22
  int64_t UserId; // x0
  void *v17; // x23
  int32_t v18; // w24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4B16D2C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&kind,
      otherUserId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&TblFriendEntity_TypeInfo, v11, v12);
    byte_4B16D2C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1BCAA3C(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count < 1 )
    return 0;
  v17 = (void *)UserId;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v18,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == v17 && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == v17 )
          break;
      }
    }
    if ( Count == ++v18 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}