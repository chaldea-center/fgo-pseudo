void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AFE18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_42AFE18 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantNpLvDict,
    (System_Int32_array **)v3,
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
  int servantMaster; // w8
  CheckCombineEnalbleControl_o *v16; // x21
  int v17; // w27
  UserServantEntity_Fields *p_fields; // x28
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
  __int64 v29; // x25
  int32_t v30; // w0
  __int128 v31; // q0
  int32_t v32; // w24
  int32_t v33; // w0
  __int128 v34; // q0
  int32_t v35; // w24
  System_Collections_Generic_List_int__o *v37; // x20
  __int64 v38; // x19
  __int64 v39; // x21
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = this;
  if ( (byte_42AFE16 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AFE16 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_60;
  servantCostumeMaster = v4->fields.servantCostumeMaster;
  v7 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v7;
  *(_QWORD *)&v44.fields.fakeValue = v6;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v44, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_60;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
  {
    costumeSvtIdList = v4->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v45.fields.currentCryptoKey = v10;
        *(_QWORD *)&v45.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v11,
               (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v12 = v4->fields.servantCostumeMaster;
          v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v46.fields.currentCryptoKey = v14;
          *(_QWORD *)&v46.fields.fakeValue = v13;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v46,
                                                   0LL);
          if ( !v12 )
            goto LABEL_60;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v12,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
          if ( !this )
            goto LABEL_60;
          servantMaster = (int)this->fields.servantMaster;
          v16 = this;
          if ( servantMaster >= 1 )
          {
            v17 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v17 >= (unsigned int)servantMaster )
              {
                v40 = sub_B52A88(this);
                sub_B52A28(v40, 0LL);
              }
              userServantCollectionMaster = v4->fields.userServantCollectionMaster;
              v20 = (ServantCostumeEntity_o *)*((_QWORD *)&v16->fields.userServantMaster + v17);
              v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v47.fields.currentCryptoKey = v22;
              *(_QWORD *)&v47.fields.fakeValue = v21;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                       v47,
                                                       0LL);
              if ( !v20 || !userServantCollectionMaster )
                goto LABEL_60;
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
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v48.fields.currentCryptoKey = v25;
                *(_QWORD *)&v48.fields.fakeValue = v24;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                         v48,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_60;
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
                  if ( IsEventCombineCostume )
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v49.fields.currentCryptoKey = v29;
                    *(_QWORD *)&v49.fields.fakeValue = v28;
                    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v49, 0LL);
                    v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v32 = v30;
                    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v43.fields.fakeValue = v31;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v42 = v43;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                             &v42,
                                                             0LL);
                    if ( !v27 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v32,
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
                    *(_QWORD *)&v50.fields.currentCryptoKey = v29;
                    *(_QWORD *)&v50.fields.fakeValue = v28;
                    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v50, 0LL);
                    v34 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v35 = v33;
                    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v43.fields.fakeValue = v34;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v41 = v43;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                             &v41,
                                                             0LL);
                    if ( !v27 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v27,
                                                             v20,
                                                             v35,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_55:
                      v37 = v4->fields.costumeSvtIdList;
                      v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v51.fields.currentCryptoKey = v39;
                      *(_QWORD *)&v51.fields.fakeValue = v38;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                               v51,
                                                               0LL);
                      if ( v37 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v37,
                          (int32_t)this,
                          (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_60:
                      sub_B52A5C(this, userSvtEntity);
                    }
                  }
                }
              }
              servantMaster = (int)v16->fields.servantMaster;
              ++v17;
            }
            while ( v17 < servantMaster );
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
  int64_t isExceedFriendshipMax; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  __int64 v7; // x23
  __int64 v8; // x21
  __int64 v9; // x22
  struct System_Collections_Generic_List_int__o *v10; // x22
  struct ServantMaster_o *servantMaster; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  WarEntity_o *v14; // x0
  __int128 v15; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  WarEntity_o *v17; // x21
  int64_t v18; // x23
  int64_t v19; // x22
  int v20; // w8
  __int64 v21; // x23
  int64_t v22; // x21
  __int64 v23; // x26
  unsigned int v24; // w25
  UserItemMaster_o *userItemMaster; // x22
  System_Collections_Generic_List_int__o *v27; // x20
  __int64 v28; // x19
  __int64 v29; // x21
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42AFE17 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AFE17 = 1;
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
  v7 = 0LL;
  while ( (int)v7 < friendshipExceedSvtIdList->fields._size )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v9;
    *(_QWORD *)&v34.fields.fakeValue = v8;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
    v10 = this->fields.friendshipExceedSvtIdList;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields._size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( (_DWORD)isExceedFriendshipMax == v10->fields._items->m_Items[v7 + 1] )
      return 0;
    friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
    ++v7;
    if ( !friendshipExceedSvtIdList )
      goto LABEL_22;
  }
  servantMaster = this->fields.servantMaster;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v13;
  *(_QWORD *)&v35.fields.fakeValue = v12;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
  if ( !servantMaster )
    goto LABEL_22;
  v14 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v15 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v17 = v14;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v31 = v32;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v31, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                            userServantEntity->fields.svtId,
                            0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_22;
  isExceedFriendshipMax = (int64_t)UserServantCollectionMaster__GetEntity(
                                     userServantCollectionMaster,
                                     v18,
                                     isExceedFriendshipMax,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_22;
  v19 = isExceedFriendshipMax;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(isExceedFriendshipMax + 100),
                            0LL);
  if ( !v17 )
    goto LABEL_22;
  v20 = *(_DWORD *)(v19 + 116) + v17->fields.lastQuestId;
  if ( (int)isExceedFriendshipMax < v20 )
    return 0;
  isExceedFriendshipMax = (int64_t)this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax
    || (isExceedFriendshipMax = (int64_t)FriendshipMaster__GetEntity(
                                           (FriendshipMaster_o *)isExceedFriendshipMax,
                                           v17->fields.eventId,
                                           v20 + 1,
                                           0LL)) == 0
    || (v21 = *(_QWORD *)(isExceedFriendshipMax + 40), v22 = isExceedFriendshipMax, !v21) )
  {
LABEL_22:
    sub_B52A5C(isExceedFriendshipMax, userServantEntity);
  }
  if ( *(int *)(v21 + 24) >= 1 )
  {
    v23 = *(_QWORD *)(isExceedFriendshipMax + 32);
    v24 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      isExceedFriendshipMax = NetworkManager__get_UserId(0LL);
      if ( v24 >= *(_DWORD *)(v21 + 24) )
      {
LABEL_58:
        v30 = sub_B52A88(isExceedFriendshipMax);
        sub_B52A28(v30, 0LL);
      }
      if ( !userItemMaster )
        goto LABEL_22;
      isExceedFriendshipMax = UserItemMaster__TryGetEntity(
                                userItemMaster,
                                &entity,
                                isExceedFriendshipMax,
                                *(_DWORD *)(v21 + 4LL * (int)v24 + 32),
                                0LL);
      if ( (isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v23 )
        goto LABEL_22;
      if ( v24 >= *(_DWORD *)(v23 + 24) )
        goto LABEL_58;
      if ( entity->fields.num < *(_DWORD *)(v23 + 4LL * (int)v24 + 32) )
        return 0;
    }
    while ( (signed int)++v24 < *(_DWORD *)(v21 + 24) );
  }
  if ( this->fields.haveQpVal >= *(_DWORD *)(v22 + 28) )
  {
    v27 = this->fields.friendshipExceedSvtIdList;
    v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v29;
    *(_QWORD *)&v36.fields.fakeValue = v28;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
    if ( v27 )
    {
      System_Collections_Generic_List_int___Add(
        v27,
        isExceedFriendshipMax,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
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
  _BOOL4 isLimitCountMax; // w0
  __int64 v7; // x22
  __int64 v8; // x24
  _BOOL4 v9; // w23
  int32_t v10; // w22
  struct UserServantStorageMaster_o *userServantStorageMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct UserServantMaster_o *userServantMaster; // x28
  unsigned __int64 v14; // x27
  int32_t v15; // w22
  __int128 v16; // q1
  int32_t v17; // w20
  UserItemMaster_o *userItemMaster; // x23
  int v19; // w19
  int32_t servantMaster; // w24
  int32_t haveQpVal; // w23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x21
  __int64 v25; // x22
  CombineLimitReleaseMaster_o *v26; // x20
  int32_t v27; // w0
  __int64 v28; // x8
  int32_t v29; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  __int64 v33; // x0
  CheckCombineEnalbleControl_o *v34; // [xsp+8h] [xbp-B8h]
  char v35; // [xsp+14h] [xbp-ACh]
  CheckCombineEnalbleControl_o *v36; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  CombineLimitReleaseEntity_o *v40; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v36 = this;
  if ( (byte_42AFE13 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AFE13 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  if ( !usrData )
    goto LABEL_45;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v9 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v8;
  *(_QWORD *)&v41.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v41, 0LL);
  if ( ((v9 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v19) = 0;
  }
  else
  {
    if ( !servantEntity )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)v36->fields.combineLimitMaster;
    if ( !this )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                             (CombineLimitMaster_o *)this,
                                             servantEntity->fields.combineLimitId,
                                             v10,
                                             0LL);
    if ( !this )
      goto LABEL_45;
    userServantStorageMaster = this->fields.userServantStorageMaster;
    if ( !userServantStorageMaster )
      goto LABEL_45;
    MasterName_k__BackingField = userServantStorageMaster->fields._MasterName_k__BackingField;
    v34 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      userServantMaster = this->fields.userServantMaster;
      v14 = 0LL;
      v35 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_46;
        if ( !userServantMaster )
          goto LABEL_45;
        if ( v14 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
        {
LABEL_46:
          v33 = sub_B52A88(this);
          sub_B52A28(v33, 0LL);
        }
        v15 = *((_DWORD *)&userServantStorageMaster->fields.list + v14);
        v16 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v17 = *((_DWORD *)&userServantMaster->fields.list + v14);
        userItemMaster = v36->fields.userItemMaster;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v16;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v37 = v38;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                 &v37,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_45;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v15,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_45;
        if ( v15 == entity->fields.itemId )
        {
          if ( v17 > entity->fields.num )
            break;
          v35 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantStorageMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v14 >= (int)MasterName_k__BackingField )
          goto LABEL_32;
      }
    }
    v35 = 0;
LABEL_32:
    servantMaster = (int32_t)v34->fields.servantMaster;
    haveQpVal = v36->fields.haveQpVal;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v25 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v26 = (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v25;
    *(_QWORD *)&v42.fields.fakeValue = v24;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL);
    v28 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v43.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v29 = v27;
    *(_QWORD *)&v43.fields.currentCryptoKey = v28;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
    if ( !v26 )
LABEL_45:
      sub_B52A5C(this, usrData);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v26,
                                             &v40,
                                             v29,
                                             (_DWORD)this + 1,
                                             0LL);
    v19 = (unsigned __int8)v35 & (haveQpVal >= servantMaster);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_45;
      condType = v40->fields.condType;
      condTargetId = v40->fields.condTargetId;
      condNum = v40->fields.condNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v19 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
    }
  }
  return v19;
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
  ServantExceedEntity_o *v11; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v13; // x24
  System_Collections_Generic_HashSet_int__o *v14; // x22
  System_Collections_Generic_HashSet_int__o *v15; // x23
  int max_length; // w8
  __int64 v17; // x27
  CommonConsumeEntity_o *v18; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x24
  System_Int32_array *v23; // x22
  System_Int32_array *v24; // x0
  __int64 v26; // x0
  ServantExceedEntity_o *v27; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_42AFE15 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    this = (CheckCombineEnalbleControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFE15 = 1;
  }
  if ( !usrData )
    goto LABEL_37;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v8 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v9 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v8;
  *(_QWORD *)&v28.fields.fakeValue = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
  if ( (v9 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v11 = SvtExceedEnt;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_37;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v11->fields.consumeId, 0LL);
  if ( !IdEntityList )
    return 0;
  v27 = v11;
  v13 = IdEntityList;
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
      {
        v26 = sub_B52A88(this);
        sub_B52A28(v26, 0LL);
      }
      v18 = v13->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v14 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v14,
                                               v18->fields.objectId,
                                               (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v15 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v15,
                                               v18->fields.num,
                                               (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v13->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B52A5C(this, usrData);
  }
LABEL_23:
  if ( v27->fields.objectNum >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v21 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v21;
    *(_QWORD *)&v29.fields.fakeValue = v20;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
    if ( !v22 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v22,
                                             (int32_t)this,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( !v14 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v14,
                                             (int32_t)this->fields.servantMaster,
                                             (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v15 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v15,
      v27->fields.objectNum,
      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v23 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v23, v24, v4->fields.haveQpVal, v27->fields.qp, 0LL);
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
    sub_B52A5C(this, usrData);
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
  System_Int32_array *SkillIdList; // x19
  __int64 v7; // x8
  CheckCombineEnalbleControl_o *v8; // x21
  unsigned __int64 v9; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x27
  int32_t v11; // w23
  struct UserServantMaster_o *userServantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v14; // x28
  struct UserServantStorageMaster_o *userServantStorageMaster; // x23
  int32_t v16; // w24
  __int128 v17; // q1
  int32_t v18; // w22
  UserItemMaster_o *userItemMaster; // x25
  __int64 v21; // x0
  CheckCombineEnalbleControl_o *v22; // [xsp+8h] [xbp-C8h]
  System_Int32_array *v23; // [xsp+10h] [xbp-C0h]
  char v24; // [xsp+1Ch] [xbp-B4h]
  CheckCombineEnalbleControl_o *v25; // [xsp+28h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+50h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v5 = usrData;
  v25 = this;
  if ( (byte_42AFE14 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (CheckCombineEnalbleControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AFE14 = 1;
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
    sub_B52A5C(this, usrData);
  }
  v7 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = this;
  v9 = 0LL;
  p_userId = &v5->fields.userId;
  v23 = SkillIdList;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v7 )
      goto LABEL_42;
    if ( !v8 )
      goto LABEL_41;
    if ( v9 >= LODWORD(v8->fields.servantMaster) )
      goto LABEL_42;
    usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v9 + 1];
    if ( (int)usrData >= 1 )
    {
      this = (CheckCombineEnalbleControl_o *)v25->fields.skillMaster;
      if ( !this )
        goto LABEL_41;
      v11 = *((_DWORD *)&v8->fields.userServantMaster + v9);
      this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               (int32_t)usrData,
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_41;
      if ( v11 < SLODWORD(this->fields.userServantStorageMaster) )
      {
        if ( !servantEntity )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)v25->fields.combineSkillMaster;
        if ( !this )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                 (CombineSkillMaster_o *)this,
                                                 servantEntity->fields.combineSkillId,
                                                 v11,
                                                 0LL);
        v22 = this;
        if ( this )
        {
          userServantMaster = this->fields.userServantMaster;
          if ( !userServantMaster )
            goto LABEL_41;
          MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
          if ( (int)MasterName_k__BackingField >= 1 )
          {
            v14 = 0LL;
            userServantStorageMaster = this->fields.userServantStorageMaster;
            v24 = 0;
            while ( v14 < (unsigned int)MasterName_k__BackingField )
            {
              if ( !userServantStorageMaster )
                goto LABEL_41;
              if ( v14 >= LODWORD(userServantStorageMaster->fields._MasterName_k__BackingField) )
                break;
              v16 = *((_DWORD *)&userServantMaster->fields.list + v14);
              v17 = *(_OWORD *)&p_userId->fields.fakeValue;
              v18 = *((_DWORD *)&userServantStorageMaster->fields.list + v14);
              userItemMaster = v25->fields.userItemMaster;
              *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v27.fields.fakeValue = v17;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v26 = v27;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                       &v26,
                                                       0LL);
              if ( !userItemMaster )
                goto LABEL_41;
              this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                       userItemMaster,
                                                       &entity,
                                                       (int64_t)this,
                                                       v16,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_37;
              if ( !entity )
                goto LABEL_41;
              if ( v16 == entity->fields.itemId )
              {
                if ( v18 > entity->fields.num )
                  goto LABEL_37;
                v24 = 1;
              }
              LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
              if ( (__int64)++v14 >= (int)MasterName_k__BackingField )
                goto LABEL_35;
            }
LABEL_42:
            v21 = sub_B52A88(this);
            sub_B52A28(v21, 0LL);
          }
          v24 = 0;
LABEL_35:
          if ( (v24 & 1) != 0 && v25->fields.haveQpVal >= SLODWORD(v22->fields.servantMaster) )
            return 1;
        }
      }
    }
LABEL_37:
    SkillIdList = v23;
    ++v9;
    LODWORD(v7) = v23->max_length;
    if ( (__int64)v9 >= (int)v7 )
      return 0;
  }
}


