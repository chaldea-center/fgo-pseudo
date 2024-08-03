void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF943 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v4);
    byte_49FF943 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cachedUserServantNpLvDict, (int32_t)v5, v6, v7);
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
  __int64 v19; // x1
  int m_CancellationTokenSource; // w8
  CheckCombineEnalbleControl_o *v21; // x21
  int v22; // w28
  UserServantEntity_Fields *p_fields; // x29
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v25; // x22
  __int64 v26; // x24
  __int64 v27; // x25
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  bool IsEventCombineCostume; // w0
  ServantCostumeReleaseMaster_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x26
  bool v35; // w25
  int32_t v36; // w24
  __int128 v37; // q0
  __int128 v38; // q0
  System_Collections_Generic_List_int__o *v40; // x20
  __int64 v41; // x19
  __int64 v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v4 = this;
  if ( (byte_49FF941 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CheckCombineEnalbleControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_49FF941 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_48;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v11;
  *(_QWORD *)&v46.fields.fakeValue = v10;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
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
        *(_QWORD *)&v47.fields.currentCryptoKey = v14;
        *(_QWORD *)&v47.fields.fakeValue = v13;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v15,
               (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v16 = v4->fields.servantCostumeMaster;
          v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v18;
          *(_QWORD *)&v48.fields.fakeValue = v17;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v48,
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
          v21 = this;
          if ( m_CancellationTokenSource >= 1 )
          {
            v22 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v22 >= (unsigned int)m_CancellationTokenSource )
                sub_1B6432C(this, v19);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v25 = (ServantCostumeEntity_o *)*((_QWORD *)&v21->fields.servantMaster + v22);
              v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v49.fields.currentCryptoKey = v27;
              *(_QWORD *)&v49.fields.fakeValue = v26;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v49,
                                                       0LL);
              if ( !v25 || !userServantCollectionMaster )
                goto LABEL_48;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v25->fields.id,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v4->fields.cosReleaseMaster;
                v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v50.fields.currentCryptoKey = v30;
                *(_QWORD *)&v50.fields.fakeValue = v29;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                         v50,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_48;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v25->fields.id,
                                                         0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v25, 0LL);
                  v32 = v4->fields.cosReleaseMaster;
                  v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  v35 = IsEventCombineCostume;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v51.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v51.fields.fakeValue = v33;
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
                  if ( v35 )
                  {
                    v37 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v45.fields.fakeValue = v37;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v44 = v45;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                             &v44,
                                                             0LL);
                    if ( !v32 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v32,
                                                             v25,
                                                             v36,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_44;
                  }
                  else
                  {
                    v38 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v45.fields.fakeValue = v38;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v43 = v45;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                             &v43,
                                                             0LL);
                    if ( !v32 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v32,
                                                             v25,
                                                             v36,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_44:
                      v40 = v4->fields.costumeSvtIdList;
                      v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v52.fields.currentCryptoKey = v42;
                      *(_QWORD *)&v52.fields.fakeValue = v41;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                               v52,
                                                               0LL);
                      if ( v40 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v40,
                          (int32_t)this,
                          (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1B64324(this);
                    }
                  }
                }
              }
              m_CancellationTokenSource = (int)v21->fields.m_CancellationTokenSource;
              ++v22;
            }
            while ( v22 < m_CancellationTokenSource );
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
  int64_t isExceedFriendshipMax; // x0
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
  int64_t v26; // x22
  int v27; // w8
  __int64 v28; // x23
  int64_t v29; // x21
  __int64 v30; // x26
  unsigned int v31; // w25
  UserItemMaster_o *userItemMaster; // x22
  __int64 v33; // x1
  struct System_Collections_Generic_List_int__o *v35; // x20
  __int64 v36; // x19
  __int64 v37; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FF942 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_49FF942 = 1;
  }
  isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*(_QWORD *)(isExceedFriendshipMax + 184) + 680LL) > 0 )
    return 0;
  if ( !userServantEntity )
    goto LABEL_18;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 0;
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
    return 0;
  isExceedFriendshipMax = UserServantEntity__isExceedFriendshipMax(userServantEntity, 0LL);
  if ( (isExceedFriendshipMax & 1) != 0 )
    return 0;
  friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
  if ( !friendshipExceedSvtIdList )
    goto LABEL_18;
  v14 = 0;
  while ( v14 < friendshipExceedSvtIdList->fields._size )
  {
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v16;
    *(_QWORD *)&v44.fields.fakeValue = v15;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v17 = isExceedFriendshipMax;
      isExceedFriendshipMax = System_Collections_Generic_List_int___get_Item(
                                this->fields.friendshipExceedSvtIdList,
                                v14,
                                (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v17 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v14;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_18;
  }
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v20;
  *(_QWORD *)&v45.fields.fakeValue = v19;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
  if ( !servantMaster )
    goto LABEL_18;
  v21 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v22 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v24 = v21;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v41, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                            userServantEntity->fields.svtId,
                            0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_18;
  isExceedFriendshipMax = (int64_t)UserServantCollectionMaster__GetEntity(
                                     userServantCollectionMaster,
                                     v25,
                                     isExceedFriendshipMax,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v26 = isExceedFriendshipMax;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(isExceedFriendshipMax + 100),
                            0LL);
  if ( !v24 )
    goto LABEL_18;
  v27 = *(_DWORD *)(v26 + 116) + HIDWORD(v24[6].klass);
  if ( (int)isExceedFriendshipMax < v27 )
    return 0;
  isExceedFriendshipMax = (int64_t)this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  isExceedFriendshipMax = (int64_t)FriendshipMaster__GetEntity(
                                     (FriendshipMaster_o *)isExceedFriendshipMax,
                                     (int32_t)v24[6].klass,
                                     v27 + 1,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v28 = *(_QWORD *)(isExceedFriendshipMax + 40);
  v29 = isExceedFriendshipMax;
  if ( !v28 )
    goto LABEL_18;
  if ( *(int *)(v28 + 24) >= 1 )
  {
    v30 = *(_QWORD *)(isExceedFriendshipMax + 32);
    v31 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      isExceedFriendshipMax = NetworkManager__get_UserId(0LL);
      if ( v31 >= *(_DWORD *)(v28 + 24) )
LABEL_54:
        sub_1B6432C(isExceedFriendshipMax, v33);
      if ( !userItemMaster )
        goto LABEL_18;
      isExceedFriendshipMax = UserItemMaster__TryGetEntity(
                                userItemMaster,
                                &entity,
                                isExceedFriendshipMax,
                                *(_DWORD *)(v28 + 4LL * (int)v31 + 32),
                                0LL);
      if ( (isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v30 )
        goto LABEL_18;
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_54;
      if ( entity->fields.num < *(_DWORD *)(v30 + 4LL * (int)v31 + 32) )
        return 0;
    }
    while ( (signed int)++v31 < *(_DWORD *)(v28 + 24) );
  }
  if ( this->fields.haveQpVal < *(_DWORD *)(v29 + 28) )
    return 0;
  v35 = this->fields.friendshipExceedSvtIdList;
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v37;
  *(_QWORD *)&v46.fields.fakeValue = v36;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
  if ( !v35
    || (items = v35->fields._items,
        v39 = Method_System_Collections_Generic_List_int__Add__,
        ++v35->fields._version,
        !items) )
  {
LABEL_18:
    sub_1B64324(isExceedFriendshipMax);
  }
  size = v35->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v35,
      isExceedFriendshipMax,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v35->fields._size = size + 1;
    items->m_Items[size + 1] = isExceedFriendshipMax;
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
  _BOOL4 isLimitCountMax; // w0
  __int64 v12; // x22
  __int64 v13; // x24
  _BOOL4 v14; // w23
  int32_t v15; // w22
  __int64 v16; // x1
  struct UserServantMaster_o *userServantMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x28
  unsigned __int64 v20; // x27
  int32_t v21; // w22
  __int128 v22; // q1
  int32_t v23; // w24
  UserItemMaster_o *userItemMaster; // x23
  int v25; // w19
  int32_t haveQpVal; // w23
  int32_t m_CancellationTokenSource; // w24
  Il2CppObject *Master_object; // x0
  __int64 v30; // x21
  __int64 v31; // x22
  CombineLimitReleaseMaster_o *v32; // x20
  int32_t v33; // w0
  __int64 v34; // x8
  int32_t v35; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v39; // [xsp+0h] [xbp-C0h]
  char v40; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v44; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v6 = this;
  if ( (byte_49FF93E & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, usrData);
    sub_1B640C8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (CheckCombineEnalbleControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_49FF93E = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  if ( !usrData )
    goto LABEL_40;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v13 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v14 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v13;
  *(_QWORD *)&v45.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
  if ( ((v14 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v25) = 0;
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
                                             v15,
                                             0LL);
    if ( !this )
      goto LABEL_40;
    userServantMaster = this->fields.userServantMaster;
    if ( !userServantMaster )
      goto LABEL_40;
    MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
    v39 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      servantMaster = this->fields.servantMaster;
      v20 = 0LL;
      v40 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_41;
        if ( !servantMaster )
          goto LABEL_40;
        if ( v20 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_41:
          sub_1B6432C(this, v16);
        v21 = *((_DWORD *)&userServantMaster->fields.list + v20);
        v22 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v23 = *((_DWORD *)&servantMaster->fields.list + v20);
        userItemMaster = v6->fields.userItemMaster;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v41 = v42;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                 &v41,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_40;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v21,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_40;
        if ( v21 == entity->fields.itemId )
        {
          if ( v23 > entity->fields.num )
            break;
          v40 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v20 >= (int)MasterName_k__BackingField )
          goto LABEL_30;
      }
    }
    v40 = 0;
LABEL_30:
    haveQpVal = v6->fields.haveQpVal;
    m_CancellationTokenSource = (int32_t)v39->fields.m_CancellationTokenSource;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v31 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v32 = (CombineLimitReleaseMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v31;
    *(_QWORD *)&v46.fields.fakeValue = v30;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
    v34 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v47.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v47.fields.currentCryptoKey = v34;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
    if ( !v32 )
LABEL_40:
      sub_1B64324(this);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v32,
                                             &v44,
                                             v35,
                                             (_DWORD)this + 1,
                                             0LL);
    v25 = (unsigned __int8)v40 & (haveQpVal >= m_CancellationTokenSource);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_40;
      condType = v44->fields.condType;
      condTargetId = v44->fields.condTargetId;
      condNum = v44->fields.condNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v25 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
    }
  }
  return v25;
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
  _BOOL4 isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v15; // x23
  __int64 v16; // x24
  _BOOL4 v17; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  int32_t *v19; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  CommonConsumeEntity_array *v23; // x24
  System_Collections_Generic_HashSet_int__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_HashSet_int__o *v27; // x23
  __int64 v28; // x1
  int max_length; // w8
  __int64 v30; // x27
  CommonConsumeEntity_o *v31; // x26
  Il2CppObject *Master_object; // x0
  __int64 v33; // x25
  __int64 v34; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x24
  System_Int32_array *v36; // x22
  System_Int32_array *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v4 = this;
  if ( (byte_49FF940 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_49FF940 = 1;
  }
  if ( !usrData )
    goto LABEL_33;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v16 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v17 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v16;
  *(_QWORD *)&v39.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
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
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_33;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v19[12], 0LL);
  if ( !IdEntityList )
    return 0;
  v23 = IdEntityList;
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  max_length = v23->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v30 >= max_length )
        sub_1B6432C(this, v28);
      v31 = v23->m_Items[v30];
      if ( !v31 )
        break;
      if ( !v24 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v24,
                                               v31->fields.objectId,
                                               (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v27 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v27,
                                               v31->fields.num,
                                               (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v23->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_21;
    }
LABEL_33:
    sub_1B64324(this);
  }
LABEL_21:
  if ( v19[13] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v34 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v34;
    *(_QWORD *)&v40.fields.fakeValue = v33;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
    if ( !v35 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v35,
                                             (int32_t)this,
                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    if ( !v24 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v24,
                                             (int32_t)this->fields.m_CancellationTokenSource,
                                             (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v27 )
      goto LABEL_33;
    System_Collections_Generic_HashSet_int___Add(
      v27,
      v19[13],
      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v36, v37, v4->fields.haveQpVal, v19[8], 0LL);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  System_Int32_array *SkillIdList; // x25
  __int64 v8; // x1
  __int64 v9; // x8
  CheckCombineEnalbleControl_o *v10; // x28
  unsigned __int64 v11; // x27
  int32_t v12; // w23
  struct ServantMaster_o *servantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v15; // x29
  struct UserServantMaster_o *userServantMaster; // x23
  int32_t v17; // w24
  int32_t v18; // w22
  System_Int32_array *v19; // x26
  __int128 v20; // q1
  UserItemMaster_o *userItemMaster; // x25
  CheckCombineEnalbleControl_o *v23; // [xsp+10h] [xbp-D0h]
  char v24; // [xsp+18h] [xbp-C8h]
  bool v25; // [xsp+1Ch] [xbp-C4h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+20h] [xbp-C0h]
  CheckCombineEnalbleControl_o *v27; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v27 = this;
  if ( (byte_49FF93F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    this = (CheckCombineEnalbleControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_49FF93F = 1;
  }
  entity = 0LL;
  if ( !usrData
    || (SkillIdList = UserServantEntity__getSkillIdList(usrData, -1, -1, 1, -1, 0LL),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrData->klass->vtable._6_getSkillLevelList.method)(
                                                 usrData,
                                                 usrData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_38:
    sub_1B64324(this);
  }
  v9 = *(_QWORD *)&SkillIdList->max_length;
  v25 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    v10 = this;
    v11 = 0LL;
    p_userId = &usrData->fields.userId;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_39;
      if ( !v10 )
        goto LABEL_38;
      if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      v8 = (unsigned int)SkillIdList->m_Items[v11 + 1];
      if ( (int)v8 >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v27->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v12 = *((_DWORD *)&v10->fields.servantMaster + v11);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 v8,
                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_38;
        if ( v12 < SLODWORD(this->fields.userServantMaster) )
        {
          if ( !servantEntity )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)v27->fields.combineSkillMaster;
          if ( !this )
            goto LABEL_38;
          this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                   (CombineSkillMaster_o *)this,
                                                   servantEntity->fields.combineSkillId,
                                                   v12,
                                                   0LL);
          v23 = this;
          if ( this )
          {
            servantMaster = this->fields.servantMaster;
            if ( !servantMaster )
              goto LABEL_38;
            MasterName_k__BackingField = servantMaster->fields._MasterName_k__BackingField;
            if ( (int)MasterName_k__BackingField >= 1 )
            {
              v15 = 0LL;
              userServantMaster = this->fields.userServantMaster;
              v24 = 0;
              while ( v15 < (unsigned int)MasterName_k__BackingField )
              {
                if ( !userServantMaster )
                  goto LABEL_38;
                if ( v15 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
                  break;
                v17 = *((_DWORD *)&servantMaster->fields.list + v15);
                v18 = *((_DWORD *)&userServantMaster->fields.list + v15);
                v19 = SkillIdList;
                v20 = *(_OWORD *)&p_userId->fields.fakeValue;
                userItemMaster = v27->fields.userItemMaster;
                *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
                *(_OWORD *)&v29.fields.fakeValue = v20;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v28 = v29;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                                         &v28,
                                                         0LL);
                if ( !userItemMaster )
                  goto LABEL_38;
                this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                         userItemMaster,
                                                         &entity,
                                                         (int64_t)this,
                                                         v17,
                                                         0LL);
                SkillIdList = v19;
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_36;
                if ( !entity )
                  goto LABEL_38;
                if ( v17 == entity->fields.itemId )
                {
                  if ( v18 > entity->fields.num )
                    goto LABEL_36;
                  v24 = 1;
                }
                LODWORD(MasterName_k__BackingField) = servantMaster->fields._MasterName_k__BackingField;
                if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
                  goto LABEL_34;
              }
LABEL_39:
              sub_1B6432C(this, v8);
            }
            v24 = 0;
LABEL_34:
            if ( (v24 & 1) != 0 && v27->fields.haveQpVal >= SLODWORD(v23->fields.m_CancellationTokenSource) )
              return v25;
          }
        }
      }
LABEL_36:
      LODWORD(v9) = SkillIdList->max_length;
      v25 = (__int64)++v11 < (int)v9;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  return v25;
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
  int32_t v9; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  int v19; // w8
  int *v20; // x10
  int v21; // w19
  int32_t v22; // w24
  int32_t v23; // w26
  int32_t v24; // w25
  int32_t v25; // w28
  int32_t v26; // w29
  int32_t v27; // w20
  __int64 v28; // x21
  CheckCombineEnalbleControl_o *v29; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v31; // x23
  __int64 v32; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  __int64 v41; // x8
  UserServantEntity_o **v42; // x21
  unsigned __int64 v43; // x19
  CombineEnableData_o *v44; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  int32_t v46; // w2
  int32_t v47; // w3
  struct CombineEnableData_o *v48; // x8
  int *v49; // [xsp+0h] [xbp-70h]
  int32_t v50; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_49FF93C & 1) == 0 )
  {
    sub_1B640C8(&CombineEnableData_TypeInfo, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FF93C = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v9 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v9;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.costumeSvtIdList, (int32_t)CostumeSvtIdList, v11, v12);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.friendshipExceedSvtIdList, (int32_t)v15, v16, v17);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v19 = *((_DWORD *)SelfUserGame + 6);
  v20 = (int *)SelfUserGame;
  if ( v19 >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v49 = (int *)SelfUserGame;
    while ( v21 < (unsigned int)v19 )
    {
      v28 = *(_QWORD *)&v20[2 * v21 + 8];
      v50 = v22;
      if ( !v28 )
        goto LABEL_26;
      v29 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v32 = *(_QWORD *)(v28 + 80);
      v31 = *(_QWORD *)(v28 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v32;
      *(_QWORD *)&v51.fields.fakeValue = v31;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v29;
      v27 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v29,
               (UserServantEntity_o *)v28,
               (ServantEntity_o *)Entity,
               v34);
      v26 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v29,
               (UserServantEntity_o *)v28,
               (ServantEntity_o *)Entity,
               v35);
      v25 += CheckCombineEnalbleControl__GetIsNpUpEnable(v29, (UserServantEntity_o *)v28, v36);
      v24 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v29, (UserServantEntity_o *)v28, v37);
      v23 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v29, (UserServantEntity_o *)v28, v38);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v29,
                               (UserServantEntity_o *)v28,
                               v39);
      v20 = v49;
      ++v21;
      v19 = v49[6];
      v22 = v50 + ((unsigned __int8)SelfUserGame & 1);
      if ( v21 >= v19 )
        goto LABEL_18;
    }
LABEL_27:
    sub_1B6432C(SelfUserGame, v18);
  }
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v41 = *((_QWORD *)SelfUserGame + 3);
  v42 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v41 >= 1 )
  {
    v43 = 0LL;
    while ( v43 < (unsigned int)v41 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v42[v43 + 4], v40);
      LODWORD(v41) = *((_DWORD *)v42 + 6);
      ++v43;
      v23 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v43 >= (int)v41 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v44 = (CombineEnableData_o *)sub_1B64314(CombineEnableData_TypeInfo, v18, v40);
  CombineEnableData___ctor(v44, 0LL);
  this->fields.combineEnalbeInfo = v44;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_combineEnalbeInfo, (int32_t)v44, v46, v47);
  v48 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1B64324(SelfUserGame);
  v48->fields.limitUpEnableNum = v27;
  v48->fields.skillUpEnableNum = v26;
  v48->fields.npUpEnableNum = v25;
  v48->fields.lvExceedEnableNum = v24;
  v48->fields.costumeCombineEnableNum = v23;
  v48->fields.friendshipExceedEnableNum = v22;
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
  Il2CppObject *MasterData_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_49FF93D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FF93D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantMaster, (int32_t)MasterData_object, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantMaster, (int32_t)v20, v21, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantStorageMaster, (int32_t)v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v26 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantCollectionMaster, (int32_t)v26, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v29 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineLimitMaster, (int32_t)v29, v30, v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userItemMaster, (int32_t)v32, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v35 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillMaster, (int32_t)v35, v36, v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v38 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineSkillMaster, (int32_t)v38, v39, v40);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureDvcMaster, (int32_t)v41, v42, v43);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v44 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureDvcLvMaster, (int32_t)v44, v45, v46);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v47 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantCostumeMaster, (int32_t)v47, v48, v49);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v50 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v50,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cosReleaseMaster, (int32_t)v50, v51, v52),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.friendshipMaster, (int32_t)v53, v54, v55);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}