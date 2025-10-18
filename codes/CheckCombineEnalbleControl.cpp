void CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46DC4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_4C46DC4 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedUserServantNpLvDict, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  ServantCostumeMaster_o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  int m_CancellationTokenSource; // w8
  CheckCombineEnalbleControl_o *v16; // x21
  int v17; // w28
  UserServantEntity_Fields *p_fields; // x29
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v20; // x22
  __int64 v21; // x24
  __int64 v22; // x25
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  bool IsEventCombineCostume; // w0
  ServantCostumeReleaseMaster_o *v27; // x23
  __int64 v28; // x24
  __int64 v29; // x26
  bool v30; // w25
  int32_t v31; // w24
  __int128 v32; // q0
  __int128 v33; // q0
  System_Collections_Generic_List_int__o *v35; // x20
  __int64 v36; // x19
  __int64 v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v4 = this;
  if ( (byte_4C46DC2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C46DC2 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_48;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v7;
  *(_QWORD *)&v41.fields.fakeValue = v6;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0);
  if ( !servantCostumeMaster )
    goto LABEL_48;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v10;
        *(_QWORD *)&v42.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v42, 0);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v11,
               (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v12 = v4->fields.servantCostumeMaster;
          v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v43.fields.currentCryptoKey = v14;
          *(_QWORD *)&v43.fields.fakeValue = v13;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                   v43,
                                                   0);
          if ( !v12 )
            goto LABEL_48;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v12,
                                                   (int32_t)this,
                                                   0,
                                                   0);
          if ( !this )
            goto LABEL_48;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v16 = this;
          if ( m_CancellationTokenSource >= 1 )
          {
            v17 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v17 >= (unsigned int)m_CancellationTokenSource )
                sub_1C372BC(this);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v20 = (ServantCostumeEntity_o *)*((_QWORD *)&v16->fields.servantMaster + v17);
              v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v44.fields.currentCryptoKey = v22;
              *(_QWORD *)&v44.fields.fakeValue = v21;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                       v44,
                                                       0);
              if ( !v20 || !userServantCollectionMaster )
                goto LABEL_48;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v20->fields.id,
                                                       0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v4->fields.cosReleaseMaster;
                v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v24 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v45.fields.currentCryptoKey = v25;
                *(_QWORD *)&v45.fields.fakeValue = v24;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                         v45,
                                                         0);
                if ( !cosReleaseMaster )
                  goto LABEL_48;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v20->fields.id,
                                                         0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v20, 0);
                  v27 = v4->fields.cosReleaseMaster;
                  v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  v30 = IsEventCombineCostume;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v46.fields.currentCryptoKey = v29;
                  *(_QWORD *)&v46.fields.fakeValue = v28;
                  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v46, 0);
                  if ( v30 )
                  {
                    v32 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v40.fields.fakeValue = v32;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v39 = v40;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                             &v39,
                                                             0);
                    if ( !v27 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v31,
                                                             (int64_t)this,
                                                             0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_44;
                  }
                  else
                  {
                    v33 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v40.fields.fakeValue = v33;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v38 = v40;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                             &v38,
                                                             0);
                    if ( !v27 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v31,
                                                             (int64_t)this,
                                                             0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_44:
                      v35 = v4->fields.costumeSvtIdList;
                      v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v47.fields.currentCryptoKey = v37;
                      *(_QWORD *)&v47.fields.fakeValue = v36;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v47,
                                                               0);
                      if ( v35 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v35,
                          (int32_t)this,
                          (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1C372B4(this);
                    }
                  }
                }
              }
              m_CancellationTokenSource = (int)v16->fields.m_CancellationTokenSource;
              ++v17;
            }
            while ( v17 < m_CancellationTokenSource );
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
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  Il2CppObject *v14; // x0
  __int128 v15; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  Il2CppObject *v17; // x21
  int64_t v18; // x23
  _DWORD *v19; // x22
  int v20; // w8
  __int64 v21; // x25
  int *v22; // x21
  __int64 v23; // x27
  unsigned int v24; // w26
  UserItemMaster_o *userItemMaster; // x23
  struct System_Collections_Generic_List_int__o *v27; // x20
  __int64 v28; // x19
  __int64 v29; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C46DC3 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C46DC3 = 1;
  }
  isExceedFriendshipMax = BalanceConfig_TypeInfo;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    isExceedFriendshipMax = BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*((_QWORD *)isExceedFriendshipMax + 23) + 720LL) > 0 )
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
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v9;
    *(_QWORD *)&v36.fields.fakeValue = v8;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v36, 0);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v10 = (int)isExceedFriendshipMax;
      isExceedFriendshipMax = (void *)System_Collections_Generic_List_int___get_Item(
                                        this->fields.friendshipExceedSvtIdList,
                                        v7,
                                        (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v10 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v7;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_19;
  }
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v13;
  *(_QWORD *)&v37.fields.fakeValue = v12;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v37, 0);
  if ( !servantMaster )
    goto LABEL_19;
  v14 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          (int32_t)isExceedFriendshipMax,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v15 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v17 = v14;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v34;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v33, 0);
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
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
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)isExceedFriendshipMax
                                                                                       + 100),
                                    0);
  if ( !v17 )
    goto LABEL_19;
  v20 = v19[29] + HIDWORD(v17[6].klass);
  if ( (int)isExceedFriendshipMax < v20 )
    return 0;
  isExceedFriendshipMax = this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  isExceedFriendshipMax = FriendshipMaster__GetEntity(
                            (FriendshipMaster_o *)isExceedFriendshipMax,
                            (int32_t)v17[6].klass,
                            v20 + 1,
                            0);
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  v21 = *((_QWORD *)isExceedFriendshipMax + 5);
  v22 = (int *)isExceedFriendshipMax;
  if ( !v21 )
    goto LABEL_19;
  if ( *(int *)(v21 + 24) >= 1 )
  {
    v23 = *((_QWORD *)isExceedFriendshipMax + 4);
    v24 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      isExceedFriendshipMax = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        isExceedFriendshipMax = NetworkManager_TypeInfo;
      }
      if ( v24 >= *(_DWORD *)(v21 + 24) )
