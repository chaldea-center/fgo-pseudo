void CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C770 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_593C770 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedUserServantNpLvDict,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  __int64 v5; // x22
  __int64 v6; // x23
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  ServantCostumeMaster_o *v16; // x21
  int m_CancellationTokenSource; // w8
  CheckCombineEnalbleControl_o *v18; // x21
  int i; // w28
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  ServantCostumeEntity_o *v23; // x22
  bool IsEventCombineCostume; // w0
  __int64 v25; // x1
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x24
  int32_t svtId; // w23
  __int128 v28; // q1
  int v29; // w8
  __int128 v30; // q1
  int v31; // w8
  __int64 v33; // x19
  __int64 v34; // x21
  System_Collections_Generic_List_int__o *v35; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v4 = this;
  if ( (byte_593C76E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C76E = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_44;
  v5 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
  *(_QWORD *)&v39.fields.currentCryptoKey = v5;
  *(_QWORD *)&v39.fields.fakeValue = v6;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v39, 0);
  if ( !servantCostumeMaster )
    goto LABEL_44;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
        *(_QWORD *)&v40.fields.currentCryptoKey = v10;
        *(_QWORD *)&v40.fields.fakeValue = v11;
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v40, 0);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v12,
               (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          v16 = v4->fields.servantCostumeMaster;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
          *(_QWORD *)&v41.fields.currentCryptoKey = v14;
          *(_QWORD *)&v41.fields.fakeValue = v15;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                   v41,
                                                   0);
          if ( !v16 )
            goto LABEL_44;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v16,
                                                   (int32_t)this,
                                                   0,
                                                   1,
                                                   0);
          if ( !this )
            goto LABEL_44;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v18 = this;
          if ( m_CancellationTokenSource >= 1 )
          {
            for ( i = 0; i < m_CancellationTokenSource; ++i )
            {
              if ( i >= (unsigned int)m_CancellationTokenSource )
                sub_21FFED4(this);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              v23 = (ServantCostumeEntity_o *)*((_QWORD *)&v18->fields.servantMaster + i);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
              *(_QWORD *)&v42.fields.currentCryptoKey = v21;
              *(_QWORD *)&v42.fields.fakeValue = v22;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                       v42,
                                                       0);
              if ( !v23 || !userServantCollectionMaster )
                goto LABEL_44;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v23->fields.id,
                                                       0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (CheckCombineEnalbleControl_o *)v4->fields.cosReleaseMaster;
                if ( !this )
                  goto LABEL_44;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         (ServantCostumeReleaseMaster_o *)this,
                                                         v23->fields.svtId,
                                                         v23->fields.id,
                                                         0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v23, 0);
                  cosReleaseMaster = v4->fields.cosReleaseMaster;
                  svtId = v23->fields.svtId;
                  if ( IsEventCombineCostume )
                  {
                    v28 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v29 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v38.fields.fakeValue = v28;
                    if ( !v29 )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
                    v37 = v38;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                             &v37,
                                                             0);
                    if ( !cosReleaseMaster )
                      goto LABEL_44;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             cosReleaseMaster,
                                                             v23,
                                                             svtId,
                                                             (int64_t)this,
                                                             0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_40;
                  }
                  else
                  {
                    v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v38.fields.fakeValue = v30;
                    if ( !v31 )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
                    v36 = v38;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                             &v36,
                                                             0);
                    if ( !cosReleaseMaster )
                      goto LABEL_44;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             cosReleaseMaster,
                                                             v23,
                                                             svtId,
                                                             (int64_t)this,
                                                             0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_40:
                      v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      v35 = v4->fields.costumeSvtIdList;
                      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          userSvtEntity);
                      *(_QWORD *)&v43.fields.currentCryptoKey = v34;
                      *(_QWORD *)&v43.fields.fakeValue = v33;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                               v43,
                                                               0);
                      if ( v35 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v35,
                          (int32_t)this,
                          (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_44:
                      sub_21FFECC(this, userSvtEntity);
                    }
                  }
                }
              }
              m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
            }
          }
        }
      }
    }
  }
  return 0;
}


