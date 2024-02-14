void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4212EF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v3);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v4);
    byte_4212EF3 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v5,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)RandomLimitCountManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x19
  System_String_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v46; // [xsp+8h] [xbp-28h] BYREF
  int64_t v47; // [xsp+18h] [xbp-18h] BYREF

  v47 = userId;
  v46 = userSvtId;
  v45 = groupIndex;
  if ( (byte_4212EEF & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, userSvtId);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v4);
    byte_4212EEF = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v47, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v13 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)v5->m_Items, v13, v7, v8, v9, v10, v11, v12);
  v6 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v6 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v20 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int64__ToString((int64_t)&v46, 0LL);
  v27 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v27;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v6 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v6 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v34 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v34;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v6 = System_Int32__ToString((int32_t)&v45, 0LL);
  v41 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      v44 = sub_B0D99C();
      sub_B0D948(v44, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    v43 = sub_B0D9A8(v6);
    sub_B0D948(v43, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v41;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_43930028(v5, 0LL);
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
  int32_t v24; // w20
  BalanceConfig_c *v25; // x8
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x21
  __int64 v29; // x22
  ServantCostumeMaster_o *v30; // x20
  int32_t v31; // w21
  ServantCostumeEntity_o *v32; // x0
  int32_t v33; // w19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x21
  __int64 v36; // x22
  ServantLimitAddMaster_o *v37; // x20
  int32_t v38; // w21
  __int128 v39; // q1
  int64_t v40; // x0
  __int128 v41; // q0
  int64_t v42; // x20
  const MethodInfo *v43; // x3
  int64_t v44; // x22
  System_String_o *Key; // x26
  const MethodInfo *v46; // x1
  RandomLimitCountManager_c *v47; // x0
  WarQuestSelectionMaster_o *v48; // x0
  __int128 v49; // q0
  UserServantCollectionMaster_o *v50; // x22
  int64_t v51; // x0
  __int64 v52; // x24
  __int64 v53; // x25
  int64_t v54; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v56; // x22
  int32_t lv; // w23
  __int64 v58; // x24
  __int64 v59; // x25
  int32_t v60; // w0
  System_Int32_array *CostumeList_21231808; // x0
  System_Int32_array *RandomLimitCountList; // x23
  ServantCostumeMaster_o *v63; // x24
  ServantLimitAddMaster_o *v64; // x25
  __int64 v65; // x1
  __int64 v66; // x2
  System_Collections_Generic_List_int__o *v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x20
  int32_t v70; // w26
  BalanceConfig_c *v71; // x0
  __int64 v72; // x27
  __int64 v73; // x28
  __int64 v74; // x27
  __int64 v75; // x28
  __int64 v76; // x19
  __int64 v77; // x21
  int32_t v78; // w19
  RandomLimitCountManager_c *v79; // x0
  __int64 v81; // x0
  UIPanel_o *v82; // [xsp+0h] [xbp-100h]
  int32_t groupIndex; // [xsp+Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-90h]
  ServantLimitAddEntity_o *v88; // [xsp+98h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  if ( (byte_4212EF1 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4212EF1 = 1;
  }
  v88 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v21 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v20 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v90.fields.currentCryptoKey = v21;
    *(_QWORD *)&v90.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v90, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v91.fields.currentCryptoKey = v23;
      *(_QWORD *)&v91.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v91, 0LL);
      v25 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( v24 <= v25->static_fields->ServantLimitMax )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v36 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v37 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v93.fields.currentCryptoKey = v36;
        *(_QWORD *)&v93.fields.fakeValue = v35;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v37 )
          goto LABEL_106;
        if ( ServantLimitAddMaster__TryGetEntity(v37, &entitya, v38, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_106;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v29 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v30 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v92.fields.currentCryptoKey = v29;
        *(_QWORD *)&v92.fields.fakeValue = v28;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v92, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v30 )
          goto LABEL_106;
        v32 = ServantCostumeMaster__GetEntity(v30, v31, (int32_t)Instance, 0LL);
        if ( v32 )
        {
          groupIndex = v32->fields.groupIndex;
          goto LABEL_34;
        }
      }
      groupIndex = 0;