LABEL_59:
        sub_1C372BC(isExceedFriendshipMax);
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
        goto LABEL_59;
      if ( entity->fields.num < *(_DWORD *)(v23 + 4LL * (int)v24 + 32) )
        return 0;
    }
    while ( (signed int)++v24 < *(_DWORD *)(v21 + 24) );
  }
  if ( this->fields.haveQpVal < v22[7] )
    return 0;
  v27 = this->fields.friendshipExceedSvtIdList;
  v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v29;
  *(_QWORD *)&v38.fields.fakeValue = v28;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v38, 0);
  if ( !v27
    || (items = v27->fields._items,
        v31 = Method_System_Collections_Generic_List_int__Add__,
        ++v27->fields._version,
        !items) )
  {
LABEL_19:
    sub_1C372B4(isExceedFriendshipMax);
  }
  size = v27->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v27,
      (int32_t)isExceedFriendshipMax,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size] = (int)isExceedFriendshipMax;
  }
  return 1;
}


bool CheckCombineEnalbleControl__GetIsLimitUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v6; // x20
  bool isLimitCountMax; // w0
  __int64 v8; // x22
  __int64 v9; // x23
  bool v10; // w24
  int32_t v11; // w22
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v13; // x23
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x19
  __int64 v17; // x20
  int32_t v18; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w19
  struct UserServantMaster_o *userServantMaster; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x29
  unsigned __int64 v23; // x28
  int32_t v24; // w22
  __int128 v25; // q1
  int32_t v26; // w25
  UserItemMaster_o *userItemMaster; // x23
  int64_t haveQpVal; // x23
  int64_t m_CancellationTokenSource_low; // x24
  Il2CppObject *v31; // x0
  __int64 v32; // x21
  __int64 v33; // x22
  CombineLimitReleaseMaster_o *v34; // x20
  int32_t v35; // w0
  __int64 v36; // x8
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v40; // [xsp+0h] [xbp-C0h]
  char v41; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v45; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v6 = this;
  if ( (byte_4C46DBF & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C46DBF = 1;
  }
  entity = 0;
  v45 = 0;
  if ( !usrData )
    goto LABEL_52;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0);
  v9 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v10 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v9;
  *(_QWORD *)&v46.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v46, 0);
  if ( UserServantEntity__IsHeroine(usrData, 0) )
    goto LABEL_39;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( v10 )
  {
    v13 = (ServantLimitImageMaster_o *)Master_object;
    v15 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v15;
    *(_QWORD *)&v47.fields.fakeValue = v14;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v47, 0);
    if ( !v13 )
      goto LABEL_52;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v13, (int32_t)this, v11, 0) )
    {
      v17 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v17;
      *(_QWORD *)&v48.fields.fakeValue = v16;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v48, 0);
      ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(v13, v18, v11, 0);
      if ( ServantLimitCountSealedQuestOpen )
      {
        this = (CheckCombineEnalbleControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( this )
        {
          LOBYTE(ServantLimitCountSealedQuestOpen) = clsQuestCheck__CheckQuestPlayableNow(
                                                       (clsQuestCheck_o *)this,
                                                       ServantLimitCountSealedQuestOpen,
                                                       0,
                                                       0);
          return ServantLimitCountSealedQuestOpen & 1;
        }
        goto LABEL_52;
      }
      return ServantLimitCountSealedQuestOpen & 1;
    }