bool CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  void *isExceedFriendshipMax; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  int32_t v7; // w21
  __int64 v8; // x22
  __int64 v9; // x23
  int v10; // w22
  __int64 v11; // x22
  __int64 v12; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x21
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  __int128 v16; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  int64_t v18; // x23
  _DWORD *v19; // x22
  int v20; // w8
  __int64 v21; // x25
  int *v22; // x21
  __int64 v23; // x27
  unsigned int v24; // w26
  UserItemMaster_o *userItemMaster; // x23
  __int64 v27; // x19
  __int64 v28; // x21
  struct System_Collections_Generic_List_int__o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_593C76F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C76F = 1;
  }
  isExceedFriendshipMax = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userServantEntity);
    isExceedFriendshipMax = BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*((_QWORD *)isExceedFriendshipMax + 23) + 712LL) > 0 )
    return 0;
  if ( !userServantEntity )
    goto LABEL_19;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0)
    || UserServantEntity__IsHeroine(userServantEntity, 0)
    && !UserServantEntity__IsUseFriendshipExceedItemHeroine(userServantEntity, 0) )
  {
    return 0;
  }
  isExceedFriendshipMax = (void *)UserServantEntity__isExceedFriendshipMax(userServantEntity, 0);
  if ( ((unsigned __int8)isExceedFriendshipMax & 1) != 0 )
    return 0;
  friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
  if ( !friendshipExceedSvtIdList )
    goto LABEL_19;
  v7 = 0;
  while ( v7 < friendshipExceedSvtIdList->fields._size )
  {
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    *(_QWORD *)&v33.fields.currentCryptoKey = v8;
    *(_QWORD *)&v33.fields.fakeValue = v9;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v33, 0);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v10 = (int)isExceedFriendshipMax;
      isExceedFriendshipMax = (void *)System_Collections_Generic_List_int___get_Item(
                                        this->fields.friendshipExceedSvtIdList,
                                        v7,
                                        (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v10 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v7;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_19;
  }
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v12;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v34, 0);
  if ( !servantMaster )
    goto LABEL_19;
  v15 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          (int32_t)isExceedFriendshipMax,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v16 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v16;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
  v30 = v31;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v30, 0);
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                    userServantEntity->fields.svtId,
                                    0);
  if ( !userServantCollectionMaster )
    goto LABEL_19;
  isExceedFriendshipMax = UserServantCollectionMaster__GetEntity(
                            userServantCollectionMaster,
                            v18,
                            (int32_t)isExceedFriendshipMax,
                            0);
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  v19 = isExceedFriendshipMax;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)isExceedFriendshipMax
                                                                                       + 108),
                                    0);
  if ( !v15 )
    goto LABEL_19;
  v20 = v19[31] + HIDWORD(v15[6].klass);
  if ( (int)isExceedFriendshipMax < v20 )
    return 0;
  isExceedFriendshipMax = this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax
    || (isExceedFriendshipMax = FriendshipMaster__GetEntity(
                                  (FriendshipMaster_o *)isExceedFriendshipMax,
                                  (int32_t)v15[6].klass,
                                  v20 + 1,
                                  0)) == 0
    || (v21 = *((_QWORD *)isExceedFriendshipMax + 5), v22 = (int *)isExceedFriendshipMax, !v21) )
  {
LABEL_19:
    sub_21FFECC(isExceedFriendshipMax, userServantEntity);
  }
  if ( *(int *)(v21 + 24) >= 1 )
  {
    v23 = *((_QWORD *)isExceedFriendshipMax + 4);
    v24 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userServantEntity);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      isExceedFriendshipMax = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userServantEntity);
        isExceedFriendshipMax = NetworkManager_TypeInfo;
      }
      if ( v24 >= *(_DWORD *)(v21 + 24) )
