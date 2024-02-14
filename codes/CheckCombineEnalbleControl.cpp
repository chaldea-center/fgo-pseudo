void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421426F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v4);
    byte_421426F = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantNpLvDict,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  int servantMaster; // w8
  CheckCombineEnalbleControl_o *v20; // x21
  int v21; // w27
  UserServantEntity_Fields *p_fields; // x28
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
  __int64 v33; // x25
  int32_t v34; // w0
  __int128 v35; // q0
  int32_t v36; // w24
  int32_t v37; // w0
  __int128 v38; // q0
  int32_t v39; // w24
  System_Collections_Generic_List_int__o *v41; // x20
  __int64 v42; // x19
  __int64 v43; // x21
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v4 = this;
  if ( (byte_421426D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CheckCombineEnalbleControl_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_421426D = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_60;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v11;
  *(_QWORD *)&v48.fields.fakeValue = v10;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_60;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v14;
        *(_QWORD *)&v49.fields.fakeValue = v13;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v15,
               (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v16 = v4->fields.servantCostumeMaster;
          v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v50.fields.currentCryptoKey = v18;
          *(_QWORD *)&v50.fields.fakeValue = v17;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v50,
                                                   0LL);
          if ( !v16 )
            goto LABEL_60;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v16,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
          if ( !this )
            goto LABEL_60;
          servantMaster = (int)this->fields.servantMaster;
          v20 = this;
          if ( servantMaster >= 1 )
          {
            v21 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v21 >= (unsigned int)servantMaster )
              {
                v44 = sub_B0D9A8(this);
                sub_B0D948(v44, 0LL);
              }
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v24 = (ServantCostumeEntity_o *)*((_QWORD *)&v20->fields.userServantMaster + v21);
              v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v51.fields.currentCryptoKey = v26;
              *(_QWORD *)&v51.fields.fakeValue = v25;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       v51,
                                                       0LL);
              if ( !v24 || !userServantCollectionMaster )
                goto LABEL_60;
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
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v52.fields.currentCryptoKey = v29;
                *(_QWORD *)&v52.fields.fakeValue = v28;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         v52,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_60;
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
                  if ( IsEventCombineCostume )
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v53.fields.currentCryptoKey = v33;
                    *(_QWORD *)&v53.fields.fakeValue = v32;
                    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL);
                    v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v36 = v34;
                    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v47.fields.fakeValue = v35;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v46 = v47;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                             &v46,
                                                             0LL);
                    if ( !v31 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v31,
                                                             v24,
                                                             v36,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      goto LABEL_55;
                  }
                  else
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v54.fields.currentCryptoKey = v33;
                    *(_QWORD *)&v54.fields.fakeValue = v32;
                    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
                    v38 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v39 = v37;
                    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v47.fields.fakeValue = v38;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v45 = v47;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                             &v45,
                                                             0LL);
                    if ( !v31 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v31,
                                                             v24,
                                                             v39,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_55:
                      v41 = v4->fields.costumeSvtIdList;
                      v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v55.fields.currentCryptoKey = v43;
                      *(_QWORD *)&v55.fields.fakeValue = v42;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v55,
                                                               0LL);
                      if ( v41 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v41,
                          (int32_t)this,
                          (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_60:
                      sub_B0D97C(this);
                    }
                  }
                }
              }
              servantMaster = (int)v20->fields.servantMaster;
              ++v21;
            }
            while ( v21 < servantMaster );
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
  __int64 v14; // x23
  __int64 v15; // x21
  __int64 v16; // x22
  struct System_Collections_Generic_List_int__o *v17; // x22
  struct ServantMaster_o *servantMaster; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  WarEntity_o *v21; // x0
  __int128 v22; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  WarEntity_o *v24; // x21
  int64_t v25; // x23
  int64_t v26; // x22
  int v27; // w8
  __int64 v28; // x23
  int64_t v29; // x21
  __int64 v30; // x26
  unsigned int v31; // w25
  UserItemMaster_o *userItemMaster; // x22
  System_Collections_Generic_List_int__o *v34; // x20
  __int64 v35; // x19
  __int64 v36; // x21
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_421426E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_421426E = 1;
  }
  entity = 0LL;
  isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    isExceedFriendshipMax = (int64_t)BalanceConfig_TypeInfo;
  }
  if ( *(int *)(*(_QWORD *)(isExceedFriendshipMax + 184) + 648LL) > 0 )
    return 0;
  if ( !userServantEntity )
    goto LABEL_22;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 0;
  if ( UserServantEntity__IsHeroine(userServantEntity, 0LL) )
    return 0;
  isExceedFriendshipMax = UserServantEntity__isExceedFriendshipMax(userServantEntity, 0LL);
  if ( (isExceedFriendshipMax & 1) != 0 )
    return 0;
  friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
  if ( !friendshipExceedSvtIdList )
    goto LABEL_22;
  v14 = 0LL;
  while ( (int)v14 < friendshipExceedSvtIdList->fields._size )
  {
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v16;
    *(_QWORD *)&v41.fields.fakeValue = v15;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
    v17 = this->fields.friendshipExceedSvtIdList;
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields._size <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( (_DWORD)isExceedFriendshipMax == v17->fields._items->m_Items[v14 + 1] )
      return 0;
    friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
    ++v14;
    if ( !friendshipExceedSvtIdList )
      goto LABEL_22;
  }
  servantMaster = this->fields.servantMaster;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v20;
  *(_QWORD *)&v42.fields.fakeValue = v19;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v42, 0LL);
  if ( !servantMaster )
    goto LABEL_22;
  v21 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v22 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v24 = v21;
  *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v39.fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v38 = v39;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v38, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                            userServantEntity->fields.svtId,
                            0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_22;
  isExceedFriendshipMax = (int64_t)UserServantCollectionMaster__GetEntity(
                                     userServantCollectionMaster,
                                     v25,
                                     isExceedFriendshipMax,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_22;
  v26 = isExceedFriendshipMax;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(isExceedFriendshipMax + 100),
                            0LL);
  if ( !v24 )
    goto LABEL_22;
  v27 = *(_DWORD *)(v26 + 116) + v24->fields.lastQuestId;
  if ( (int)isExceedFriendshipMax < v27 )
    return 0;
  isExceedFriendshipMax = (int64_t)this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax
    || (isExceedFriendshipMax = (int64_t)FriendshipMaster__GetEntity(
                                           (FriendshipMaster_o *)isExceedFriendshipMax,
                                           v24->fields.eventId,
                                           v27 + 1,
                                           0LL)) == 0
    || (v28 = *(_QWORD *)(isExceedFriendshipMax + 40), v29 = isExceedFriendshipMax, !v28) )
  {
LABEL_22:
    sub_B0D97C(isExceedFriendshipMax);
  }
  if ( *(int *)(v28 + 24) >= 1 )
  {
    v30 = *(_QWORD *)(isExceedFriendshipMax + 32);
    v31 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      isExceedFriendshipMax = NetworkManager__get_UserId(0LL);
      if ( v31 >= *(_DWORD *)(v28 + 24) )
      {
LABEL_58:
        v37 = sub_B0D9A8(isExceedFriendshipMax);
        sub_B0D948(v37, 0LL);
      }
      if ( !userItemMaster )
        goto LABEL_22;
      isExceedFriendshipMax = UserItemMaster__TryGetEntity(
                                userItemMaster,
                                &entity,
                                isExceedFriendshipMax,
                                *(_DWORD *)(v28 + 4LL * (int)v31 + 32),
                                0LL);
      if ( (isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v30 )
        goto LABEL_22;
      if ( v31 >= *(_DWORD *)(v30 + 24) )
        goto LABEL_58;
      if ( entity->fields.num < *(_DWORD *)(v30 + 4LL * (int)v31 + 32) )
        return 0;
    }
    while ( (signed int)++v31 < *(_DWORD *)(v28 + 24) );
  }
  if ( this->fields.haveQpVal >= *(_DWORD *)(v29 + 28) )
  {
    v34 = this->fields.friendshipExceedSvtIdList;
    v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v36;
    *(_QWORD *)&v43.fields.fakeValue = v35;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v43, 0LL);
    if ( v34 )
    {
      System_Collections_Generic_List_int___Add(
        v34,
        isExceedFriendshipMax,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      return 1;
    }
    goto LABEL_22;
  }
  return 0;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLimitUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL4 isLimitCountMax; // w0
  __int64 v11; // x22
  __int64 v12; // x24
  _BOOL4 v13; // w23
  int32_t v14; // w22
  struct UserServantStorageMaster_o *userServantStorageMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct UserServantMaster_o *userServantMaster; // x28
  unsigned __int64 v18; // x27
  int32_t v19; // w22
  __int128 v20; // q1
  int32_t v21; // w20
  UserItemMaster_o *userItemMaster; // x23
  int v23; // w19
  int32_t servantMaster; // w24
  int32_t haveQpVal; // w23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x21
  __int64 v29; // x22
  CombineLimitReleaseMaster_o *v30; // x20
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t v33; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  __int64 v37; // x0
  CheckCombineEnalbleControl_o *v38; // [xsp+8h] [xbp-B8h]
  char v39; // [xsp+14h] [xbp-ACh]
  CheckCombineEnalbleControl_o *v40; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  CombineLimitReleaseEntity_o *v44; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v40 = this;
  if ( (byte_421426A & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, usrData);
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    this = (CheckCombineEnalbleControl_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_421426A = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  if ( !usrData )
    goto LABEL_45;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v12 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v13 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
  if ( ((v13 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v23) = 0;
  }
  else
  {
    if ( !servantEntity )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)v40->fields.combineLimitMaster;
    if ( !this )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                             (CombineLimitMaster_o *)this,
                                             servantEntity->fields.combineLimitId,
                                             v14,
                                             0LL);
    if ( !this )
      goto LABEL_45;
    userServantStorageMaster = this->fields.userServantStorageMaster;
    if ( !userServantStorageMaster )
      goto LABEL_45;
    MasterName_k__BackingField = userServantStorageMaster->fields._MasterName_k__BackingField;
    v38 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      userServantMaster = this->fields.userServantMaster;
      v18 = 0LL;
      v39 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_46;
        if ( !userServantMaster )
          goto LABEL_45;
        if ( v18 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
        {
LABEL_46:
          v37 = sub_B0D9A8(this);
          sub_B0D948(v37, 0LL);
        }
        v19 = *((_DWORD *)&userServantStorageMaster->fields.list + v18);
        v20 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v21 = *((_DWORD *)&userServantMaster->fields.list + v18);
        userItemMaster = v40->fields.userItemMaster;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v20;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v41 = v42;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                 &v41,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_45;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v19,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_45;
        if ( v19 == entity->fields.itemId )
        {
          if ( v21 > entity->fields.num )
            break;
          v39 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantStorageMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v18 >= (int)MasterName_k__BackingField )
          goto LABEL_32;
      }
    }
    v39 = 0;
LABEL_32:
    servantMaster = (int32_t)v38->fields.servantMaster;
    haveQpVal = v40->fields.haveQpVal;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v29 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v30 = (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v46.fields.currentCryptoKey = v29;
    *(_QWORD *)&v46.fields.fakeValue = v28;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL);
    v32 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v47.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v33 = v31;
    *(_QWORD *)&v47.fields.currentCryptoKey = v32;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
    if ( !v30 )
LABEL_45:
      sub_B0D97C(this);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v30,
                                             &v44,
                                             v33,
                                             (_DWORD)this + 1,
                                             0LL);
    v23 = (unsigned __int8)v39 & (haveQpVal >= servantMaster);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_45;
      condType = v44->fields.condType;
      condTargetId = v44->fields.condTargetId;
      condNum = v44->fields.condNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v23 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
    }
  }
  return v23;
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
  ServantExceedEntity_o *v19; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  CommonConsumeEntity_array *v23; // x24
  System_Collections_Generic_HashSet_int__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_HashSet_int__o *v27; // x23
  int max_length; // w8
  __int64 v29; // x27
  CommonConsumeEntity_o *v30; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x24
  System_Int32_array *v35; // x22
  System_Int32_array *v36; // x0
  __int64 v38; // x0
  ServantExceedEntity_o *v39; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v4 = this;
  if ( (byte_421426C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v10);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_421426C = 1;
  }
  if ( !usrData )
    goto LABEL_37;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v16 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v15 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v17 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v16;
  *(_QWORD *)&v40.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v40, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
  if ( (v17 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v19 = SvtExceedEnt;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_37;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v19->fields.consumeId, 0LL);
  if ( !IdEntityList )
    return 0;
  v39 = v19;
  v23 = IdEntityList;
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  max_length = v23->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v29 >= max_length )
      {
        v38 = sub_B0D9A8(this);
        sub_B0D948(v38, 0LL);
      }
      v30 = v23->m_Items[v29];
      if ( !v30 )
        break;
      if ( !v24 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v24,
                                               v30->fields.objectId,
                                               (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v27 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v27,
                                               v30->fields.num,
                                               (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v23->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B0D97C(this);
  }
LABEL_23:
  if ( v39->fields.objectNum >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v33 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v33;
    *(_QWORD *)&v41.fields.fakeValue = v32;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
    if ( !v34 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v34,
                                             (int32_t)this,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( !v24 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v24,
                                             (int32_t)this->fields.servantMaster,
                                             (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v27 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v27,
      v39->fields.objectNum,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v35 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v35, v36, v4->fields.haveQpVal, v39->fields.qp, 0LL);
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
        v9 += HIDWORD(this->fields.treasureDvcMaster);
      if ( ++lv >= v8 )
        return v4->fields.haveQpVal >= v9;
      v6 = tdInfo;
    }
    while ( tdInfo );
LABEL_17:
    sub_B0D97C(this);
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
  System_Int32_array *SkillIdList; // x19
  __int64 v8; // x8
  CheckCombineEnalbleControl_o *v9; // x21
  unsigned __int64 v10; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x27
  int32_t v12; // w1
  int32_t v13; // w23
  struct UserServantMaster_o *userServantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v16; // x28
  struct UserServantStorageMaster_o *userServantStorageMaster; // x23
  int32_t v18; // w24
  __int128 v19; // q1
  int32_t v20; // w22
  UserItemMaster_o *userItemMaster; // x25
  __int64 v23; // x0
  CheckCombineEnalbleControl_o *v24; // [xsp+8h] [xbp-C8h]
  System_Int32_array *v25; // [xsp+10h] [xbp-C0h]
  char v26; // [xsp+1Ch] [xbp-B4h]
  CheckCombineEnalbleControl_o *v27; // [xsp+28h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+50h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v27 = this;
  if ( (byte_421426B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    this = (CheckCombineEnalbleControl_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_421426B = 1;
  }
  entity = 0LL;
  if ( !usrData
    || (SkillIdList = UserServantEntity__getSkillIdList(usrData, -1, -1, 1, 0LL),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrData->klass->vtable._6_getSkillLevelList.method)(
                                                 usrData,
                                                 usrData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_41:
    sub_B0D97C(this);
  }
  v8 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = this;
  v10 = 0LL;
  p_userId = &usrData->fields.userId;
  v25 = SkillIdList;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_42;
    if ( !v9 )
      goto LABEL_41;
    if ( v10 >= LODWORD(v9->fields.servantMaster) )
      goto LABEL_42;
    v12 = SkillIdList->m_Items[v10 + 1];
    if ( v12 >= 1 )
    {
      this = (CheckCombineEnalbleControl_o *)v27->fields.skillMaster;
      if ( !this )
        goto LABEL_41;
      v13 = *((_DWORD *)&v9->fields.userServantMaster + v10);
      this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               v12,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_41;
      if ( v13 < SLODWORD(this->fields.userServantStorageMaster) )
      {
        if ( !servantEntity )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)v27->fields.combineSkillMaster;
        if ( !this )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                 (CombineSkillMaster_o *)this,
                                                 servantEntity->fields.combineSkillId,
                                                 v13,
                                                 0LL);
        v24 = this;
        if ( this )
        {
          userServantMaster = this->fields.userServantMaster;
          if ( !userServantMaster )
            goto LABEL_41;
          MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
          if ( (int)MasterName_k__BackingField >= 1 )
          {
            v16 = 0LL;
            userServantStorageMaster = this->fields.userServantStorageMaster;
            v26 = 0;
            while ( v16 < (unsigned int)MasterName_k__BackingField )
            {
              if ( !userServantStorageMaster )
                goto LABEL_41;
              if ( v16 >= LODWORD(userServantStorageMaster->fields._MasterName_k__BackingField) )
                break;
              v18 = *((_DWORD *)&userServantMaster->fields.list + v16);
              v19 = *(_OWORD *)&p_userId->fields.fakeValue;
              v20 = *((_DWORD *)&userServantStorageMaster->fields.list + v16);
              userItemMaster = v27->fields.userItemMaster;
              *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v29.fields.fakeValue = v19;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v28 = v29;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                       &v28,
                                                       0LL);
              if ( !userItemMaster )
                goto LABEL_41;
              this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                       userItemMaster,
                                                       &entity,
                                                       (int64_t)this,
                                                       v18,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_37;
              if ( !entity )
                goto LABEL_41;
              if ( v18 == entity->fields.itemId )
              {
                if ( v20 > entity->fields.num )
                  goto LABEL_37;
                v26 = 1;
              }
              LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
              if ( (__int64)++v16 >= (int)MasterName_k__BackingField )
                goto LABEL_35;
            }
LABEL_42:
            v23 = sub_B0D9A8(this);
            sub_B0D948(v23, 0LL);
          }
          v26 = 0;
LABEL_35:
          if ( (v26 & 1) != 0 && v27->fields.haveQpVal >= SLODWORD(v24->fields.servantMaster) )
            return 1;
        }
      }
    }
LABEL_37:
    SkillIdList = v25;
    ++v10;
    LODWORD(v8) = v25->max_length;
    if ( (__int64)v10 >= (int)v8 )
      return 0;
  }
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w8
  int *v27; // x10
  int v28; // w19
  int32_t v29; // w24
  int32_t v30; // w26
  int32_t v31; // w27
  int32_t v32; // w20
  int32_t v33; // w25
  int32_t v34; // w28
  __int64 v35; // x21
  struct ServantMaster_o *servantMaster; // x22
  __int64 v37; // x23
  __int64 v38; // x24
  ServantEntity_o *Entity; // x22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  __int64 v48; // x8
  UserServantEntity_o **v49; // x21
  unsigned __int64 v50; // x19
  CombineEnableData_o *v51; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  int *v60; // [xsp+8h] [xbp-68h]
  CheckCombineEnalbleControl_o *v61; // [xsp+10h] [xbp-60h]
  int32_t v62; // [xsp+1Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4214268 & 1) == 0 )
  {
    sub_B0D8A4(&CombineEnableData_TypeInfo, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4214268 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v9 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v9;
  if ( !SelfUserGame )
    goto LABEL_32;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.costumeSvtIdList,
    (System_Int32_array **)CostumeSvtIdList,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v17, v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendshipExceedSvtIdList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SelfUserGame,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v26 = *((_DWORD *)SelfUserGame + 6);
  v27 = (int *)SelfUserGame;
  if ( v26 >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v60 = (int *)SelfUserGame;
    v61 = this;
    while ( v28 < (unsigned int)v26 )
    {
      v35 = *(_QWORD *)&v27[2 * v28 + 8];
      v62 = v29;
      if ( !v35 )
        goto LABEL_32;
      servantMaster = this->fields.servantMaster;
      v38 = *(_QWORD *)(v35 + 80);
      v37 = *(_QWORD *)(v35 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v63.fields.currentCryptoKey = v38;
      *(_QWORD *)&v63.fields.fakeValue = v37;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v63, 0LL);
      if ( !servantMaster )
        goto LABEL_32;
      this = v61;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                    (int32_t)SelfUserGame,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v34 += CheckCombineEnalbleControl__GetIsLimitUpEnable(v61, (UserServantEntity_o *)v35, Entity, v40);
      v33 += CheckCombineEnalbleControl__GetIsSkillUpEnable(v61, (UserServantEntity_o *)v35, Entity, v41);
      v32 += CheckCombineEnalbleControl__GetIsNpUpEnable(v61, (UserServantEntity_o *)v35, v42);
      v31 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v61, (UserServantEntity_o *)v35, v43);
      v30 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v61, (UserServantEntity_o *)v35, v44);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v61,
                               (UserServantEntity_o *)v35,
                               v45);
      v27 = v60;
      ++v28;
      v26 = v60[6];
      v29 = v62 + ((unsigned __int8)SelfUserGame & 1);
      if ( v28 >= v26 )
        goto LABEL_19;
    }
LABEL_33:
    v59 = sub_B0D9A8(SelfUserGame);
    sub_B0D948(v59, 0LL);
  }
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
LABEL_19:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v48 = *((_QWORD *)SelfUserGame + 3);
  v49 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v48 >= 1 )
  {
    v50 = 0LL;
    while ( v50 < (unsigned int)v48 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v49[v50 + 4], v47);
      LODWORD(v48) = *((_DWORD *)v49 + 6);
      ++v50;
      v30 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v50 >= (int)v48 )
        goto LABEL_25;
    }
    goto LABEL_33;
  }
