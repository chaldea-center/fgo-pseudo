void __fastcall TblFriendMaster___ctor(TblFriendMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6771C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__, method);
    byte_4B6771C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    69,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string___ctor__);
}


TblFriendEntity_o *__fastcall TblFriendMaster__GetEntity(
        TblFriendMaster_o *this,
        int64_t userId,
        int64_t friendId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B6771A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__, userId);
    byte_4B6771A = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)friendId);
  return (TblFriendEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__GetEntity__);
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

  if ( (byte_4B6771D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v4);
    byte_4B6771D = 1;
  }
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v7 = SelfUserGame;
  SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                     (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                     (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1BE4D28(SelfUserGame, v6);
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
  __int64 v25; // x10
  int v26; // w8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  int64_t v36; // x1
  Il2CppClass **v37; // x0
  int64_t v39; // x22
  System_Collections_ObjectModel_Collection_T__o *v40; // x22
  int v41; // w21
  int32_t v42; // w23
  __int64 methodPtr_low; // x10
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int64_t v53; // x1
  Il2CppClass **v54; // x0
  int32_t v55; // w24
  __int64 v56; // x10
  int64_t v57; // x8
  const MethodInfo_31FD970 *v58; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  int64_t v69; // x1
  Il2CppClass **v70; // x0

  if ( (byte_4B6771F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserProfileMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_OtherUserGameEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_OtherUserGameEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v15);
    sub_1BE4ACC(&UserFollowEntity_TypeInfo, v16);
    byte_4B6771F = 1;
  }
  if ( !kind )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserProfileMaster___);
      if ( Instance )
        return UserProfileMaster__GetOtherUserList((UserProfileMaster_o *)Instance, 0LL);
    }
    goto LABEL_73;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_OtherUserGameEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_OtherUserGameEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_73;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !SelfUserGame )
    goto LABEL_73;
  userId = SelfUserGame->fields.userId;
  v23 = Instance;
  if ( (unsigned int)(kind - 1) >= 2 )
  {
    if ( kind == 9 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        if ( Instance )
        {
          v39 = Instance;
          Instance = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
          if ( (int)Instance < 1 )
            goto LABEL_71;
          v40 = *(System_Collections_ObjectModel_Collection_T__o **)(v39 + 32);
          if ( v40 )
          {
            v41 = Instance;
            v42 = 0;
            while ( 1 )
            {
              Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                    v40,
                                    v42,
                                    (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                                    (const MethodInfo_31FD970 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
              if ( Instance )
              {
                if ( !v21 )
                  break;
                items = v21->fields._items;
                v51 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
                ++v21->fields._version;
                if ( !items )
                  break;
                size = v21->fields._size;
                v53 = Instance;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v54 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v54[4] = (Il2CppClass *)v53;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v54 + 4), v53, v44, v45, v46, v47, v48, v49);
                }
              }
              if ( v41 == ++v42 )
                goto LABEL_71;
            }
          }
        }
      }
LABEL_73:
      sub_1BE4D28(Instance, v19);
    }
    if ( (int)Instance < 1 )
      goto LABEL_71;
    v55 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v55,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v56 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v56
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v56 - 8) == TblFriendEntity_TypeInfo
          && *(_DWORD *)(Instance + 32) == kind )
        {
          v19 = *(_QWORD *)(Instance + 16);
          v57 = *(_QWORD *)(Instance + 24);
          if ( v19 == userId )
          {
            if ( !MasterData_object )
              goto LABEL_73;
            v58 = (const MethodInfo_31FD970 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            v19 = v57;
          }
          else
          {
            if ( v57 != userId )
              goto LABEL_70;
            if ( !MasterData_object )
              goto LABEL_73;
            v58 = (const MethodInfo_31FD970 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__;
            v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
          }
          Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(v59, v19, v58);
          if ( Instance )
          {
            if ( !v21 )
              goto LABEL_73;
            v66 = v21->fields._items;
            v67 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
            ++v21->fields._version;
            if ( !v66 )
              goto LABEL_73;
            v68 = v21->fields._size;
            v69 = Instance;
            if ( (unsigned int)v68 >= v66->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = &v66->obj.klass + v68;
              v21->fields._size = v68 + 1;
              v70[4] = (Il2CppClass *)v69;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v70 + 4), v69, v60, v61, v62, v63, v64, v65);
            }
          }
        }
      }
