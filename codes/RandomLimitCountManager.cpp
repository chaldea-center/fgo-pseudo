void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8291 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v6);
    byte_40F8291 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v7,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)RandomLimitCountManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x19
  System_String_o *v6; // x0
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x20
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x20
  int32_t v38; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v39; // [xsp+8h] [xbp-28h] BYREF
  int64_t v40; // [xsp+18h] [xbp-18h] BYREF

  v40 = userId;
  v39 = userSvtId;
  v38 = groupIndex;
  if ( (byte_40F828D & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, userSvtId);
    sub_B16FFC(&StringLiteral_1223, v4);
    byte_40F828D = 1;
  }
  v5 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, *(_QWORD *)&groupIndex);
  v6 = System_Int64__ToString((int64_t)&v40, 0LL);
  if ( !v5 )
    sub_B170D4();
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_1223, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v7 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[1], v7, v8, v15, v16, v17, v18, v19);
  v6 = System_Int64__ToString((int64_t)&v39, 0LL);
  v25 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[2], v25, v8, v20, v21, v22, v23, v24);
  v6 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_1223, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v7 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[3], v7, v8, v26, v27, v28, v29, v30);
  v6 = System_Int32__ToString((int32_t)&v38, 0LL);
  v36 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      sub_B170F4(v6);
      sub_B170A0();
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v5->m_Items[4] = (System_String_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[4], v36, v8, v31, v32, v33, v34, v35);
  return System_String__Concat_43823856(v5, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x21
  __int64 v29; // x22
  ServantCostumeMaster_o *v30; // x20
  int32_t v31; // w21
  int32_t v32; // w0
  ServantCostumeEntity_o *v33; // x0
  int32_t v34; // w19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  ServantLimitAddMaster_o *v38; // x20
  int32_t v39; // w21
  int32_t v40; // w0
  __int128 v41; // q1
  int64_t v42; // x0
  __int128 v43; // q0
  int64_t v44; // x20
  const MethodInfo *v45; // x3
  int64_t v46; // x22
  System_String_o *Key; // x26
  const MethodInfo *v48; // x1
  RandomLimitCountManager_c *v49; // x0
  System_Collections_Generic_Dictionary_string__int__o *choiceRandomLimitCountDic; // x0
  WebViewManager_o *v51; // x0
  WarQuestSelectionMaster_o *v52; // x0
  __int128 v53; // q0
  UserServantCollectionMaster_o *v54; // x22
  int64_t v55; // x0
  __int64 v56; // x24
  __int64 v57; // x25
  int64_t v58; // x23
  int32_t v59; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v61; // x2
  UserServantCollectionEntity_o *v62; // x22
  int32_t lv; // w23
  __int64 v64; // x24
  __int64 v65; // x25
  int32_t v66; // w0
  System_Int32_array *CostumeList_21413440; // x0
  System_Int32_array *RandomLimitCountList; // x23
  ServantCostumeMaster_o *v69; // x24
  ServantLimitAddMaster_o *v70; // x25
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Collections_Generic_List_int__o *v75; // x22
  ServantCostumeEntity_o *RandomGroupIndex; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x8
  unsigned __int64 v80; // x20
  int32_t v81; // w26
  BalanceConfig_c *v82; // x0
  __int64 v83; // x27
  __int64 v84; // x28
  int32_t v85; // w0
  __int64 v86; // x27
  __int64 v87; // x28
  int32_t v88; // w0
  __int64 v89; // x19
  __int64 v90; // x21
  int32_t v91; // w19
  RandomLimitCountManager_c *v92; // x0
  System_Collections_Generic_Dictionary_UIPanel__int__o *v93; // x0
  UIPanel_o *v95; // [xsp+0h] [xbp-100h]
  int32_t groupIndex; // [xsp+Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+70h] [xbp-90h]
  ServantLimitAddEntity_o *v101; // [xsp+98h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_40F828F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40F828F = 1;
  }
  v101 = 0LL;
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
    *(_QWORD *)&v103.fields.currentCryptoKey = v21;
    *(_QWORD *)&v103.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v103, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v104.fields.currentCryptoKey = v23;
      *(_QWORD *)&v104.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v104, 0LL);
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
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v38 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v106.fields.currentCryptoKey = v37;
        *(_QWORD *)&v106.fields.fakeValue = v36;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v106, 0LL);
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.dispLimitCount, 0LL);
        if ( !v38 )
          goto LABEL_106;
        if ( ServantLimitAddMaster__TryGetEntity(v38, &entitya, v39, v40, 0LL) )
        {
          if ( !entitya )
            goto LABEL_106;
          groupIndex = ServantLimitAddEntity__GetRandomGroupIndex(entitya, 0LL);
          goto LABEL_34;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_106;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v29 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v30 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v105.fields.currentCryptoKey = v29;
        *(_QWORD *)&v105.fields.fakeValue = v28;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v105, 0LL);
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.dispLimitCount, 0LL);
        if ( !v30 )
          goto LABEL_106;
        v33 = ServantCostumeMaster__GetEntity(v30, v31, v32, 0LL);
        if ( v33 )
        {
          groupIndex = v33->fields.groupIndex;
          goto LABEL_34;
        }
      }
      groupIndex = 0;