void __fastcall CheckCombineEnalbleControl__SetCombineEnableInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t v5; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_int__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  int *v21; // x10
  int v22; // w19
  int32_t v23; // w24
  int32_t v24; // w26
  int32_t v25; // w27
  int32_t v26; // w20
  int32_t v27; // w25
  int32_t v28; // w28
  __int64 v29; // x21
  struct ServantMaster_o *servantMaster; // x22
  __int64 v31; // x23
  __int64 v32; // x24
  ServantEntity_o *Entity; // x22
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  int *v53; // [xsp+8h] [xbp-68h]
  CheckCombineEnalbleControl_o *v54; // [xsp+10h] [xbp-60h]
  int32_t v55; // [xsp+1Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42AFE11 & 1) == 0 )
  {
    sub_B52984(&CombineEnableData_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AFE11 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v5 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v5;
  if ( !SelfUserGame )
    goto LABEL_32;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.costumeSvtIdList,
    (System_Int32_array **)CostumeSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v13;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendshipExceedSvtIdList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SelfUserGame,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
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
    v53 = (int *)SelfUserGame;
    v54 = this;
    while ( v22 < (unsigned int)v20 )
    {
      v29 = *(_QWORD *)&v21[2 * v22 + 8];
      v55 = v23;
      if ( !v29 )
        goto LABEL_32;
      servantMaster = this->fields.servantMaster;
      v32 = *(_QWORD *)(v29 + 80);
      v31 = *(_QWORD *)(v29 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v56.fields.currentCryptoKey = v32;
      *(_QWORD *)&v56.fields.fakeValue = v31;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v56, 0LL);
      if ( !servantMaster )
        goto LABEL_32;
      this = v54;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                    (int32_t)SelfUserGame,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v28 += CheckCombineEnalbleControl__GetIsLimitUpEnable(v54, (UserServantEntity_o *)v29, Entity, v34);
      v27 += CheckCombineEnalbleControl__GetIsSkillUpEnable(v54, (UserServantEntity_o *)v29, Entity, v35);
      v26 += CheckCombineEnalbleControl__GetIsNpUpEnable(v54, (UserServantEntity_o *)v29, v36);
      v25 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v54, (UserServantEntity_o *)v29, v37);
      v24 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v54, (UserServantEntity_o *)v29, v38);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v54,
                               (UserServantEntity_o *)v29,
                               v39);
      v21 = v53;
      ++v22;
      v20 = v53[6];
      v23 = v55 + ((unsigned __int8)SelfUserGame & 1);
      if ( v22 >= v20 )
        goto LABEL_19;
    }
