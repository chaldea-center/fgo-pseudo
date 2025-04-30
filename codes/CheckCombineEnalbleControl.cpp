void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A51ECF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v3);
    byte_4A51ECF = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cachedUserServantNpLvDict, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  ServantCostumeMaster_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int m_CancellationTokenSource; // w8
  CheckCombineEnalbleControl_o *v20; // x21
  int v21; // w28
  UserServantEntity_Fields *p_fields; // x29
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v24; // x22
  __int64 v25; // x24
  __int64 v26; // x25
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  bool IsEventCombineCostume; // w0
  ServantCostumeReleaseMaster_o *v31; // x23
  __int64 v32; // x24
  __int64 v33; // x26
  bool v34; // w25
  int32_t v35; // w24
  __int128 v36; // q0
  __int128 v37; // q0
  System_Collections_Generic_List_int__o *v39; // x20
  __int64 v40; // x19
  __int64 v41; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = this;
  if ( (byte_4A51ECD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CheckCombineEnalbleControl_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4A51ECD = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_48;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v11;
  *(_QWORD *)&v45.fields.fakeValue = v10;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v45, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_48;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v14;
        *(_QWORD *)&v46.fields.fakeValue = v13;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v46, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v15,
               (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v16 = v4->fields.servantCostumeMaster;
          v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v18;
          *(_QWORD *)&v47.fields.fakeValue = v17;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                   v47,
                                                   0LL);
          if ( !v16 )
            goto LABEL_48;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v16,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
          if ( !this )
            goto LABEL_48;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v20 = this;
          if ( m_CancellationTokenSource >= 1 )
          {
            v21 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v21 >= (unsigned int)m_CancellationTokenSource )
                sub_1B8661C(this, userSvtEntity);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v24 = (ServantCostumeEntity_o *)*((_QWORD *)&v20->fields.servantMaster + v21);
              v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v48.fields.currentCryptoKey = v26;
              *(_QWORD *)&v48.fields.fakeValue = v25;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                       v48,
                                                       0LL);
              if ( !v24 || !userServantCollectionMaster )
                goto LABEL_48;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v24->fields.id,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v4->fields.cosReleaseMaster;
                v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v49.fields.currentCryptoKey = v29;
                *(_QWORD *)&v49.fields.fakeValue = v28;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                         v49,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_48;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v24->fields.id,
                                                         0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v24, 0LL);
                  v31 = v4->fields.cosReleaseMaster;
                  v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  v34 = IsEventCombineCostume;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v50.fields.currentCryptoKey = v33;
                  *(_QWORD *)&v50.fields.fakeValue = v32;
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v50, 0LL);
                  if ( v34 )
                  {
                    v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v44.fields.fakeValue = v36;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v43 = v44;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                             &v43,
                                                             0LL);
                    if ( !v31 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v31,
                                                             v24,
                                                             v35,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_44;
                  }
                  else
                  {
                    v37 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v44.fields.fakeValue = v37;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v42 = v44;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                             &v42,
                                                             0LL);
                    if ( !v31 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v31,
                                                             v24,
                                                             v35,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_44:
                      v39 = v4->fields.costumeSvtIdList;
                      v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v51.fields.currentCryptoKey = v41;
                      *(_QWORD *)&v51.fields.fakeValue = v40;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                               v51,
                                                               0LL);
                      if ( v39 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v39,
                          (int32_t)this,
                          (const MethodInfo_35E0E30 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1B86614(this, userSvtEntity);
                    }
                  }
                }
              }
              m_CancellationTokenSource = (int)v20->fields.m_CancellationTokenSource;
              ++v21;
            }
            while ( v21 < m_CancellationTokenSource );
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *isExceedFriendshipMax; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  int32_t v14; // w21
  __int64 v15; // x22
  __int64 v16; // x23
  int v17; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  Il2CppObject *v21; // x0
  __int128 v22; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  Il2CppObject *v24; // x21
  int64_t v25; // x23
  _DWORD *v26; // x22
  int v27; // w8
  __int64 v28; // x25
  _DWORD *v29; // x21
  __int64 v30; // x27
  unsigned int v31; // w26
  UserItemMaster_o *userItemMaster; // x23
  struct System_Collections_Generic_List_int__o *v34; // x20
  __int64 v35; // x19
  __int64 v36; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A51ECE & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4A51ECE = 1;
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
    goto LABEL_19;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL)
    || UserServantEntity__IsHeroine(userServantEntity, 0LL)
    && !UserServantEntity__IsUseFriendshipExceedItemHeroine(userServantEntity, 0LL) )
  {
    return 0;
  }
  isExceedFriendshipMax = (void *)UserServantEntity__isExceedFriendshipMax(userServantEntity, 0LL);
  if ( ((unsigned __int8)isExceedFriendshipMax & 1) != 0 )
    return 0;
  friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
  if ( !friendshipExceedSvtIdList )
    goto LABEL_19;
  v14 = 0;
  while ( v14 < friendshipExceedSvtIdList->fields._size )
  {
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v16;
    *(_QWORD *)&v43.fields.fakeValue = v15;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v43, 0LL);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v17 = (int)isExceedFriendshipMax;
      isExceedFriendshipMax = (void *)System_Collections_Generic_List_int___get_Item(
                                        this->fields.friendshipExceedSvtIdList,
                                        v14,
                                        (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v17 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v14;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_19;
  }
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v20;
  *(_QWORD *)&v44.fields.fakeValue = v19;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v44, 0LL);
  if ( !servantMaster )
    goto LABEL_19;
  v21 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          (int32_t)isExceedFriendshipMax,
          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v22 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v24 = v21;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v40, 0LL);
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                    userServantEntity->fields.svtId,
                                    0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_19;
  isExceedFriendshipMax = UserServantCollectionMaster__GetEntity(
                            userServantCollectionMaster,
                            v25,
                            (int32_t)isExceedFriendshipMax,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  v26 = isExceedFriendshipMax;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)isExceedFriendshipMax
                                                                                       + 100),
                                    0LL);
  if ( !v24 )
    goto LABEL_19;
  v27 = v26[29] + HIDWORD(v24[6].klass);
  if ( (int)isExceedFriendshipMax < v27 )
    return 0;
  isExceedFriendshipMax = this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  isExceedFriendshipMax = FriendshipMaster__GetEntity(
                            (FriendshipMaster_o *)isExceedFriendshipMax,
                            (int32_t)v24[6].klass,
                            v27 + 1,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_19;
  v28 = *((_QWORD *)isExceedFriendshipMax + 5);
  v29 = isExceedFriendshipMax;
  if ( !v28 )
    goto LABEL_19;
  if ( *(int *)(v28 + 24) >= 1 )
  {
    v30 = *((_QWORD *)isExceedFriendshipMax + 4);
    v31 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, userServantEntity);
        byte_4A48C25 = 1;
      }
      isExceedFriendshipMax = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        isExceedFriendshipMax = NetworkManager_TypeInfo;
      }
      if ( v31 >= *(_DWORD *)(v28 + 24) )