LABEL_34:
      v41 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v100.fields.fakeValue = v41;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v99 = v100;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v99, 0LL);
      v43 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
      v44 = v42;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v43;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v98, 0LL);
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      Key = RandomLimitCountManager__GenerateKey(v44, v46, groupIndex, v45);
      if ( RandomLimitCountManager__IsChose(Key, v48) )
      {
        v49 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v49 = RandomLimitCountManager_TypeInfo;
        }
        choiceRandomLimitCountDic = v49->static_fields->choiceRandomLimitCountDic;
        if ( choiceRandomLimitCountDic )
          return System_Collections_Generic_Dictionary_string__int___get_Item(
                   choiceRandomLimitCountDic,
                   Key,
                   (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_106;
      }
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v51 )
        goto LABEL_106;
      v52 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v51,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      v53 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      v54 = (UserServantCollectionMaster_o *)v52;
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v100.fields.fakeValue = v53;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v97 = v100;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v97, 0LL);
      v57 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      v58 = v55;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v107.fields.currentCryptoKey = v57;
      *(_QWORD *)&v107.fields.fakeValue = v56;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v107, 0LL);
      if ( !v54 )
        goto LABEL_106;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v54, v58, v59, 0LL);
      if ( EntityDefinitely )
      {
        v62 = EntityDefinitely;
        lv = entity->fields.lv;
        v65 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v64 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v108.fields.currentCryptoKey = v65;
        *(_QWORD *)&v108.fields.fakeValue = v64;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v108, 0LL);
        CostumeList_21413440 = UserServantCollectionEntity__getCostumeList_21413440(v62, lv, v66, 0LL);
      }
      else
      {
        CostumeList_21413440 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v61);
      }
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_21413440, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v95 = (UIPanel_o *)Key;
      v69 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      v70 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v75 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v71,
                                                        v72,
                                                        v73,
                                                        v74);
      System_Collections_Generic_List_int____ctor(
        v75,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !RandomLimitCountList )
        goto LABEL_106;
      v79 = *(_QWORD *)&RandomLimitCountList->max_length;
      if ( (int)v79 < 1 )
      {
LABEL_91:
        v90 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v89 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v111.fields.currentCryptoKey = v90;
        *(_QWORD *)&v111.fields.fakeValue = v89;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v111, 0LL) )
        {
          if ( !v75 )
            goto LABEL_106;
          v91 = UnityEngine_Random__Range_34843248(0, v75->fields._size, 0LL);
          if ( v75->fields._size <= (unsigned int)v91 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v34 = v75->fields._items->m_Items[v91 + 1];
        }
        else
        {
          v34 = 1;
        }
        v92 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v92 = RandomLimitCountManager_TypeInfo;
        }
        v93 = (System_Collections_Generic_Dictionary_UIPanel__int__o *)v92->static_fields->choiceRandomLimitCountDic;
        if ( v93 )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            v93,
            v95,
            v34,
            (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
          return v34;
        }