LABEL_33:
    v52 = sub_B52A88(SelfUserGame);
    sub_B52A28(v52, 0LL);
  }
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
LABEL_19:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
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
      v24 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v43 >= (int)v41 )
        goto LABEL_25;
    }
    goto LABEL_33;
  }
LABEL_25:
  v44 = (CombineEnableData_o *)sub_B52A54(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v44, 0LL);
  this->fields.combineEnalbeInfo = v44;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)p_combineEnalbeInfo,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !*p_combineEnalbeInfo
    || ((*p_combineEnalbeInfo)->fields.limitUpEnableNum = v28, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.skillUpEnableNum = v27, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.npUpEnableNum = v26, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.lvExceedEnableNum = v25, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.costumeCombineEnableNum = v24, !*p_combineEnalbeInfo) )
  {
LABEL_32:
    sub_B52A5C(SelfUserGame, v4);
  }
  (*p_combineEnalbeInfo)->fields.friendshipExceedEnableNum = v23;
}


void __fastcall CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UserServantMaster_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UserServantStorageMaster_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserServantCollectionMaster_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct CombineLimitMaster_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UserItemMaster_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct SkillMaster_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct CombineSkillMaster_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct TreasureDvcMaster_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct TreasureDvcLvMaster_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct ServantCostumeMaster_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct ServantCostumeReleaseMaster_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct FriendshipMaster_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7

  if ( (byte_42AFE12 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFE12 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = MasterData_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v19 = (struct UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantStorageMaster,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v26 = (struct UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantCollectionMaster,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v33 = (struct CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = v33;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineLimitMaster,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v40 = (struct UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userItemMaster,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v47 = (struct SkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillMaster,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v54 = (struct CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = v54;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineSkillMaster,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v61 = (struct TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = v61;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcMaster,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v68 = (struct TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = v68;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcLvMaster,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v75 = (struct ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = v75;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeMaster,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v82 = (struct ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = v82,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.cosReleaseMaster,
          (System_Int32_array **)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(Instance, v4);
  }
  v89 = (struct FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = v89;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendshipMaster,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}