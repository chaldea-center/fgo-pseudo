void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE504 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE504 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v1,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  static_fields = (BattleServantConfConponent_o *)RandomLimitCountManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  System_String_array *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
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
  if ( (byte_42AE500 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE500 = 1;
  }
  v4 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  v5 = System_Int64__ToString((int64_t)&v47, 0LL);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  v13 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( !v4->max_length )
    goto LABEL_24;
  v4->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v4->m_Items, v13, v7, v8, v9, v10, v11, v12);
  v5 = (System_String_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    v5 = (System_String_o *)sub_B52A44(StringLiteral_1240/*":"*/, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
    v20 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v4->max_length <= 1 )
    goto LABEL_24;
  v4->m_Items[1] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v5 = System_Int64__ToString((int64_t)&v46, 0LL);
  v27 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( v4->max_length <= 2 )
    goto LABEL_24;
  v4->m_Items[2] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v5 = (System_String_o *)StringLiteral_1240/*":"*/;
  if ( StringLiteral_1240/*":"*/ )
  {
    v5 = (System_String_o *)sub_B52A44(StringLiteral_1240/*":"*/, v4->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
    v34 = (System_Int32_array **)StringLiteral_1240/*":"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v4->max_length <= 3 )
    goto LABEL_24;
  v4->m_Items[3] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v5 = System_Int32__ToString((int32_t)&v45, 0LL);
  v41 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B52A44(v5, v4->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_25:
      v44 = sub_B52A7C();
      sub_B52A28(v44, 0LL);
    }
  }
  if ( v4->max_length <= 4 )
  {
LABEL_24:
    v43 = sub_B52A88(v5);
    sub_B52A28(v43, 0LL);
  }
  v4->m_Items[4] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v4->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_44648440(v4, 0LL);
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w20
  BalanceConfig_c *v8; // x8
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  ServantCostumeMaster_o *v14; // x20
  int32_t v15; // w21
  ServantCostumeEntity_o *v16; // x0
  int32_t v17; // w19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  ServantLimitAddMaster_o *v21; // x20
  int32_t v22; // w21
  __int128 v23; // q1
  int64_t v24; // x0
  __int128 v25; // q0
  int64_t v26; // x20
  const MethodInfo *v27; // x3
  int64_t v28; // x22
  System_String_o *Key; // x26
  const MethodInfo *v30; // x1
  RandomLimitCountManager_c *v31; // x0
  WarQuestSelectionMaster_o *v32; // x0
  __int128 v33; // q0
  UserServantCollectionMaster_o *v34; // x22
  int64_t v35; // x0
  __int64 v36; // x24
  __int64 v37; // x25
  int64_t v38; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v40; // x22
  int32_t lv; // w23
  __int64 v42; // x24
  __int64 v43; // x25
  int32_t v44; // w0
  System_Int32_array *CostumeList_21476296; // x0
  System_Int32_array *RandomLimitCountList; // x23
  ServantCostumeMaster_o *v47; // x24
  ServantLimitAddMaster_o *v48; // x25
  System_Collections_Generic_List_int__o *v49; // x22
  __int64 v50; // x8
  unsigned __int64 v51; // x20
  int32_t v52; // w26
  BalanceConfig_c *v53; // x0
  __int64 v54; // x27
  __int64 v55; // x28
  __int64 v56; // x27
  __int64 v57; // x28
  __int64 v58; // x19
  __int64 v59; // x21
  int32_t v60; // w19
  RandomLimitCountManager_c *v61; // x0
  __int64 v63; // x0
  UIPanel_o *v64; // [xsp+0h] [xbp-100h]
  int32_t groupIndex; // [xsp+Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+70h] [xbp-90h]
  ServantLimitAddEntity_o *v70; // [xsp+98h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_42AE502 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE502 = 1;
  }
  v70 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v4 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v3 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v72.fields.currentCryptoKey = v4;
    *(_QWORD *)&v72.fields.fakeValue = v3;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v72, 0LL) )
    {
      v6 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v5 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v6;
      *(_QWORD *)&v73.fields.fakeValue = v5;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v73, 0LL);
      v8 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( v7 <= v8->static_fields->ServantLimitMax )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v20 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v21 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v20;
        *(_QWORD *)&v75.fields.fakeValue = v19;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v75, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v21 )
          goto LABEL_106;
        if ( ServantLimitAddMaster__TryGetEntity(v21, &entitya, v22, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_106;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v14 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v74.fields.currentCryptoKey = v13;
        *(_QWORD *)&v74.fields.fakeValue = v12;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v74, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v14 )
          goto LABEL_106;
        v16 = ServantCostumeMaster__GetEntity(v14, v15, (int32_t)Instance, 0LL);
        if ( v16 )
        {
          groupIndex = v16->fields.groupIndex;
          goto LABEL_34;
        }
      }
      groupIndex = 0;
LABEL_34:
      v23 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v68 = v69;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v68, 0LL);
      v25 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
      v26 = v24;
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v67.fields.fakeValue = v25;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v67, 0LL);
      if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      }
      Key = RandomLimitCountManager__GenerateKey(v26, v28, groupIndex, v27);
      if ( RandomLimitCountManager__IsChose(Key, v30) )
      {
        v31 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v31 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v31->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
          return System_Collections_Generic_Dictionary_string__int___get_Item(
                   (System_Collections_Generic_Dictionary_string__int__o *)Instance,
                   Key,
                   (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        goto LABEL_106;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              Instance,
              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      v33 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
      v34 = (UserServantCollectionMaster_o *)v32;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v66 = v69;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v66, 0LL);
      v37 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      v38 = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v76.fields.currentCryptoKey = v37;
      *(_QWORD *)&v76.fields.fakeValue = v36;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v76, 0LL);
      if ( !v34 )
        goto LABEL_106;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v38, (int32_t)Instance, 0LL);
      if ( EntityDefinitely )
      {
        v40 = EntityDefinitely;
        lv = entity->fields.lv;
        v43 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v42 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v77.fields.currentCryptoKey = v43;
        *(_QWORD *)&v77.fields.fakeValue = v42;
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v77, 0LL);
        CostumeList_21476296 = UserServantCollectionEntity__getCostumeList_21476296(v40, lv, v44, 0LL);
      }
      else
      {
        CostumeList_21476296 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
      }
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_21476296, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v64 = (UIPanel_o *)Key;
      v47 = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
      v48 = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v49 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v49,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !RandomLimitCountList )
        goto LABEL_106;
      v50 = *(_QWORD *)&RandomLimitCountList->max_length;
      if ( (int)v50 < 1 )
      {
LABEL_91:
        v59 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
        v58 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v80.fields.currentCryptoKey = v59;
        *(_QWORD *)&v80.fields.fakeValue = v58;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v80, 0LL);
        if ( (_DWORD)Instance )
        {
          if ( !v49 )
            goto LABEL_106;
          v60 = UnityEngine_Random__Range_35650740(0, v49->fields._size, 0LL);
          if ( v49->fields._size <= (unsigned int)v60 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v17 = v49->fields._items->m_Items[v60 + 1];
        }
        else
        {
          v17 = 1;
        }
        v61 = RandomLimitCountManager_TypeInfo;
        if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          v61 = RandomLimitCountManager_TypeInfo;
        }
        Instance = (DataManager_o *)v61->static_fields->choiceRandomLimitCountDic;
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
            v64,
            v17,
            (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
          return v17;
        }
LABEL_106:
        sub_B52A5C(Instance, v10);
      }
      v51 = 0LL;
      while ( 1 )
      {
        if ( v51 >= (unsigned int)v50 )
        {
          v63 = sub_B52A88(Instance);
          sub_B52A28(v63, 0LL);
        }
        v52 = RandomLimitCountList->m_Items[v51 + 1];
        if ( v52 != -1 )
        {
          v53 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v53 = BalanceConfig_TypeInfo;
          }
          if ( v52 <= v53->static_fields->ServantLimitMax )
          {
            v70 = 0LL;
            v57 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v79.fields.currentCryptoKey = v57;
            *(_QWORD *)&v79.fields.fakeValue = v56;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v79, 0LL);
            if ( !v48 )
              goto LABEL_106;
            if ( ServantLimitAddMaster__TryGetEntity(v48, &v70, (int32_t)Instance, v52, 0LL) )
            {
              Instance = (DataManager_o *)v70;
              if ( !v70 )
                goto LABEL_106;
              Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v70, 0LL);
            }
            else
            {
              Instance = 0LL;
            }
            if ( (_DWORD)Instance == groupIndex )
            {
LABEL_88:
              if ( !v49 )
                goto LABEL_106;
              System_Collections_Generic_List_int___Add(
                v49,
                v52,
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          else
          {
            v55 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
            v54 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v78.fields.currentCryptoKey = v55;
            *(_QWORD *)&v78.fields.fakeValue = v54;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78, 0LL);
            if ( !v47 )
              goto LABEL_106;
            Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(v47, (int32_t)Instance, v52, 0LL);
            if ( Instance && LODWORD(Instance->fields.datalist) == groupIndex )
              goto LABEL_88;
          }
        }
        LODWORD(v50) = RandomLimitCountList->max_length;
        if ( (__int64)++v51 >= (int)v50 )
          goto LABEL_91;
      }
    }
  }
  return -1;
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_22043260(
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
  System_Collections_Generic_Dictionary_string__int__o *choiceRandomLimitCountDic; // x20
  System_String_o *Instance; // x0
  System_String_o *v13; // x1
  int32_t v15; // w19
  ServantLimitSpoilerProtectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v17; // x21
  struct System_Int32_array *v18; // x25
  __int64 v19; // x8
  unsigned __int64 v20; // x26
  int32_t v21; // w23
  int32_t v22; // w19
  RandomLimitCountManager_c *v23; // x0
  __int64 v24; // x0

  if ( (byte_42AE503 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE503 = 1;
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
  if ( RandomLimitCountManager__IsChose(Key, v8) )
  {
    v10 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v10 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = v10->static_fields->choiceRandomLimitCountDic;
    Instance = RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v9);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_56:
    sub_B52A5C(Instance, v13);
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v17 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = info->fields.randomLimitCountTargets;
  if ( !v18 )
    goto LABEL_56;
  v19 = *(_QWORD *)&v18->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v24 = sub_B52A88(Instance);
        sub_B52A28(v24, 0LL);
      }
      v21 = v18->m_Items[v20 + 1];
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
                                      v21,
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
        if ( v21 != *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      LODWORD(v19) = v18->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_48;
    }
    Instance = (System_String_o *)BalanceConfig_TypeInfo;
LABEL_37:
    if ( (Instance[12].fields.m_stringLength & 0x4000000) != 0 && !LODWORD(Instance[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( v21 <= *(_DWORD *)(*(_QWORD *)&Instance[7].fields + 28LL) )
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
      if ( !v17 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        v17,
        v21,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    goto LABEL_47;
  }
LABEL_48:
  if ( !v17 )
    goto LABEL_56;
  v22 = UnityEngine_Random__Range_35650740(0, v17->fields._size, 0LL);
  if ( v17->fields._size <= (unsigned int)v22 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v23 = RandomLimitCountManager_TypeInfo;
  v15 = v17->fields._items->m_Items[v22 + 1];
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v23 = RandomLimitCountManager_TypeInfo;
  }
  v13 = Key;
  Instance = (System_String_o *)v23->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)Instance,
    (UIPanel_o *)Key,
    v15,
    (const MethodInfo_2F10088 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return v15;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_42AE501 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE501 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v3->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_B52A5C(0LL, method);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
           choiceRandomLimitCountDic,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F102FC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  RandomLimitCountManager_c *v1; // x0

  if ( (byte_42AE4FF & 1) == 0 )
  {
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE4FF = 1;
  }
  v1 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v1 = RandomLimitCountManager_TypeInfo;
  }
  return v1->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct RandomLimitCountManager_StaticFields *static_fields; // x8

  if ( (byte_42AE4FE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AE4FE = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  v3->static_fields->enableRandomLimitCount = value;
  static_fields = v3->static_fields;
  if ( !static_fields->enableRandomLimitCount )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = RandomLimitCountManager_TypeInfo->static_fields;
    }
    if ( !static_fields->choiceRandomLimitCountDic )
      sub_B52A5C(0LL, method);
    System_Collections_Generic_Dictionary_UIPanel__int___Clear(
      (System_Collections_Generic_Dictionary_UIPanel__int__o *)static_fields->choiceRandomLimitCountDic,
      (const MethodInfo_2F10264 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}