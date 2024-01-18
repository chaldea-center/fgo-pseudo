void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187CAE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v3);
    byte_4187CAE = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantNpLvDict,
    (System_Int32_array **)v4,
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
  if ( (byte_4187CAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (CheckCombineEnalbleControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4187CAC = 1;
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
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
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
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v49, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v15,
               (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
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
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                v44 = sub_B2C460(this);
                sub_B2C400(v44, 0LL);
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
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
                    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
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
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
                    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
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
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v55,
                                                               0LL);
                      if ( v41 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v41,
                          (int32_t)this,
                          (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_60:
                      sub_B2C434(this, userSvtEntity);
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

  if ( (byte_4187CAD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4187CAD = 1;
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
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
    v17 = this->fields.friendshipExceedSvtIdList;
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields._size <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  if ( !servantMaster )
    goto LABEL_22;
  v21 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
    sub_B2C434(isExceedFriendshipMax, userServantEntity);
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
        v37 = sub_B2C460(isExceedFriendshipMax);
        sub_B2C400(v37, 0LL);
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
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
    if ( v34 )
    {
      System_Collections_Generic_List_int___Add(
        v34,
        isExceedFriendshipMax,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
  if ( (byte_4187CA9 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, usrData);
    sub_B2C35C(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    this = (CheckCombineEnalbleControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4187CA9 = 1;
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
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
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
          v37 = sub_B2C460(this);
          sub_B2C400(v37, 0LL);
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
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
    v32 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v47.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v33 = v31;
    *(_QWORD *)&v47.fields.currentCryptoKey = v32;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
    if ( !v30 )
LABEL_45:
      sub_B2C434(this, usrData);
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
  CommonConsumeEntity_array *v21; // x24
  System_Collections_Generic_HashSet_int__o *v22; // x22
  System_Collections_Generic_HashSet_int__o *v23; // x23
  int max_length; // w8
  __int64 v25; // x27
  CommonConsumeEntity_o *v26; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x25
  __int64 v29; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x24
  System_Int32_array *v31; // x22
  System_Int32_array *v32; // x0
  __int64 v34; // x0
  ServantExceedEntity_o *v35; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v4 = this;
  if ( (byte_4187CAB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v10);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    this = (CheckCombineEnalbleControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4187CAB = 1;
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
  *(_QWORD *)&v36.fields.currentCryptoKey = v16;
  *(_QWORD *)&v36.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
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
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_37;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v19->fields.consumeId, 0LL);
  if ( !IdEntityList )
    return 0;
  v35 = v19;
  v21 = IdEntityList;
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  max_length = v21->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
      {
        v34 = sub_B2C460(this);
        sub_B2C400(v34, 0LL);
      }
      v26 = v21->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v22 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v22,
                                               v26->fields.objectId,
                                               (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v23 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v23,
                                               v26->fields.num,
                                               (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v21->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B2C434(this, usrData);
  }
LABEL_23:
  if ( v35->fields.objectNum >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v29 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v37.fields.currentCryptoKey = v29;
    *(_QWORD *)&v37.fields.fakeValue = v28;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
    if ( !v30 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v30,
                                             (int32_t)this,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( !v22 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v22,
                                             (int32_t)this->fields.servantMaster,
                                             (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v23 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v23,
      v35->fields.objectNum,
      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v31 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v31, v32, v4->fields.haveQpVal, v35->fields.qp, 0LL);
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
    sub_B2C434(this, usrData);
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
  System_Int32_array *SkillIdList; // x19
  __int64 v8; // x8
  CheckCombineEnalbleControl_o *v9; // x21
  unsigned __int64 v10; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x27
  int32_t v12; // w23
  struct UserServantMaster_o *userServantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v15; // x28
  struct UserServantStorageMaster_o *userServantStorageMaster; // x23
  int32_t v17; // w24
  __int128 v18; // q1
  int32_t v19; // w22
  UserItemMaster_o *userItemMaster; // x25
  __int64 v22; // x0
  CheckCombineEnalbleControl_o *v23; // [xsp+8h] [xbp-C8h]
  System_Int32_array *v24; // [xsp+10h] [xbp-C0h]
  char v25; // [xsp+1Ch] [xbp-B4h]
  CheckCombineEnalbleControl_o *v26; // [xsp+28h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+50h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v5 = usrData;
  v26 = this;
  if ( (byte_4187CAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    this = (CheckCombineEnalbleControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_4187CAA = 1;
  }
  entity = 0LL;
  if ( !v5
    || (SkillIdList = UserServantEntity__getSkillIdList(v5, -1, -1, 1, 0LL),
        this = (CheckCombineEnalbleControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))v5->klass->vtable._6_getSkillLevelList.method)(
                                                 v5,
                                                 v5->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_41:
    sub_B2C434(this, usrData);
  }
  v8 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = this;
  v10 = 0LL;
  p_userId = &v5->fields.userId;
  v24 = SkillIdList;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_42;
    if ( !v9 )
      goto LABEL_41;
    if ( v10 >= LODWORD(v9->fields.servantMaster) )
      goto LABEL_42;
    usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v10 + 1];
    if ( (int)usrData >= 1 )
    {
      this = (CheckCombineEnalbleControl_o *)v26->fields.skillMaster;
      if ( !this )
        goto LABEL_41;
      v12 = *((_DWORD *)&v9->fields.userServantMaster + v10);
      this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               (int32_t)usrData,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_41;
      if ( v12 < SLODWORD(this->fields.userServantStorageMaster) )
      {
        if ( !servantEntity )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)v26->fields.combineSkillMaster;
        if ( !this )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                 (CombineSkillMaster_o *)this,
                                                 servantEntity->fields.combineSkillId,
                                                 v12,
                                                 0LL);
        v23 = this;
        if ( this )
        {
          userServantMaster = this->fields.userServantMaster;
          if ( !userServantMaster )
            goto LABEL_41;
          MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
          if ( (int)MasterName_k__BackingField >= 1 )
          {
            v15 = 0LL;
            userServantStorageMaster = this->fields.userServantStorageMaster;
            v25 = 0;
            while ( v15 < (unsigned int)MasterName_k__BackingField )
            {
              if ( !userServantStorageMaster )
                goto LABEL_41;
              if ( v15 >= LODWORD(userServantStorageMaster->fields._MasterName_k__BackingField) )
                break;
              v17 = *((_DWORD *)&userServantMaster->fields.list + v15);
              v18 = *(_OWORD *)&p_userId->fields.fakeValue;
              v19 = *((_DWORD *)&userServantStorageMaster->fields.list + v15);
              userItemMaster = v26->fields.userItemMaster;
              *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v28.fields.fakeValue = v18;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v27 = v28;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                       &v27,
                                                       0LL);
              if ( !userItemMaster )
                goto LABEL_41;
              this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                       userItemMaster,
                                                       &entity,
                                                       (int64_t)this,
                                                       v17,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_37;
              if ( !entity )
                goto LABEL_41;
              if ( v17 == entity->fields.itemId )
              {
                if ( v19 > entity->fields.num )
                  goto LABEL_37;
                v25 = 1;
              }
              LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
              if ( (__int64)++v15 >= (int)MasterName_k__BackingField )
                goto LABEL_35;
            }
LABEL_42:
            v22 = sub_B2C460(this);
            sub_B2C400(v22, 0LL);
          }
          v25 = 0;
LABEL_35:
          if ( (v25 & 1) != 0 && v26->fields.haveQpVal >= SLODWORD(v23->fields.servantMaster) )
            return 1;
        }
      }
    }
LABEL_37:
    SkillIdList = v24;
    ++v10;
    LODWORD(v8) = v24->max_length;
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
  __int64 v9; // x1
  int32_t v10; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w8
  int *v26; // x10
  int v27; // w19
  int32_t v28; // w24
  int32_t v29; // w26
  int32_t v30; // w27
  int32_t v31; // w20
  int32_t v32; // w25
  int32_t v33; // w28
  __int64 v34; // x21
  struct ServantMaster_o *servantMaster; // x22
  __int64 v36; // x23
  __int64 v37; // x24
  ServantEntity_o *Entity; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  __int64 v46; // x8
  UserServantEntity_o **v47; // x21
  unsigned __int64 v48; // x19
  CombineEnableData_o *v49; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  int *v58; // [xsp+8h] [xbp-68h]
  CheckCombineEnalbleControl_o *v59; // [xsp+10h] [xbp-60h]
  int32_t v60; // [xsp+1Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4187CA7 & 1) == 0 )
  {
    sub_B2C35C(&CombineEnableData_TypeInfo, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4187CA7 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v10 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v10;
  if ( !SelfUserGame )
    goto LABEL_32;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeSvtIdList,
    (System_Int32_array **)CostumeSvtIdList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendshipExceedSvtIdList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SelfUserGame,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
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
    v58 = (int *)SelfUserGame;
    v59 = this;
    while ( v27 < (unsigned int)v25 )
    {
      v34 = *(_QWORD *)&v26[2 * v27 + 8];
      v60 = v28;
      if ( !v34 )
        goto LABEL_32;
      servantMaster = this->fields.servantMaster;
      v37 = *(_QWORD *)(v34 + 80);
      v36 = *(_QWORD *)(v34 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = v37;
      *(_QWORD *)&v61.fields.fakeValue = v36;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
      if ( !servantMaster )
        goto LABEL_32;
      this = v59;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                    (int32_t)SelfUserGame,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v33 += CheckCombineEnalbleControl__GetIsLimitUpEnable(v59, (UserServantEntity_o *)v34, Entity, v39);
      v32 += CheckCombineEnalbleControl__GetIsSkillUpEnable(v59, (UserServantEntity_o *)v34, Entity, v40);
      v31 += CheckCombineEnalbleControl__GetIsNpUpEnable(v59, (UserServantEntity_o *)v34, v41);
      v30 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v59, (UserServantEntity_o *)v34, v42);
      v29 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v59, (UserServantEntity_o *)v34, v43);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v59,
                               (UserServantEntity_o *)v34,
                               v44);
      v26 = v58;
      ++v27;
      v25 = v58[6];
      v28 = v60 + ((unsigned __int8)SelfUserGame & 1);
      if ( v27 >= v25 )
        goto LABEL_19;
    }
LABEL_33:
    v57 = sub_B2C460(SelfUserGame);
    sub_B2C400(v57, 0LL);
  }
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
LABEL_19:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v46 = *((_QWORD *)SelfUserGame + 3);
  v47 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v46 >= 1 )
  {
    v48 = 0LL;
    while ( v48 < (unsigned int)v46 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v47[v48 + 4], v45);
      LODWORD(v46) = *((_DWORD *)v47 + 6);
      ++v48;
      v29 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v48 >= (int)v46 )
        goto LABEL_25;
    }
    goto LABEL_33;
  }
LABEL_25:
  v49 = (CombineEnableData_o *)sub_B2C42C(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v49, 0LL);
  this->fields.combineEnalbeInfo = v49;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_combineEnalbeInfo,
    (System_Int32_array **)v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  if ( !*p_combineEnalbeInfo
    || ((*p_combineEnalbeInfo)->fields.limitUpEnableNum = v33, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.skillUpEnableNum = v32, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.npUpEnableNum = v31, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.lvExceedEnableNum = v30, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.costumeCombineEnableNum = v29, !*p_combineEnalbeInfo) )
  {
LABEL_32:
    sub_B2C434(SelfUserGame, v9);
  }
  (*p_combineEnalbeInfo)->fields.friendshipExceedEnableNum = v28;
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
  __int64 v17; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UserServantMaster_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserServantStorageMaster_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantCollectionMaster_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct CombineLimitMaster_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UserItemMaster_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct SkillMaster_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct CombineSkillMaster_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct TreasureDvcMaster_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct TreasureDvcLvMaster_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct ServantCostumeMaster_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct ServantCostumeReleaseMaster_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct FriendshipMaster_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7

  if ( (byte_4187CA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4187CA8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v25 = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v32 = (struct UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantStorageMaster,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v39 = (struct UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantCollectionMaster,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v46 = (struct CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineLimitMaster,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v53 = (struct UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = v53;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userItemMaster,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v60 = (struct SkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = v60;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillMaster,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v67 = (struct CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = v67;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineSkillMaster,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v74 = (struct TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = v74;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcMaster,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v81 = (struct TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = v81;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcLvMaster,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v88 = (struct ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = v88;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeMaster,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v95 = (struct ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = v95,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.cosReleaseMaster,
          (System_Int32_array **)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B2C434(Instance, v17);
  }
  v102 = (struct FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = v102;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendshipMaster,
    (System_Int32_array **)v102,
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