LABEL_59:
        sub_1B8661C(isExceedFriendshipMax, userServantEntity);
      if ( !userItemMaster )
        goto LABEL_19;
      isExceedFriendshipMax = (void *)UserItemMaster__TryGetEntity(
                                        userItemMaster,
                                        &entity,
                                        *(_QWORD *)(*((_QWORD *)isExceedFriendshipMax + 23) + 64LL),
                                        *(_DWORD *)(v28 + 4LL * (int)v31 + 32),
                                        0LL);
      if ( ((unsigned __int8)isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v30 )
        goto LABEL_19;
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_59;
      if ( entity->fields.num < *(_DWORD *)(v30 + 4LL * (int)v31 + 32) )
        return 0;
    }
    while ( (signed int)++v31 < *(_DWORD *)(v28 + 24) );
  }
  if ( this->fields.haveQpVal < v29[7] )
    return 0;
  v34 = this->fields.friendshipExceedSvtIdList;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v36;
  *(_QWORD *)&v45.fields.fakeValue = v35;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v45, 0LL);
  if ( !v34
    || (items = v34->fields._items,
        v38 = Method_System_Collections_Generic_List_int__Add__,
        ++v34->fields._version,
        !items) )
  {
LABEL_19:
    sub_1B86614(isExceedFriendshipMax, userServantEntity);
  }
  size = v34->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v34,
      (int32_t)isExceedFriendshipMax,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v34->fields._size = size + 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool isLimitCountMax; // w0
  __int64 v14; // x22
  __int64 v15; // x23
  bool v16; // w24
  int32_t v17; // w22
  Il2CppObject *Master_object; // x0
  ServantLimitImageMaster_o *v19; // x23
  __int64 v20; // x20
  __int64 v21; // x21
  __int64 v22; // x19
  __int64 v23; // x20
  int32_t v24; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w19
  struct UserServantMaster_o *userServantMaster; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x29
  unsigned __int64 v29; // x28
  int32_t v30; // w22
  __int128 v31; // q1
  int32_t v32; // w25
  UserItemMaster_o *userItemMaster; // x23
  int32_t haveQpVal; // w23
  int32_t m_CancellationTokenSource; // w24
  Il2CppObject *v37; // x0
  __int64 v38; // x21
  __int64 v39; // x22
  CombineLimitReleaseMaster_o *v40; // x20
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v46; // [xsp+0h] [xbp-C0h]
  char v47; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v51; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v6 = this;
  if ( (byte_4A51ECA & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, usrData);
    sub_1B863B8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12);
    byte_4A51ECA = 1;
  }
  entity = 0LL;
  v51 = 0LL;
  if ( !usrData )
    goto LABEL_52;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v15 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v16 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v15;
  *(_QWORD *)&v52.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v52, 0LL);
  if ( UserServantEntity__IsHeroine(usrData, 0LL) )
    goto LABEL_39;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( v16 )
  {
    v19 = (ServantLimitImageMaster_o *)Master_object;
    v21 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v21;
    *(_QWORD *)&v53.fields.fakeValue = v20;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v53, 0LL);
    if ( !v19 )
      goto LABEL_52;
    if ( ServantLimitImageMaster__IsServantLimitCountSeal(v19, (int32_t)this, v17, 0LL) )
    {
      v23 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v23;
      *(_QWORD *)&v54.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v54, 0LL);
      ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                           v19,
                                           v24,
                                           v17,
                                           0LL);
      if ( ServantLimitCountSealedQuestOpen )
      {
        this = (CheckCombineEnalbleControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( this )
        {
          LOBYTE(ServantLimitCountSealedQuestOpen) = clsQuestCheck__CheckQuestPlayableNow(
                                                       (clsQuestCheck_o *)this,
                                                       ServantLimitCountSealedQuestOpen,
                                                       0LL);
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
  this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL);
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
                                           v17,
                                           0LL);
  if ( !this )
    goto LABEL_52;
  userServantMaster = this->fields.userServantMaster;
  if ( !userServantMaster )
    goto LABEL_52;
  MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
  v46 = this;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    servantMaster = this->fields.servantMaster;
    v29 = 0LL;
    v47 = 0;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_53;
      if ( !servantMaster )
        goto LABEL_52;
      if ( v29 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_53:
        sub_1B8661C(this, usrData);
      v30 = *(&userServantMaster->fields.revision + v29);
      v31 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
      v32 = *(&servantMaster->fields.revision + v29);
      userItemMaster = v6->fields.userItemMaster;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49;
      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                               &v48,
                                               0LL);
      if ( !userItemMaster )
        goto LABEL_52;
      this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                               userItemMaster,
                                               &entity,
                                               (int64_t)this,
                                               v30,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_52;
      if ( v30 == entity->fields.itemId )
      {
        if ( v32 > entity->fields.num )
          break;
        v47 = 1;
      }
      LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
      if ( (__int64)++v29 >= (int)MasterName_k__BackingField )
        goto LABEL_42;
    }
  }
  v47 = 0;