LABEL_55:
        sub_21FFED4(isExceedFriendshipMax);
      if ( !userItemMaster )
        goto LABEL_19;
      isExceedFriendshipMax = (void *)UserItemMaster__TryGetEntity(
                                        userItemMaster,
                                        &entity,
                                        *(_QWORD *)(*((_QWORD *)isExceedFriendshipMax + 23) + 64LL),
                                        *(_DWORD *)(v21 + 4LL * (int)v24 + 32),
                                        0);
      if ( ((unsigned __int8)isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v23 )
        goto LABEL_19;
      if ( v24 >= *(_DWORD *)(v23 + 24) )
        goto LABEL_55;
      if ( entity->fields.num < *(_DWORD *)(v23 + 4LL * (int)v24 + 32) )
        return 0;
    }
    while ( (signed int)++v24 < *(_DWORD *)(v21 + 24) );
  }
  if ( this->fields.haveQpVal >= v22[7] )
  {
    v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v29 = this->fields.friendshipExceedSvtIdList;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    *(_QWORD *)&v35.fields.currentCryptoKey = v28;
    *(_QWORD *)&v35.fields.fakeValue = v27;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v35, 0);
    if ( v29 )
    {
      sub_1FF1854(v29, (unsigned int)isExceedFriendshipMax, Method_System_Collections_Generic_List_int__Add__);
      return 1;
    }
    goto LABEL_19;
  }
  return 0;
}


bool CheckCombineEnalbleControl__GetIsLimitUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v6; // x20
  bool isLimitCountMax; // w0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  bool v11; // w24
  int32_t v12; // w22
  __int64 v13; // x1
  int ServantLimitCountSealedQuestOpen; // w19
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  ServantLimitImageMaster_o *v18; // x23
  __int64 v19; // x20
  __int64 v20; // x21
  __int64 v21; // x1
  __int64 v22; // x19
  __int64 v23; // x20
  int32_t v24; // w0
  struct UserServantMaster_o *userServantMaster; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x29
  unsigned __int64 v28; // x28
  __int128 v29; // q1
  int32_t v30; // w22
  int32_t v31; // w25
  UserItemMaster_o *userItemMaster; // x23
  int v33; // w8
  _BOOL4 v34; // w23
  __int64 v35; // x1
  Il2CppObject *v36; // x20
  __int64 v37; // x21
  __int64 v38; // x22
  int32_t v39; // w21
  int64_t condNum; // x22
  int32_t condType; // w20
  int32_t condTargetId; // w21
  CheckCombineEnalbleControl_o *v43; // [xsp+0h] [xbp-C0h]
  int v44; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v48; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v6 = this;
  if ( (byte_593C76B & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_593C76B = 1;
  }
  entity = 0;
  v48 = 0;
  if ( !usrData )
    goto LABEL_52;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0);
  v9 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v11 = isLimitCountMax;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v49.fields.currentCryptoKey = v9;
  *(_QWORD *)&v49.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v49, 0);
  if ( UserServantEntity__IsHeroine(usrData, 0) )
    goto LABEL_7;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !v11 )
  {
    this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( servantEntity )
      {
        this = (CheckCombineEnalbleControl_o *)v6->fields.combineLimitMaster;
        if ( this )
        {
          this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                                   (CombineLimitMaster_o *)this,
                                                   servantEntity->fields.combineLimitId,
                                                   v12,
                                                   0);
          if ( this )
          {
            userServantMaster = this->fields.userServantMaster;
            if ( userServantMaster )
            {
              MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
              v43 = this;
              if ( (int)MasterName_k__BackingField < 1 )
              {
LABEL_41:
                v44 = 0;
LABEL_42:
                v34 = v6->fields.haveQpVal >= SLODWORD(v43->fields.m_CancellationTokenSource);
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrData);
                v36 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                v37 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
                v38 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
                *(_QWORD *)&v52.fields.currentCryptoKey = v37;
                *(_QWORD *)&v52.fields.fakeValue = v38;
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v52, 0);
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                         usrData->fields.limitCount,
                                                         0);
                if ( v36 )
                {
                  ServantLimitCountSealedQuestOpen = v34 & v44;
                  this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                                           (CombineLimitReleaseMaster_o *)v36,
                                                           &v48,
                                                           v39,
                                                           (_DWORD)this + 1,
                                                           0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    return ServantLimitCountSealedQuestOpen;
                  if ( v48 )
                  {
                    condNum = v48->fields.condNum;
                    condType = v48->fields.condType;
                    condTargetId = v48->fields.condTargetId;
                    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, usrData);
                    return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0) & ServantLimitCountSealedQuestOpen;
                  }
                }
              }
              else
              {
                v44 = 0;
                servantMaster = this->fields.servantMaster;
                v28 = 0;
                while ( 1 )
                {
                  if ( v28 >= (unsigned int)MasterName_k__BackingField )
                    goto LABEL_53;
                  if ( !servantMaster )
                    break;
                  if ( v28 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_53:
                    sub_21FFED4(this);
                  v29 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
                  v30 = *(&userServantMaster->fields.revision + v28);
                  v31 = *(&servantMaster->fields.revision + v28);
                  userItemMaster = v6->fields.userItemMaster;
                  v33 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
                  *(_OWORD *)&v46.fields.fakeValue = v29;
                  if ( !v33 )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrData);
                  v45 = v46;
                  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                           &v45,
                                                           0);
                  if ( !userItemMaster )
                    break;
                  this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                           userItemMaster,
                                                           &entity,
                                                           (int64_t)this,
                                                           v30,
                                                           0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_41;
                  if ( !entity )
                    break;
                  if ( v30 == entity->fields.itemId )
                  {
                    if ( v31 > entity->fields.num )
                      goto LABEL_41;
                    v44 = 1;
                  }
                  LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
                  if ( (__int64)++v28 >= (int)MasterName_k__BackingField )
                    goto LABEL_42;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_21FFECC(this, usrData);
    }