LABEL_39:
    LOBYTE(ServantLimitCountSealedQuestOpen) = 0;
    return ServantLimitCountSealedQuestOpen & 1;
  }
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_39;
  if ( !servantEntity )
    goto LABEL_52;
  this = (CheckCombineEnalbleControl_o *)v6->fields.combineLimitMaster;
  if ( !this )
    goto LABEL_52;
  this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                           (CombineLimitMaster_o *)this,
                                           servantEntity->fields.combineLimitId,
                                           v11,
                                           0);
  if ( !this )
    goto LABEL_52;
  userServantMaster = this->fields.userServantMaster;
  if ( !userServantMaster )
    goto LABEL_52;
  MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
  v40 = this;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    servantMaster = this->fields.servantMaster;
    v23 = 0;
    v41 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_53;
      if ( !servantMaster )
        goto LABEL_52;
      if ( v23 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_53:
        sub_1C372BC(this);
      v24 = *(&userServantMaster->fields.revision + v23);
      v25 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
      v26 = *(&servantMaster->fields.revision + v23);
      userItemMaster = v6->fields.userItemMaster;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v43.fields.fakeValue = v25;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v42 = v43;
      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                               &v42,
                                               0);
      if ( !userItemMaster )
        goto LABEL_52;
      this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                               userItemMaster,
                                               &entity,
                                               (int64_t)this,
                                               v24,
                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_52;
      if ( v24 == entity->fields.itemId )
      {
        if ( v26 > entity->fields.num )
          break;
        v41 = 1;
      }
      LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
      if ( (__int64)++v23 >= (int)MasterName_k__BackingField )
        goto LABEL_42;
    }
  }
  v41 = 0;
LABEL_42:
  haveQpVal = v6->fields.haveQpVal;
  m_CancellationTokenSource_low = SLODWORD(v40->fields.m_CancellationTokenSource);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v31 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  v33 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
  v34 = (CombineLimitReleaseMaster_o *)v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v33;
  *(_QWORD *)&v49.fields.fakeValue = v32;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v49, 0);
  v36 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v50.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  ServantLimitCountSealedQuestOpen = v35;
  *(_QWORD *)&v50.fields.currentCryptoKey = v36;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v50, 0);
  if ( !v34 )
    goto LABEL_52;
  this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                           v34,
                                           &v45,
                                           ServantLimitCountSealedQuestOpen,
                                           (_DWORD)this + 1,
                                           0);
  LOBYTE(ServantLimitCountSealedQuestOpen) = v41 & (haveQpVal >= m_CancellationTokenSource_low);
  if ( ((unsigned __int8)this & 1) == 0 )
    return ServantLimitCountSealedQuestOpen & 1;
  if ( !v45 )