LABEL_42:
  haveQpVal = v6->fields.haveQpVal;
  m_CancellationTokenSource = (int32_t)v46->fields.m_CancellationTokenSource;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
  v39 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
  v40 = (CombineLimitReleaseMaster_o *)v37;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v39;
  *(_QWORD *)&v55.fields.fakeValue = v38;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v55, 0LL);
  v42 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v56.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  ServantLimitCountSealedQuestOpen = v41;
  *(_QWORD *)&v56.fields.currentCryptoKey = v42;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v56, 0LL);
  if ( !v40 )
    goto LABEL_52;
  this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                           v40,
                                           &v51,
                                           ServantLimitCountSealedQuestOpen,
                                           (_DWORD)this + 1,
                                           0LL);
  LOBYTE(ServantLimitCountSealedQuestOpen) = v47 & (haveQpVal >= m_CancellationTokenSource);
  if ( ((unsigned __int8)this & 1) == 0 )
    return ServantLimitCountSealedQuestOpen & 1;
  if ( !v51 )
LABEL_52:
    sub_1B86614(this, usrData);
  condType = v51->fields.condType;
  condTargetId = v51->fields.condTargetId;
  condNum = v51->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(ServantLimitCountSealedQuestOpen) = ServantLimitCountSealedQuestOpen & CondType__IsOpen(
                                                                                  condType,
                                                                                  condTargetId,
                                                                                  condNum,
                                                                                  0,
                                                                                  0LL,
                                                                                  0LL);
  return ServantLimitCountSealedQuestOpen & 1;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v15; // x23
  __int64 v16; // x24
  _BOOL4 v17; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v19; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v21; // x24
  System_Collections_Generic_HashSet_int__o *v22; // x22
  System_Collections_Generic_HashSet_int__o *v23; // x23
  int max_length; // w8
  __int64 v25; // x27
  CommonConsumeEntity_o *v26; // x26
  Il2CppObject *Master_object; // x0
  __int64 v28; // x25
  __int64 v29; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x24
  System_Int32_array *v31; // x22
  System_Int32_array *v32; // x0
  const MethodInfo *v33; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_4A51ECC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_1B863B8(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4A51ECC = 1;
  }
  if ( !usrData )
    goto LABEL_36;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v16 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v17 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v16;
  *(_QWORD *)&v35.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL);
  if ( UserServantEntity__IsHeroine(usrData, 0LL) )
  {
    if ( isExceedLvMax | !UserServantEntity__IsUseLevelExceedItemHeroine(usrData, 0LL) )
      return 0;
  }
  else if ( isExceedLvMax )
  {
    return 0;
  }
  if ( (v17 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v19 = (int32_t *)SvtExceedEnt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_36;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v19[12], 0LL);
  if ( IdEntityList )
  {
    v21 = IdEntityList;
    v22 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v22,
      (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v23 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v23,
      (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    max_length = v21->max_length;
    if ( max_length < 1 )
    {
LABEL_24:
      if ( v19[13] >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SvtCoinMaster___);
        v29 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
        v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v29;
        *(_QWORD *)&v36.fields.fakeValue = v28;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                 v36,
                                                 0LL);
        if ( !v30 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v30,
                                                 (int32_t)this,
                                                 (const MethodInfo_3214280 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_36;
        if ( !v22 )
          goto LABEL_36;
        this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                                 v22,
                                                 (int32_t)this->fields.m_CancellationTokenSource,
                                                 (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( !v23 )
          goto LABEL_36;
        System_Collections_Generic_HashSet_int___Add(
          v23,
          v19[13],
          (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v31 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v22,
              (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
      v32 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23,
              (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
      return CombineUtility__CheckCombineNeedItemsEnough(usrData, v31, v32, v4->fields.haveQpVal, v19[8], v33);
    }
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
        sub_1B8661C(this, usrData);
      v26 = v21->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v22 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v22,
                                               v26->fields.objectId,
                                               (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v23 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v23,
                                               v26->fields.num,
                                               (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v21->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_24;
    }
LABEL_36:
    sub_1B86614(this, usrData);
  }
  return 0;
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
    sub_1B86614(this, usrData);
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
  __int64 v6; // x1
  System_Int32_array *SkillIdList; // x25
  __int64 v8; // x8
  CheckCombineEnalbleControl_o *v9; // x28
  unsigned __int64 v10; // x27
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

  v5 = usrData;
  v26 = this;
  if ( (byte_4A51ECB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    this = (CheckCombineEnalbleControl_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4A51ECB = 1;
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
    sub_1B86614(this, usrData);
  }
  v8 = *(_QWORD *)&SkillIdList->max_length;
  v24 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v9 = this;
    v10 = 0LL;
    p_userId = &v5->fields.userId;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_39;
      if ( !v9 )
        goto LABEL_38;
      if ( v10 >= LODWORD(v9->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v10 + 1];
      if ( (int)usrData >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v26->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v11 = *((_DWORD *)&v9->fields.servantMaster + v10);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 (int32_t)usrData,
                                                 (const MethodInfo_3214280 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                                                   0LL);
          v22 = this;
          if ( this )
          {
            servantMaster = this->fields.servantMaster;
            if ( !servantMaster )
              goto LABEL_38;
            MasterName_k__BackingField = servantMaster->fields._MasterName_k__BackingField;
            if ( (int)MasterName_k__BackingField >= 1 )
            {
              v14 = 0LL;
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
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                         &v27,
                                                         0LL);
                if ( !userItemMaster )
                  goto LABEL_38;
                this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                         userItemMaster,
                                                         &entity,
                                                         (int64_t)this,
                                                         v16,
                                                         0LL);
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
              sub_1B8661C(this, usrData);
            }
            v23 = 0;
LABEL_34:
            if ( (v23 & 1) != 0 && v26->fields.haveQpVal >= SLODWORD(v22->fields.m_CancellationTokenSource) )
              return v24;
          }
        }
      }
LABEL_36:
      LODWORD(v8) = SkillIdList->max_length;
      v24 = (__int64)++v10 < (int)v8;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v24;
}


void __fastcall CheckCombineEnalbleControl__SetCombineEnableInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *SelfUserGame; // x0
  __int64 v9; // x1
  int32_t v10; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8
  int *v18; // x10
  int v19; // w19
  int32_t v20; // w24
  int32_t v21; // w26
  int32_t v22; // w25
  int32_t v23; // w28
  int32_t v24; // w29
  int32_t v25; // w20
  __int64 v26; // x21
  CheckCombineEnalbleControl_o *v27; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  __int64 v39; // x8
  UserServantEntity_o **v40; // x21
  unsigned __int64 v41; // x19
  CombineEnableData_o *v42; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct CombineEnableData_o *v46; // x8
  int *v47; // [xsp+0h] [xbp-70h]
  int32_t v48; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A51EC8 & 1) == 0 )
  {
    sub_1B863B8(&CombineEnableData_TypeInfo, method);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A51EC8 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v10 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v10;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeSvtIdList, (int32_t)CostumeSvtIdList, v12, v13);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.friendshipExceedSvtIdList, (int32_t)v14, v15, v16);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v17 = *((_DWORD *)SelfUserGame + 6);
  v18 = (int *)SelfUserGame;
  if ( v17 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v47 = (int *)SelfUserGame;
    while ( v19 < (unsigned int)v17 )
    {
      v26 = *(_QWORD *)&v18[2 * v19 + 8];
      v48 = v20;
      if ( !v26 )
        goto LABEL_26;
      v27 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v30 = *(_QWORD *)(v26 + 80);
      v29 = *(_QWORD *)(v26 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v30;
      *(_QWORD *)&v49.fields.fakeValue = v29;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49, 0LL);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v27;
      v25 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v27,
               (UserServantEntity_o *)v26,
               (ServantEntity_o *)Entity,
               v32);
      v24 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v27,
               (UserServantEntity_o *)v26,
               (ServantEntity_o *)Entity,
               v33);
      v23 += CheckCombineEnalbleControl__GetIsNpUpEnable(v27, (UserServantEntity_o *)v26, v34);
      v22 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v27, (UserServantEntity_o *)v26, v35);
      v21 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v27, (UserServantEntity_o *)v26, v36);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v27,
                               (UserServantEntity_o *)v26,
                               v37);
      v18 = v47;
      ++v19;
      v17 = v47[6];
      v20 = v48 + ((unsigned __int8)SelfUserGame & 1);
      if ( v19 >= v17 )
        goto LABEL_18;
    }
LABEL_27:
    sub_1B8661C(SelfUserGame, v9);
  }
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v39 = *((_QWORD *)SelfUserGame + 3);
  v40 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v39 >= 1 )
  {
    v41 = 0LL;
    while ( v41 < (unsigned int)v39 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v40[v41 + 4], v38);
      LODWORD(v39) = *((_DWORD *)v40 + 6);
      ++v41;
      v21 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v41 >= (int)v39 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v42 = (CombineEnableData_o *)sub_1B86604(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v42, 0LL);
  this->fields.combineEnalbeInfo = v42;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1B8635C((CGThumbnailListItem_o *)p_combineEnalbeInfo, (int32_t)v42, v44, v45);
  v46 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1B86614(SelfUserGame, v9);
  v46->fields.limitUpEnableNum = v25;
  v46->fields.skillUpEnableNum = v24;
  v46->fields.npUpEnableNum = v23;
  v46->fields.lvExceedEnableNum = v22;
  v46->fields.costumeCombineEnableNum = v21;
  v46->fields.friendshipExceedEnableNum = v20;
}


void __fastcall CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_4A51EC9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A51EC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantMaster, (int32_t)MasterData_object, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v21;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantMaster, (int32_t)v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v24 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v24;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantStorageMaster, (int32_t)v24, v25, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantCollectionMaster, (int32_t)v27, v28, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v30 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v30;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineLimitMaster, (int32_t)v30, v31, v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v33;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userItemMaster, (int32_t)v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v36 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v36;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.skillMaster, (int32_t)v36, v37, v38);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v39;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.combineSkillMaster, (int32_t)v39, v40, v41);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v42 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v42;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.treasureDvcMaster, (int32_t)v42, v43, v44);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v45 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v45;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.treasureDvcLvMaster, (int32_t)v45, v46, v47);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v48 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v48;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantCostumeMaster, (int32_t)v48, v49, v50);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v51 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v51,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cosReleaseMaster, (int32_t)v51, v52, v53),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_1B86614(Instance, v17);
  }
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v54;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.friendshipMaster, (int32_t)v54, v55, v56);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}