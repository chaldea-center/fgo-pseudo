void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E6F75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v7, v8, v9);
    byte_42E6F75 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v10,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)RandomLimitCountManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_array *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x20
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v49; // [xsp+8h] [xbp-28h] BYREF
  int64_t v50; // [xsp+18h] [xbp-18h] BYREF

  v50 = userId;
  v49 = userSvtId;
  v48 = groupIndex;
  if ( (byte_42E6F71 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, userSvtId, groupIndex, method);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v4, v5, v6);
    byte_42E6F71 = 1;
  }
  v7 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  v8 = System_Int64__ToString((int64_t)&v50, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v16 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !v7->max_length )
    goto LABEL_24;
  v7->m_Items[0] = (System_String_o *)v16;
  sub_B5D560((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v8 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v8 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
    v23 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_24;
  v7->m_Items[1] = (System_String_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v8 = System_Int64__ToString((int64_t)&v49, 0LL);
  v30 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_24;
  v7->m_Items[2] = (System_String_o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v8 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v8 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
    v37 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_24;
  v7->m_Items[3] = (System_String_o *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  v8 = System_Int32__ToString((int32_t)&v48, 0LL);
  v44 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      v47 = sub_B5D6BC();
      sub_B5D668(v47, 0LL);
    }
  }
  if ( v7->max_length <= 4 )
  {
LABEL_24:
    v46 = sub_B5D6C8(v8);
    sub_B5D668(v46, 0LL);
  }
  v7->m_Items[4] = (System_String_o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_44657912(v7, 0LL);
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
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
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 v56; // x20
  __int64 v57; // x21
  __int64 v58; // x20
  __int64 v59; // x21
  int32_t v60; // w20
  BalanceConfig_c *v61; // x8
  DataManager_o *Instance; // x0
  __int64 v63; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v65; // x21
  __int64 v66; // x22
  ServantCostumeMaster_o *v67; // x20
  int32_t v68; // w21
  ServantCostumeEntity_o *v69; // x0
  int32_t v70; // w19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v72; // x21
  __int64 v73; // x22
  ServantLimitAddMaster_o *v74; // x20
  int32_t v75; // w21
  __int128 v76; // q1
  int64_t v77; // x0
  __int128 v78; // q0
  int64_t v79; // x20
  const MethodInfo *v80; // x3
  int64_t v81; // x22
  System_String_o *Key; // x26
  const MethodInfo *v83; // x1
  RandomLimitCountManager_c *v84; // x0
  WarQuestSelectionMaster_o *v85; // x0
  __int128 v86; // q0
  UserServantCollectionMaster_o *v87; // x22
  int64_t v88; // x0
  __int64 v89; // x24
  __int64 v90; // x25
  int64_t v91; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v93; // x22
  int32_t lv; // w23
  __int64 v95; // x24
  __int64 v96; // x25
  int32_t v97; // w0
  System_Int32_array *CostumeList_21807488; // x0
  System_Int32_array *RandomLimitCountList; // x23
  ServantCostumeMaster_o *v100; // x24
  ServantLimitAddMaster_o *v101; // x25
  System_Collections_Generic_List_int__o *v102; // x22
  __int64 v103; // x8
  unsigned __int64 v104; // x20
  int32_t v105; // w26
  BalanceConfig_c *v106; // x0
  __int64 v107; // x27
  __int64 v108; // x28
  __int64 v109; // x27
  __int64 v110; // x28
  __int64 v111; // x19
  __int64 v112; // x21
  int32_t v113; // w19
  RandomLimitCountManager_c *v114; // x0
  __int64 v116; // x0
  UIPanel_o *v117; // [xsp+0h] [xbp-100h]
  int32_t groupIndex; // [xsp+Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+70h] [xbp-90h]
  ServantLimitAddEntity_o *v123; // [xsp+98h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_42E6F73 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCostumeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E6F73 = 1;
  }
  v123 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v57 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v56 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v125.fields.currentCryptoKey = v57;
    *(_QWORD *)&v125.fields.fakeValue = v56;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v125, 0LL) )
    {
      v59 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v58 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v126.fields.currentCryptoKey = v59;
      *(_QWORD *)&v126.fields.fakeValue = v58;
      v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v126, 0LL);
      v61 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( v60 <= v61->static_fields->ServantLimitMax )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v73 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v74 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v128.fields.currentCryptoKey = v73;
        *(_QWORD *)&v128.fields.fakeValue = v72;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v128, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v74 )
          goto LABEL_106;
        if ( ServantLimitAddMaster__TryGetEntity(v74, &entitya, v75, (int32_t)Instance, 0LL) )
        {
          Instance = (DataManager_o *)entitya;
          if ( !entitya )
            goto LABEL_106;
          groupIndex = ServantLimitAddEntity__GetRandomGroupIndex(entitya, 0LL);
          goto LABEL_34;
        }
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_106;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v66 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v67 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v127.fields.currentCryptoKey = v66;
        *(_QWORD *)&v127.fields.fakeValue = v65;
        v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v127, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v67 )
          goto LABEL_106;
        v69 = ServantCostumeMaster__GetEntity(v67, v68, (int32_t)Instance, 0LL);
        if ( v69 )
        {
          groupIndex = v69->fields.groupIndex;
          goto LABEL_34;
        }
      }
      groupIndex = 0;