LABEL_52:
    sub_1C372B4(this);
  condType = v45->fields.condType;
  condTargetId = v45->fields.condTargetId;
  condNum = v45->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(ServantLimitCountSealedQuestOpen) = ServantLimitCountSealedQuestOpen
                                           & CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
  return ServantLimitCountSealedQuestOpen & 1;
}


bool CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  bool isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v7; // x23
  __int64 v8; // x24
  _BOOL4 v9; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v11; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v13; // x24
  System_Collections_Generic_HashSet_int__o *v14; // x22
  System_Collections_Generic_HashSet_int__o *v15; // x23
  int max_length; // w8
  __int64 v17; // x27
  CommonConsumeEntity_o *v18; // x26
  Il2CppObject *Master_object; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x24
  System_Int32_array *v23; // x22
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v4 = this;
  if ( (byte_4C46DC1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46DC1 = 1;
  }
  if ( !usrData )
    goto LABEL_36;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0);
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v9 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0);
  if ( UserServantEntity__IsHeroine(usrData, 0) )
  {
    if ( isExceedLvMax | !UserServantEntity__IsUseLevelExceedItemHeroine(usrData, 0) )
      return 0;
  }
  else if ( isExceedLvMax )
  {
    return 0;
  }
  if ( (v9 & UserServantEntity__isLevelMax(usrData, 0) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0);
  if ( !SvtExceedEnt )
    return 0;
  v11 = (int32_t *)SvtExceedEnt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_36;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v11[12], 0);
  if ( IdEntityList )
  {
    v13 = IdEntityList;
    v14 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v14,
      (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v15 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v15,
      (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    max_length = v13->max_length;
    if ( max_length < 1 )
    {
LABEL_24:
      if ( v11[13] >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SvtCoinMaster___);
        v21 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
        v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = v21;
        *(_QWORD *)&v28.fields.fakeValue = v20;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                 v28,
                                                 0);
        if ( !v22 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v22,
                                                 (int32_t)this,
                                                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_36;
        if ( !v14 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                                 v14,
                                                 (int32_t)this->fields.m_CancellationTokenSource,
                                                 (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( !v15 )
          goto LABEL_36;
        System_Collections_Generic_HashSet_int___Add(
          v15,
          v11[13],
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v23 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      v24 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v15,
              (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      return CombineUtility__CheckCombineNeedItemsEnough(usrData, v23, v24, v4->fields.haveQpVal, v11[8], v25);
    }
    v17 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1C372BC(this);
      v18 = v13->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v14 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v14,
                                               v18->fields.objectId,
                                               (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v15 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v15,
                                               v18->fields.num,
                                               (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v13->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_24;
    }
LABEL_36:
    sub_1C372B4(this);
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
  TreasureDvcInfo_o *v6; // x8
  int lv; // w21
  int v8; // w20
  int v9; // w22
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0;
  if ( !usrData )
    goto LABEL_17;
  v4 = this;
  if ( UserServantEntity__IsHeroine(usrData, 0) )
    return 0;
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__getTreasureDeviceInfo(usrData, &tdInfo, -1, -1, 0, 0);
  if ( !tdInfo )
    goto LABEL_17;
  if ( tdInfo->fields.id < 1 || tdInfo->fields.lv > 4 )
    return 0;
  this = (CheckCombineEnalbleControl_o *)v4->fields.userServantMaster;
  if ( !this )
    goto LABEL_17;
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
  v6 = tdInfo;
  if ( !tdInfo )
    goto LABEL_17;
  lv = tdInfo->fields.lv;
  v8 = (int)this;
  if ( lv < (int)this )
  {
    v9 = 0;
    do
    {
      this = (CheckCombineEnalbleControl_o *)v4->fields.treasureDvcLvMaster;
      if ( !this )
        break;
      this = (CheckCombineEnalbleControl_o *)TreasureDvcLvMaster__GetEntity(
                                               (TreasureDvcLvMaster_o *)this,
                                               v6->fields.id,
                                               lv,
                                               0);
      if ( this )
        v9 += HIDWORD(this->fields.combineSkillMaster);
      if ( v8 == ++lv )
        return v4->fields.haveQpVal >= v9;
      v6 = tdInfo;
    }
    while ( tdInfo );
LABEL_17:
    sub_1C372B4(this);
  }
  v9 = 0;
  return v4->fields.haveQpVal >= v9;
}


bool CheckCombineEnalbleControl__GetIsSkillUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Int32_array *SkillIdList; // x25
  il2cpp_array_size_t max_length; // x8
  CheckCombineEnalbleControl_o *v8; // x28
  unsigned __int64 v9; // x27
  int32_t v10; // w1
  int32_t v11; // w23
  struct ServantMaster_o *servantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v14; // x29
  struct UserServantMaster_o *userServantMaster; // x23
  int32_t v16; // w24
  int32_t v17; // w22
  System_Int32_array *v18; // x26
  __int128 v19; // q1
  UserItemMaster_o *userItemMaster; // x25
  CheckCombineEnalbleControl_o *v22; // [xsp+10h] [xbp-D0h]
  char v23; // [xsp+18h] [xbp-C8h]
  bool v24; // [xsp+1Ch] [xbp-C4h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+20h] [xbp-C0h]
  CheckCombineEnalbleControl_o *v26; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+50h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v26 = this;
  if ( (byte_4C46DC0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (CheckCombineEnalbleControl_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C46DC0 = 1;
  }
  entity = 0;
  if ( !usrData
    || (SkillIdList = UserServantEntity__getSkillIdList(usrData, -1, -1, 1, -1, 0),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, const MethodInfo *))usrData->klass->vtable._6_getSkillLevelList.methodPtr)(
                                                 usrData,
                                                 usrData->klass->vtable._6_getSkillLevelList.method),
        !SkillIdList) )
  {
LABEL_38:
    sub_1C372B4(this);
  }
  max_length = SkillIdList->max_length;
  v24 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = this;
    v9 = 0;
    p_userId = &usrData->fields.userId;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_39;
      if ( !v8 )
        goto LABEL_38;
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      v10 = SkillIdList->m_Items[v9];
      if ( v10 >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v26->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v11 = *((_DWORD *)&v8->fields.servantMaster + v9);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 v10,
                                                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_38;
        if ( v11 < SLODWORD(this->fields.userServantMaster) )
        {
          if ( !servantEntity )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)v26->fields.combineSkillMaster;
          if ( !this )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                   (CombineSkillMaster_o *)this,
                                                   servantEntity->fields.combineSkillId,
                                                   v11,
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
              v14 = 0;
              userServantMaster = this->fields.userServantMaster;
              v23 = 0;
              while ( v14 < (unsigned int)MasterName_k__BackingField )
              {
                if ( !userServantMaster )
                  goto LABEL_38;
                if ( v14 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
                  break;
                v16 = *(&servantMaster->fields.revision + v14);
                v17 = *(&userServantMaster->fields.revision + v14);
                v18 = SkillIdList;
                v19 = *(_OWORD *)&p_userId->fields.fakeValue;
                userItemMaster = v26->fields.userItemMaster;
                *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
                *(_OWORD *)&v28.fields.fakeValue = v19;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v27 = v28;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
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
                SkillIdList = v18;
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
                if ( (__int64)++v14 >= (int)MasterName_k__BackingField )
                  goto LABEL_34;
              }
LABEL_39:
              sub_1C372BC(this);
            }
            v23 = 0;
LABEL_34:
            if ( (v23 & 1) != 0 && v26->fields.haveQpVal >= SLODWORD(v22->fields.m_CancellationTokenSource) )
              return v24;
          }
        }
      }
LABEL_36:
      LODWORD(max_length) = SkillIdList->max_length;
      v24 = (__int64)++v9 < (int)max_length;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return v24;
}


void CheckCombineEnalbleControl__SetCombineEnableInfo(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  int64_t v4; // x8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // w8
  int *v12; // x10
  int v13; // w19
  int32_t v14; // w24
  int32_t v15; // w26
  int32_t v16; // w25
  int32_t v17; // w28
  int32_t v18; // w29
  int32_t v19; // w20
  __int64 v20; // x21
  CheckCombineEnalbleControl_o *v21; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  __int64 v33; // x8
  UserServantEntity_o **v34; // x21
  unsigned __int64 v35; // x19
  CombineEnableData_o *v36; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct CombineEnableData_o *v40; // x8
  int *v41; // [xsp+0h] [xbp-70h]
  int32_t v42; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C46DBD & 1) == 0 )
  {
    sub_1C37058(&CombineEnableData_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C46DBD = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v4 = *((_QWORD *)SelfUserGame + 12);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v4;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.costumeSvtIdList, (int32_t)CostumeSvtIdList, v6, v7);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.friendshipExceedSvtIdList, (int32_t)v8, v9, v10);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v11 = *((_DWORD *)SelfUserGame + 6);
  v12 = (int *)SelfUserGame;
  if ( v11 >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v41 = (int *)SelfUserGame;
    while ( v13 < (unsigned int)v11 )
    {
      v20 = *(_QWORD *)&v12[2 * v13 + 8];
      v42 = v14;
      if ( !v20 )
        goto LABEL_26;
      v21 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v24 = *(_QWORD *)(v20 + 80);
      v23 = *(_QWORD *)(v20 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v24;
      *(_QWORD *)&v43.fields.fakeValue = v23;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v43, 0);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v21;
      v19 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v21,
               (UserServantEntity_o *)v20,
               (ServantEntity_o *)Entity,
               v26);
      v18 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v21,
               (UserServantEntity_o *)v20,
               (ServantEntity_o *)Entity,
               v27);
      v17 += CheckCombineEnalbleControl__GetIsNpUpEnable(v21, (UserServantEntity_o *)v20, v28);
      v16 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v21, (UserServantEntity_o *)v20, v29);
      v15 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v21, (UserServantEntity_o *)v20, v30);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v21,
                               (UserServantEntity_o *)v20,
                               v31);
      v12 = v41;
      ++v13;
      v11 = v41[6];
      v14 = v42 + ((unsigned __int8)SelfUserGame & 1);
      if ( v13 >= v11 )
        goto LABEL_18;
    }