LABEL_7:
    LOBYTE(ServantLimitCountSealedQuestOpen) = 0;
    return ServantLimitCountSealedQuestOpen;
  }
  v18 = (ServantLimitImageMaster_o *)Master_object;
  v19 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v50.fields.currentCryptoKey = v19;
  *(_QWORD *)&v50.fields.fakeValue = v20;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v50, 0);
  if ( !v18 )
    goto LABEL_52;
  if ( !ServantLimitImageMaster__IsServantLimitCountSeal(v18, (int32_t)this, v12, 0) )
    goto LABEL_7;
  v23 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v51.fields.currentCryptoKey = v23;
  *(_QWORD *)&v51.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v51, 0);
  ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(v18, v24, v12, 0);
  if ( !ServantLimitCountSealedQuestOpen )
    return ServantLimitCountSealedQuestOpen;
  this = (CheckCombineEnalbleControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this )
    goto LABEL_52;
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, ServantLimitCountSealedQuestOpen, 0, 0);
}


bool CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  bool isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x24
  _BOOL4 v10; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v12; // x1
  int32_t *v13; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v15; // x24
  System_Collections_Generic_HashSet_int__o *v16; // x22
  System_Collections_Generic_HashSet_int__o *v17; // x23
  int max_length; // w8
  __int64 v19; // x27
  CommonConsumeEntity_o *v20; // x26
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x25
  __int64 v24; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x24
  System_Int32_array *v26; // x22
  System_Int32_array *v27; // x0
  const MethodInfo *v28; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v4 = this;
  if ( (byte_593C76D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C76D = 1;
  }
  if ( !usrData )
    goto LABEL_36;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0);
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v10 = isLimitCountMax;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v30.fields.currentCryptoKey = v8;
  *(_QWORD *)&v30.fields.fakeValue = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0);
  if ( UserServantEntity__IsHeroine(usrData, 0) )
  {
    if ( isExceedLvMax | !UserServantEntity__IsUseLevelExceedItemHeroine(usrData, 0) )
      return 0;
  }
  else if ( isExceedLvMax )
  {
    return 0;
  }
  if ( (v10 & UserServantEntity__isLevelMax(usrData, 0) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0);
  if ( !SvtExceedEnt )
    return 0;
  v13 = (int32_t *)SvtExceedEnt;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_36;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v13[12], 0);
  if ( IdEntityList )
  {
    v15 = IdEntityList;
    v16 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v16,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v17 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v17,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    max_length = v15->max_length;
    if ( max_length < 1 )
    {
LABEL_24:
      if ( v13[13] >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrData);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtCoinMaster___);
        v23 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
        v24 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
        v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
        *(_QWORD *)&v31.fields.currentCryptoKey = v23;
        *(_QWORD *)&v31.fields.fakeValue = v24;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                 v31,
                                                 0);
        if ( !v25 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v25,
                                                 (int32_t)this,
                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_36;
        if ( !v16 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                                 v16,
                                                 (int32_t)this->fields.m_CancellationTokenSource,
                                                 (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( !v17 )
          goto LABEL_36;
        System_Collections_Generic_HashSet_int___Add(
          v17,
          v13[13],
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v26 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      v27 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      return CombineUtility__CheckCombineNeedItemsEnough(usrData, v26, v27, v4->fields.haveQpVal, v13[8], v28);
    }
    v19 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= max_length )
        sub_21FFED4(this);
      v20 = v15->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v16 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v16,
                                               v20->fields.objectId,
                                               (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v17 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v17,
                                               v20->fields.num,
                                               (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v15->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_24;
    }
LABEL_36:
    sub_21FFECC(this, usrData);
  }
  return 0;
}


bool CheckCombineEnalbleControl__GetIsNpUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x19
  int SameSvtNpLvCache; // w0
  int lv; // w21
  int v7; // w20
  int v8; // w22
  int64_t v9; // x8
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0;
  if ( !usrData )
    goto LABEL_22;
  v4 = this;
  if ( UserServantEntity__IsHeroine(usrData, 0) )
    return 0;
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__getTreasureDeviceInfo(usrData, &tdInfo, -1, -1, 0, 0);
  if ( !tdInfo )
    goto LABEL_22;
  if ( tdInfo->fields.id < 1 || tdInfo->fields.lv > 4 )
    return 0;
  this = (CheckCombineEnalbleControl_o *)v4->fields.userServantMaster;
  if ( !this )
    goto LABEL_22;
  SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                       (UserServantMaster_o *)this,
                       usrData,
                       &v4->fields.cachedUserServantNpLvDict,
                       0);
  if ( SameSvtNpLvCache < 1 )
    return 0;
  if ( v4->fields.haveQpVal > 1200000 )
    return 1;
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__checkTreasureDeviceLevelUp(usrData, SameSvtNpLvCache, 0);
  if ( !tdInfo )
