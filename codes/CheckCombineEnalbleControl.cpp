void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDFDCB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_4BDFDCB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cachedUserServantNpLvDict,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
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
  if ( (byte_4BDFDC9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFDC9 = 1;
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
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v41, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_48;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
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
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v11,
               (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v12 = v4->fields.servantCostumeMaster;
          v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v43.fields.currentCryptoKey = v14;
          *(_QWORD *)&v43.fields.fakeValue = v13;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                   v43,
                                                   0LL);
          if ( !v12 )
            goto LABEL_48;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v12,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
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
                sub_1C2209C(this, userSvtEntity);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v20 = (ServantCostumeEntity_o *)*((_QWORD *)&v16->fields.servantMaster + v17);
              v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v44.fields.currentCryptoKey = v22;
              *(_QWORD *)&v44.fields.fakeValue = v21;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                       v44,
                                                       0LL);
              if ( !v20 || !userServantCollectionMaster )
                goto LABEL_48;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v20->fields.id,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v4->fields.cosReleaseMaster;
                v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v24 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v45.fields.currentCryptoKey = v25;
                *(_QWORD *)&v45.fields.fakeValue = v24;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                         v45,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_48;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v20->fields.id,
                                                         0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v20, 0LL);
                  v27 = v4->fields.cosReleaseMaster;
                  v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  v30 = IsEventCombineCostume;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v46.fields.currentCryptoKey = v29;
                  *(_QWORD *)&v46.fields.fakeValue = v28;
                  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v46, 0LL);
                  if ( v30 )
                  {
                    v32 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v40.fields.fakeValue = v32;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v39 = v40;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                             &v39,
                                                             0LL);
                    if ( !v27 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v31,
                                                             (int64_t)this,
                                                             0LL);
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
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                             &v38,
                                                             0LL);
                    if ( !v27 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v31,
                                                             (int64_t)this,
                                                             0LL);
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
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                               v47,
                                                               0LL);
                      if ( v35 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v35,
                          (int32_t)this,
                          (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1C22094(this, userSvtEntity);
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


bool __fastcall CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
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
  _DWORD *v22; // x21
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

  if ( (byte_4BDFDCA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFDCA = 1;
  }
  isExceedFriendshipMax = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    isExceedFriendshipMax = BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*((_QWORD *)isExceedFriendshipMax + 23) + 696LL) > 0 )
    return 0;
  if ( !userServantEntity )
    goto LABEL_18;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 0;
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
    return 0;
  isExceedFriendshipMax = (void *)UserServantEntity__isExceedFriendshipMax(userServantEntity, 0LL);
  if ( ((unsigned __int8)isExceedFriendshipMax & 1) != 0 )
    return 0;
  friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
  if ( !friendshipExceedSvtIdList )
    goto LABEL_18;
  v7 = 0;
  while ( v7 < friendshipExceedSvtIdList->fields._size )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v9;
    *(_QWORD *)&v36.fields.fakeValue = v8;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v36, 0LL);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v10 = (int)isExceedFriendshipMax;
      isExceedFriendshipMax = (void *)System_Collections_Generic_List_int___get_Item(
                                        this->fields.friendshipExceedSvtIdList,
                                        v7,
                                        (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v10 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v7;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_18;
  }
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v13;
  *(_QWORD *)&v37.fields.fakeValue = v12;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v37, 0LL);
  if ( !servantMaster )
    goto LABEL_18;
  v14 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          (int32_t)isExceedFriendshipMax,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v15 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v17 = v14;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v34.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v34;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v33, 0LL);
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                    userServantEntity->fields.svtId,
                                    0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_18;
  isExceedFriendshipMax = UserServantCollectionMaster__GetEntity(
                            userServantCollectionMaster,
                            v18,
                            (int32_t)isExceedFriendshipMax,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v19 = isExceedFriendshipMax;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)isExceedFriendshipMax
                                                                                       + 100),
                                    0LL);
  if ( !v17 )
    goto LABEL_18;
  v20 = v19[29] + HIDWORD(v17[6].klass);
  if ( (int)isExceedFriendshipMax < v20 )
    return 0;
  isExceedFriendshipMax = this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  isExceedFriendshipMax = FriendshipMaster__GetEntity(
                            (FriendshipMaster_o *)isExceedFriendshipMax,
                            (int32_t)v17[6].klass,
                            v20 + 1,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v21 = *((_QWORD *)isExceedFriendshipMax + 5);
  v22 = isExceedFriendshipMax;
  if ( !v21 )
    goto LABEL_18;
  if ( *(int *)(v21 + 24) >= 1 )
  {
    v23 = *((_QWORD *)isExceedFriendshipMax + 4);
    v24 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      isExceedFriendshipMax = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        isExceedFriendshipMax = NetworkManager_TypeInfo;
      }
      if ( v24 >= *(_DWORD *)(v21 + 24) )
LABEL_58:
        sub_1C2209C(isExceedFriendshipMax, userServantEntity);
      if ( !userItemMaster )
        goto LABEL_18;
      isExceedFriendshipMax = (void *)UserItemMaster__TryGetEntity(
                                        userItemMaster,
                                        &entity,
                                        *(_QWORD *)(*((_QWORD *)isExceedFriendshipMax + 23) + 64LL),
                                        *(_DWORD *)(v21 + 4LL * (int)v24 + 32),
                                        0LL);
      if ( ((unsigned __int8)isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v23 )
        goto LABEL_18;
      if ( v24 >= *(_DWORD *)(v23 + 24) )
        goto LABEL_58;
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
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v38, 0LL);
  if ( !v27
    || (items = v27->fields._items,
        v31 = Method_System_Collections_Generic_List_int__Add__,
        ++v27->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C22094(isExceedFriendshipMax, userServantEntity);
  }
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v27,
      (int32_t)isExceedFriendshipMax,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = (int)isExceedFriendshipMax;
  }
  return 1;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLimitUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v6; // x20
  _BOOL4 isLimitCountMax; // w0
  __int64 v8; // x22
  __int64 v9; // x24
  _BOOL4 v10; // w23
  int32_t v11; // w22
  struct UserServantMaster_o *userServantMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x28
  unsigned __int64 v15; // x27
  int32_t v16; // w22
  __int128 v17; // q1
  int32_t v18; // w24
  UserItemMaster_o *userItemMaster; // x23
  int v20; // w19
  int32_t haveQpVal; // w23
  int32_t m_CancellationTokenSource; // w24
  Il2CppObject *Master_object; // x0
  __int64 v25; // x21
  __int64 v26; // x22
  CombineLimitReleaseMaster_o *v27; // x20
  int32_t v28; // w0
  __int64 v29; // x8
  int32_t v30; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v34; // [xsp+0h] [xbp-C0h]
  char v35; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v39; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v6 = this;
  if ( (byte_4BDFDC6 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFDC6 = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  if ( !usrData )
    goto LABEL_40;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v9 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v10 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v9;
  *(_QWORD *)&v40.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v40, 0LL);
  if ( ((v10 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    if ( !servantEntity )
      goto LABEL_40;
    this = (CheckCombineEnalbleControl_o *)v6->fields.combineLimitMaster;
    if ( !this )
      goto LABEL_40;
    this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                             (CombineLimitMaster_o *)this,
                                             servantEntity->fields.combineLimitId,
                                             v11,
                                             0LL);
    if ( !this )
      goto LABEL_40;
    userServantMaster = this->fields.userServantMaster;
    if ( !userServantMaster )
      goto LABEL_40;
    MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
    v34 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      servantMaster = this->fields.servantMaster;
      v15 = 0LL;
      v35 = 0;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_41;
        if ( !servantMaster )
          goto LABEL_40;
        if ( v15 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_41:
          sub_1C2209C(this, usrData);
        v16 = *(&userServantMaster->fields.revision + v15);
        v17 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v18 = *(&servantMaster->fields.revision + v15);
        userItemMaster = v6->fields.userItemMaster;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v37.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                 &v36,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_40;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v16,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_40;
        if ( v16 == entity->fields.itemId )
        {
          if ( v18 > entity->fields.num )
            break;
          v35 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
          goto LABEL_30;
      }
    }
    v35 = 0;
LABEL_30:
    haveQpVal = v6->fields.haveQpVal;
    m_CancellationTokenSource = (int32_t)v34->fields.m_CancellationTokenSource;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v26 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v27 = (CombineLimitReleaseMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v26;
    *(_QWORD *)&v41.fields.fakeValue = v25;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v41, 0LL);
    v29 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v42.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v30 = v28;
    *(_QWORD *)&v42.fields.currentCryptoKey = v29;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
    if ( !v27 )
LABEL_40:
      sub_1C22094(this, usrData);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v27,
                                             &v39,
                                             v30,
                                             (_DWORD)this + 1,
                                             0LL);
    v20 = (unsigned __int8)v35 & (haveQpVal >= m_CancellationTokenSource);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_40;
      condType = v39->fields.condType;
      condTargetId = v39->fields.condTargetId;
      condNum = v39->fields.condNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v20 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
    }
  }
  return v20;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  _BOOL4 isExceedLvMax; // w21
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
  if ( (byte_4BDFDC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDFDC8 = 1;
  }
  if ( !usrData )
    goto LABEL_33;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v9 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
  if ( (v9 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v11 = (int32_t *)SvtExceedEnt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_33;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v11[12], 0LL);
  if ( !IdEntityList )
    return 0;
  v13 = IdEntityList;
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1C2209C(this, usrData);
      v18 = v13->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v14 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v14,
                                               v18->fields.objectId,
                                               (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v15 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v15,
                                               v18->fields.num,
                                               (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v13->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_21;
    }
LABEL_33:
    sub_1C22094(this, usrData);
  }
LABEL_21:
  if ( v11[13] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v21 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v21;
    *(_QWORD *)&v28.fields.fakeValue = v20;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v28, 0LL);
    if ( !v22 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v22,
                                             (int32_t)this,
                                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    if ( !v14 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v14,
                                             (int32_t)this->fields.m_CancellationTokenSource,
                                             (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v15 )
      goto LABEL_33;
    System_Collections_Generic_HashSet_int___Add(
      v15,
      v11[13],
      (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v23 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v23, v24, v4->fields.haveQpVal, v11[8], v25);
}


bool __fastcall CheckCombineEnalbleControl__GetIsNpUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x19
  int SameSvtNpLvCache; // w0
  TreasureDvcInfo_o *v6; // x8
  int lv; // w21
  int v8; // w20
  int32_t v9; // w22
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0LL;
  if ( !usrData )
    goto LABEL_17;
  v4 = this;
  if ( UserServantEntity__IsHeroine(usrData, 0LL) )
    return 0;
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__getTreasureDeviceInfo(usrData, &tdInfo, -1, -1, 0, 0LL);
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
                       0LL);
  if ( SameSvtNpLvCache < 1 )
    return 0;
  if ( v4->fields.haveQpVal > 1200000 )
    return 1;
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__checkTreasureDeviceLevelUp(usrData, SameSvtNpLvCache, 0LL);
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
                                               0LL);
      if ( this )
        v9 += HIDWORD(this->fields.combineSkillMaster);
      if ( v8 == ++lv )
        return v4->fields.haveQpVal >= v9;
      v6 = tdInfo;
    }
    while ( tdInfo );
LABEL_17:
    sub_1C22094(this, usrData);
  }
  v9 = 0;
  return v4->fields.haveQpVal >= v9;
}


