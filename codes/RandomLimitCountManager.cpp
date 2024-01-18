void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41860E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v2);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_41860E8 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v4,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)RandomLimitCountManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x20
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v47; // [xsp+8h] [xbp-28h] BYREF
  int64_t v48; // [xsp+18h] [xbp-18h] BYREF

  v48 = userId;
  v47 = userSvtId;
  v46 = groupIndex;
  if ( (byte_41860E4 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, userSvtId);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v4);
    byte_41860E4 = 1;
  }
  v5 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v48, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v6 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v21 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  v6 = System_Int64__ToString((int64_t)&v47, 0LL);
  v28 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  v6 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v6 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v35 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v35;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  v6 = System_Int32__ToString((int32_t)&v46, 0LL);
  v42 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      v45 = sub_B2C454();
      sub_B2C400(v45, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    v44 = sub_B2C460(v6);
    sub_B2C400(v44, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v42;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  return System_String__Concat_44385656(v5, 0LL);
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
  __int64 v27; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x21
  __int64 v30; // x22
  ServantCostumeMaster_o *v31; // x20
  int32_t v32; // w21
  ServantCostumeEntity_o *v33; // x0
  int32_t v34; // w19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  ServantLimitAddMaster_o *v38; // x20
  int32_t v39; // w21
  __int128 v40; // q1
  int64_t v41; // x0
  __int128 v42; // q0
  int64_t v43; // x20
  const MethodInfo *v44; // x3
  int64_t v45; // x22
  System_String_o *Key; // x26
  const MethodInfo *v47; // x1
  RandomLimitCountManager_c *v48; // x0
  WarQuestSelectionMaster_o *v49; // x0
  __int128 v50; // q0
  UserServantCollectionMaster_o *v51; // x22
  int64_t v52; // x0
  __int64 v53; // x24
  __int64 v54; // x25
  int64_t v55; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v57; // x22
  int32_t lv; // w23
  __int64 v59; // x24
  __int64 v60; // x25
  int32_t v61; // w0
  System_Int32_array *CostumeList_21620056; // x0
  System_Int32_array *RandomLimitCountList; // x23
  ServantCostumeMaster_o *v64; // x24
  ServantLimitAddMaster_o *v65; // x25
  System_Collections_Generic_List_int__o *v66; // x22
  __int64 v67; // x8
  unsigned __int64 v68; // x20
  int32_t v69; // w26
  BalanceConfig_c *v70; // x0
  __int64 v71; // x27
  __int64 v72; // x28
  __int64 v73; // x27
  __int64 v74; // x28
  __int64 v75; // x19
  __int64 v76; // x21
  int32_t v77; // w19
  RandomLimitCountManager_c *v78; // x0
  __int64 v80; // x0
  UIPanel_o *v81; // [xsp+0h] [xbp-100h]
  int32_t groupIndex; // [xsp+Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+70h] [xbp-90h]
  ServantLimitAddEntity_o *v87; // [xsp+98h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_41860E6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_41860E6 = 1;
  }
  v87 = 0LL;
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
    *(_QWORD *)&v89.fields.currentCryptoKey = v21;
    *(_QWORD *)&v89.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v89, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v90.fields.currentCryptoKey = v23;
      *(_QWORD *)&v90.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v90, 0LL);
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
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v38 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v92.fields.currentCryptoKey = v37;
        *(_QWORD *)&v92.fields.fakeValue = v36;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v92, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v38 )
          goto LABEL_106;
        if ( ServantLimitAddMaster__TryGetEntity(v38, &entitya, v39, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_106;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v30 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v31 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v91.fields.currentCryptoKey = v30;
        *(_QWORD *)&v91.fields.fakeValue = v29;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v91, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v31 )
          goto LABEL_106;
        v33 = ServantCostumeMaster__GetEntity(v31, v32, (int32_t)Instance, 0LL);
        if ( v33 )
        {
          groupIndex = v33->fields.groupIndex;
          goto LABEL_34;
        }
      }
      groupIndex = 0;