LABEL_22:
    sub_21FFECC(this, usrData);
  lv = tdInfo->fields.lv;
  v7 = (int)this;
  if ( lv >= (int)this )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    do
    {
      if ( !tdInfo )
        goto LABEL_22;
      this = (CheckCombineEnalbleControl_o *)v4->fields.treasureDvcLvMaster;
      if ( !this )
        goto LABEL_22;
      this = (CheckCombineEnalbleControl_o *)TreasureDvcLvMaster__GetEntity(
                                               (TreasureDvcLvMaster_o *)this,
                                               tdInfo->fields.id,
                                               lv,
                                               0);
      if ( this )
        v8 += HIDWORD(this->fields.combineSkillMaster);
      ++lv;
    }
    while ( v7 != lv );
    v9 = v8;
  }
  return v4->fields.haveQpVal >= v9;
}


bool CheckCombineEnalbleControl__GetIsSkillUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v5; // x20
  System_Int32_array *SkillIdList; // x26
  il2cpp_array_size_t max_length; // x8
  bool v8; // w27
  unsigned __int64 v9; // x28
  int32_t v10; // w24
  struct ServantMaster_o *servantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v13; // x24
  struct UserServantMaster_o *userServantMaster; // x29
  System_Int32_array *v15; // x20
  int32_t v16; // w25
  int32_t v17; // w23
  UserItemMaster_o *userItemMaster; // x26
  __int128 v19; // q1
  int v20; // w8
  CheckCombineEnalbleControl_o *v22; // [xsp+8h] [xbp-D8h]
  char v23; // [xsp+14h] [xbp-CCh]
  UserServantEntity_o *v24; // [xsp+18h] [xbp-C8h]
  CheckCombineEnalbleControl_o *v25; // [xsp+20h] [xbp-C0h]
  CheckCombineEnalbleControl_o *v26; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+50h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v5 = usrData;
  v26 = this;
  if ( (byte_593C76C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (CheckCombineEnalbleControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C76C = 1;
  }
  entity = 0;
  if ( !v5
    || (SkillIdList = UserServantEntity__getSkillIdList(v5, -1, -1, 1, -1, 0),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))v5->klass->vtable._6_getSkillLevelList.methodPtr)(
                                                 v5,
                                                 v5->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_38:
    sub_21FFECC(this, usrData);
  }
  max_length = SkillIdList->max_length;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v24 = v5;
    v25 = this;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_39;
      if ( !v25 )
        goto LABEL_38;
      if ( v9 >= LODWORD(v25->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v9];
      if ( (int)usrData >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v26->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v10 = *((_DWORD *)&v25->fields.servantMaster + v9);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 (int32_t)usrData,
                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_38;
        if ( v10 < SLODWORD(this->fields.userServantMaster) )
        {
          if ( !servantEntity )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)v26->fields.combineSkillMaster;
          if ( !this )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                   (CombineSkillMaster_o *)this,
                                                   servantEntity->fields.combineSkillId,
                                                   v10,
                                                   0);
          v22 = this;
          if ( this )
          {
            servantMaster = this->fields.servantMaster;
            if ( !servantMaster )
              goto LABEL_38;
            MasterName_k__BackingField = servantMaster->fields._MasterName_k__BackingField;
            if ( (int)MasterName_k__BackingField >= 1 )
            {
              v13 = 0;
              v23 = 0;
              userServantMaster = this->fields.userServantMaster;
              while ( v13 < (unsigned int)MasterName_k__BackingField )
              {
                if ( !userServantMaster )
                  goto LABEL_38;
                if ( v13 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
                  break;
                v15 = SkillIdList;
                v16 = *(&servantMaster->fields.revision + v13);
                v17 = *(&userServantMaster->fields.revision + v13);
                userItemMaster = v26->fields.userItemMaster;
                v19 = *(_OWORD *)&v24->fields.userId.fields.fakeValue;
                v20 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v24->fields.userId.fields.currentCryptoKey;
                *(_OWORD *)&v28.fields.fakeValue = v19;
                if ( !v20 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrData);
                v27 = v28;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                         &v27,
                                                         0);
                if ( !userItemMaster )
                  goto LABEL_38;
                this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                         userItemMaster,
                                                         &entity,
                                                         (int64_t)this,
                                                         v16,
                                                         0);
                SkillIdList = v15;
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_36;
                if ( !entity )
                  goto LABEL_38;
                if ( v16 == entity->fields.itemId )
                {
                  if ( v17 > entity->fields.num )
                    goto LABEL_36;
                  v23 = 1;
                }
                LODWORD(MasterName_k__BackingField) = servantMaster->fields._MasterName_k__BackingField;
                if ( (__int64)++v13 >= (int)MasterName_k__BackingField )
                  goto LABEL_34;
              }
LABEL_39:
              sub_21FFED4(this);
            }
            v23 = 0;
LABEL_34:
            if ( v26->fields.haveQpVal >= SLODWORD(v22->fields.m_CancellationTokenSource) && (v23 & 1) != 0 )
              return v8;
          }
        }
      }
