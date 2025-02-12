void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB7F15 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v3);
    byte_4BB7F15 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.cachedUserServantNpLvDict,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4BB7F13 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CheckCombineEnalbleControl_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4BB7F13 = 1;
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
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v45, 0LL);
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
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v46, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v15,
               (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v16 = v4->fields.servantCostumeMaster;
          v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v47.fields.currentCryptoKey = v18;
          *(_QWORD *)&v47.fields.fakeValue = v17;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
                sub_1C13F88(this, userSvtEntity);
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v24 = (ServantCostumeEntity_o *)*((_QWORD *)&v20->fields.servantMaster + v21);
              v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v48.fields.currentCryptoKey = v26;
              *(_QWORD *)&v48.fields.fakeValue = v25;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
                  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v50, 0LL);
                  if ( v34 )
                  {
                    v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v44.fields.fakeValue = v36;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v43 = v44;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
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
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
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
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                               v51,
                                                               0LL);
                      if ( v39 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v39,
                          (int32_t)this,
                          (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_48:
                      sub_1C13F80(this, userSvtEntity);
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

  if ( (byte_4BB7F14 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4BB7F14 = 1;
  }
  isExceedFriendshipMax = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    isExceedFriendshipMax = BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*((_QWORD *)isExceedFriendshipMax + 23) + 688LL) > 0 )
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
  v14 = 0;
  while ( v14 < friendshipExceedSvtIdList->fields._size )
  {
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v16;
    *(_QWORD *)&v43.fields.fakeValue = v15;
    isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v43, 0LL);
    if ( this->fields.friendshipExceedSvtIdList )
    {
      v17 = (int)isExceedFriendshipMax;
      isExceedFriendshipMax = (void *)System_Collections_Generic_List_int___get_Item(
                                        this->fields.friendshipExceedSvtIdList,
                                        v14,
                                        (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  *(_QWORD *)&v44.fields.currentCryptoKey = v20;
  *(_QWORD *)&v44.fields.fakeValue = v19;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v44, 0LL);
  if ( !servantMaster )
    goto LABEL_18;
  v21 = DataMasterBase_object__object__int___GetEntity(
          servantMaster,
          (int32_t)isExceedFriendshipMax,
          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v22 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v24 = v21;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v40, 0LL);
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                    userServantEntity->fields.svtId,
                                    0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_18;
  isExceedFriendshipMax = UserServantCollectionMaster__GetEntity(
                            userServantCollectionMaster,
                            v25,
                            (int32_t)isExceedFriendshipMax,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v26 = isExceedFriendshipMax;
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)isExceedFriendshipMax
                                                                                       + 100),
                                    0LL);
  if ( !v24 )
    goto LABEL_18;
  v27 = v26[29] + HIDWORD(v24[6].klass);
  if ( (int)isExceedFriendshipMax < v27 )
    return 0;
  isExceedFriendshipMax = this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  isExceedFriendshipMax = FriendshipMaster__GetEntity(
                            (FriendshipMaster_o *)isExceedFriendshipMax,
                            (int32_t)v24[6].klass,
                            v27 + 1,
                            0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_18;
  v28 = *((_QWORD *)isExceedFriendshipMax + 5);
  v29 = isExceedFriendshipMax;
  if ( !v28 )
    goto LABEL_18;
  if ( *(int *)(v28 + 24) >= 1 )
  {
    v30 = *((_QWORD *)isExceedFriendshipMax + 4);
    v31 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, userServantEntity);
        byte_4BAF1E5 = 1;
      }
      isExceedFriendshipMax = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        isExceedFriendshipMax = NetworkManager_TypeInfo;
      }
      if ( v31 >= *(_DWORD *)(v28 + 24) )
