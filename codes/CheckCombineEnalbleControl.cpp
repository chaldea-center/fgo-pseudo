void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9725 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v5, v6, v7);
    byte_42E9725 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantNpLvDict,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CheckCombineEnalbleControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w0
  ServantCostumeMaster_o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  int servantMaster; // w8
  CheckCombineEnalbleControl_o *v29; // x21
  int v30; // w27
  UserServantEntity_Fields *p_fields; // x28
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v33; // x22
  __int64 v34; // x24
  __int64 v35; // x25
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  bool IsEventCombineCostume; // w0
  ServantCostumeReleaseMaster_o *v40; // x23
  __int64 v41; // x24
  __int64 v42; // x25
  int32_t v43; // w0
  __int128 v44; // q0
  int32_t v45; // w24
  int32_t v46; // w0
  __int128 v47; // q0
  int32_t v48; // w24
  System_Collections_Generic_List_int__o *v50; // x20
  __int64 v51; // x19
  __int64 v52; // x21
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v5 = this;
  if ( (byte_42E9723 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, (_DWORD)userSvtEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    this = (CheckCombineEnalbleControl_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             v15,
                                             v16,
                                             v17);
    byte_42E9723 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_60;
  servantCostumeMaster = v5->fields.servantCostumeMaster;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v20;
  *(_QWORD *)&v57.fields.fakeValue = v19;
  this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_60;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, (int32_t)this, 0LL) )
  {
    costumeSvtIdList = v5->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v23;
        *(_QWORD *)&v58.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v24,
               (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v25 = v5->fields.servantCostumeMaster;
          v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v59.fields.currentCryptoKey = v27;
          *(_QWORD *)&v59.fields.fakeValue = v26;
          this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v59,
                                                   0LL);
          if ( !v25 )
            goto LABEL_60;
          this = (CheckCombineEnalbleControl_o *)ServantCostumeMaster__releasedCostumeEntityList(
                                                   v25,
                                                   (int32_t)this,
                                                   0,
                                                   0LL);
          if ( !this )
            goto LABEL_60;
          servantMaster = (int)this->fields.servantMaster;
          v29 = this;
          if ( servantMaster >= 1 )
          {
            v30 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v30 >= (unsigned int)servantMaster )
              {
                v53 = sub_B5D6C8(this);
                sub_B5D668(v53, 0LL);
              }
              userServantCollectionMaster = v5->fields.userServantCollectionMaster;
              v33 = (ServantCostumeEntity_o *)*((_QWORD *)&v29->fields.userServantMaster + v30);
              v35 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v60.fields.currentCryptoKey = v35;
              *(_QWORD *)&v60.fields.fakeValue = v34;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v60,
                                                       0LL);
              if ( !v33 || !userServantCollectionMaster )
                goto LABEL_60;
              this = (CheckCombineEnalbleControl_o *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                       userServantCollectionMaster,
                                                       (int32_t)this,
                                                       v33->fields.id,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                cosReleaseMaster = v5->fields.cosReleaseMaster;
                v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v61.fields.currentCryptoKey = v38;
                *(_QWORD *)&v61.fields.fakeValue = v37;
                this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v61,
                                                         0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_60;
                this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__checkItemHaving(
                                                         cosReleaseMaster,
                                                         (int32_t)this,
                                                         v33->fields.id,
                                                         0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v33, 0LL);
                  v40 = v5->fields.cosReleaseMaster;
                  v42 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v41 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  if ( IsEventCombineCostume )
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v62.fields.currentCryptoKey = v42;
                    *(_QWORD *)&v62.fields.fakeValue = v41;
                    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
                    v44 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v45 = v43;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v44;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v55 = v56;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                             &v55,
                                                             0LL);
                    if ( !v40 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                             v40,
                                                             v33,
                                                             v45,
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
                    *(_QWORD *)&v63.fields.currentCryptoKey = v42;
                    *(_QWORD *)&v63.fields.fakeValue = v41;
                    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
                    v47 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v48 = v46;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v47;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v54 = v56;
                    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                             &v54,
                                                             0LL);
                    if ( !v40 )
                      goto LABEL_60;
                    this = (CheckCombineEnalbleControl_o *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                             v40,
                                                             v33,
                                                             v48,
                                                             (int64_t)this,
                                                             0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
LABEL_55:
                      v50 = v5->fields.costumeSvtIdList;
                      v52 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v64.fields.currentCryptoKey = v52;
                      *(_QWORD *)&v64.fields.fakeValue = v51;
                      this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v64,
                                                               0LL);
                      if ( v50 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v50,
                          (int32_t)this,
                          (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_60:
                      sub_B5D69C(this, userSvtEntity);
                    }
                  }
                }
              }
              servantMaster = (int)v29->fields.servantMaster;
              ++v30;
            }
            while ( v30 < servantMaster );
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t isExceedFriendshipMax; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  __int64 v29; // x23
  __int64 v30; // x21
  __int64 v31; // x22
  struct System_Collections_Generic_List_int__o *v32; // x22
  struct ServantMaster_o *servantMaster; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  WarEntity_o *v36; // x0
  __int128 v37; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  WarEntity_o *v39; // x21
  int64_t v40; // x23
  int64_t v41; // x22
  int v42; // w8
  __int64 v43; // x23
  int64_t v44; // x21
  __int64 v45; // x26
  unsigned int v46; // w25
  UserItemMaster_o *userItemMaster; // x22
  System_Collections_Generic_List_int__o *v49; // x20
  __int64 v50; // x19
  __int64 v51; // x21
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42E9724 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    byte_42E9724 = 1;
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
  v29 = 0LL;
  while ( (int)v29 < friendshipExceedSvtIdList->fields._size )
  {
    v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v31;
    *(_QWORD *)&v56.fields.fakeValue = v30;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL);
    v32 = this->fields.friendshipExceedSvtIdList;
    if ( !v32 )
      goto LABEL_22;
    if ( v32->fields._size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( (_DWORD)isExceedFriendshipMax == v32->fields._items->m_Items[v29 + 1] )
      return 0;
    friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
    ++v29;
    if ( !friendshipExceedSvtIdList )
      goto LABEL_22;
  }
  servantMaster = this->fields.servantMaster;
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v35;
  *(_QWORD *)&v57.fields.fakeValue = v34;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v57, 0LL);
  if ( !servantMaster )
    goto LABEL_22;
  v36 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
          isExceedFriendshipMax,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v37 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v39 = v36;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v37;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v53 = v54;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v53, 0LL);
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                            userServantEntity->fields.svtId,
                            0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_22;
  isExceedFriendshipMax = (int64_t)UserServantCollectionMaster__GetEntity(
                                     userServantCollectionMaster,
                                     v40,
                                     isExceedFriendshipMax,
                                     0LL);
  if ( !isExceedFriendshipMax )
    goto LABEL_22;
  v41 = isExceedFriendshipMax;
  isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(isExceedFriendshipMax + 100),
                            0LL);
  if ( !v39 )
    goto LABEL_22;
  v42 = *(_DWORD *)(v41 + 116) + v39->fields.lastQuestId;
  if ( (int)isExceedFriendshipMax < v42 )
    return 0;
  isExceedFriendshipMax = (int64_t)this->fields.friendshipMaster;
  if ( !isExceedFriendshipMax
    || (isExceedFriendshipMax = (int64_t)FriendshipMaster__GetEntity(
                                           (FriendshipMaster_o *)isExceedFriendshipMax,
                                           v39->fields.eventId,
                                           v42 + 1,
                                           0LL)) == 0
    || (v43 = *(_QWORD *)(isExceedFriendshipMax + 40), v44 = isExceedFriendshipMax, !v43) )
  {
LABEL_22:
    sub_B5D69C(isExceedFriendshipMax, userServantEntity);
  }
  if ( *(int *)(v43 + 24) >= 1 )
  {
    v45 = *(_QWORD *)(isExceedFriendshipMax + 32);
    v46 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      isExceedFriendshipMax = NetworkManager__get_UserId(0LL);
      if ( v46 >= *(_DWORD *)(v43 + 24) )
      {
LABEL_58:
        v52 = sub_B5D6C8(isExceedFriendshipMax);
        sub_B5D668(v52, 0LL);
      }
      if ( !userItemMaster )
        goto LABEL_22;
      isExceedFriendshipMax = UserItemMaster__TryGetEntity(
                                userItemMaster,
                                &entity,
                                isExceedFriendshipMax,
                                *(_DWORD *)(v43 + 4LL * (int)v46 + 32),
                                0LL);
      if ( (isExceedFriendshipMax & 1) == 0 )
        return 0;
      if ( !entity || !v45 )
        goto LABEL_22;
      if ( v46 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_58;
      if ( entity->fields.num < *(_DWORD *)(v45 + 4LL * (int)v46 + 32) )
        return 0;
    }
    while ( (signed int)++v46 < *(_DWORD *)(v43 + 24) );
  }
  if ( this->fields.haveQpVal >= *(_DWORD *)(v44 + 28) )
  {
    v49 = this->fields.friendshipExceedSvtIdList;
    v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v58.fields.currentCryptoKey = v51;
    *(_QWORD *)&v58.fields.fakeValue = v50;
    isExceedFriendshipMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
    if ( v49 )
    {
      System_Collections_Generic_List_int___Add(
        v49,
        isExceedFriendshipMax,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  _BOOL4 isLimitCountMax; // w0
  __int64 v19; // x22
  __int64 v20; // x24
  _BOOL4 v21; // w23
  int32_t v22; // w22
  struct UserServantStorageMaster_o *userServantStorageMaster; // x26
  struct System_String_o *MasterName_k__BackingField; // x8
  struct UserServantMaster_o *userServantMaster; // x28
  unsigned __int64 v26; // x27
  int32_t v27; // w22
  __int128 v28; // q1
  int32_t v29; // w20
  UserItemMaster_o *userItemMaster; // x23
  int v31; // w19
  int32_t servantMaster; // w24
  int32_t haveQpVal; // w23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  CombineLimitReleaseMaster_o *v38; // x20
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t v41; // w19
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  __int64 v45; // x0
  CheckCombineEnalbleControl_o *v46; // [xsp+8h] [xbp-B8h]
  char v47; // [xsp+14h] [xbp-ACh]
  CheckCombineEnalbleControl_o *v48; // [xsp+18h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  CombineLimitReleaseEntity_o *v52; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v48 = this;
  if ( (byte_42E9720 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)usrData, (_DWORD)servantEntity, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    this = (CheckCombineEnalbleControl_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             v15,
                                             v16,
                                             v17);
    byte_42E9720 = 1;
  }
  v52 = 0LL;
  entity = 0LL;
  if ( !usrData )
    goto LABEL_45;
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v20 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v19 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v21 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v53, 0LL);
  if ( ((v21 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0
    || (this = (CheckCombineEnalbleControl_o *)UserServantEntity__isLevelMax(usrData, 0LL),
        ((unsigned __int8)this & 1) == 0) )
  {
    LOBYTE(v31) = 0;
  }
  else
  {
    if ( !servantEntity )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)v48->fields.combineLimitMaster;
    if ( !this )
      goto LABEL_45;
    this = (CheckCombineEnalbleControl_o *)CombineLimitMaster__GetEntity(
                                             (CombineLimitMaster_o *)this,
                                             servantEntity->fields.combineLimitId,
                                             v22,
                                             0LL);
    if ( !this )
      goto LABEL_45;
    userServantStorageMaster = this->fields.userServantStorageMaster;
    if ( !userServantStorageMaster )
      goto LABEL_45;
    MasterName_k__BackingField = userServantStorageMaster->fields._MasterName_k__BackingField;
    v46 = this;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      userServantMaster = this->fields.userServantMaster;
      v26 = 0LL;
      v47 = 0;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)MasterName_k__BackingField )
          goto LABEL_46;
        if ( !userServantMaster )
          goto LABEL_45;
        if ( v26 >= LODWORD(userServantMaster->fields._MasterName_k__BackingField) )
        {
LABEL_46:
          v45 = sub_B5D6C8(this);
          sub_B5D668(v45, 0LL);
        }
        v27 = *((_DWORD *)&userServantStorageMaster->fields.list + v26);
        v28 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v29 = *((_DWORD *)&userServantMaster->fields.list + v26);
        userItemMaster = v48->fields.userItemMaster;
        *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v50.fields.fakeValue = v28;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v49 = v50;
        this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                 &v49,
                                                 0LL);
        if ( !userItemMaster )
          goto LABEL_45;
        this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                 userItemMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v27,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_45;
        if ( v27 == entity->fields.itemId )
        {
          if ( v29 > entity->fields.num )
            break;
          v47 = 1;
        }
        LODWORD(MasterName_k__BackingField) = userServantStorageMaster->fields._MasterName_k__BackingField;
        if ( (__int64)++v26 >= (int)MasterName_k__BackingField )
          goto LABEL_32;
      }
    }
    v47 = 0;