LABEL_36:
      LODWORD(max_length) = SkillIdList->max_length;
      v8 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return v8;
}


void CheckCombineEnalbleControl__SetCombineEnableInfo(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  int64_t v5; // x8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_int__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w8
  int *v21; // x10
  int v22; // w19
  int32_t v23; // w24
  int32_t v24; // w26
  int32_t v25; // w25
  int32_t v26; // w28
  int32_t v27; // w29
  int32_t v28; // w20
  __int64 v29; // x21
  CheckCombineEnalbleControl_o *v30; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x8
  UserServantEntity_o **v43; // x21
  unsigned __int64 v44; // x19
  CombineEnableData_o *v45; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct CombineEnableData_o *v53; // x8
  int *v54; // [xsp+0h] [xbp-70h]
  int32_t v55; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_593C769 & 1) == 0 )
  {
    sub_21FFC50(&CombineEnableData_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C769 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v5 = *((_QWORD *)SelfUserGame + 12);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v5;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.costumeSvtIdList,
    (int32_t)CostumeSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendshipExceedSvtIdList,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v20 = *((_DWORD *)SelfUserGame + 6);
  v21 = (int *)SelfUserGame;
  if ( v20 >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v54 = (int *)SelfUserGame;
    while ( v22 < (unsigned int)v20 )
    {
      v55 = v23;
      v29 = *(_QWORD *)&v21[2 * v22 + 8];
      if ( !v29 )
        goto LABEL_26;
      v30 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v32 = *(_QWORD *)(v29 + 80);
      v33 = *(_QWORD *)(v29 + 88);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
      *(_QWORD *)&v56.fields.currentCryptoKey = v32;
      *(_QWORD *)&v56.fields.fakeValue = v33;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v30;
      v28 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v30,
               (UserServantEntity_o *)v29,
               (ServantEntity_o *)Entity,
               v35);
      v27 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v30,
               (UserServantEntity_o *)v29,
               (ServantEntity_o *)Entity,
               v36);
      v26 += CheckCombineEnalbleControl__GetIsNpUpEnable(v30, (UserServantEntity_o *)v29, v37);
      v25 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v30, (UserServantEntity_o *)v29, v38);
      v24 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v30, (UserServantEntity_o *)v29, v39);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v30,
                               (UserServantEntity_o *)v29,
                               v40);
      v21 = v54;
      ++v22;
      v20 = v54[6];
      v23 = v55 + ((unsigned __int8)SelfUserGame & 1);
      if ( v22 >= v20 )
        goto LABEL_18;
    }