LABEL_27:
    sub_1C372BC(SelfUserGame);
  }
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_26;
  v33 = *((_QWORD *)SelfUserGame + 3);
  v34 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v33 >= 1 )
  {
    v35 = 0;
    while ( v35 < (unsigned int)v33 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v34[v35 + 4], v32);
      LODWORD(v33) = *((_DWORD *)v34 + 6);
      ++v35;
      v15 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v35 >= (int)v33 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v36 = (CombineEnableData_o *)sub_1C372A4(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v36, 0);
  this->fields.combineEnalbeInfo = v36;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)p_combineEnalbeInfo, (int32_t)v36, v38, v39);
  v40 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1C372B4(SelfUserGame);
  v40->fields.limitUpEnableNum = v19;
  v40->fields.skillUpEnableNum = v18;
  v40->fields.npUpEnableNum = v17;
  v40->fields.lvExceedEnableNum = v16;
  v40->fields.costumeCombineEnableNum = v15;
  v40->fields.friendshipExceedEnableNum = v14;
}


void CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4C46DBE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46DBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantMaster, (int32_t)MasterData_object, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)v7, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantStorageMaster, (int32_t)v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v13 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantCollectionMaster, (int32_t)v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineLimitMaster, (int32_t)v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userItemMaster, (int32_t)v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillMaster, (int32_t)v22, v23, v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v25 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineSkillMaster, (int32_t)v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.treasureDvcMaster, (int32_t)v28, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v31 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.treasureDvcLvMaster, (int32_t)v31, v32, v33);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v34 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantCostumeMaster, (int32_t)v34, v35, v36);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v37 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v37,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cosReleaseMaster, (int32_t)v37, v38, v39),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_17:
    sub_1C372B4(Instance);
  }
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.friendshipMaster, (int32_t)v40, v41, v42);
}


CombineEnableData_o *CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}