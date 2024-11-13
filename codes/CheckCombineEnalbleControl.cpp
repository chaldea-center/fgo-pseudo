void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19974 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v5, v6);
    byte_4B19974 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cachedUserServantNpLvDict,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  __int64 v16; // x1
  System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w0
  __int64 v21; // x1
  ServantCostumeMaster_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int m_CancellationTokenSource; // w8
  CheckCombineEnalbleControl_o *v26; // x21
  int v27; // w28
  UserServantEntity_Fields *p_fields; // x29
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v30; // x22
  __int64 v31; // x24
  __int64 v32; // x25
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v34; // x24
  __int64 v35; // x25
  bool IsEventCombineCostume; // w0
  __int64 v37; // x1
  ServantCostumeReleaseMaster_o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x26
  bool v41; // w25
  __int64 v42; // x1
  int32_t v43; // w24
  __int128 v44; // q0
  __int128 v45; // q0
  System_Collections_Generic_List_int__o *v47; // x20
  __int64 v48; // x19
  __int64 v49; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v4 = this;
  if ( (byte_4B19972 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    this = (CheckCombineEnalbleControl_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             v11,
                                             v12);
    byte_4B19972 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_48;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
  *(_QWORD *)&v53.fields.currentCryptoKey = v15;
  *(_QWORD *)&v53.fields.fakeValue = v14;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_48;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
        *(_QWORD *)&v54.fields.currentCryptoKey = v19;
        *(_QWORD *)&v54.fields.fakeValue = v18;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v20,
               (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v22 = v4->fields.servantCostumeMaster;
          v24 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
          *(_QWORD *)&v55.fields.currentCryptoKey = v24;
          *(_QWORD *)&v55.fields.fakeValue = v23;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v55,
                                                   0LL);
          if ( !v22 )
            goto LABEL_48;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v22,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
          if ( !this )
            goto LABEL_48;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v26 = this;
          if ( m_CancellationTokenSource >= 1 )
          {
            v27 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v27 >= (unsigned int)m_CancellationTokenSource )
                sub_1BCAA44(this, userSvtEntity);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v30 = (ServantCostumeEntity_o *)*((_QWORD *)&v26->fields.servantMaster + v27);
              v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
              *(_QWORD *)&v56.fields.currentCryptoKey = v32;
              *(_QWORD *)&v56.fields.fakeValue = v31;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v56,
                                                       0LL);
              if ( !v30 || !userServantCollectionMaster )
                goto LABEL_48;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v30->fields.id,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v4->fields.cosReleaseMaster;
                v35 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
                *(_QWORD *)&v57.fields.currentCryptoKey = v35;
                *(_QWORD *)&v57.fields.fakeValue = v34;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v57,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_48;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v30->fields.id,
                                                         0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v30, 0LL);
                  v38 = v4->fields.cosReleaseMaster;
                  v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  v41 = IsEventCombineCostume;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
                  *(_QWORD *)&v58.fields.currentCryptoKey = v40;
                  *(_QWORD *)&v58.fields.fakeValue = v39;
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
                  if ( v41 )
                  {
                    v44 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v52.fields.fakeValue = v44;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
                    v51 = v52;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                             &v51,
                                                             0LL);
                    if ( !v38 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v38,
                                                             v30,
                                                             v43,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_44;
                  }
                  else
                  {
                    v45 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v52.fields.fakeValue = v45;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
                    v50 = v52;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                             &v50,
                                                             0LL);
                    if ( !v38 )
                      goto LABEL_48;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v38,
                                                             v30,
                                                             v43,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_44:
                      v47 = v4->fields.costumeSvtIdList;
                      v49 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v48 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          userSvtEntity);
                      *(_QWORD *)&v59.fields.currentCryptoKey = v49;
                      *(_QWORD *)&v59.fields.fakeValue = v48;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v59,
                                                               0LL);
                      if ( v47 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v47,
                          (int32_t)this,
                          (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1BCAA3C(this, userSvtEntity);
                    }
                  }
                }
              }
              m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
              ++v27;
            }
            while ( v27 < m_CancellationTokenSource );
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
  int64_t isExceedFriendshipMax; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  int32_t v21; // w21
  __int64 v22; // x22
  __int64 v23; // x23
  int v24; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int128 v30; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  Il2CppObject *v32; // x21
  int64_t v33; // x23
  int64_t v34; // x22
  int v35; // w8
  __int64 v36; // x23
  int64_t v37; // x21
  __int64 v38; // x26
  unsigned int v39; // w25
  UserItemMaster_o *userItemMaster; // x22
  struct System_Collections_Generic_List_int__o *v42; // x20
  __int64 v43; // x19
  __int64 v44; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B19973 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userServantEntity, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    byte_4B19973 = 1;
  }
  isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userServantEntity);
    isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*(_QWORD *)(isExceedFriendshipMax + 184) + 688LL) > 0 )
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
  v21 = 0;
  while ( v21 < friendshipExceedSvtIdList->fields._size )
  {
    v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    *(_QWORD *)&v51.fields.currentCryptoKey = v23;
    *(_QWORD *)&v51.fields.fakeValue = v22;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v24 = isExceedFriendshipMax;
      isExceedFriendshipMax = System_Collections_Generic_List_int___get_Item(
                                this->fields.friendshipExceedSvtIdList,
                                v21,
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v24 == (_DWORD)isExceedFriendshipMax )
        return 0;
      friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
      ++v21;
      if ( friendshipExceedSvtIdList )
        continue;
    }
    goto LABEL_18;
  }
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
  *(_QWORD *)&v52.fields.currentCryptoKey = v27;
  *(_QWORD *)&v52.fields.fakeValue = v26;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
  if ( !servantMaster )
    goto LABEL_18;
  v28 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v30 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v32 = v28;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
  v48 = v49;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                            userServantEntity->fields.svtId,
                            0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_18;
  isExceedFriendshipMax = (int64_t)UserServantCollectionMaster__GetEntity(
                                     userServantCollectionMaster,
                                     v33,
                                     isExceedFriendshipMax,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v34 = isExceedFriendshipMax;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(isExceedFriendshipMax + 100),
                            0LL);
  if ( !v32 )
    goto LABEL_18;
  v35 = *(_DWORD *)(v34 + 116) + HIDWORD(v32[6].klass);
  if ( (int)isExceedFriendshipMax < v35 )
    return 0;
  isExceedFriendshipMax = (int64_t)this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  isExceedFriendshipMax = (int64_t)FriendshipMaster__GetEntity(
                                     (FriendshipMaster_o *)isExceedFriendshipMax,
                                     (int32_t)v32[6].klass,
                                     v35 + 1,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v36 = *(_QWORD *)(isExceedFriendshipMax + 40);
  v37 = isExceedFriendshipMax;
  if ( !v36 )
    goto LABEL_18;
  if ( *(int *)(v36 + 24) >= 1 )
  {
    v38 = *(_QWORD *)(isExceedFriendshipMax + 32);
    v39 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userServantEntity);
      isExceedFriendshipMax = NetworkManager__get_UserId(0LL);
      if ( v39 >= *(_DWORD *)(v36 + 24) )
LABEL_54:
        sub_1BCAA44(isExceedFriendshipMax, userServantEntity);
      if ( !userItemMaster )
        goto LABEL_18;
      isExceedFriendshipMax = UserItemMaster__TryGetEntity(
                                userItemMaster,
                                &entity,
                                isExceedFriendshipMax,
                                *(_DWORD *)(v36 + 4LL * (int)v39 + 32),
                                0LL);
      if ( (isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v38 )
        goto LABEL_18;
      if ( v39 >= *(_DWORD *)(v38 + 24) )
        goto LABEL_54;
      if ( entity->fields.num < *(_DWORD *)(v38 + 4LL * (int)v39 + 32) )
        return 0;
    }
    while ( (signed int)++v39 < *(_DWORD *)(v36 + 24) );
  }
  if ( this->fields.haveQpVal < *(_DWORD *)(v37 + 28) )
    return 0;
  v42 = this->fields.friendshipExceedSvtIdList;
  v44 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
  *(_QWORD *)&v53.fields.currentCryptoKey = v44;
  *(_QWORD *)&v53.fields.fakeValue = v43;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
  if ( !v42
    || (items = v42->fields._items,
        v46 = Method_System_Collections_Generic_List_int__Add__,
        ++v42->fields._version,
        !items) )
  {
LABEL_18:
    sub_1BCAA3C(isExceedFriendshipMax, userServantEntity);
  }
  size = v42->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v42,
      isExceedFriendshipMax,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v42->fields._size = size + 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  _BOOL4 isLimitCountMax; // w0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x24
  _BOOL4 v19; // w23
  int32_t v20; // w22
  struct UserServantMaster_o *userServantMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x28
  unsigned __int64 v24; // x27
  int32_t v25; // w22
  __int128 v26; // q1
  int32_t v27; // w24
  UserItemMaster_o *userItemMaster; // x23
  int v29; // w19
  int32_t haveQpVal; // w23
  int32_t m_CancellationTokenSource; // w24
  Il2CppObject *Master_object; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x22
  CombineLimitReleaseMaster_o *v37; // x20
  int32_t v38; // w0
  __int64 v39; // x8
  int32_t v40; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v44; // [xsp+0h] [xbp-C0h]
  char v45; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v49; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v6 = this;
  if ( (byte_4B1996F & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, usrData, servantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    this = (CheckCombineEnalbleControl_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             v13,
                                             v14);
    byte_4B1996F = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  if ( !usrData )
    goto LABEL_40;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v18 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v19 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v50.fields.currentCryptoKey = v18;
  *(_QWORD *)&v50.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
  if ( ((v19 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v29) = 0;
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
                                             v20,
                                             0LL);
    if ( !this )
      goto LABEL_40;
    userServantMaster = this->fields.userServantMaster;
    if ( !userServantMaster )
      goto LABEL_40;
    MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
    v44 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      servantMaster = this->fields.servantMaster;
      v24 = 0LL;
      v45 = 0;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_41;
        if ( !servantMaster )
          goto LABEL_40;
        if ( v24 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_41:
          sub_1BCAA44(this, usrData);
        v25 = *((_DWORD *)&userServantMaster->fields.list + v24);
        v26 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v27 = *((_DWORD *)&servantMaster->fields.list + v24);
        userItemMaster = v6->fields.userItemMaster;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrData);
        v46 = v47;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                 &v46,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_40;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v25,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_40;
        if ( v25 == entity->fields.itemId )
        {
          if ( v27 > entity->fields.num )
            break;
          v45 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v24 >= (int)MasterName_k__BackingField )
          goto LABEL_30;
      }
    }
    v45 = 0;
LABEL_30:
    haveQpVal = v6->fields.haveQpVal;
    m_CancellationTokenSource = (int32_t)v44->fields.m_CancellationTokenSource;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrData);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v36 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v37 = (CombineLimitReleaseMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    *(_QWORD *)&v51.fields.currentCryptoKey = v36;
    *(_QWORD *)&v51.fields.fakeValue = v35;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
    v39 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v52.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v40 = v38;
    *(_QWORD *)&v52.fields.currentCryptoKey = v39;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
    if ( !v37 )
LABEL_40:
      sub_1BCAA3C(this, usrData);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v37,
                                             &v49,
                                             v40,
                                             (_DWORD)this + 1,
                                             0LL);
    v29 = (unsigned __int8)v45 & (haveQpVal >= m_CancellationTokenSource);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_40;
      condType = v49->fields.condType;
      condTargetId = v49->fields.condTargetId;
      condNum = v49->fields.condNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, usrData);
      return v29 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
    }
  }
  return v29;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  CheckCombineEnalbleControl_o *v4; // x20
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
  _BOOL4 isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v23; // x1
  __int64 v24; // x23
  __int64 v25; // x24
  _BOOL4 v26; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  __int64 v28; // x1
  int32_t *v29; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  CommonConsumeEntity_array *v34; // x24
  System_Collections_Generic_HashSet_int__o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_HashSet_int__o *v39; // x23
  int max_length; // w8
  __int64 v41; // x27
  CommonConsumeEntity_o *v42; // x26
  Il2CppObject *Master_object; // x0
  __int64 v44; // x1
  __int64 v45; // x25
  __int64 v46; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x24
  System_Int32_array *v48; // x22
  System_Int32_array *v49; // x0
  const MethodInfo *v50; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v4 = this;
  if ( (byte_4B19971 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18);
    this = (CheckCombineEnalbleControl_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v19,
                                             v20);
    byte_4B19971 = 1;
  }
  if ( !usrData )
    goto LABEL_33;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v25 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v26 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v24;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
  if ( (v26 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v29 = (int32_t *)SvtExceedEnt;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_33;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v29[12], 0LL);
  if ( !IdEntityList )
    return 0;
  v34 = IdEntityList;
  v35 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_HashSet_int____ctor(
    v35,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v39 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_HashSet_int____ctor(
    v39,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  max_length = v34->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v41 >= max_length )
        sub_1BCAA44(this, usrData);
      v42 = v34->m_Items[v41];
      if ( !v42 )
        break;
      if ( !v35 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v35,
                                               v42->fields.objectId,
                                               (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v39 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v39,
                                               v42->fields.num,
                                               (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v34->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_21;
    }
LABEL_33:
    sub_1BCAA3C(this, usrData);
  }
LABEL_21:
  if ( v29[13] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, usrData);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v46 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    *(_QWORD *)&v53.fields.currentCryptoKey = v46;
    *(_QWORD *)&v53.fields.fakeValue = v45;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
    if ( !v47 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v47,
                                             (int32_t)this,
                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    if ( !v35 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v35,
                                             (int32_t)this->fields.m_CancellationTokenSource,
                                             (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v39 )
      goto LABEL_33;
    System_Collections_Generic_HashSet_int___Add(
      v39,
      v29[13],
      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v48 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v49 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v48, v49, v4->fields.haveQpVal, v29[8], v50);
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
    sub_1BCAA3C(this, usrData);
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
  __int64 v7; // x2
  System_Int32_array *SkillIdList; // x25
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

  v5 = usrData;
  v27 = this;
  if ( (byte_4B19970 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData, servantEntity);
    this = (CheckCombineEnalbleControl_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    byte_4B19970 = 1;
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
    sub_1BCAA3C(this, usrData);
  }
  v9 = *(_QWORD *)&SkillIdList->max_length;
  v25 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    v10 = this;
    v11 = 0LL;
    p_userId = &v5->fields.userId;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_39;
      if ( !v10 )
        goto LABEL_38;
      if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_39;
      usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v11 + 1];
      if ( (int)usrData >= 1 )
      {
        this = (CheckCombineEnalbleControl_o *)v27->fields.skillMaster;
        if ( !this )
          goto LABEL_38;
        v12 = *((_DWORD *)&v10->fields.servantMaster + v11);
        this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 (int32_t)usrData,
                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, usrData);
                v28 = v29;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
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
              sub_1BCAA44(this, usrData);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *SelfUserGame; // x0
  __int64 v15; // x1
  int32_t v16; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w8
  int *v35; // x10
  int v36; // w19
  int32_t v37; // w24
  int32_t v38; // w26
  int32_t v39; // w25
  int32_t v40; // w28
  int32_t v41; // w29
  int32_t v42; // w20
  __int64 v43; // x21
  CheckCombineEnalbleControl_o *v44; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v46; // x23
  __int64 v47; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  __int64 v56; // x3
  __int64 v57; // x8
  UserServantEntity_o **v58; // x21
  unsigned __int64 v59; // x19
  CombineEnableData_o *v60; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct CombineEnableData_o *v68; // x8
  int *v69; // [xsp+0h] [xbp-70h]
  int32_t v70; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4B1996D & 1) == 0 )
  {
    sub_1BCA7E0(&CombineEnableData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    byte_4B1996D = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v16 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v16;
  if ( !SelfUserGame )
    goto LABEL_26;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeSvtIdList,
    (int64_t)CostumeSvtIdList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.friendshipExceedSvtIdList,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v34 = *((_DWORD *)SelfUserGame + 6);
  v35 = (int *)SelfUserGame;
  if ( v34 >= 1 )
  {
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v69 = (int *)SelfUserGame;
    while ( v36 < (unsigned int)v34 )
    {
      v43 = *(_QWORD *)&v35[2 * v36 + 8];
      v70 = v37;
      if ( !v43 )
        goto LABEL_26;
      v44 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v47 = *(_QWORD *)(v43 + 80);
      v46 = *(_QWORD *)(v43 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
      *(_QWORD *)&v71.fields.currentCryptoKey = v47;
      *(_QWORD *)&v71.fields.fakeValue = v46;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v44;
      v42 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v44,
               (UserServantEntity_o *)v43,
               (ServantEntity_o *)Entity,
               v49);
      v41 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v44,
               (UserServantEntity_o *)v43,
               (ServantEntity_o *)Entity,
               v50);
      v40 += CheckCombineEnalbleControl__GetIsNpUpEnable(v44, (UserServantEntity_o *)v43, v51);
      v39 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v44, (UserServantEntity_o *)v43, v52);
      v38 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v44, (UserServantEntity_o *)v43, v53);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v44,
                               (UserServantEntity_o *)v43,
                               v54);
      v35 = v69;
      ++v36;
      v34 = v69[6];
      v37 = v70 + ((unsigned __int8)SelfUserGame & 1);
      if ( v36 >= v34 )
        goto LABEL_18;
    }
LABEL_27:
    sub_1BCAA44(SelfUserGame, v15);
  }
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v57 = *((_QWORD *)SelfUserGame + 3);
  v58 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v57 >= 1 )
  {
    v59 = 0LL;
    while ( v59 < (unsigned int)v57 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v58[v59 + 4], v55);
      LODWORD(v57) = *((_DWORD *)v58 + 6);
      ++v59;
      v38 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v59 >= (int)v57 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v60 = (CombineEnableData_o *)sub_1BCAA2C(CombineEnableData_TypeInfo, v15, v55, v56);
  CombineEnableData___ctor(v60, 0LL);
  this->fields.combineEnalbeInfo = v60;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)p_combineEnalbeInfo, (int64_t)v60, v62, v63, v64, v65, v66, v67);
  v68 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1BCAA3C(SelfUserGame, v15);
  v68->fields.limitUpEnableNum = v42;
  v68->fields.skillUpEnableNum = v41;
  v68->fields.npUpEnableNum = v40;
  v68->fields.lvExceedEnableNum = v39;
  v68->fields.costumeCombineEnableNum = v38;
  v68->fields.friendshipExceedEnableNum = v37;
}


void __fastcall CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  Il2CppObject *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  Il2CppObject *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  Il2CppObject *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  Il2CppObject *v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  Il2CppObject *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7

  if ( (byte_4B1996E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineLimitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineSkillMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B1996E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantMaster,
    (int64_t)MasterData_object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userServantMaster, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v46 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v46;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantStorageMaster,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v53;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantCollectionMaster,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v60 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v60;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineLimitMaster,
    (int64_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v67 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userItemMaster, (int64_t)v67, v68, v69, v70, v71, v72, v73);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillMaster, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v81 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v81;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineSkillMaster,
    (int64_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v88 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.treasureDvcMaster, (int64_t)v88, v89, v90, v91, v92, v93, v94);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v95 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v95;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.treasureDvcLvMaster,
    (int64_t)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v102 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v102;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantCostumeMaster,
    (int64_t)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v109 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v109,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.cosReleaseMaster,
          (int64_t)v109,
          v110,
          v111,
          v112,
          v113,
          v114,
          v115),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v31);
  }
  v116 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v116;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.friendshipMaster,
    (int64_t)v116,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}