LABEL_34:
      v40 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v40;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v86;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v85, 0LL);
      v42 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
      v43 = v41;
      *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v84.fields.fakeValue = v42;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v84, 0LL);
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      Key = RandomLimitCountManager__GenerateKey(v43, v45, groupIndex, v44);
      if ( RandomLimitCountManager__IsChose(Key, v47) )
      {
        v48 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v48 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v48->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
          return System_Collections_Generic_Dictionary_string__int___get_Item(
                   (System_Collections_Generic_Dictionary_string__int__o *)Instance,
                   Key,
                   (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_106;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v49 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              Instance,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      v50 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      v51 = (UserServantCollectionMaster_o *)v49;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v50;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v83 = v86;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v83, 0LL);
      v54 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v53 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      v55 = v52;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v93.fields.currentCryptoKey = v54;
      *(_QWORD *)&v93.fields.fakeValue = v53;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v93, 0LL);
      if ( !v51 )
        goto LABEL_106;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v51, v55, (int32_t)Instance, 0LL);
      if ( EntityDefinitely )
      {
        v57 = EntityDefinitely;
        lv = entity->fields.lv;
        v60 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v59 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v94.fields.currentCryptoKey = v60;
        *(_QWORD *)&v94.fields.fakeValue = v59;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
        CostumeList_21620056 = UserServantCollectionEntity__getCostumeList_21620056(v57, lv, v61, 0LL);
      }
      else
      {
        CostumeList_21620056 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      }
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_21620056, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v81 = (UIPanel_o *)Key;
      v64 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      v65 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v66 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v66,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !RandomLimitCountList )
        goto LABEL_106;
      v67 = *(_QWORD *)&RandomLimitCountList->max_length;
      if ( (int)v67 < 1 )
      {
LABEL_91:
        v76 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v75 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v97.fields.currentCryptoKey = v76;
        *(_QWORD *)&v97.fields.fakeValue = v75;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v97, 0LL);
        if ( (_DWORD)Instance )
        {
          if ( !v66 )
            goto LABEL_106;
          v77 = UnityEngine_Random__Range_35348680(0, v66->fields._size, 0LL);
          if ( v66->fields._size <= (unsigned int)v77 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v34 = v66->fields._items->m_Items[v77 + 1];
        }
        else
        {
          v34 = 1;
        }
        v78 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v78 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v78->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
            v81,
            v34,
            (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
          return v34;
        }
LABEL_106:
        sub_B2C434(Instance, v27);
      }
      v68 = 0LL;
      while ( 1 )
      {
        if ( v68 >= (unsigned int)v67 )
        {
          v80 = sub_B2C460(Instance);
          sub_B2C400(v80, 0LL);
        }
        v69 = RandomLimitCountList->m_Items[v68 + 1];
        if ( v69 != -1 )
        {
          v70 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v70 = BalanceConfig_TypeInfo;
          }
          if ( v69 <= v70->static_fields->ServantLimitMax )
          {
            v87 = 0LL;
            v74 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v73 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v96.fields.currentCryptoKey = v74;
            *(_QWORD *)&v96.fields.fakeValue = v73;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v96, 0LL);
            if ( !v65 )
              goto LABEL_106;
            if ( ServantLimitAddMaster__TryGetEntity(v65, &v87, (int32_t)Instance, v69, 0LL) )
            {
              Instance = (DataManager_o *)v87;
              if ( !v87 )
                goto LABEL_106;
              Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v87, 0LL);
            }
            else
            {
              Instance = 0LL;
            }
            if ( (_DWORD)Instance == groupIndex )
            {
LABEL_88:
              if ( !v66 )
                goto LABEL_106;
              System_Collections_Generic_List_int___Add(
                v66,
                v69,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          else
          {
            v72 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v71 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v95.fields.currentCryptoKey = v72;
            *(_QWORD *)&v95.fields.fakeValue = v71;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v95, 0LL);
            if ( !v64 )
              goto LABEL_106;
            Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(v64, (int32_t)Instance, v69, 0LL);
            if ( Instance && LODWORD(Instance->fields.datalist) == groupIndex )
              goto LABEL_88;
          }
        }
        LODWORD(v67) = RandomLimitCountList->max_length;
        if ( (__int64)++v68 >= (int)v67 )
          goto LABEL_91;
      }
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_21887276(
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
  System_String_o *v24; // x1
  int32_t v26; // w19
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  struct System_Int32_array *v29; // x25
  __int64 v30; // x8
  unsigned __int64 v31; // x26
  int32_t v32; // w23
  int32_t v33; // w19
  RandomLimitCountManager_c *v34; // x0
  __int64 v35; // x0

  if ( (byte_41860E7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&OptionManager_TypeInfo, v12);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_41860E7 = 1;
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
               (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_56:
    sub_B2C434(Instance, v24);
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v28 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v29 = info->fields.randomLimitCountTargets;
  if ( !v29 )
    goto LABEL_56;
  v30 = *(_QWORD *)&v29->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
      {
        v35 = sub_B2C460(Instance);
        sub_B2C400(v35, 0LL);
      }
      v32 = v29->m_Items[v31 + 1];
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
                                      v32,
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
        if ( v32 != *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      LODWORD(v30) = v29->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_48;
    }
    Instance = (System_String_o *)BalanceConfig_TypeInfo;
LABEL_37:
    if ( (Instance[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Instance[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v32 <= *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      if ( !v28 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        v28,
        v32,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( !v28 )
    goto LABEL_56;
  v33 = UnityEngine_Random__Range_35348680(0, v28->fields._size, 0LL);
  if ( v28->fields._size <= (unsigned int)v33 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v34 = RandomLimitCountManager_TypeInfo;
  v26 = v28->fields._items->m_Items[v33 + 1];
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v34 = RandomLimitCountManager_TypeInfo;
  }
  v24 = Key;
  Instance = (System_String_o *)v34->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
    (UIPanel_o *)Key,
    v26,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return v26;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_41860E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_41860E5 = 1;
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
    sub_B2C434(0LL, method);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           choiceRandomLimitCountDic,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_41860E3 & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v1);
    byte_41860E3 = 1;
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

  if ( (byte_41860E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_41860E2 = 1;
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
      sub_B2C434(0LL, method);
    System_Collections_Generic_Dictionary_UIPanel__int___Clear(
      (System_Collections_Generic_Dictionary_UIPanel__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_2DAA440 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}