LABEL_34:
      v39 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v87.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v86 = v87;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v86, 0LL);
      v41 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
      v42 = v40;
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v85.fields.fakeValue = v41;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v85, 0LL);
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      Key = RandomLimitCountManager__GenerateKey(v42, v44, groupIndex, v43);
      if ( RandomLimitCountManager__IsChose(Key, v46) )
      {
        v47 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v47 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v47->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
          return System_Collections_Generic_Dictionary_string__int___get_Item(
                   (System_Collections_Generic_Dictionary_string__int__o *)Instance,
                   Key,
                   (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_106;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v48 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              Instance,
              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      v49 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      v50 = (UserServantCollectionMaster_o *)v48;
      *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v87.fields.fakeValue = v49;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v84 = v87;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v84, 0LL);
      v53 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      v54 = v51;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v94.fields.currentCryptoKey = v53;
      *(_QWORD *)&v94.fields.fakeValue = v52;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v94, 0LL);
      if ( !v50 )
        goto LABEL_106;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v50, v54, (int32_t)Instance, 0LL);
      if ( EntityDefinitely )
      {
        v56 = EntityDefinitely;
        lv = entity->fields.lv;
        v59 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v58 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v95.fields.currentCryptoKey = v59;
        *(_QWORD *)&v95.fields.fakeValue = v58;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v95, 0LL);
        CostumeList_21231808 = UserServantCollectionEntity__getCostumeList_21231808(v56, lv, v60, 0LL);
      }
      else
      {
        CostumeList_21231808 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      }
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_21231808, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v82 = (UIPanel_o *)Key;
      v63 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      v64 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v67 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v65,
                                                        v66);
      System_Collections_Generic_List_int____ctor(
        v67,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !RandomLimitCountList )
        goto LABEL_106;
      v68 = *(_QWORD *)&RandomLimitCountList->max_length;
      if ( (int)v68 < 1 )
      {
LABEL_91:
        v77 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v76 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v98.fields.currentCryptoKey = v77;
        *(_QWORD *)&v98.fields.fakeValue = v76;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v98, 0LL);
        if ( (_DWORD)Instance )
        {
          if ( !v67 )
            goto LABEL_106;
          v78 = UnityEngine_Random__Range_34969060(0, v67->fields._size, 0LL);
          if ( v67->fields._size <= (unsigned int)v78 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v33 = v67->fields._items->m_Items[v78 + 1];
        }
        else
        {
          v33 = 1;
        }
        v79 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v79 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v79->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
            v82,
            v33,
            (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
          return v33;
        }
LABEL_106:
        sub_B0D97C(Instance);
      }
      v69 = 0LL;
      while ( 1 )
      {
        if ( v69 >= (unsigned int)v68 )
        {
          v81 = sub_B0D9A8(Instance);
          sub_B0D948(v81, 0LL);
        }
        v70 = RandomLimitCountList->m_Items[v69 + 1];
        if ( v70 != -1 )
        {
          v71 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v71 = BalanceConfig_TypeInfo;
          }
          if ( v70 <= v71->static_fields->ServantLimitMax )
          {
            v88 = 0LL;
            v75 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v74 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v97.fields.currentCryptoKey = v75;
            *(_QWORD *)&v97.fields.fakeValue = v74;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v97, 0LL);
            if ( !v64 )
              goto LABEL_106;
            if ( ServantLimitAddMaster__TryGetEntity(v64, &v88, (int32_t)Instance, v70, 0LL) )
            {
              Instance = (DataManager_o *)v88;
              if ( !v88 )
                goto LABEL_106;
              Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v88, 0LL);
            }
            else
            {
              Instance = 0LL;
            }
            if ( (_DWORD)Instance == groupIndex )
            {
LABEL_88:
              if ( !v67 )
                goto LABEL_106;
              System_Collections_Generic_List_int___Add(
                v67,
                v70,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          else
          {
            v73 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v72 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v96.fields.currentCryptoKey = v73;
            *(_QWORD *)&v96.fields.fakeValue = v72;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v96, 0LL);
            if ( !v63 )
              goto LABEL_106;
            Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(v63, (int32_t)Instance, v70, 0LL);
            if ( Instance && LODWORD(Instance->fields.datalist) == groupIndex )
              goto LABEL_88;
          }
        }
        LODWORD(v68) = RandomLimitCountList->max_length;
        if ( (__int64)++v69 >= (int)v68 )
          goto LABEL_91;
      }
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_21501716(
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
  System_Collections_Generic_Dictionary_string__int__o *choiceRandomLimitCountDic; // x20
  System_String_o *Instance; // x0
  int32_t v25; // w19
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x21
  struct System_Int32_array *v30; // x25
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  int32_t v33; // w23
  int32_t v34; // w19
  RandomLimitCountManager_c *v35; // x0
  __int64 v36; // x0

  if ( (byte_4212EF2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&OptionManager_TypeInfo, v12);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212EF2 = 1;
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
  Key = RandomLimitCountManager__GenerateKey(userId, userSvtId, 0, v2);
  if ( RandomLimitCountManager__IsChose(Key, v19) )
  {
    v21 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v21 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = v21->static_fields->choiceRandomLimitCountDic;
    Instance = RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v20);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_56:
    sub_B0D97C(Instance);
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v29 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = info->fields.randomLimitCountTargets;
  if ( !v30 )
    goto LABEL_56;
  v31 = *(_QWORD *)&v30->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v31 )
      {
        v36 = sub_B0D9A8(Instance);
        sub_B0D948(v36, 0LL);
      }
      v33 = v30->m_Items[v32 + 1];
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
                                      v33,
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
        if ( v33 != *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      LODWORD(v31) = v30->max_length;
      if ( (__int64)++v32 >= (int)v31 )
        goto LABEL_48;
    }
    Instance = (System_String_o *)BalanceConfig_TypeInfo;
LABEL_37:
    if ( (Instance[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Instance[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v33 <= *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      if ( !v29 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        v29,
        v33,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( !v29 )
    goto LABEL_56;
  v34 = UnityEngine_Random__Range_34969060(0, v29->fields._size, 0LL);
  if ( v29->fields._size <= (unsigned int)v34 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v35 = RandomLimitCountManager_TypeInfo;
  v25 = v29->fields._items->m_Items[v34 + 1];
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v35 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (System_String_o *)v35->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
    (UIPanel_o *)Key,
    v25,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return v25;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4212EF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v3);
    byte_4212EF0 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           choiceRandomLimitCountDic,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_4212EEE & 1) == 0 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v1);
    byte_4212EEE = 1;
  }
  v2 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v2 = RandomLimitCountManager_TypeInfo;
  }
  return v2->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct RandomLimitCountManager_StaticFields *static_fields; // x8

  if ( (byte_4212EED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v3);
    byte_4212EED = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  v4->static_fields->enableRandomLimitCount = value;
  static_fields = v4->static_fields;
  if ( !static_fields->enableRandomLimitCount )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = RandomLimitCountManager_TypeInfo->static_fields;
    }
    if ( !static_fields->choiceRandomLimitCountDic )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_UIPanel__int___Clear(
      (System_Collections_Generic_Dictionary_UIPanel__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}