LABEL_70:
      if ( v23 == ++v55 )
        goto LABEL_71;
    }
  }
  if ( (int)Instance >= 1 )
  {
    for ( i = 0; v23 != i; ++i )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_73;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            i,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)v25
          && *(TblFriendEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v25 - 8) == TblFriendEntity_TypeInfo )
        {
          v26 = *(_DWORD *)(Instance + 32);
          if ( (unsigned int)(v26 - 1) <= 1 )
          {
            v19 = *(_QWORD *)(Instance + 16);
            if ( v19 == userId )
            {
              if ( v26 != kind )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
              v19 = *(_QWORD *)(Instance + 24);
            }
            else
            {
              if ( v26 == kind || *(_QWORD *)(Instance + 24) != userId )
                continue;
              if ( !MasterData_object )
                goto LABEL_73;
            }
            Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  v19,
                                  (const MethodInfo_31FD970 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
            if ( Instance )
            {
              if ( !v21 )
                goto LABEL_73;
              v33 = v21->fields._items;
              v34 = Method_System_Collections_Generic_List_OtherUserGameEntity__Add__;
              ++v21->fields._version;
              if ( !v33 )
                goto LABEL_73;
              v35 = v21->fields._size;
              v36 = Instance;
              if ( (unsigned int)v35 >= v33->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &v33->obj.klass + v35;
                v21->fields._size = v35 + 1;
                v37[4] = (Il2CppClass *)v36;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), v36, v27, v28, v29, v30, v31, v32);
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
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_OtherUserGameEntity__ToArray__);
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

  if ( (byte_4B6771E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserProfileMaster___, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v8);
    byte_4B6771E = 1;
  }
  if ( kind )
  {
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this->fields.list )
      goto LABEL_39;
    v11 = SelfUserGame;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                       (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                                       (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        sub_1BE4D28(SelfUserGame, v10);
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
                (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_39;
    SelfUserGame = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserProfileMaster___);
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
  NetworkManager_c *v14; // x0
  Il2CppObject *MasterData_object; // x20
  int v16; // w0
  int32_t v17; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  UserFollowEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B67721 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserFollowMaster___, v8);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v11);
    byte_4B67721 = 1;
  }
  entity = 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B61717 = 1;
  }
  v14 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager_TypeInfo;
  }
  if ( kind == 9 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_38;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)list,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserFollowMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
      byte_4B61717 = 1;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      list = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_38;
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
        LOBYTE(v16) = UserFollowEntity__IsLock(entity, 0LL);
        return v16 & 1;
      }
LABEL_38:
      sub_1BE4D28(list, *(_QWORD *)&kind);
    }
LABEL_34:
    LOBYTE(v16) = 0;
    return v16 & 1;
  }
  if ( Count < 1 )
    goto LABEL_34;
  v17 = 0;
  userIdNumber = (void *)v14->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_38;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v17,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
        {
          v16 = (BYTE4(Item[2].klass) >> 3) & 1;
          return v16 & 1;
        }
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          break;
      }
    }
    if ( Count == ++v17 )
      goto LABEL_34;
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

  if ( (byte_4B6771B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__, entity);
    byte_4B6771B = 1;
  }
  PK = (Il2CppObject *)TblFriendEntity__CreatePK(userId, friendId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_TblFriendMaster__TblFriendEntity__string__TryGetEntity__);
}


bool __fastcall TblFriendMaster__isFriend(TblFriendMaster_o *this, int64_t otherUserId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  NetworkManager_c *v10; // x0
  int32_t v11; // w22
  void *userIdNumber; // x23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4B67722 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, otherUserId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v7);
    byte_4B67722 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1BE4D28(list, otherUserId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, otherUserId);
    byte_4B61717 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( Count < 1 )
    return 0;
  v11 = 0;
  userIdNumber = (void *)v10->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_24;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v11,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == 3 )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
          return 1;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          return 1;
      }
    }
    if ( Count == ++v11 )
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
  NetworkManager_c *v12; // x0
  int32_t v13; // w23
  void *userIdNumber; // x24
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8

  if ( (byte_4B67720 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&TblFriendEntity_TypeInfo, v9);
    byte_4B67720 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_28:
    sub_1BE4D28(list, *(_QWORD *)&kind);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&kind);
    byte_4B61717 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( Count < 1 )
    return 0;
  v13 = 0;
  userIdNumber = (void *)v12->static_fields->userIdNumber;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v13,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(TblFriendEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (TblFriendEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == TblFriendEntity_TypeInfo
        && LODWORD(Item[2].klass) == kind )
      {
        klass = Item[1].klass;
        if ( klass == userIdNumber && Item[1].monitor == (void *)otherUserId )
          return (BYTE4(Item[2].klass) & 2) == 0;
        if ( klass == (Il2CppClass *)otherUserId && Item[1].monitor == userIdNumber )
          break;
      }
    }
    if ( Count == ++v13 )
      return 0;
  }
  return (BYTE4(Item[2].klass) & 4) == 0;
}