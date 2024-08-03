void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__int__o *v5; // x19

  if ( (byte_49F80D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v3);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v4);
    byte_49F80D0 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 v1,
                                                                 v2);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_1B6406C(RandomLimitCountManager_TypeInfo->static_fields);
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
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v10; // [xsp+10h] [xbp-30h] BYREF
  int64_t v11; // [xsp+18h] [xbp-28h] BYREF

  v10 = userSvtId;
  v11 = userId;
  v9 = groupIndex;
  if ( (byte_49F80CC & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, userSvtId);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v4);
    byte_49F80CC = 1;
  }
  v5 = (System_String_array *)sub_1B64170(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  if ( !v5->max_length )
    goto LABEL_10;
  v5->m_Items[0] = v6;
  v6 = (System_String_o *)sub_1B6406C(v5->m_Items);
  if ( v5->max_length <= 1 )
    goto LABEL_10;
  v5->m_Items[1] = (System_String_o *)StringLiteral_1546/*":"*/;
  sub_1B6406C(&v5->m_Items[1]);
  v6 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( v5->max_length <= 2
    || (v5->m_Items[2] = v6, v6 = (System_String_o *)sub_1B6406C(&v5->m_Items[2]), v5->max_length <= 3)
    || (v5->m_Items[3] = (System_String_o *)StringLiteral_1546/*":"*/,
        sub_1B6406C(&v5->m_Items[3]),
        v6 = System_Int32__ToString((int32_t)&v9, 0LL),
        v5->max_length <= 4) )
  {
LABEL_10:
    sub_1B6432C(v6, v7);
  }
  v5->m_Items[4] = v6;
  sub_1B6406C(&v5->m_Items[4]);
  return System_String__Concat_61388924(v5, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v29; // x21
  __int64 v30; // x22
  ServantCostumeMaster_o *v31; // x20
  int32_t v32; // w21
  ServantCostumeEntity_o *v33; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  ServantLimitAddMaster_o *v38; // x20
  int32_t v39; // w21
  __int128 v40; // q1
  int64_t v41; // x0
  __int128 v42; // q1
  int64_t v43; // x20
  const MethodInfo *v44; // x3
  int64_t v45; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v47; // x1
  RandomLimitCountManager_c *v48; // x0
  Il2CppObject *v49; // x0
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
  System_Int32_array *CostumeList_39841856; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v64; // x24
  Il2CppObject *v65; // x25
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_List_int__o *v68; // x22
  __int64 v69; // x1
  __int64 v70; // x8
  unsigned __int64 v71; // x20
  int32_t v72; // w26
  BalanceConfig_c *v73; // x0
  BalanceConfig_c **v74; // x21
  __int64 v75; // x27
  __int64 v76; // x28
  __int64 v77; // x27
  __int64 v78; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  __int64 v82; // x19
  __int64 v83; // x21
  int32_t v84; // w0
  RandomLimitCountManager_c *v85; // x0
  Il2CppObject *v87; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v93; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_49F80CE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49F80CE = 1;
  }
  v93 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v21 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v20 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v95.fields.currentCryptoKey = v21;
    *(_QWORD *)&v95.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v95, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v96.fields.currentCryptoKey = v23;
      *(_QWORD *)&v96.fields.fakeValue = v22;
      v24 = &BalanceConfig_TypeInfo;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v96, 0LL);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v38 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v98.fields.currentCryptoKey = v37;
        *(_QWORD *)&v98.fields.fakeValue = v36;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v98, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v38 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v38, &entitya, v39, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v30 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v31 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v97.fields.currentCryptoKey = v30;
        *(_QWORD *)&v97.fields.fakeValue = v29;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v97, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v31 )
          goto LABEL_89;
        v33 = ServantCostumeMaster__GetEntity(v31, v32, (int32_t)Instance, 0LL);
        if ( v33 )
        {
          groupIndex = v33->fields.groupIndex;
LABEL_28:
          v40 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v91 = v92;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v91, 0LL);
          v42 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v43 = v41;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v42;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v90, 0LL);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v43, v45, groupIndex, v44);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v47) )
          {
            v48 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v48 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v48->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v49 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v50 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v51 = (UserServantCollectionMaster_o *)v49;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v50;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v89 = v92;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v89, 0LL);
          v54 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v53 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v55 = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v99.fields.currentCryptoKey = v54;
          *(_QWORD *)&v99.fields.fakeValue = v53;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v99, 0LL);
          if ( !v51 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v51, v55, (int32_t)Instance, 0LL);
          if ( EntityDefinitely )
          {
            v57 = EntityDefinitely;
            lv = entity->fields.lv;
            v60 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v59 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v100.fields.currentCryptoKey = v60;
            *(_QWORD *)&v100.fields.fakeValue = v59;
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v100, 0LL);
            CostumeList_39841856 = UserServantCollectionEntity__getCostumeList_39841856(v57, lv, v61, 0LL);
          }
          else
          {
            CostumeList_39841856 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_39841856, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v87 = Key;
          v64 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v65 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v68 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v66,
                                                            v67);
          System_Collections_Generic_List_int____ctor(
            v68,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          v70 = *(_QWORD *)&RandomLimitCountList->max_length;
          if ( (int)v70 < 1 )
          {
LABEL_78:
            v83 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v82 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v103.fields.currentCryptoKey = v83;
            *(_QWORD *)&v103.fields.fakeValue = v82;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v103, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v68 )
                goto LABEL_89;
              v84 = UnityEngine_Random__Range_69087476(0, v68->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v68,
                       v84,
                       (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v85 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
              v85 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v85->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v87,
                Item,
                (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1B64324(Instance);
          }
          v71 = 0LL;
          while ( 1 )
          {
            if ( v71 >= (unsigned int)v70 )
              sub_1B6432C(Instance, v69);
            v72 = RandomLimitCountList->m_Items[v71 + 1];
            if ( v72 == -1 )
              goto LABEL_77;
            v73 = *v24;
            if ( !(*v24)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v73);
              v73 = *v24;
            }
            v74 = v24;
            if ( v72 <= v73->static_fields->ServantLimitMax )
            {
              v93 = 0LL;
              v78 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v77 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v102.fields.currentCryptoKey = v78;
              *(_QWORD *)&v102.fields.fakeValue = v77;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v102, 0LL);
              if ( !v65 )
                goto LABEL_89;
              v24 = v74;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v65,
                     &v93,
                     (int32_t)Instance,
                     v72,
                     0LL) )
              {
                Instance = (DataManager_o *)v93;
                if ( !v93 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v93, 0LL);
              }
              else
              {
                Instance = 0LL;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v68 )
                  goto LABEL_89;
                items = v68->fields._items;
                v80 = Method_System_Collections_Generic_List_int__Add__;
                ++v68->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v68->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v68,
                    v72,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
                }
                else
                {
                  v68->fields._size = size + 1;
                  items->m_Items[size + 1] = v72;
                }
              }
            }
            else
            {
              v76 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v75 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v101.fields.currentCryptoKey = v76;
              *(_QWORD *)&v101.fields.fakeValue = v75;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v101, 0LL);
              if ( !v64 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v64,
                                            (int32_t)Instance,
                                            v72,
                                            0LL);
              v24 = v74;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(v70) = RandomLimitCountList->max_length;
            if ( (__int64)++v71 >= (int)v70 )
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


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_31462296(
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
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x21
  __int64 v30; // x1
  struct System_Int32_array *v31; // x25
  __int64 v32; // x8
  unsigned __int64 i; // x26
  int32_t v34; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int32_t v38; // w0
  RandomLimitCountManager_c *v39; // x8

  if ( (byte_49F80CF & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&OptionManager_TypeInfo, v12);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F80CF = 1;
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
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1B64324(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = info->fields.randomLimitCountTargets;
  if ( !v31 )
    goto LABEL_49;
  v32 = *(_QWORD *)&v31->max_length;
  if ( (int)v32 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v32; ++i )
    {
      if ( i >= (unsigned int)v32 )
        sub_1B6432C(Instance, v30);
      v34 = v31->m_Items[i + 1];
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
                                     v34,
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
      if ( v34 == *((_DWORD *)Instance[11].monitor + 7) )
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
      if ( v34 <= *((_DWORD *)Instance[11].monitor + 7) )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      Instance = (Il2CppObject *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_53:
        if ( !v29 )
          goto LABEL_49;
        items = v29->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            v34,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size + 1] = v34;
        }
      }
LABEL_43:
      LODWORD(v32) = v31->max_length;
    }
  }
  if ( !v29 )
    goto LABEL_49;
  v38 = UnityEngine_Random__Range_69087476(0, v29->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v29,
           v38,
           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
  v39 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v39 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (Il2CppObject *)v39->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)Instance,
    (Il2CppObject *)Key,
    Item,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_49F80CD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v3);
    byte_49F80CD = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1B64324(0LL);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_49F80CB & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v1);
    byte_49F80CB = 1;
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
  if ( (byte_49F80CA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v4);
    byte_49F80CA = 1;
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
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_3170838 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}