void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BF95D2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v2);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v3);
    byte_4BF95D2 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_332C2D8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v4;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)RandomLimitCountManager_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v42; // [xsp+10h] [xbp-30h] BYREF
  int64_t v43; // [xsp+18h] [xbp-28h] BYREF

  v42 = userSvtId;
  v43 = userId;
  v41 = groupIndex;
  if ( (byte_4BF95CE & 1) == 0 )
  {
    sub_1C2E12C(&string___TypeInfo, userSvtId);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v4);
    byte_4BF95CE = 1;
  }
  v5 = sub_1C2E1D4(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v43, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_10;
  v20 = StringLiteral_1525/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1525/*":"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 40), v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int64__ToString((int64_t)&v42, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = v6,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)v6, v21, v22, v23, v24, v25, v26),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v33 = StringLiteral_1525/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1525/*":"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 56), v33, v27, v28, v29, v30, v31, v32),
        v6 = System_Int32__ToString((int32_t)&v41, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C2E390(v6, v7);
  }
  *(_QWORD *)(v5 + 64) = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)v6, v34, v35, v36, v37, v38, v39);
  return System_String__Concat_63249112((System_String_array *)v5, 0LL);
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x21
  __int64 v22; // x20
  __int64 v23; // x21
  BalanceConfig_c **v24; // x27
  int32_t v25; // w20
  BalanceConfig_c *v26; // x8
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v30; // x21
  __int64 v31; // x22
  ServantCostumeMaster_o *v32; // x20
  int32_t v33; // w21
  ServantCostumeEntity_o *v34; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v37; // x21
  __int64 v38; // x22
  ServantLimitAddMaster_o *v39; // x20
  int32_t v40; // w21
  __int128 v41; // q1
  int64_t v42; // x0
  __int128 v43; // q1
  int64_t v44; // x20
  const MethodInfo *v45; // x3
  int64_t v46; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v48; // x1
  RandomLimitCountManager_c *v49; // x0
  Il2CppObject *v50; // x0
  __int128 v51; // q0
  UserServantCollectionMaster_o *v52; // x22
  int64_t v53; // x0
  __int64 v54; // x24
  __int64 v55; // x25
  int64_t v56; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v58; // x22
  int32_t lv; // w23
  __int64 v60; // x24
  __int64 v61; // x25
  int32_t v62; // w0
  System_Int32_array *CostumeList_41533108; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v65; // x24
  Il2CppObject *v66; // x25
  System_Collections_Generic_List_int__o *v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x20
  int32_t v70; // w26
  BalanceConfig_c *v71; // x0
  BalanceConfig_c **v72; // x21
  __int64 v73; // x27
  __int64 v74; // x28
  __int64 v75; // x27
  __int64 v76; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  __int64 v80; // x19
  __int64 v81; // x21
  int32_t v82; // w0
  RandomLimitCountManager_c *v83; // x0
  Il2CppObject *v85; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v91; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4BF95D0 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_1C2E12C(&int___TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v18);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BF95D0 = 1;
  }
  v91 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v21 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v20 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v93.fields.currentCryptoKey = v21;
    *(_QWORD *)&v93.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v93, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v94.fields.currentCryptoKey = v23;
      *(_QWORD *)&v94.fields.fakeValue = v22;
      v24 = &BalanceConfig_TypeInfo;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v94, 0LL);
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( v25 <= v26->static_fields->ServantLimitMax )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v39 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v96.fields.currentCryptoKey = v38;
        *(_QWORD *)&v96.fields.fakeValue = v37;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v96, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v39 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v39, &entitya, v40, (int32_t)Instance, 0LL) )
        {
          Instance = (DataManager_o *)entitya;
          if ( !entitya )
            goto LABEL_89;
          groupIndex = ServantLimitAddEntity__GetRandomGroupIndex(entitya, 0LL);
          goto LABEL_28;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v31 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v32 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v95.fields.currentCryptoKey = v31;
        *(_QWORD *)&v95.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v95, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v32 )
          goto LABEL_89;
        v34 = ServantCostumeMaster__GetEntity(v32, v33, (int32_t)Instance, 0LL);
        if ( v34 )
        {
          groupIndex = v34->fields.groupIndex;
LABEL_28:
          v41 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v89 = v90;
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v89, 0LL);
          v43 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v44 = v42;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v43;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v88, 0LL);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v44, v46, groupIndex, v45);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v48) )
          {
            v49 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v49 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v49->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_332CC0C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v50 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v51 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v52 = (UserServantCollectionMaster_o *)v50;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v51;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v90;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v87, 0LL);
          v55 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v56 = v53;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v97.fields.currentCryptoKey = v55;
          *(_QWORD *)&v97.fields.fakeValue = v54;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v97, 0LL);
          if ( !v52 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v52, v56, (int32_t)Instance, 0LL);
          if ( EntityDefinitely )
          {
            v58 = EntityDefinitely;
            lv = entity->fields.lv;
            v61 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v60 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v98.fields.currentCryptoKey = v61;
            *(_QWORD *)&v98.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v98, 0LL);
            CostumeList_41533108 = UserServantCollectionEntity__getCostumeList_41533108(v58, lv, v62, 0LL);
          }
          else
          {
            CostumeList_41533108 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_41533108, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v85 = Key;
          v65 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v66 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v67 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v67,
            (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          v68 = *(_QWORD *)&RandomLimitCountList->max_length;
          if ( (int)v68 < 1 )
          {
LABEL_78:
            v81 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v80 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v101.fields.currentCryptoKey = v81;
            *(_QWORD *)&v101.fields.fakeValue = v80;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v101, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v67 )
                goto LABEL_89;
              v82 = UnityEngine_Random__Range_70949460(0, v67->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v67,
                       v82,
                       (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v83 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v83 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v83->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v85,
                Item,
                (const MethodInfo_332CC8C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1C2E388(Instance, v28);
          }
          v69 = 0LL;
          while ( 1 )
          {
            if ( v69 >= (unsigned int)v68 )
              sub_1C2E390(Instance, v28);
            v70 = RandomLimitCountList->m_Items[v69 + 1];
            if ( v70 == -1 )
              goto LABEL_77;
            v71 = *v24;
            if ( !(*v24)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v71);
              v71 = *v24;
            }
            v72 = v24;
            if ( v70 <= v71->static_fields->ServantLimitMax )
            {
              v91 = 0LL;
              v76 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v75 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v100.fields.currentCryptoKey = v76;
              *(_QWORD *)&v100.fields.fakeValue = v75;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v100, 0LL);
              if ( !v66 )
                goto LABEL_89;
              v24 = v72;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v66,
                     &v91,
                     (int32_t)Instance,
                     v70,
                     0LL) )
              {
                Instance = (DataManager_o *)v91;
                if ( !v91 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v91, 0LL);
              }
              else
              {
                Instance = 0LL;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v67 )
                  goto LABEL_89;
                items = v67->fields._items;
                v78 = Method_System_Collections_Generic_List_int__Add__;
                ++v67->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v67->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v67,
                    v70,
                    *(const MethodInfo_364E888 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v67->fields._size = size + 1;
                  items->m_Items[size + 1] = v70;
                }
              }
            }
            else
            {
              v74 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v73 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v99.fields.currentCryptoKey = v74;
              *(_QWORD *)&v99.fields.fakeValue = v73;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v99, 0LL);
              if ( !v65 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v65,
                                            (int32_t)Instance,
                                            v70,
                                            0LL);
              v24 = v72;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(v68) = RandomLimitCountList->max_length;
            if ( (__int64)++v69 >= (int)v68 )
              goto LABEL_78;
          }
        }
      }
      groupIndex = 0;
      goto LABEL_28;
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_33361716(
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
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
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  System_String_o *Key; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  RandomLimitCountManager_c *v21; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x20
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  struct System_Int32_array *v29; // x25
  __int64 v30; // x8
  unsigned __int64 i; // x26
  int32_t v32; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int32_t v36; // w0
  RandomLimitCountManager_c *v37; // x8

  if ( (byte_4BF95D1 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1C2E12C(&OptionManager_TypeInfo, v12);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BF95D1 = 1;
  }
  if ( !info )
    return -1;
  randomLimitCountTargets = info->fields.randomLimitCountTargets;
  if ( !randomLimitCountTargets || !*(_QWORD *)&randomLimitCountTargets->max_length )
    return -1;
  userId = info->fields.userId;
  userSvtId = info->fields.userSvtId;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  Key = RandomLimitCountManager__GenerateKey(userId, userSvtId, 0, v2);
  if ( RandomLimitCountManager__IsChose(Key, v19) )
  {
    v21 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v21 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v21->static_fields->choiceRandomLimitCountDic;
    Instance = (Il2CppObject *)RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v20);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_332CC0C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1C2E388(Instance, v24);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v28 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  v29 = info->fields.randomLimitCountTargets;
  if ( !v29 )
    goto LABEL_49;
  v30 = *(_QWORD *)&v29->max_length;
  if ( (int)v30 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v30; ++i )
    {
      if ( i >= (unsigned int)v30 )
        sub_1C2E390(Instance, v24);
      v32 = v29->m_Items[i + 1];
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      Instance = (Il2CppObject *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        Instance = (Il2CppObject *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                     (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                     info->fields.svtId,
                                     v32,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_43;
      }
      Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( v32 == *((_DWORD *)Instance[11].monitor + 7) )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        Instance = (Il2CppObject *)OptionManager__GetFriendImageLimitCount(0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_43;
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( !LODWORD(Instance[14].klass) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( v32 <= *((_DWORD *)Instance[11].monitor + 7) )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      Instance = (Il2CppObject *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_53:
        if ( !v28 )
          goto LABEL_49;
        items = v28->fields._items;
        v34 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            v32,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v28->fields._size = size + 1;
          items->m_Items[size + 1] = v32;
        }
      }
LABEL_43:
      LODWORD(v30) = v29->max_length;
    }
  }
  if ( !v28 )
    goto LABEL_49;
  v36 = UnityEngine_Random__Range_70949460(0, v28->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v28,
           v36,
           (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
  v37 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v37 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (Il2CppObject *)v37->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)Instance,
    (Il2CppObject *)Key,
    Item,
    (const MethodInfo_332CC8C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4BF95CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v3);
    byte_4BF95CF = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1C2E388(0LL, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_332CE80 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_4BF95CD & 1) == 0 )
  {
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v1);
    byte_4BF95CD = 1;
  }
  v2 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v2 = RandomLimitCountManager_TypeInfo;
  }
  return v2->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  bool v3; // w21
  __int64 v4; // x1
  RandomLimitCountManager_c *v5; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  v3 = value;
  if ( (byte_4BF95CC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v4);
    byte_4BF95CC = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  v5->static_fields->enableRandomLimitCount = v3;
  if ( !value )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v5->static_fields->choiceRandomLimitCountDic;
    if ( !choiceRandomLimitCountDic )
      sub_1C2E388(0LL, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_332CE14 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}