LABEL_25:
  v51 = (CombineEnableData_o *)sub_B0D974(CombineEnableData_TypeInfo, v46, v47);
  CombineEnableData___ctor(v51, 0LL);
  this->fields.combineEnalbeInfo = v51;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_combineEnalbeInfo,
    (System_Int32_array **)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !*p_combineEnalbeInfo
    || ((*p_combineEnalbeInfo)->fields.limitUpEnableNum = v34, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.skillUpEnableNum = v33, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.npUpEnableNum = v32, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.lvExceedEnableNum = v31, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.costumeCombineEnableNum = v30, !*p_combineEnalbeInfo) )
  {
LABEL_32:
    sub_B0D97C(SelfUserGame);
  }
  (*p_combineEnalbeInfo)->fields.friendshipExceedEnableNum = v29;
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
  WebViewManager_o *Instance; // x0
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserServantMaster_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantStorageMaster_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UserServantCollectionMaster_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct CombineLimitMaster_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UserItemMaster_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct SkillMaster_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct CombineSkillMaster_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct TreasureDvcMaster_o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct TreasureDvcLvMaster_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct ServantCostumeMaster_o *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct ServantCostumeReleaseMaster_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct FriendshipMaster_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7

  if ( (byte_4214269 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4214269 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v24 = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v31 = (struct UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantStorageMaster,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v38 = (struct UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantCollectionMaster,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v45 = (struct CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineLimitMaster,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v52 = (struct UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = v52;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userItemMaster,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v59 = (struct SkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = v59;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillMaster,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v66 = (struct CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = v66;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineSkillMaster,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v73 = (struct TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = v73;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcMaster,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v80 = (struct TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = v80;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcLvMaster,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v87 = (struct ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = v87;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeMaster,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v94 = (struct ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = v94,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.cosReleaseMaster,
          (System_Int32_array **)v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(Instance);
  }
  v101 = (struct FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = v101;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendshipMaster,
    (System_Int32_array **)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}