LABEL_34:
      v76 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v122.fields.fakeValue = v76;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v121 = v122;
      v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v121, 0LL);
      v78 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
      v79 = v77;
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v120.fields.fakeValue = v78;
      v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v120, 0LL);
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      Key = RandomLimitCountManager__GenerateKey(v79, v81, groupIndex, v80);
      if ( RandomLimitCountManager__IsChose(Key, v83) )
      {
        v84 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v84 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v84->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
          return System_Collections_Generic_Dictionary_string__int___get_Item(
                   (System_Collections_Generic_Dictionary_string__int__o *)Instance,
                   Key,
                   (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_106;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v85 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              Instance,
              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      v86 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      v87 = (UserServantCollectionMaster_o *)v85;
      *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v122.fields.fakeValue = v86;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v119 = v122;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v119, 0LL);
      v90 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      v91 = v88;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v129.fields.currentCryptoKey = v90;
      *(_QWORD *)&v129.fields.fakeValue = v89;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v129, 0LL);
      if ( !v87 )
        goto LABEL_106;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v87, v91, (int32_t)Instance, 0LL);
      if ( EntityDefinitely )
      {
        v93 = EntityDefinitely;
        lv = entity->fields.lv;
        v96 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v95 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v130.fields.currentCryptoKey = v96;
        *(_QWORD *)&v130.fields.fakeValue = v95;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v130, 0LL);
        CostumeList_21807488 = UserServantCollectionEntity__getCostumeList_21807488(v93, lv, v97, 0LL);
      }
      else
      {
        CostumeList_21807488 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      }
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_21807488, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v117 = (UIPanel_o *)Key;
      v100 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      v101 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v102 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v102,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !RandomLimitCountList )
        goto LABEL_106;
      v103 = *(_QWORD *)&RandomLimitCountList->max_length;
      if ( (int)v103 < 1 )
      {
LABEL_91:
        v112 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v111 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v133.fields.currentCryptoKey = v112;
        *(_QWORD *)&v133.fields.fakeValue = v111;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v133, 0LL);
        if ( (_DWORD)Instance )
        {
          if ( !v102 )
            goto LABEL_106;
          v113 = UnityEngine_Random__Range_35654020(0, v102->fields._size, 0LL);
          if ( v102->fields._size <= (unsigned int)v113 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v70 = v102->fields._items->m_Items[v113 + 1];
        }
        else
        {
          v70 = 1;
        }
        v114 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v114 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v114->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
            v117,
            v70,
            (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
          return v70;
        }
LABEL_106:
        sub_B5D69C(Instance, v63);
      }
      v104 = 0LL;
      while ( 1 )
      {
        if ( v104 >= (unsigned int)v103 )
        {
          v116 = sub_B5D6C8(Instance);
          sub_B5D668(v116, 0LL);
        }
        v105 = RandomLimitCountList->m_Items[v104 + 1];
        if ( v105 != -1 )
        {
          v106 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v106 = BalanceConfig_TypeInfo;
          }
          if ( v105 <= v106->static_fields->ServantLimitMax )
          {
            v123 = 0LL;
            v110 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v109 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v132.fields.currentCryptoKey = v110;
            *(_QWORD *)&v132.fields.fakeValue = v109;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v132, 0LL);
            if ( !v101 )
              goto LABEL_106;
            if ( ServantLimitAddMaster__TryGetEntity(v101, &v123, (int32_t)Instance, v105, 0LL) )
            {
              Instance = (DataManager_o *)v123;
              if ( !v123 )
                goto LABEL_106;
              Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v123, 0LL);
            }
            else
            {
              Instance = 0LL;
            }
            if ( (_DWORD)Instance == groupIndex )
            {
LABEL_88:
              if ( !v102 )
                goto LABEL_106;
              System_Collections_Generic_List_int___Add(
                v102,
                v105,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          else
          {
            v108 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v107 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v131.fields.currentCryptoKey = v108;
            *(_QWORD *)&v131.fields.fakeValue = v107;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v131, 0LL);
            if ( !v100 )
              goto LABEL_106;
            Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(v100, (int32_t)Instance, v105, 0LL);
            if ( Instance && LODWORD(Instance->fields.datalist) == groupIndex )
              goto LABEL_88;
          }
        }
        LODWORD(v103) = RandomLimitCountList->max_length;
        if ( (__int64)++v104 >= (int)v103 )
          goto LABEL_91;
      }
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_22316908(
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
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
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  System_String_o *Key; // x20
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  RandomLimitCountManager_c *v44; // x0
  System_Collections_Generic_Dictionary_string__int__o *choiceRandomLimitCountDic; // x20
  System_String_o *Instance; // x0
  System_String_o *v47; // x1
  int32_t v49; // w19
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v51; // x21
  struct System_Int32_array *v52; // x25
  __int64 v53; // x8
  unsigned __int64 v54; // x26
  int32_t v55; // w23
  int32_t v56; // w19
  RandomLimitCountManager_c *v57; // x0
  __int64 v58; // x0

  if ( (byte_42E6F74 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&OptionManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42E6F74 = 1;
  }
  if ( !info )
    return -1;
  randomLimitCountTargets = info->fields.randomLimitCountTargets;
  if ( !randomLimitCountTargets || !*(_QWORD *)&randomLimitCountTargets->max_length )
    return -1;
  userId = info->fields.userId;
  userSvtId = info->fields.userSvtId;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  Key = RandomLimitCountManager__GenerateKey(userId, userSvtId, 0, v3);
  if ( RandomLimitCountManager__IsChose(Key, v42) )
  {
    v44 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v44 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = v44->static_fields->choiceRandomLimitCountDic;
    Instance = RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v43);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_56:
    sub_B5D69C(Instance, v47);
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v52 = info->fields.randomLimitCountTargets;
  if ( !v52 )
    goto LABEL_56;
  v53 = *(_QWORD *)&v52->max_length;
  if ( (int)v53 >= 1 )
  {
    v54 = 0LL;
    while ( 1 )
    {
      if ( v54 >= (unsigned int)v53 )
      {
        v58 = sub_B5D6C8(Instance);
        sub_B5D668(v58, 0LL);
      }
      v55 = v52->m_Items[v54 + 1];
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      Instance = (System_String_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_60;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_56;
      Instance = (System_String_o *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                      MasterData_WarQuestSelectionMaster,
                                      info->fields.svtId,
                                      v55,
                                      0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_60:
        Instance = (System_String_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (System_String_o *)BalanceConfig_TypeInfo;
        }
        if ( v55 != *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
          goto LABEL_37;
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        Instance = (System_String_o *)OptionManager__GetFriendImageLimitCount(0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
LABEL_47:
      LODWORD(v53) = v52->max_length;
      if ( (__int64)++v54 >= (int)v53 )
        goto LABEL_48;
    }
    Instance = (System_String_o *)BalanceConfig_TypeInfo;
LABEL_37:
    if ( (Instance[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Instance[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v55 <= *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
      goto LABEL_45;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    Instance = (System_String_o *)OptionManager__GetFriendCostume(0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
LABEL_45:
      if ( !v51 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        v51,
        v55,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( !v51 )
    goto LABEL_56;
  v56 = UnityEngine_Random__Range_35654020(0, v51->fields._size, 0LL);
  if ( v51->fields._size <= (unsigned int)v56 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v57 = RandomLimitCountManager_TypeInfo;
  v49 = v51->fields._items->m_Items[v56 + 1];
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v57 = RandomLimitCountManager_TypeInfo;
  }
  v47 = Key;
  Instance = (System_String_o *)v57->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
    (UIPanel_o *)Key,
    v49,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return v49;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  RandomLimitCountManager_c *v8; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_42E6F72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v5, v6, v7);
    byte_42E6F72 = 1;
  }
  v8 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v8 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v8->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           choiceRandomLimitCountDic,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v4; // x0

  if ( (byte_42E6F70 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v1, v2, v3);
    byte_42E6F70 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  return v4->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  RandomLimitCountManager_c *v8; // x0
  struct RandomLimitCountManager_StaticFields *static_fields; // x8

  if ( (byte_42E6F6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v5, v6, v7);
    byte_42E6F6F = 1;
  }
  v8 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v8 = RandomLimitCountManager_TypeInfo;
  }
  v8->static_fields->enableRandomLimitCount = value;
  static_fields = v8->static_fields;
  if ( !static_fields->enableRandomLimitCount )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = RandomLimitCountManager_TypeInfo->static_fields;
    }
    if ( !static_fields->choiceRandomLimitCountDic )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_Dictionary_UIPanel__int___Clear(
      (System_Collections_Generic_Dictionary_UIPanel__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}