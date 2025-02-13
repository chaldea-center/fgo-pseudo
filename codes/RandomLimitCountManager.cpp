void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD83F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    byte_4BD83F0 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v1,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)RandomLimitCountManager_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v41; // [xsp+10h] [xbp-30h] BYREF
  int64_t v42; // [xsp+18h] [xbp-28h] BYREF

  v41 = userSvtId;
  v42 = userId;
  v40 = groupIndex;
  if ( (byte_4BD83EC & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BD83EC = 1;
  }
  v4 = sub_1C21EE0(string___TypeInfo, 5LL);
  v5 = System_Int64__ToString((int64_t)&v42, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)v5, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v19 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1546/*":"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
  v5 = System_Int64__ToString((int64_t)&v41, 0LL);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 48), (int64_t)v5, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v32 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1546/*":"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 56), v32, v26, v27, v28, v29, v30, v31),
        v5 = System_Int32__ToString((int32_t)&v40, 0LL),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C2209C(v5, v6);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 64), (int64_t)v5, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_63129004((System_String_array *)v4, 0LL);
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x20
  __int64 v6; // x21
  BalanceConfig_c **v7; // x27
  int32_t v8; // w20
  BalanceConfig_c *v9; // x8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  ServantCostumeMaster_o *v15; // x20
  int32_t v16; // w21
  ServantCostumeEntity_o *v17; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  ServantLimitAddMaster_o *v22; // x20
  int32_t v23; // w21
  __int128 v24; // q1
  int64_t v25; // x0
  __int128 v26; // q1
  int64_t v27; // x20
  const MethodInfo *v28; // x3
  int64_t v29; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v31; // x1
  RandomLimitCountManager_c *v32; // x0
  Il2CppObject *v33; // x0
  __int128 v34; // q0
  UserServantCollectionMaster_o *v35; // x22
  int64_t v36; // x0
  __int64 v37; // x24
  __int64 v38; // x25
  int64_t v39; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v41; // x22
  int32_t lv; // w23
  __int64 v43; // x24
  __int64 v44; // x25
  int32_t v45; // w0
  System_Int32_array *CostumeList_41449552; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x25
  System_Collections_Generic_List_int__o *v50; // x22
  __int64 v51; // x8
  unsigned __int64 v52; // x20
  int32_t v53; // w26
  BalanceConfig_c *v54; // x0
  BalanceConfig_c **v55; // x21
  __int64 v56; // x27
  __int64 v57; // x28
  __int64 v58; // x27
  __int64 v59; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  __int64 v63; // x19
  __int64 v64; // x21
  int32_t v65; // w0
  RandomLimitCountManager_c *v66; // x0
  Il2CppObject *v68; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v74; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4BD83EE & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD83EE = 1;
  }
  v74 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v4 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v3 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v76.fields.currentCryptoKey = v4;
    *(_QWORD *)&v76.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v76, 0LL) )
    {
      v6 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v5 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v6;
      *(_QWORD *)&v77.fields.fakeValue = v5;
      v7 = &BalanceConfig_TypeInfo;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v77, 0LL);
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v8 <= v9->static_fields->ServantLimitMax )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v21 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v22 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v21;
        *(_QWORD *)&v79.fields.fakeValue = v20;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v79, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v22 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v22, &entitya, v23, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v15 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v14;
        *(_QWORD *)&v78.fields.fakeValue = v13;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v78, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v15 )
          goto LABEL_89;
        v17 = ServantCostumeMaster__GetEntity(v15, v16, (int32_t)Instance, 0LL);
        if ( v17 )
        {
          groupIndex = v17->fields.groupIndex;
LABEL_28:
          v24 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v73.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v72 = v73;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v72, 0LL);
          v26 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v27 = v25;
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v71.fields.fakeValue = v26;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v71, 0LL);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v27, v29, groupIndex, v28);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v31) )
          {
            v32 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v32 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v32->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v33 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v34 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v35 = (UserServantCollectionMaster_o *)v33;
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v73.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v70 = v73;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v70, 0LL);
          v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v39 = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v80.fields.currentCryptoKey = v38;
          *(_QWORD *)&v80.fields.fakeValue = v37;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v80, 0LL);
          if ( !v35 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v35, v39, (int32_t)Instance, 0LL);
          if ( EntityDefinitely )
          {
            v41 = EntityDefinitely;
            lv = entity->fields.lv;
            v44 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v43 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v44;
            *(_QWORD *)&v81.fields.fakeValue = v43;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v81, 0LL);
            CostumeList_41449552 = UserServantCollectionEntity__getCostumeList_41449552(v41, lv, v45, 0LL);
          }
          else
          {
            CostumeList_41449552 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_41449552, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v68 = Key;
          v48 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v49 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v50 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v50,
            (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          v51 = *(_QWORD *)&RandomLimitCountList->max_length;
          if ( (int)v51 < 1 )
          {
LABEL_78:
            v64 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v63 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v84.fields.currentCryptoKey = v64;
            *(_QWORD *)&v84.fields.fakeValue = v63;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v84, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v50 )
                goto LABEL_89;
              v65 = UnityEngine_Random__Range_70829352(0, v50->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v50,
                       v65,
                       (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v66 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v66 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v66->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v68,
                Item,
                (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1C22094(Instance, v11);
          }
          v52 = 0LL;
          while ( 1 )
          {
            if ( v52 >= (unsigned int)v51 )
              sub_1C2209C(Instance, v11);
            v53 = RandomLimitCountList->m_Items[v52 + 1];
            if ( v53 == -1 )
              goto LABEL_77;
            v54 = *v7;
            if ( !(*v7)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v54);
              v54 = *v7;
            }
            v55 = v7;
            if ( v53 <= v54->static_fields->ServantLimitMax )
            {
              v74 = 0LL;
              v59 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v58 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v59;
              *(_QWORD *)&v83.fields.fakeValue = v58;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v83, 0LL);
              if ( !v49 )
                goto LABEL_89;
              v7 = v55;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v49,
                     &v74,
                     (int32_t)Instance,
                     v53,
                     0LL) )
              {
                Instance = (DataManager_o *)v74;
                if ( !v74 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v74, 0LL);
              }
              else
              {
                Instance = 0LL;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v50 )
                  goto LABEL_89;
                items = v50->fields._items;
                v61 = Method_System_Collections_Generic_List_int__Add__;
                ++v50->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v50->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v50,
                    v53,
                    *(const MethodInfo_3632090 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                }
                else
                {
                  v50->fields._size = size + 1;
                  items->m_Items[size + 1] = v53;
                }
              }
            }
            else
            {
              v57 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v57;
              *(_QWORD *)&v82.fields.fakeValue = v56;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v82, 0LL);
              if ( !v48 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v48,
                                            (int32_t)Instance,
                                            v53,
                                            0LL);
              v7 = v55;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(v51) = RandomLimitCountList->max_length;
            if ( (__int64)++v52 >= (int)v51 )
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


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_33307352(
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  System_String_o *Key; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  RandomLimitCountManager_c *v10; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v17; // x21
  struct System_Int32_array *v18; // x25
  __int64 v19; // x8
  unsigned __int64 i; // x26
  int32_t v21; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int32_t v25; // w0
  RandomLimitCountManager_c *v26; // x8

  if ( (byte_4BD83EF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD83EF = 1;
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
  if ( RandomLimitCountManager__IsChose(Key, v8) )
  {
    v10 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v10 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v10->static_fields->choiceRandomLimitCountDic;
    Instance = (Il2CppObject *)RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v9);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1C22094(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = info->fields.randomLimitCountTargets;
  if ( !v18 )
    goto LABEL_49;
  v19 = *(_QWORD *)&v18->max_length;
  if ( (int)v19 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v19; ++i )
    {
      if ( i >= (unsigned int)v19 )
        sub_1C2209C(Instance, v13);
      v21 = v18->m_Items[i + 1];
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
                                     v21,
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
      if ( v21 == *((_DWORD *)Instance[11].monitor + 7) )
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
      if ( v21 <= *((_DWORD *)Instance[11].monitor + 7) )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      Instance = (Il2CppObject *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_53:
        if ( !v17 )
          goto LABEL_49;
        items = v17->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v21,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = v21;
        }
      }
LABEL_43:
      LODWORD(v19) = v18->max_length;
    }
  }
  if ( !v17 )
    goto LABEL_49;
  v25 = UnityEngine_Random__Range_70829352(0, v17->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v17,
           v25,
           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v26 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v26 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (Il2CppObject *)v26->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)Instance,
    (Il2CppObject *)Key,
    Item,
    (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4BD83ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    byte_4BD83ED = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1C22094(0LL, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_330D98C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_4BD83EB & 1) == 0 )
  {
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    byte_4BD83EB = 1;
  }
  v1 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v1 = RandomLimitCountManager_TypeInfo;
  }
  return v1->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  bool v3; // w21
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  v3 = value;
  if ( (byte_4BD83EA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    byte_4BD83EA = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  v4->static_fields->enableRandomLimitCount = v3;
  if ( !value )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
    if ( !choiceRandomLimitCountDic )
      sub_1C22094(0LL, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_330D920 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}