LABEL_32:
    servantMaster = (int32_t)v46->fields.servantMaster;
    haveQpVal = v48->fields.haveQpVal;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v37 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v38 = (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v37;
    *(_QWORD *)&v54.fields.fakeValue = v36;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL);
    v40 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v41 = v39;
    *(_QWORD *)&v55.fields.currentCryptoKey = v40;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
    if ( !v38 )
LABEL_45:
      sub_B5D69C(this, usrData);
    this = (CheckCombineEnalbleControl_o *)CombineLimitReleaseMaster__TryGetEntity(
                                             v38,
                                             &v52,
                                             v41,
                                             (_DWORD)this + 1,
                                             0LL);
    v31 = (unsigned __int8)v47 & (haveQpVal >= servantMaster);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v52 )
        goto LABEL_45;
      condType = v52->fields.condType;
      condTargetId = v52->fields.condTargetId;
      condNum = v52->fields.condNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v31 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
    }
  }
  return v31;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CheckCombineEnalbleControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  _BOOL4 isExceedLvMax; // w21
  _BOOL4 isLimitCountMax; // w0
  __int64 v32; // x23
  __int64 v33; // x24
  _BOOL4 v34; // w22
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v36; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  CommonConsumeEntity_array *v38; // x24
  System_Collections_Generic_HashSet_int__o *v39; // x22
  System_Collections_Generic_HashSet_int__o *v40; // x23
  int max_length; // w8
  __int64 v42; // x27
  CommonConsumeEntity_o *v43; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v45; // x25
  __int64 v46; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x24
  System_Int32_array *v48; // x22
  System_Int32_array *v49; // x0
  __int64 v51; // x0
  ServantExceedEntity_o *v52; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v5 = this;
  if ( (byte_42E9722 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonConsumeMaster___, (_DWORD)usrData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v24, v25, v26);
    this = (CheckCombineEnalbleControl_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v27,
                                             v28,
                                             v29);
    byte_42E9722 = 1;
  }
  if ( !usrData )
    goto LABEL_37;
  isExceedLvMax = UserServantEntity__isExceedLvMax(usrData, 0LL);
  isLimitCountMax = UserServantEntity__isLimitCountMax(usrData, 0LL);
  v33 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
  v34 = isLimitCountMax;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
  *(_QWORD *)&v53.fields.fakeValue = v32;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v53, 0LL);
  if ( ((isExceedLvMax | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 )
    return 0;
  if ( (v34 & UserServantEntity__isLevelMax(usrData, 0LL) & 1) == 0 )
    return 0;
  if ( UserServantEntity__IsEventJoin(usrData, 0LL) )
    return 0;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(usrData, 0LL);
  if ( !SvtExceedEnt )
    return 0;
  v36 = SvtExceedEnt;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CheckCombineEnalbleControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !this )
    goto LABEL_37;
  IdEntityList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)this, v36->fields.consumeId, 0LL);
  if ( !IdEntityList )
    return 0;
  v52 = v36;
  v38 = IdEntityList;
  v39 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v39,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  max_length = v38->max_length;
  if ( max_length >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v42 >= max_length )
      {
        v51 = sub_B5D6C8(this);
        sub_B5D668(v51, 0LL);
      }
      v43 = v38->m_Items[v42];
      if ( !v43 )
        break;
      if ( !v39 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v39,
                                               v43->fields.objectId,
                                               (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v40 )
        break;
      this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                               v40,
                                               v43->fields.num,
                                               (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v38->max_length;
      if ( (int)++v42 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B5D69C(this, usrData);
  }
LABEL_23:
  if ( v52->fields.objectNum >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v46 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v46;
    *(_QWORD *)&v54.fields.fakeValue = v45;
    this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL);
    if ( !v47 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v47,
                                             (int32_t)this,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    if ( !v39 )
      goto LABEL_37;
    this = (CheckCombineEnalbleControl_o *)System_Collections_Generic_HashSet_int___Add(
                                             v39,
                                             (int32_t)this->fields.servantMaster,
                                             (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v40 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v40,
      v52->fields.objectNum,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v48 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v49 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v48, v49, v5->fields.haveQpVal, v52->fields.qp, 0LL);
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
    sub_B5D69C(this, usrData);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Int32_array *SkillIdList; // x19
  __int64 v10; // x8
  CheckCombineEnalbleControl_o *v11; // x21
  unsigned __int64 v12; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x27
  int32_t v14; // w23
  struct UserServantMaster_o *userServantMaster; // x19
  struct System_String_o *MasterName_k__BackingField; // x8
  unsigned __int64 v17; // x28
  struct UserServantStorageMaster_o *userServantStorageMaster; // x23
  int32_t v19; // w24
  __int128 v20; // q1
  int32_t v21; // w22
  UserItemMaster_o *userItemMaster; // x25
  __int64 v24; // x0
  CheckCombineEnalbleControl_o *v25; // [xsp+8h] [xbp-C8h]
  System_Int32_array *v26; // [xsp+10h] [xbp-C0h]
  char v27; // [xsp+1Ch] [xbp-B4h]
  CheckCombineEnalbleControl_o *v28; // [xsp+28h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v5 = usrData;
  v28 = this;
  if ( (byte_42E9721 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__,
      (_DWORD)usrData,
      (_DWORD)servantEntity,
      method);
    this = (CheckCombineEnalbleControl_o *)sub_B5D5C4(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                             v6,
                                             v7,
                                             v8);
    byte_42E9721 = 1;
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
    sub_B5D69C(this, usrData);
  }
  v10 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = this;
  v12 = 0LL;
  p_userId = &v5->fields.userId;
  v26 = SkillIdList;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      goto LABEL_42;
    if ( !v11 )
      goto LABEL_41;
    if ( v12 >= LODWORD(v11->fields.servantMaster) )
      goto LABEL_42;
    usrData = (UserServantEntity_o *)(unsigned int)SkillIdList->m_Items[v12 + 1];
    if ( (int)usrData >= 1 )
    {
      this = (CheckCombineEnalbleControl_o *)v28->fields.skillMaster;
      if ( !this )
        goto LABEL_41;
      v14 = *((_DWORD *)&v11->fields.userServantMaster + v12);
      this = (CheckCombineEnalbleControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               (int32_t)usrData,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_41;
      if ( v14 < SLODWORD(this->fields.userServantStorageMaster) )
      {
        if ( !servantEntity )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)v28->fields.combineSkillMaster;
        if ( !this )
          goto LABEL_41;
        this = (CheckCombineEnalbleControl_o *)CombineSkillMaster__GetEntity(
                                                 (CombineSkillMaster_o *)this,
                                                 servantEntity->fields.combineSkillId,
                                                 v14,
                                                 0LL);
        v25 = this;
        if ( this )
        {
          userServantMaster = this->fields.userServantMaster;
          if ( !userServantMaster )
            goto LABEL_41;
          MasterName_k__BackingField = userServantMaster->fields._MasterName_k__BackingField;
          if ( (int)MasterName_k__BackingField >= 1 )
          {
            v17 = 0LL;
            userServantStorageMaster = this->fields.userServantStorageMaster;
            v27 = 0;
            while ( v17 < (unsigned int)MasterName_k__BackingField )
            {
              if ( !userServantStorageMaster )
                goto LABEL_41;
              if ( v17 >= LODWORD(userServantStorageMaster->fields._MasterName_k__BackingField) )
                break;
              v19 = *((_DWORD *)&userServantMaster->fields.list + v17);
              v20 = *(_OWORD *)&p_userId->fields.fakeValue;
              v21 = *((_DWORD *)&userServantStorageMaster->fields.list + v17);
              userItemMaster = v28->fields.userItemMaster;
              *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v30.fields.fakeValue = v20;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v29 = v30;
              this = (CheckCombineEnalbleControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                       &v29,
                                                       0LL);
              if ( !userItemMaster )
                goto LABEL_41;
              this = (CheckCombineEnalbleControl_o *)UserItemMaster__TryGetEntity(
                                                       userItemMaster,
                                                       &entity,
                                                       (int64_t)this,
                                                       v19,
                                                       0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_37;
              if ( !entity )
                goto LABEL_41;
              if ( v19 == entity->fields.itemId )
              {
                if ( v21 > entity->fields.num )
                  goto LABEL_37;
                v27 = 1;
              }
              LODWORD(MasterName_k__BackingField) = userServantMaster->fields._MasterName_k__BackingField;
              if ( (__int64)++v17 >= (int)MasterName_k__BackingField )
                goto LABEL_35;
            }
LABEL_42:
            v24 = sub_B5D6C8(this);
            sub_B5D668(v24, 0LL);
          }
          v27 = 0;
LABEL_35:
          if ( (v27 & 1) != 0 && v28->fields.haveQpVal >= SLODWORD(v25->fields.servantMaster) )
            return 1;
        }
      }
    }
LABEL_37:
    SkillIdList = v26;
    ++v12;
    LODWORD(v10) = v26->max_length;
    if ( (__int64)v12 >= (int)v10 )
      return 0;
  }
}


void __fastcall CheckCombineEnalbleControl__SetCombineEnableInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *SelfUserGame; // x0
  __int64 v21; // x1
  int32_t v22; // w8
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w8
  int *v38; // x10
  int v39; // w19
  int32_t v40; // w24
  int32_t v41; // w26
  int32_t v42; // w27
  int32_t v43; // w20
  int32_t v44; // w25
  int32_t v45; // w28
  __int64 v46; // x21
  struct ServantMaster_o *servantMaster; // x22
  __int64 v48; // x23
  __int64 v49; // x24
  ServantEntity_o *Entity; // x22
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  __int64 v58; // x8
  UserServantEntity_o **v59; // x21
  unsigned __int64 v60; // x19
  CombineEnableData_o *v61; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0
  int *v70; // [xsp+8h] [xbp-68h]
  CheckCombineEnalbleControl_o *v71; // [xsp+10h] [xbp-60h]
  int32_t v72; // [xsp+1Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_42E971E & 1) == 0 )
  {
    sub_B5D5C4(&CombineEnableData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    byte_42E971E = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v22 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = v22;
  if ( !SelfUserGame )
    goto LABEL_32;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList((ServantCostumeMaster_o *)SelfUserGame, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeSvtIdList,
    (System_Int32_array **)CostumeSvtIdList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.friendshipExceedSvtIdList = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendshipExceedSvtIdList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  SelfUserGame = this->fields.cachedUserServantNpLvDict;
  if ( !SelfUserGame )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SelfUserGame,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  SelfUserGame = this->fields.userServantMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantMaster__getOrganizationList((UserServantMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v37 = *((_DWORD *)SelfUserGame + 6);
  v38 = (int *)SelfUserGame;
  if ( v37 >= 1 )
  {
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v70 = (int *)SelfUserGame;
    v71 = this;
    while ( v39 < (unsigned int)v37 )
    {
      v46 = *(_QWORD *)&v38[2 * v39 + 8];
      v72 = v40;
      if ( !v46 )
        goto LABEL_32;
      servantMaster = this->fields.servantMaster;
      v49 = *(_QWORD *)(v46 + 80);
      v48 = *(_QWORD *)(v46 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v49;
      *(_QWORD *)&v73.fields.fakeValue = v48;
      SelfUserGame = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v73, 0LL);
      if ( !servantMaster )
        goto LABEL_32;
      this = v71;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                    (int32_t)SelfUserGame,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v45 += CheckCombineEnalbleControl__GetIsLimitUpEnable(v71, (UserServantEntity_o *)v46, Entity, v51);
      v44 += CheckCombineEnalbleControl__GetIsSkillUpEnable(v71, (UserServantEntity_o *)v46, Entity, v52);
      v43 += CheckCombineEnalbleControl__GetIsNpUpEnable(v71, (UserServantEntity_o *)v46, v53);
      v42 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v71, (UserServantEntity_o *)v46, v54);
      v41 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v71, (UserServantEntity_o *)v46, v55);
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                               v71,
                               (UserServantEntity_o *)v46,
                               v56);
      v38 = v70;
      ++v39;
      v37 = v70[6];
      v40 = v72 + ((unsigned __int8)SelfUserGame & 1);
      if ( v39 >= v37 )
        goto LABEL_19;
    }
LABEL_33:
    v69 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v69, 0LL);
  }
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
LABEL_19:
  SelfUserGame = this->fields.userServantStorageMaster;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = UserServantStorageMaster__getOrganizationList((UserServantStorageMaster_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v58 = *((_QWORD *)SelfUserGame + 3);
  v59 = (UserServantEntity_o **)SelfUserGame;
  if ( (int)v58 >= 1 )
  {
    v60 = 0LL;
    while ( v60 < (unsigned int)v58 )
    {
      SelfUserGame = (void *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(this, v59[v60 + 4], v57);
      LODWORD(v58) = *((_DWORD *)v59 + 6);
      ++v60;
      v41 += (unsigned __int8)SelfUserGame & 1;
      if ( (__int64)v60 >= (int)v58 )
        goto LABEL_25;
    }
    goto LABEL_33;
  }
LABEL_25:
  v61 = (CombineEnableData_o *)sub_B5D694(CombineEnableData_TypeInfo);
  CombineEnableData___ctor(v61, 0LL);
  this->fields.combineEnalbeInfo = v61;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_combineEnalbeInfo,
    (System_Int32_array **)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( !*p_combineEnalbeInfo
    || ((*p_combineEnalbeInfo)->fields.limitUpEnableNum = v45, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.skillUpEnableNum = v44, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.npUpEnableNum = v43, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.lvExceedEnableNum = v42, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.costumeCombineEnableNum = v41, !*p_combineEnalbeInfo) )
  {
LABEL_32:
    sub_B5D69C(SelfUserGame, v21);
  }
  (*p_combineEnalbeInfo)->fields.friendshipExceedEnableNum = v40;
}


void __fastcall CheckCombineEnalbleControl__SetMasters(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  WebViewManager_o *Instance; // x0
  __int64 v45; // x1
  struct ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UserServantMaster_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UserServantStorageMaster_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct UserServantCollectionMaster_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct CombineLimitMaster_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct UserItemMaster_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct SkillMaster_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct CombineSkillMaster_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct TreasureDvcMaster_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct TreasureDvcLvMaster_o *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct ServantCostumeMaster_o *v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct ServantCostumeReleaseMaster_o *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct FriendshipMaster_o *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7

  if ( (byte_42E971F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineSkillMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v29, v30, v31);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v32, v33, v34);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v35, v36, v37);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42E971F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v53 = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v60 = (struct UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantStorageMaster,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v67 = (struct UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantCollectionMaster,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v74 = (struct CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = v74;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineLimitMaster,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v81 = (struct UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userItemMaster,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v88 = (struct SkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = v88;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillMaster,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v95 = (struct CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = v95;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineSkillMaster,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v102 = (struct TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = v102;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcMaster,
    (System_Int32_array **)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v109 = (struct TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = v109;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcLvMaster,
    (System_Int32_array **)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v116 = (struct ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = v116;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeMaster,
    (System_Int32_array **)v116,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v123 = (struct ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = v123,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.cosReleaseMaster,
          (System_Int32_array **)v123,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(Instance, v45);
  }
  v130 = (struct FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = v130;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendshipMaster,
    (System_Int32_array **)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}