bool __fastcall CheckCombineEnalbleControl__GetIsSkillUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  UserServantEntity_o *v5; // x23
  System_Int32_array *SkillIdList; // x25
  __int64 v7; // x8
  CheckCombineEnalbleControl_o *v8; // x28
  unsigned __int64 v9; // x27
  int32_t v10; // w23
  struct ServantMaster_o *servantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v13; // x29
  struct UserServantMaster_o *userServantMaster; // x23
  int32_t v15; // w24
  int32_t v16; // w22
  System_Int32_array *v17; // x26
  __int128 v18; // q1
  UserItemMaster_o *userItemMaster; // x25
  CheckCombineEnalbleControl_o *v21; // [xsp+10h] [xbp-D0h]
  char v22; // [xsp+18h] [xbp-C8h]
  bool v23; // [xsp+1Ch] [xbp-C4h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+20h] [xbp-C0h]
  CheckCombineEnalbleControl_o *v25; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+50h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v5 = usrData;
  v25 = this;
  if ( (byte_4BDFDC7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (CheckCombineEnalbleControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFDC7 = 1;
  }
  entity = 0LL;
  if ( !v5
    || (SkillIdList = UserServantEntity__getSkillIdList(v5, -1, -1, 1, -1, 0LL),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))v5->klass->vtable._6_getSkillLevelList.method)(
                                                 v5,
                                                 v5->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_38:
    sub_1C22094(this, usrData);
  }
  v7 = *(_QWORD *)&SkillIdList->max_length;
  v23 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    v8 = this;
    v9 = 0LL;
    p_userId = &v5->fields.userId;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_39;
      if ( !v8 )
        goto LABEL_38;
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v9 + 1];
      if ( (int)usrData >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v25->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v10 = *((_DWORD *)&v8->fields.servantMaster + v9);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 (int32_t)usrData,
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_38;
        if ( v10 < SLODWORD(this->fields.userServantMaster) )
        {
          if ( !servantEntity )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)v25->fields.combineSkillMaster;
          if ( !this )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                   (CombineSkillMaster_o *)this,
                                                   servantEntity->fields.combineSkillId,
                                                   v10,
                                                   0LL);
          v21 = this;
          if ( this )
          {
            servantMaster = this->fields.servantMaster;
            if ( !servantMaster )
              goto LABEL_38;
            MasterName_k__BackingField = servantMaster->fields._MasterName_k__BackingField;
            if ( (int)MasterName_k__BackingField >= 1 )
            {
              v13 = 0LL;
              userServantMaster = this->fields.userServantMaster;
              v22 = 0;
              while ( v13 < (unsigned int)MasterName_k__BackingField )
              {
                if ( !userServantMaster )
                  goto LABEL_38;
                if ( v13 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
                  break;
                v15 = *(&servantMaster->fields.revision + v13);
                v16 = *(&userServantMaster->fields.revision + v13);
                v17 = SkillIdList;
                v18 = *(_OWORD *)&p_userId->fields.fakeValue;
                userItemMaster = v25->fields.userItemMaster;
                *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
                *(_OWORD *)&v27.fields.fakeValue = v18;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v26 = v27;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                                         &v26,
                                                         0LL);
                if ( !userItemMaster )
                  goto LABEL_38;
                this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                         userItemMaster,
                                                         &entity,
                                                         (int64_t)this,
                                                         v15,
                                                         0LL);
                SkillIdList = v17;
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_36;
                if ( !entity )
                  goto LABEL_38;
                if ( v15 == entity->fields.itemId )
                {
                  if ( v16 > entity->fields.num )
                    goto LABEL_36;
                  v22 = 1;
                }
                LODWORD(MasterName_k__BackingField) = servantMaster->fields._MasterName_k__BackingField;
                if ( (__int64)++v13 >= (int)MasterName_k__BackingField )
                  goto LABEL_34;
              }
LABEL_39:
              sub_1C2209C(this, usrData);
            }
            v22 = 0;
