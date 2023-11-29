void __fastcall CheckCombineEnalbleControl___ctor(CheckCombineEnalbleControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FAF1F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6);
    byte_40FAF1F = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.cachedUserServantNpLvDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantNpLvDict,
    (System_Int32_array **)v7,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantCostumeMaster_o *servantCostumeMaster; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  struct System_Collections_Generic_List_int__o *costumeSvtIdList; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  ServantCostumeMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w0
  ServantCostumeEntity_array *IsClearEventItemCostumeReleaseAllCond; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  ServantCostumeEntity_array *v25; // x21
  int v26; // w27
  UserServantEntity_Fields *p_fields; // x28
  UserServantCollectionMaster_o *userServantCollectionMaster; // x23
  ServantCostumeEntity_o *v29; // x22
  __int64 v30; // x24
  __int64 v31; // x25
  int32_t v32; // w0
  ServantCostumeReleaseMaster_o *cosReleaseMaster; // x23
  __int64 v34; // x24
  __int64 v35; // x25
  int32_t v36; // w0
  bool IsEventCombineCostume; // w0
  ServantCostumeReleaseMaster_o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  int32_t v41; // w0
  __int128 v42; // q0
  int32_t v43; // w24
  int64_t v44; // x0
  int32_t v45; // w0
  __int128 v46; // q0
  int32_t v47; // w24
  int64_t v48; // x0
  System_Collections_Generic_List_int__o *v50; // x20
  __int64 v51; // x19
  __int64 v52; // x21
  int32_t v53; // w0
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

  if ( (byte_40FAF1D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, userSvtEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_40FAF1D = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_60;
  servantCostumeMaster = this->fields.servantCostumeMaster;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v11;
  *(_QWORD *)&v57.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
  if ( !servantCostumeMaster )
    goto LABEL_60;
  if ( ServantCostumeMaster__GetIsServantCostumeExist(servantCostumeMaster, v12, 0LL) )
  {
    costumeSvtIdList = this->fields.costumeSvtIdList;
    if ( costumeSvtIdList )
    {
      if ( costumeSvtIdList->fields._size >= 1 )
      {
        v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v15;
        *(_QWORD *)&v58.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
        if ( System_Collections_Generic_List_int___Contains(
               costumeSvtIdList,
               v16,
               (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v17 = this->fields.servantCostumeMaster;
          v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
          v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v59.fields.currentCryptoKey = v19;
          *(_QWORD *)&v59.fields.fakeValue = v18;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
          if ( !v17 )
            goto LABEL_60;
          IsClearEventItemCostumeReleaseAllCond = ServantCostumeMaster__releasedCostumeEntityList(v17, v20, 0, 0LL);
          if ( !IsClearEventItemCostumeReleaseAllCond )
            goto LABEL_60;
          max_length = IsClearEventItemCostumeReleaseAllCond->max_length;
          v25 = IsClearEventItemCostumeReleaseAllCond;
          if ( max_length >= 1 )
          {
            v26 = 0;
            p_fields = &userSvtEntity->fields;
            do
            {
              if ( v26 >= (unsigned int)max_length )
              {
                sub_B17100(IsClearEventItemCostumeReleaseAllCond, v22, v23);
                sub_B170A0();
              }
              userServantCollectionMaster = this->fields.userServantCollectionMaster;
              v29 = v25->m_Items[v26];
              v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
              v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v60.fields.currentCryptoKey = v31;
              *(_QWORD *)&v60.fields.fakeValue = v30;
              v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
              if ( !v29 || !userServantCollectionMaster )
                goto LABEL_60;
              IsClearEventItemCostumeReleaseAllCond = (ServantCostumeEntity_array *)UserServantCollectionMaster__IsCostumeAlreadyGet(
                                                                                      userServantCollectionMaster,
                                                                                      v32,
                                                                                      v29->fields.id,
                                                                                      0LL);
              if ( ((unsigned __int8)IsClearEventItemCostumeReleaseAllCond & 1) == 0 )
              {
                cosReleaseMaster = this->fields.cosReleaseMaster;
                v35 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v61.fields.currentCryptoKey = v35;
                *(_QWORD *)&v61.fields.fakeValue = v34;
                v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
                if ( !cosReleaseMaster )
                  goto LABEL_60;
                IsClearEventItemCostumeReleaseAllCond = (ServantCostumeEntity_array *)ServantCostumeReleaseMaster__checkItemHaving(
                                                                                        cosReleaseMaster,
                                                                                        v36,
                                                                                        v29->fields.id,
                                                                                        0LL);
                if ( ((unsigned __int8)IsClearEventItemCostumeReleaseAllCond & 1) != 0 )
                {
                  IsEventCombineCostume = ServantCostumeEntity__IsEventCombineCostume(v29, 0LL);
                  v38 = this->fields.cosReleaseMaster;
                  v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                  v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                  if ( IsEventCombineCostume )
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v62.fields.currentCryptoKey = v40;
                    *(_QWORD *)&v62.fields.fakeValue = v39;
                    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
                    v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v43 = v41;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v42;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v55 = v56;
                    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v55, 0LL);
                    if ( !v38 )
                      goto LABEL_60;
                    IsClearEventItemCostumeReleaseAllCond = (ServantCostumeEntity_array *)ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
                                                                                            v38,
                                                                                            v29,
                                                                                            v43,
                                                                                            v44,
                                                                                            0LL);
                    if ( ((unsigned __int8)IsClearEventItemCostumeReleaseAllCond & 1) != 0 )
                      goto LABEL_55;
                  }
                  else
                  {
                    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    }
                    *(_QWORD *)&v63.fields.currentCryptoKey = v40;
                    *(_QWORD *)&v63.fields.fakeValue = v39;
                    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
                    v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                    v47 = v45;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v46;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v54 = v56;
                    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v54, 0LL);
                    if ( !v38 )
                      goto LABEL_60;
                    IsClearEventItemCostumeReleaseAllCond = (ServantCostumeEntity_array *)ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
                                                                                            v38,
                                                                                            v29,
                                                                                            v47,
                                                                                            v48,
                                                                                            0LL);
                    if ( ((unsigned __int8)IsClearEventItemCostumeReleaseAllCond & 1) != 0 )
                    {
LABEL_55:
                      v50 = this->fields.costumeSvtIdList;
                      v52 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
                      v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v64.fields.currentCryptoKey = v52;
                      *(_QWORD *)&v64.fields.fakeValue = v51;
                      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
                      if ( v50 )
                      {
                        System_Collections_Generic_List_int___Remove(
                          v50,
                          v53,
                          (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
                        return 1;
                      }
LABEL_60:
                      sub_B170D4();
                    }
                  }
                }
              }
              max_length = v25->max_length;
              ++v26;
            }
            while ( v26 < max_length );
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
  BalanceConfig_c *v12; // x0
  struct System_Collections_Generic_List_int__o *friendshipExceedSvtIdList; // x8
  __int64 v14; // x23
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  struct System_Collections_Generic_List_int__o *v18; // x22
  struct ServantMaster_o *servantMaster; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w0
  WarEntity_o *v23; // x0
  __int128 v24; // q1
  UserServantCollectionMaster_o *userServantCollectionMaster; // x22
  WarEntity_o *v26; // x21
  int64_t v27; // x23
  int32_t v28; // w0
  UserServantCollectionEntity_o *v29; // x0
  UserServantCollectionEntity_o *v30; // x22
  int32_t v31; // w0
  int v32; // w8
  FriendshipMaster_o *friendshipMaster; // x0
  FriendshipEntity_o *v34; // x0
  struct System_Int32_array *itemIds; // x23
  FriendshipEntity_o *v36; // x21
  struct System_Int32_array *itemNums; // x26
  il2cpp_array_size_t v38; // w25
  UserItemMaster_o *userItemMaster; // x22
  int64_t UserId; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_int__o *v44; // x20
  __int64 v45; // x19
  __int64 v46; // x21
  int32_t v47; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40FAF1E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_40FAF1E = 1;
  }
  entity = 0LL;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->DisableFriendshipExceed > 0 )
    return 0;
  if ( !userServantEntity )
    goto LABEL_22;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL)
    || UserServantEntity__IsHeroine(userServantEntity, 0LL)
    || UserServantEntity__isExceedFriendshipMax(userServantEntity, 0LL) )
  {
    return 0;
  }
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
    *(_QWORD *)&v51.fields.currentCryptoKey = v16;
    *(_QWORD *)&v51.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
    v18 = this->fields.friendshipExceedSvtIdList;
    if ( !v18 )
      goto LABEL_22;
    if ( v18->fields._size <= (unsigned int)v14 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v17 == v18->fields._items->m_Items[v14 + 1] )
      return 0;
    friendshipExceedSvtIdList = this->fields.friendshipExceedSvtIdList;
    ++v14;
    if ( !friendshipExceedSvtIdList )
      goto LABEL_22;
  }
  servantMaster = this->fields.servantMaster;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v21;
  *(_QWORD *)&v52.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
  if ( !servantMaster )
    goto LABEL_22;
  v23 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
          v22,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v24 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v26 = v23;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v48 = v49;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v48, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userServantEntity->fields.svtId, 0LL);
  if ( !userServantCollectionMaster )
    goto LABEL_22;
  v29 = UserServantCollectionMaster__GetEntity(userServantCollectionMaster, v27, v28, 0LL);
  if ( !v29 )
    goto LABEL_22;
  v30 = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.friendshipRank, 0LL);
  if ( !v26 )
    goto LABEL_22;
  v32 = v30->fields.friendshipExceedCount + v26->fields.lastQuestId;
  if ( v31 < v32 )
    return 0;
  friendshipMaster = this->fields.friendshipMaster;
  if ( !friendshipMaster
    || (v34 = FriendshipMaster__GetEntity(friendshipMaster, v26->fields.eventId, v32 + 1, 0LL)) == 0LL
    || (itemIds = v34->fields.itemIds, v36 = v34, !itemIds) )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( (int)itemIds->max_length >= 1 )
  {
    itemNums = v34->fields.itemNums;
    v38 = 0;
    do
    {
      userItemMaster = this->fields.userItemMaster;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( v38 >= itemIds->max_length )
      {
LABEL_58:
        sub_B17100(UserId, v41, v42);
        sub_B170A0();
      }
      if ( !userItemMaster )
        goto LABEL_22;
      UserId = UserItemMaster__TryGetEntity(userItemMaster, &entity, UserId, itemIds->m_Items[v38 + 1], 0LL);
      if ( (UserId & 1) == 0 )
        return 0;
      if ( !entity || !itemNums )
        goto LABEL_22;
      if ( v38 >= itemNums->max_length )
        goto LABEL_58;
      if ( entity->fields.num < itemNums->m_Items[v38 + 1] )
        return 0;
    }
    while ( (signed int)++v38 < (signed int)itemIds->max_length );
  }
  if ( this->fields.haveQpVal >= v36->fields.qp )
  {
    v44 = this->fields.friendshipExceedSvtIdList;
    v46 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v46;
    *(_QWORD *)&v53.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
    if ( v44 )
    {
      System_Collections_Generic_List_int___Add(
        v44,
        v47,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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
  CombineLimitMaster_o *combineLimitMaster; // x0
  CombineLimitEntity_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *itemIds; // x26
  __int64 v20; // x8
  struct System_Int32_array *itemNums; // x28
  unsigned __int64 v22; // x27
  int32_t v23; // w22
  __int128 v24; // q1
  int32_t v25; // w20
  UserItemMaster_o *userItemMaster; // x23
  int64_t v27; // x0
  int v28; // w19
  int32_t qp; // w24
  int32_t haveQpVal; // w23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x21
  __int64 v34; // x22
  CombineLimitReleaseMaster_o *v35; // x20
  int32_t v36; // w0
  __int64 v37; // x8
  int32_t v38; // w19
  int32_t v39; // w0
  bool v40; // w0
  int32_t condTargetId; // w20
  int32_t condType; // w22
  int64_t condNum; // x21
  CombineLimitEntity_o *v44; // [xsp+8h] [xbp-B8h]
  char v45; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  CombineLimitReleaseEntity_o *v50; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40FAF1A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, usrData);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_40FAF1A = 1;
  }
  v50 = 0LL;
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
  *(_QWORD *)&v51.fields.currentCryptoKey = v12;
  *(_QWORD *)&v51.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
  if ( ((v13 | UserServantEntity__IsHeroine(usrData, 0LL)) & 1) != 0 || !UserServantEntity__isLevelMax(usrData, 0LL) )
  {
    LOBYTE(v28) = 0;
  }
  else
  {
    if ( !servantEntity )
      goto LABEL_45;
    combineLimitMaster = this->fields.combineLimitMaster;
    if ( !combineLimitMaster )
      goto LABEL_45;
    v16 = CombineLimitMaster__GetEntity(combineLimitMaster, servantEntity->fields.combineLimitId, v14, 0LL);
    if ( !v16 )
      goto LABEL_45;
    itemIds = v16->fields.itemIds;
    if ( !itemIds )
      goto LABEL_45;
    v20 = *(_QWORD *)&itemIds->max_length;
    v44 = v16;
    if ( (int)v20 >= 1 )
    {
      itemNums = v16->fields.itemNums;
      v22 = 0LL;
      v45 = 0;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v20 )
          goto LABEL_46;
        if ( !itemNums )
          goto LABEL_45;
        if ( v22 >= itemNums->max_length )
        {
LABEL_46:
          sub_B17100(v16, v17, v18);
          sub_B170A0();
        }
        v23 = itemIds->m_Items[v22 + 1];
        v24 = *(_OWORD *)&usrData->fields.userId.fields.fakeValue;
        v25 = itemNums->m_Items[v22 + 1];
        userItemMaster = this->fields.userItemMaster;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&usrData->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v47 = v48;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
        if ( !userItemMaster )
          goto LABEL_45;
        v16 = (CombineLimitEntity_o *)UserItemMaster__TryGetEntity(userItemMaster, &entity, v27, v23, 0LL);
        if ( ((unsigned __int8)v16 & 1) == 0 )
          break;
        if ( !entity )
          goto LABEL_45;
        if ( v23 == entity->fields.itemId )
        {
          if ( v25 > entity->fields.num )
            break;
          v45 = 1;
        }
        LODWORD(v20) = itemIds->max_length;
        if ( (__int64)++v22 >= (int)v20 )
          goto LABEL_32;
      }
    }
    v45 = 0;
