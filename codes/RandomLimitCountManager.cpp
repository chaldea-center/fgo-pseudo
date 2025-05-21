void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B402E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v2);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v3);
    byte_4B402E9 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_33968DC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)RandomLimitCountManager_TypeInfo->static_fields, (int32_t)v4, v5, v6);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v18; // [xsp+10h] [xbp-30h] BYREF
  int64_t v19; // [xsp+18h] [xbp-28h] BYREF

  v18 = userSvtId;
  v19 = userId;
  v17 = groupIndex;
  if ( (byte_4B402E5 & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, userSvtId);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v4);
    byte_4B402E5 = 1;
  }
  v5 = sub_1BDB920(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v19, 0LL);
  if ( !v5 )
    sub_1BDBAD4(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_10;
  v11 = StringLiteral_1479/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1479/*":"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), v11, v8, v10);
  v6 = System_Int64__ToString((int64_t)&v18, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = v6,
        sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v8, v12),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v14 = StringLiteral_1479/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1479/*":"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 56), v14, v8, v13),
        v6 = System_Int32__ToString((int32_t)&v17, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_10:
    sub_1BDBADC(v6, v7, v8);
  }
  *(_QWORD *)(v5 + 64) = v6;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v8, v15);
  return System_String__Concat_62612776((System_String_array *)v5, 0LL);
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
  System_Int32_array *CostumeList_42078056; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v65; // x24
  Il2CppObject *v66; // x25
  System_Collections_Generic_List_int__o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x8
  unsigned __int64 v70; // x20
  int32_t v71; // w26
  BalanceConfig_c *v72; // x0
  BalanceConfig_c **v73; // x21
  __int64 v74; // x27
  __int64 v75; // x28
  __int64 v76; // x27
  __int64 v77; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  __int64 v81; // x19
  __int64 v82; // x21
  int32_t v83; // w0
  RandomLimitCountManager_c *v84; // x0
  Il2CppObject *v86; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v92; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_4B402E7 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B402E7 = 1;
  }
  v92 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v21 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v20 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v94.fields.currentCryptoKey = v21;
    *(_QWORD *)&v94.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v94, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v95.fields.currentCryptoKey = v23;
      *(_QWORD *)&v95.fields.fakeValue = v22;
      v24 = &BalanceConfig_TypeInfo;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v95, 0LL);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v39 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v97.fields.currentCryptoKey = v38;
        *(_QWORD *)&v97.fields.fakeValue = v37;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v97, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v31 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v32 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v96.fields.currentCryptoKey = v31;
        *(_QWORD *)&v96.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v96, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
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
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v91.fields.fakeValue = v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v90 = v91;
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v90, 0LL);
          v43 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v44 = v42;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v43;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v89, 0LL);
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
                       (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v50 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v51 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v52 = (UserServantCollectionMaster_o *)v50;
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v91.fields.fakeValue = v51;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v88 = v91;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v88, 0LL);
          v55 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v56 = v53;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v98.fields.currentCryptoKey = v55;
          *(_QWORD *)&v98.fields.fakeValue = v54;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v98, 0LL);
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
            *(_QWORD *)&v99.fields.currentCryptoKey = v61;
            *(_QWORD *)&v99.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v99, 0LL);
            CostumeList_42078056 = UserServantCollectionEntity__getCostumeList_42078056(v58, lv, v62, 0LL);
          }
          else
          {
            CostumeList_42078056 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_42078056, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v86 = Key;
          v65 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v66 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v67 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v67,
            (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          v69 = *(_QWORD *)&RandomLimitCountList->max_length;
          if ( (int)v69 < 1 )
          {
LABEL_78:
            v82 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v81 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v102.fields.currentCryptoKey = v82;
            *(_QWORD *)&v102.fields.fakeValue = v81;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v102, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v67 )
                goto LABEL_89;
              v83 = UnityEngine_Random__Range_70244360(0, v67->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v67,
                       v83,
                       (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v84 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v84 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v84->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v86,
                Item,
                (const MethodInfo_3397290 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1BDBAD4(Instance, v28);
          }
          v70 = 0LL;
          while ( 1 )
          {
            if ( v70 >= (unsigned int)v69 )
              sub_1BDBADC(Instance, v28, v68);
            v71 = RandomLimitCountList->m_Items[v70 + 1];
            if ( v71 == -1 )
              goto LABEL_77;
            v72 = *v24;
            if ( !(*v24)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v72);
              v72 = *v24;
            }
            v73 = v24;
            if ( v71 <= v72->static_fields->ServantLimitMax )
            {
              v92 = 0LL;
              v77 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v76 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v101.fields.currentCryptoKey = v77;
              *(_QWORD *)&v101.fields.fakeValue = v76;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v101, 0LL);
              if ( !v66 )
                goto LABEL_89;
              v24 = v73;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v66,
                     &v92,
                     (int32_t)Instance,
                     v71,
                     0LL) )
              {
                Instance = (DataManager_o *)v92;
                if ( !v92 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v92, 0LL);
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
                v79 = Method_System_Collections_Generic_List_int__Add__;
                ++v67->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v67->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v67,
                    v71,
                    *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v67->fields._size = size + 1;
                  items->m_Items[size + 1] = v71;
                }
              }
            }
            else
            {
              v75 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v74 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v100.fields.currentCryptoKey = v75;
              *(_QWORD *)&v100.fields.fakeValue = v74;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v100, 0LL);
              if ( !v65 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v65,
                                            (int32_t)Instance,
                                            v71,
                                            0LL);
              v24 = v73;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(v69) = RandomLimitCountList->max_length;
            if ( (__int64)++v70 >= (int)v69 )
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


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_33051492(
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
  __int64 v29; // x2
  struct System_Int32_array *v30; // x25
  __int64 v31; // x8
  unsigned __int64 i; // x26
  int32_t v33; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  int32_t v37; // w0
  RandomLimitCountManager_c *v38; // x8

  if ( (byte_4B402E8 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BDB878(&OptionManager_TypeInfo, v12);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B402E8 = 1;
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
               (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1BDBAD4(Instance, v24);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v28 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = info->fields.randomLimitCountTargets;
  if ( !v30 )
    goto LABEL_49;
  v31 = *(_QWORD *)&v30->max_length;
  if ( (int)v31 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v31; ++i )
    {
      if ( i >= (unsigned int)v31 )
        sub_1BDBADC(Instance, v24, v29);
      v33 = v30->m_Items[i + 1];
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
                                     v33,
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
      if ( v33 == *((_DWORD *)Instance[11].monitor + 9) )
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
      if ( v33 <= *((_DWORD *)Instance[11].monitor + 9) )
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
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            v33,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v28->fields._size = size + 1;
          items->m_Items[size + 1] = v33;
        }
      }
LABEL_43:
      LODWORD(v31) = v30->max_length;
    }
  }
  if ( !v28 )
    goto LABEL_49;
  v37 = UnityEngine_Random__Range_70244360(0, v28->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v28,
           v37,
           (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
  v38 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v38 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (Il2CppObject *)v38->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)Instance,
    (Il2CppObject *)Key,
    Item,
    (const MethodInfo_3397290 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4B402E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v3);
    byte_4B402E6 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1BDBAD4(0LL, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_3397484 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_4B402E4 & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v1);
    byte_4B402E4 = 1;
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
  if ( (byte_4B402E3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v4);
    byte_4B402E3 = 1;
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
      sub_1BDBAD4(0LL, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_3397418 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}