LABEL_106:
        sub_B170D4();
      }
      v80 = 0LL;
      while ( 1 )
      {
        if ( v80 >= (unsigned int)v79 )
        {
          sub_B17100(RandomGroupIndex, v77, v78);
          sub_B170A0();
        }
        v81 = RandomLimitCountList->m_Items[v80 + 1];
        if ( v81 != -1 )
        {
          v82 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v82 = BalanceConfig_TypeInfo;
          }
          if ( v81 <= v82->static_fields->ServantLimitMax )
          {
            v101 = 0LL;
            v87 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v86 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v110.fields.currentCryptoKey = v87;
            *(_QWORD *)&v110.fields.fakeValue = v86;
            v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v110, 0LL);
            if ( !v70 )
              goto LABEL_106;
            if ( ServantLimitAddMaster__TryGetEntity(v70, &v101, v88, v81, 0LL) )
            {
              if ( !v101 )
                goto LABEL_106;
              RandomGroupIndex = (ServantCostumeEntity_o *)ServantLimitAddEntity__GetRandomGroupIndex(v101, 0LL);
            }
            else
            {
              RandomGroupIndex = 0LL;
            }
            if ( (_DWORD)RandomGroupIndex == groupIndex )
            {
LABEL_88:
              if ( !v75 )
                goto LABEL_106;
              System_Collections_Generic_List_int___Add(
                v75,
                v81,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          else
          {
            v84 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v83 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v109.fields.currentCryptoKey = v84;
            *(_QWORD *)&v109.fields.fakeValue = v83;
            v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109, 0LL);
            if ( !v69 )
              goto LABEL_106;
            RandomGroupIndex = ServantCostumeMaster__GetEntity(v69, v85, v81, 0LL);
            if ( RandomGroupIndex && RandomGroupIndex->fields.groupIndex == groupIndex )
              goto LABEL_88;
          }
        }
        LODWORD(v79) = RandomLimitCountList->max_length;
        if ( (__int64)++v80 >= (int)v79 )
          goto LABEL_91;
      }
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_21542040(
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
  System_String_o *v23; // x0
  int32_t v25; // w19
  WebViewManager_o *Instance; // x0
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_int__o *v32; // x21
  _BOOL8 IsSpoilerLimitCount; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct System_Int32_array *v36; // x25
  __int64 v37; // x8
  unsigned __int64 v38; // x26
  int32_t v39; // w23
  BalanceConfig_c *v40; // x0
  int32_t v41; // w19
  RandomLimitCountManager_c *v42; // x0
  System_Collections_Generic_Dictionary_UIPanel__int__o *v43; // x0

  if ( (byte_40F8290 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&OptionManager_TypeInfo, v12);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8290 = 1;
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
    v23 = RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v20);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               choiceRandomLimitCountDic,
               v23,
               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_56:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v36 = info->fields.randomLimitCountTargets;
  if ( !v36 )
    goto LABEL_56;
  v37 = *(_QWORD *)&v36->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v37 )
      {
        sub_B17100(IsSpoilerLimitCount, v34, v35);
        sub_B170A0();
      }
      v39 = v36->m_Items[v38 + 1];
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetSpoilerSetting(0LL) )
        goto LABEL_60;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_56;
      IsSpoilerLimitCount = ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                              MasterData_WarQuestSelectionMaster,
                              info->fields.svtId,
                              v39,
                              0LL);
      if ( IsSpoilerLimitCount )
      {
LABEL_60:
        v40 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        if ( v39 != v40->static_fields->ServantLimitMax )
          goto LABEL_37;
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        IsSpoilerLimitCount = OptionManager__GetFriendImageLimitCount(0LL);
        if ( IsSpoilerLimitCount )
          break;
      }
LABEL_47:
      LODWORD(v37) = v36->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        goto LABEL_48;
    }
    v40 = BalanceConfig_TypeInfo;
LABEL_37:
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = BalanceConfig_TypeInfo;
    }
    if ( v39 <= v40->static_fields->ServantLimitMax )
      goto LABEL_45;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    IsSpoilerLimitCount = OptionManager__GetFriendCostume(0LL);
    if ( IsSpoilerLimitCount )
    {
LABEL_45:
      if ( !v32 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        v32,
        v39,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( !v32 )
    goto LABEL_56;
  v41 = UnityEngine_Random__Range_34843248(0, v32->fields._size, 0LL);
  if ( v32->fields._size <= (unsigned int)v41 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v42 = RandomLimitCountManager_TypeInfo;
  v25 = v32->fields._items->m_Items[v41 + 1];
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v42 = RandomLimitCountManager_TypeInfo;
  }
  v43 = (System_Collections_Generic_Dictionary_UIPanel__int__o *)v42->static_fields->choiceRandomLimitCountDic;
  if ( !v43 )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    v43,
    (UIPanel_o *)Key,
    v25,
    (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return v25;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_40F828E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_40F828E = 1;
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
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           choiceRandomLimitCountDic,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_40F828C & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v1);
    byte_40F828C = 1;
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

  if ( (byte_40F828B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_40F828B = 1;
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
      sub_B170D4();
    System_Collections_Generic_Dictionary_UIPanel__int___Clear(
      (System_Collections_Generic_Dictionary_UIPanel__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_2D9C398 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}