LABEL_58:
        sub_1C13F88(isExceedFriendshipMax, userServantEntity);
      if ( !userItemMaster )
        goto LABEL_18;
      isExceedFriendshipMax = (void *)UserItemMaster__TryGetEntity(
                                        userItemMaster,
                                        &entity,
                                        *(_QWORD *)(*((_QWORD *)isExceedFriendshipMax + 23) + 64LL),
                                        *(_DWORD *)(v28 + 4LL * (int)v31 + 32),
                                        0LL);
      if ( ((unsigned __int8)isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v30 )
        goto LABEL_18;
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_58;
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
  isExceedFriendshipMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v45, 0LL);
  if ( !v34
    || (items = v34->fields._items,
        v38 = Method_System_Collections_Generic_List_int__Add__,
        ++v34->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C13F80(isExceedFriendshipMax, userServantEntity);
  }
  size = v34->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v34,
      (int32_t)isExceedFriendshipMax,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
  _BOOL4 isLimitCountMax; // w0
  __int64 v12; // x22
  __int64 v13; // x24
  _BOOL4 v14; // w23
  int32_t v15; // w22
  struct UserServantMaster_o *userServantMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct ServantMaster_o *servantMaster; // x28
  unsigned __int64 v19; // x27
  int32_t v20; // w22
  __int128 v21; // q1
  int32_t v22; // w24
  UserItemMaster_o *userItemMaster; // x23
  int v24; // w19
  int32_t haveQpVal; // w23
  int32_t m_CancellationTokenSource; // w24
  Il2CppObject *Master_object; // x0
  __int64 v29; // x21
  __int64 v30; // x22
  CombineLimitReleaseMaster_o *v31; // x20
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t v34; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CheckCombineEnalbleControl_o *v38; // [xsp+0h] [xbp-C0h]
  char v39; // [xsp+Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-90h]
  UserItemEntity_o *entity; // [xsp+50h] [xbp-70h] BYREF
  CombineLimitReleaseEntity_o *v43; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v6 = this;
  if ( (byte_4BB7F10 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, usrData);
    sub_1C13D24(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (CheckCombineEnalbleControl_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4BB7F10 = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  if ( !usrData )
    goto LABEL_40;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v13 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v12 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v14 = isLimitCountMax;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v13;
  *(_QWORD *)&v44.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v44, 0LL);
  if ( ((v14 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v24) = 0;
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
    v38 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      servantMaster = this->fields.servantMaster;
      v19 = 0LL;
      v39 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_41;
        if ( !servantMaster )
          goto LABEL_40;
        if ( v19 >= LODWORD(servantMaster->fields._MasterName_k__BackingField) )
LABEL_41:
          sub_1C13F88(this, usrData);
        v20 = *(&userServantMaster->fields.revision + v19);
        v21 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v22 = *(&servantMaster->fields.revision + v19);
        userItemMaster = v6->fields.userItemMaster;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v41;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
                                                 &v40,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_40;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v20,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_40;
        if ( v20 == entity->fields.itemId )
        {
          if ( v22 > entity->fields.num )
            break;
          v39 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v19 >= (int)MasterName_k__BackingField )
          goto LABEL_30;
      }
    }
    v39 = 0;
LABEL_30:
    haveQpVal = v6->fields.haveQpVal;
    m_CancellationTokenSource = (int32_t)v38->fields.m_CancellationTokenSource;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v30 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v31 = (CombineLimitReleaseMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v30;
    *(_QWORD *)&v45.fields.fakeValue = v29;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v45, 0LL);
    v33 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v34 = v32;
    *(_QWORD *)&v46.fields.currentCryptoKey = v33;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v46, 0LL);
    if ( !v31 )
LABEL_40:
      sub_1C13F80(this, usrData);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v31,
                                             &v43,
                                             v34,
                                             (_DWORD)this + 1,
                                             0LL);
    v24 = (unsigned __int8)v39 & (haveQpVal >= m_CancellationTokenSource);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_40;
      condType = v43->fields.condType;
      condTargetId = v43->fields.condTargetId;
      condNum = v43->fields.condNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v24 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
    }
  }
  return v24;
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
  if ( (byte_4BB7F12 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_1C13D24(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4BB7F12 = 1;
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
  *(_QWORD *)&v35.fields.currentCryptoKey = v16;
  *(_QWORD *)&v35.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v35, 0LL);
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
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_33;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v19[12], 0LL);
  if ( !IdEntityList )
    return 0;
  v21 = IdEntityList;
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  max_length = v21->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
        sub_1C13F88(this, usrData);
      v26 = v21->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v22 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v22,
                                               v26->fields.objectId,
                                               (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v23 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v23,
                                               v26->fields.num,
                                               (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v21->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_21;
    }
LABEL_33:
    sub_1C13F80(this, usrData);
  }
LABEL_21:
  if ( v19[13] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v29 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v29;
    *(_QWORD *)&v36.fields.fakeValue = v28;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v36, 0LL);
    if ( !v30 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v30,
                                             (int32_t)this,
                                             (const MethodInfo_3238624 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    if ( !v22 )
      goto LABEL_33;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v22,
                                             (int32_t)this->fields.m_CancellationTokenSource,
                                             (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v23 )
      goto LABEL_33;
    System_Collections_Generic_HashSet_int___Add(
      v23,
      v19[13],
      (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v31 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v31, v32, v4->fields.haveQpVal, v19[8], v33);
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
    sub_1C13F80(this, usrData);
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
  if ( (byte_4BB7F11 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    this = (CheckCombineEnalbleControl_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4BB7F11 = 1;
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
    sub_1C13F80(this, usrData);
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
                                                 (const MethodInfo_3238624 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(
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
              sub_1C13F88(this, usrData);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // w8
  int *v26; // x10
  int v27; // w19
  int32_t v28; // w24
  int32_t v29; // w26
  int32_t v30; // w25
  int32_t v31; // w28
  int32_t v32; // w29
  int32_t v33; // w20
  __int64 v34; // x21
  CheckCombineEnalbleControl_o *v35; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x22
  __int64 v37; // x23
  __int64 v38; // x24
  Il2CppObject *Entity; // x22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  __int64 v47; // x8
  UserServantEntity_o **v48; // x21
  unsigned __int64 v49; // x19
  CombineEnableData_o *v50; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct CombineEnableData_o *v58; // x8
  int *v59; // [xsp+0h] [xbp-70h]
  int32_t v60; // [xsp+Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4BB7F0E & 1) == 0 )
  {
    sub_1C13D24(&CombineEnableData_TypeInfo, method);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB7F0E = 1;
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.costumeSvtIdList,
    (int64_t)CostumeSvtIdList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v18;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.friendshipExceedSvtIdList,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)SelfUserGame,
    (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v25 = *((_DWORD *)SelfUserGame + 6);
  v26 = (int *)SelfUserGame;
  if ( v25 >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v59 = (int *)SelfUserGame;
    while ( v27 < (unsigned int)v25 )
    {
      v34 = *(_QWORD *)&v26[2 * v27 + 8];
      v60 = v28;
      if ( !v34 )
        goto LABEL_26;
      v35 = this;
      servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantMaster;
      v38 = *(_QWORD *)(v34 + 80);
      v37 = *(_QWORD *)(v34 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v38;
      *(_QWORD *)&v61.fields.fakeValue = v37;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v61, 0LL);
      if ( !servantMaster )
        goto LABEL_26;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 servantMaster,
                 (int32_t)SelfUserGame,
                 (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this = v35;
      v33 += CheckCombineEnalbleControl__GetIsLimitUpEnable(
               v35,
               (UserServantEntity_o *)v34,
               (ServantEntity_o *)Entity,
               v40);
      v32 += CheckCombineEnalbleControl__GetIsSkillUpEnable(
               v35,
               (UserServantEntity_o *)v34,
               (ServantEntity_o *)Entity,
               v41);
      v31 += CheckCombineEnalbleControl__GetIsNpUpEnable(v35, (UserServantEntity_o *)v34, v42);
      v30 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v35, (UserServantEntity_o *)v34, v43);
      v29 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v35, (UserServantEntity_o *)v34, v44);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v35,
                               (UserServantEntity_o *)v34,
                               v45);
      v26 = v59;
      ++v27;
      v25 = v59[6];
      v28 = v60 + ((unsigned __int8)SelfUserGame & 1);
      if ( v27 >= v25 )
        goto LABEL_18;
    }
LABEL_27:
    sub_1C13F88(SelfUserGame, v9);
  }
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
LABEL_18:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  v47 = *((_QWORD *)SelfUserGame + 3);
  v48 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v47 >= 1 )
  {
    v49 = 0LL;
    while ( v49 < (unsigned int)v47 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v48[v49 + 4], v46);
      LODWORD(v47) = *((_DWORD *)v48 + 6);
      ++v49;
      v29 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v49 >= (int)v47 )
        goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  v50 = (CombineEnableData_o *)sub_1C13F70(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v50, 0LL);
  this->fields.combineEnalbeInfo = v50;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_combineEnalbeInfo, (int64_t)v50, v52, v53, v54, v55, v56, v57);
  v58 = *p_combineEnalbeInfo;
  if ( !*p_combineEnalbeInfo )
LABEL_26:
    sub_1C13F80(SelfUserGame, v9);
  v58->fields.limitUpEnableNum = v33;
  v58->fields.skillUpEnableNum = v32;
  v58->fields.npUpEnableNum = v31;
  v58->fields.lvExceedEnableNum = v30;
  v58->fields.costumeCombineEnableNum = v29;
  v58->fields.friendshipExceedEnableNum = v28;
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x0
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

  if ( (byte_4BB7F0F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB7F0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantMaster,
    (int64_t)MasterData_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v25 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = (struct UserServantMaster_o *)v25;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userServantMaster, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = (struct UserServantStorageMaster_o *)v32;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userServantStorageMaster,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = (struct UserServantCollectionMaster_o *)v39;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userServantCollectionMaster,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v46 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = (struct CombineLimitMaster_o *)v46;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.combineLimitMaster,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = (struct UserItemMaster_o *)v53;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userItemMaster, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v60 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v60;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.skillMaster, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v67 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = (struct CombineSkillMaster_o *)v67;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.combineSkillMaster,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = (struct TreasureDvcMaster_o *)v74;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.treasureDvcMaster, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v81 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = (struct TreasureDvcLvMaster_o *)v81;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.treasureDvcLvMaster,
    (int64_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v88 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = (struct ServantCostumeMaster_o *)v88;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantCostumeMaster,
    (int64_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v95 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = (struct ServantCostumeReleaseMaster_o *)v95,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.cosReleaseMaster,
          (int64_t)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_1C13F80(Instance, v17);
  }
  v102 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = (struct FriendshipMaster_o *)v102;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.friendshipMaster,
    (int64_t)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}