LABEL_32:
    qp = v44->fields.qp;
    haveQpVal = this->fields.haveQpVal;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    v34 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v35 = (CombineLimitReleaseMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v52.fields.currentCryptoKey = v34;
    *(_QWORD *)&v52.fields.fakeValue = v33;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
    v37 = *(_QWORD *)&usrData->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&usrData->fields.limitCount.fields.fakeValue;
    v38 = v36;
    *(_QWORD *)&v53.fields.currentCryptoKey = v37;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
    if ( !v35 )
LABEL_45:
      sub_B170D4();
    v40 = CombineLimitReleaseMaster__TryGetEntity(v35, &v50, v38, v39 + 1, 0LL);
    v28 = (unsigned __int8)v45 & (haveQpVal >= qp);
    if ( v40 )
    {
      if ( !v50 )
        goto LABEL_45;
      condType = v50->fields.condType;
      condTargetId = v50->fields.condTargetId;
      condNum = v50->fields.condNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return v28 & CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
    }
  }
  return v28;
}


bool __fastcall CheckCombineEnalbleControl__GetIsLvExceedEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
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
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x0
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonConsumeEntity_array *v26; // x24
  System_Collections_Generic_HashSet_int__o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_HashSet_int__o *v32; // x23
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int max_length; // w8
  __int64 v37; // x27
  CommonConsumeEntity_o *v38; // x21
  WarQuestSelectionMaster_o *v39; // x0
  __int64 v40; // x25
  __int64 v41; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x24
  int32_t v43; // w0
  WarEntity_o *Entity; // x0
  System_Int32_array *v45; // x22
  System_Int32_array *v46; // x0
  ServantExceedEntity_o *v48; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FAF1C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommonConsumeMaster___, usrData);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v10);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_40FAF1C = 1;
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
  *(_QWORD *)&v49.fields.currentCryptoKey = v16;
  *(_QWORD *)&v49.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL);
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
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, v19->fields.consumeId, 0LL);
  if ( !IdEntityList )
    return 0;
  v48 = v19;
  v26 = IdEntityList;
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  max_length = v26->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v37 >= max_length )
      {
        sub_B17100(v33, v34, v35);
        sub_B170A0();
      }
      v38 = v26->m_Items[v37];
      if ( !v38 )
        break;
      if ( !v27 )
        break;
      System_Collections_Generic_HashSet_int___Add(
        v27,
        v38->fields.objectId,
        (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      if ( !v32 )
        break;
      v33 = System_Collections_Generic_HashSet_int___Add(
              v32,
              v38->fields.num,
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      max_length = v26->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_23:
  if ( v48->fields.objectNum >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    v41 = *(_QWORD *)&usrData->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&usrData->fields.svtId.fields.fakeValue;
    v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v41;
    *(_QWORD *)&v50.fields.fakeValue = v40;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
    if ( !v42 )
      goto LABEL_37;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v42,
               v43,
               (const MethodInfo_266F388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_37;
    if ( !v27 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v27,
      (int32_t)Entity->fields.age,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
    if ( !v32 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___Add(
      v32,
      v48->fields.objectNum,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v45 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v46 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  return CombineUtility__CheckCombineNeedItemsEnough(usrData, v45, v46, this->fields.haveQpVal, v48->fields.qp, 0LL);
}


bool __fastcall CheckCombineEnalbleControl__GetIsNpUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        const MethodInfo *method)
{
  UserServantMaster_o *userServantMaster; // x0
  int SameSvtNpLvCache; // w0
  int32_t v7; // w0
  TreasureDvcInfo_o *v8; // x8
  int32_t lv; // w21
  int32_t v10; // w20
  int32_t v11; // w22
  TreasureDvcLvMaster_o *treasureDvcLvMaster; // x0
  TreasureDvcLvEntity_o *Entity; // x0
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-28h] BYREF

  tdInfo = 0LL;
  if ( !usrData )
    goto LABEL_17;
  if ( UserServantEntity__IsHeroine(usrData, 0LL) )
    return 0;
  UserServantEntity__getTreasureDeviceInfo(usrData, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_17;
  if ( tdInfo->fields.id < 1 || tdInfo->fields.lv > 4 )
    return 0;
  userServantMaster = this->fields.userServantMaster;
  if ( !userServantMaster )
    goto LABEL_17;
  SameSvtNpLvCache = UserServantMaster__getSameSvtNpLvCache(
                       userServantMaster,
                       usrData,
                       &this->fields.cachedUserServantNpLvDict,
                       0LL);
  if ( SameSvtNpLvCache < 1 )
    return 0;
  if ( this->fields.haveQpVal > 1200000 )
    return 1;
  v7 = UserServantEntity__checkTreasureDeviceLevelUp(usrData, SameSvtNpLvCache, 0LL);
  v8 = tdInfo;
  if ( !tdInfo )
    goto LABEL_17;
  lv = tdInfo->fields.lv;
  v10 = v7;
  if ( lv < v7 )
  {
    v11 = 0;
    do
    {
      treasureDvcLvMaster = this->fields.treasureDvcLvMaster;
      if ( !treasureDvcLvMaster )
        break;
      Entity = TreasureDvcLvMaster__GetEntity(treasureDvcLvMaster, v8->fields.id, lv, 0LL);
      if ( Entity )
        v11 += Entity->fields.qp;
      if ( ++lv >= v10 )
        return this->fields.haveQpVal >= v11;
      v8 = tdInfo;
    }
    while ( tdInfo );
LABEL_17:
    sub_B170D4();
  }
  v11 = 0;
  return this->fields.haveQpVal >= v11;
}


bool __fastcall CheckCombineEnalbleControl__GetIsSkillUpEnable(
        CheckCombineEnalbleControl_o *this,
        UserServantEntity_o *usrData,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Int32_array *SkillIdList; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  __int64 v12; // x21
  unsigned __int64 v13; // x26
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x27
  struct SkillMaster_o *skillMaster; // x0
  int32_t v16; // w23
  CombineSkillMaster_o *combineSkillMaster; // x0
  __int64 v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x28
  __int64 v21; // x23
  int32_t v22; // w24
  __int128 v23; // q1
  int32_t v24; // w22
  UserItemMaster_o *userItemMaster; // x25
  int64_t v26; // x0
  __int64 v28; // [xsp+8h] [xbp-C8h]
  System_Int32_array *v29; // [xsp+10h] [xbp-C0h]
  char v30; // [xsp+1Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-80h]
  UserItemEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FAF1B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, usrData);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_40FAF1B = 1;
  }
  entity = 0LL;
  if ( !usrData
    || (SkillIdList = UserServantEntity__getSkillIdList(usrData, -1, -1, 1, 0LL),
        v8 = ((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrData->klass->vtable._6_getSkillLevelList.method)(
               usrData,
               usrData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_41:
    sub_B170D4();
  }
  v11 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = v8;
  v13 = 0LL;
  p_userId = &usrData->fields.userId;
  v29 = SkillIdList;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
      goto LABEL_42;
    if ( !v12 )
      goto LABEL_41;
    if ( v13 >= *(unsigned int *)(v12 + 24) )
      goto LABEL_42;
    v9 = (unsigned int)SkillIdList->m_Items[v13 + 1];
    if ( (int)v9 >= 1 )
    {
      skillMaster = this->fields.skillMaster;
      if ( !skillMaster )
        goto LABEL_41;
      v16 = *(_DWORD *)(v12 + 4 * v13 + 32);
      v8 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                      v9,
                      (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !v8 )
        goto LABEL_41;
      if ( v16 < *(_DWORD *)(v8 + 40) )
      {
        if ( !servantEntity )
          goto LABEL_41;
        combineSkillMaster = this->fields.combineSkillMaster;
        if ( !combineSkillMaster )
          goto LABEL_41;
        v8 = (__int64)CombineSkillMaster__GetEntity(combineSkillMaster, servantEntity->fields.combineSkillId, v16, 0LL);
        v28 = v8;
        if ( v8 )
        {
          v18 = *(_QWORD *)(v8 + 32);
          if ( !v18 )
            goto LABEL_41;
          v19 = *(_QWORD *)(v18 + 24);
          if ( (int)v19 >= 1 )
          {
            v20 = 0LL;
            v21 = *(_QWORD *)(v8 + 40);
            v30 = 0;
            while ( v20 < (unsigned int)v19 )
            {
              if ( !v21 )
                goto LABEL_41;
              if ( v20 >= *(unsigned int *)(v21 + 24) )
                break;
              v22 = *(_DWORD *)(v18 + 32 + 4 * v20);
              v23 = *(_OWORD *)&p_userId->fields.fakeValue;
              v24 = *(_DWORD *)(v21 + 32 + 4 * v20);
              userItemMaster = this->fields.userItemMaster;
              *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v33.fields.fakeValue = v23;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v32 = v33;
              v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v32, 0LL);
              if ( !userItemMaster )
                goto LABEL_41;
              v8 = UserItemMaster__TryGetEntity(userItemMaster, &entity, v26, v22, 0LL);
              if ( (v8 & 1) == 0 )
                goto LABEL_37;
              if ( !entity )
                goto LABEL_41;
              if ( v22 == entity->fields.itemId )
              {
                if ( v24 > entity->fields.num )
                  goto LABEL_37;
                v30 = 1;
              }
              LODWORD(v19) = *(_DWORD *)(v18 + 24);
              if ( (__int64)++v20 >= (int)v19 )
                goto LABEL_35;
            }
LABEL_42:
            sub_B17100(v8, v9, v10);
            sub_B170A0();
          }
          v30 = 0;
LABEL_35:
          if ( (v30 & 1) != 0 && this->fields.haveQpVal >= *(_DWORD *)(v28 + 24) )
            return 1;
        }
      }
    }
LABEL_37:
    SkillIdList = v29;
    ++v13;
    LODWORD(v11) = v29->max_length;
    if ( (__int64)v13 >= (int)v11 )
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w8
  ServantCostumeMaster_o *servantCostumeMaster; // x0
  struct System_Collections_Generic_List_int__o *CostumeSvtIdList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // x0
  UserServantMaster_o *userServantMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  int max_length; // w8
  UserServantEntity_array *v35; // x10
  int v36; // w19
  int32_t v37; // w24
  int32_t v38; // w26
  int32_t v39; // w27
  int32_t v40; // w20
  int32_t v41; // w25
  int32_t v42; // w28
  UserServantEntity_o *v43; // x21
  struct ServantMaster_o *servantMaster; // x22
  __int64 v45; // x23
  __int64 v46; // x24
  int32_t v47; // w0
  ServantEntity_o *Entity; // x22
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  UserServantStorageMaster_o *userServantStorageMaster; // x0
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x8
  UserServantEntity_array *v59; // x21
  unsigned __int64 v60; // x19
  CombineEnableData_o *v61; // x21
  struct CombineEnableData_o **p_combineEnalbeInfo; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UserServantEntity_array *v69; // [xsp+8h] [xbp-68h]
  CheckCombineEnalbleControl_o *v70; // [xsp+10h] [xbp-60h]
  int32_t v71; // [xsp+1Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_40FAF18 & 1) == 0 )
  {
    sub_B16FFC(&CombineEnableData_TypeInfo, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FAF18 = 1;
  }
  CheckCombineEnalbleControl__SetMasters(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  qp = SelfUserGame->fields.qp;
  servantCostumeMaster = this->fields.servantCostumeMaster;
  this->fields.haveQpVal = qp;
  if ( !servantCostumeMaster )
    goto LABEL_32;
  CostumeSvtIdList = ServantCostumeMaster__GetCostumeSvtIdList(servantCostumeMaster, 0LL);
  this->fields.costumeSvtIdList = CostumeSvtIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeSvtIdList,
    (System_Int32_array **)CostumeSvtIdList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.friendshipExceedSvtIdList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendshipExceedSvtIdList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  cachedUserServantNpLvDict = this->fields.cachedUserServantNpLvDict;
  if ( !cachedUserServantNpLvDict )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
  userServantMaster = this->fields.userServantMaster;
  if ( !userServantMaster )
    goto LABEL_32;
  OrganizationList = UserServantMaster__getOrganizationList(userServantMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_32;
  max_length = OrganizationList->max_length;
  v35 = OrganizationList;
  if ( max_length >= 1 )
  {
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v69 = OrganizationList;
    v70 = this;
    while ( v36 < (unsigned int)max_length )
    {
      v43 = v35->m_Items[v36];
      v71 = v37;
      if ( !v43 )
        goto LABEL_32;
      servantMaster = this->fields.servantMaster;
      v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v72.fields.currentCryptoKey = v46;
      *(_QWORD *)&v72.fields.fakeValue = v45;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
      if ( !servantMaster )
        goto LABEL_32;
      this = v70;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                                    v47,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v42 += CheckCombineEnalbleControl__GetIsLimitUpEnable(v70, v43, Entity, v49);
      v41 += CheckCombineEnalbleControl__GetIsSkillUpEnable(v70, v43, Entity, v50);
      v40 += CheckCombineEnalbleControl__GetIsNpUpEnable(v70, v43, v51);
      v39 += CheckCombineEnalbleControl__GetIsLvExceedEnable(v70, v43, v52);
      v38 += CheckCombineEnalbleControl__GetIsCombineCostumeEnable(v70, v43, v53);
      OrganizationList = (UserServantEntity_array *)CheckCombineEnalbleControl__GetIsFriendshipExceedEnable(
                                                      v70,
                                                      v43,
                                                      v54);
      v35 = v69;
      ++v36;
      max_length = v69->max_length;
      v37 = v71 + ((unsigned __int8)OrganizationList & 1);
      if ( v36 >= max_length )
        goto LABEL_19;
    }
LABEL_33:
    sub_B17100(OrganizationList, v32, v33);
    sub_B170A0();
  }
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
LABEL_19:
  userServantStorageMaster = this->fields.userServantStorageMaster;
  if ( !userServantStorageMaster )
    goto LABEL_32;
  OrganizationList = UserServantStorageMaster__getOrganizationList(userServantStorageMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_32;
  v58 = *(_QWORD *)&OrganizationList->max_length;
  v59 = OrganizationList;
  if ( (int)v58 >= 1 )
  {
    v60 = 0LL;
    while ( v60 < (unsigned int)v58 )
    {
      OrganizationList = (UserServantEntity_array *)CheckCombineEnalbleControl__GetIsCombineCostumeEnable(
                                                      this,
                                                      v59->m_Items[v60],
                                                      v33);
      LODWORD(v58) = v59->max_length;
      ++v60;
      v38 += (unsigned __int8)OrganizationList & 1;
      if ( (__int64)v60 >= (int)v58 )
        goto LABEL_25;
    }
    goto LABEL_33;
  }
LABEL_25:
  v61 = (CombineEnableData_o *)sub_B170CC(CombineEnableData_TypeInfo, v32, v33, v56, v57);
  CombineEnableData___ctor(v61, 0LL);
  this->fields.combineEnalbeInfo = v61;
  p_combineEnalbeInfo = &this->fields.combineEnalbeInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_combineEnalbeInfo,
    (System_Int32_array **)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( !*p_combineEnalbeInfo
    || ((*p_combineEnalbeInfo)->fields.limitUpEnableNum = v42, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.skillUpEnableNum = v41, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.npUpEnableNum = v40, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.lvExceedEnableNum = v39, !*p_combineEnalbeInfo)
    || ((*p_combineEnalbeInfo)->fields.costumeCombineEnableNum = v38, !*p_combineEnalbeInfo) )
  {
LABEL_32:
    sub_B170D4();
  }
  (*p_combineEnalbeInfo)->fields.friendshipExceedEnableNum = v37;
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
  WebViewManager_o *v24; // x0
  struct UserServantMaster_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *v32; // x0
  struct UserServantStorageMaster_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WebViewManager_o *v40; // x0
  struct UserServantCollectionMaster_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *v48; // x0
  struct CombineLimitMaster_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewManager_o *v56; // x0
  struct UserItemMaster_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  WebViewManager_o *v64; // x0
  struct SkillMaster_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  WebViewManager_o *v72; // x0
  struct CombineSkillMaster_o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WebViewManager_o *v80; // x0
  struct TreasureDvcMaster_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  WebViewManager_o *v88; // x0
  struct TreasureDvcLvMaster_o *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  WebViewManager_o *v96; // x0
  struct ServantCostumeMaster_o *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  WebViewManager_o *v104; // x0
  struct ServantCostumeReleaseMaster_o *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  WebViewManager_o *v112; // x0
  struct FriendshipMaster_o *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7

  if ( (byte_40FAF19 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineLimitMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineSkillMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FAF19 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (struct ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  this->fields.servantMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_17;
  v25 = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v24,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.userServantMaster = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_17;
  v33 = (struct UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v32,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  this->fields.userServantStorageMaster = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantStorageMaster,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v40 )
    goto LABEL_17;
  v41 = (struct UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v40,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  this->fields.userServantCollectionMaster = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantCollectionMaster,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v48 )
    goto LABEL_17;
  v49 = (struct CombineLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v48,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineLimitMaster___);
  this->fields.combineLimitMaster = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineLimitMaster,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v56 )
    goto LABEL_17;
  v57 = (struct UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v56,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  this->fields.userItemMaster = v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userItemMaster,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v64 )
    goto LABEL_17;
  v65 = (struct SkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v64,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  this->fields.skillMaster = v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillMaster,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v72 )
    goto LABEL_17;
  v73 = (struct CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v72,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  this->fields.combineSkillMaster = v73;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineSkillMaster,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v80 )
    goto LABEL_17;
  v81 = (struct TreasureDvcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v80,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  this->fields.treasureDvcMaster = v81;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcMaster,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v88 )
    goto LABEL_17;
  v89 = (struct TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v88,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  this->fields.treasureDvcLvMaster = v89;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureDvcLvMaster,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v96 )
    goto LABEL_17;
  v97 = (struct ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v96,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  this->fields.servantCostumeMaster = v97;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantCostumeMaster,
    (System_Int32_array **)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v104
    || (v105 = (struct ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v104,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___),
        this->fields.cosReleaseMaster = v105,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.cosReleaseMaster,
          (System_Int32_array **)v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111),
        (v112 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  v113 = (struct FriendshipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v112,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  this->fields.friendshipMaster = v113;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendshipMaster,
    (System_Int32_array **)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
}


CombineEnableData_o *__fastcall CheckCombineEnalbleControl__getCombineEnableNumInfo(
        CheckCombineEnalbleControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEnalbeInfo;
}