LABEL_34:
            if ( (v22 & 1) != 0 && v25->fields.haveQpVal >= SLODWORD(v21->fields.m_CancellationTokenSource) )
              return v23;
          }
        }
      }
LABEL_36:
      LODWORD(v7) = SkillIdList->max_length;
      v23 = (__int64)++v9 < (int)v7;
    }
    while ( (__int64)v9 < (int)v7 );
  }
  return v23;
}


void __fastcall CheckCombineEnalbleControl__SetCombineEnableInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t v5; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_int__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
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
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct CombineEnableData_o *v53; // x8
  int *v54; // [xsp+0h] [xbp-70h]
  int32_t v55; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4BDFDC4 & 1) == 0 )
  {
    sub_1C21E38(&CombineEnableData_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDFDC4 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v5 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v5;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.costumeSvtIdList,
    (int64_t)CostumeSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v13;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.friendshipExceedSvtIdList,
    (int64_t)v13,
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
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
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
      v29 = *(_QWORD *)&v21[2 * v22 + 8];
      v55 = v23;
      if ( !v29 )
        goto LABEL_26;
      v30 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v33 = *(_QWORD *)(v29 + 80);
      v32 = *(_QWORD *)(v29 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v56.fields.currentCryptoKey = v33;
      *(_QWORD *)&v56.fields.fakeValue = v32;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v56, 0LL);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C2209C(SelfUserGame, v4);
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
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v42 = *((_QWORD *)SelfUserGame + 3);
  v43 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v42 >= 1 )
  {
    v44 = 0LL;
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
  v45 = (CombineEnableData_o *)sub_1C22084(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v45, 0LL);
  this->fields.combineEnalbeInfo = v45;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_combineEnalbeInfo, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  v53 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1C22094(SelfUserGame, v4);
  v53->fields.limitUpEnableNum = v28;
  v53->fields.skillUpEnableNum = v27;
  v53->fields.npUpEnableNum = v26;
  v53->fields.lvExceedEnableNum = v25;
  v53->fields.costumeCombineEnableNum = v24;
  v53->fields.friendshipExceedEnableNum = v23;
}


void __fastcall CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  Il2CppObject *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7

  if ( (byte_4BDFDC5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFDC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.servantMaster,
    (int64_t)MasterData_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.userServantMaster, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v19;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userServantStorageMaster,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v26;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userServantCollectionMaster,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v33;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.combineLimitMaster,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.userItemMaster, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v47 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillMaster, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v54;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.combineSkillMaster,
    (int64_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v61 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v61;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.treasureDvcMaster, (int64_t)v61, v62, v63, v64, v65, v66, v67);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v68 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v68;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.treasureDvcLvMaster,
    (int64_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v75 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v75;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.servantCostumeMaster,
    (int64_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v82 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v82,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.cosReleaseMaster,
          (int64_t)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_1C22094(Instance, v4);
  }
  v89 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v89;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.friendshipMaster, (int64_t)v89, v90, v91, v92, v93, v94, v95);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}