LABEL_27:
    sub_21FFED4(SelfUserGame);
  }
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v42 = *((_QWORD *)SelfUserGame + 3);
  v43 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v42 >= 1 )
  {
    v44 = 0;
    while ( v44 < (unsigned int)v42 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v43[v44 + 4], v41);
      LODWORD(v42) = *((_DWORD *)v43 + 6);
      ++v44;
      v24 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v44 >= (int)v42 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v45 = (CombineEnableData_o *)sub_21FFEBC(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v45, 0);
  this->fields.combineEnalbeInfo = v45;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_combineEnalbeInfo, (int32_t)v45, v47, v48, v49, v50, v51, v52);
  v53 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_21FFECC(SelfUserGame, v4);
  v53->fields.limitUpEnableNum = v28;
  v53->fields.skillUpEnableNum = v27;
  v53->fields.npUpEnableNum = v26;
  v53->fields.lvExceedEnableNum = v25;
  v53->fields.costumeCombineEnableNum = v24;
  v53->fields.friendshipExceedEnableNum = v23;
}


void CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  Il2CppObject *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  Il2CppObject *v61; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  Il2CppObject *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  Il2CppObject *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  Il2CppObject *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  Il2CppObject *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7

  if ( (byte_593C76A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C76A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantMaster,
    (int32_t)MasterData_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantMaster,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantStorageMaster,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantCollectionMaster,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineLimitMaster,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userItemMaster,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v47 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v47;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillMaster, (int32_t)v47, v48, v49, v50, v51, v52, v53);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v54;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineSkillMaster,
    (int32_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v61 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v61;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDvcMaster,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v68 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v68;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureDvcLvMaster,
    (int32_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v75 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v75;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantCostumeMaster,
    (int32_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v82 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v82,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.cosReleaseMaster,
          (int32_t)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_17:
    sub_21FFECC(Instance, v4);
  }
  v89 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v89;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendshipMaster,
    (int32_t)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
}


CombineEnableData_o *CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}