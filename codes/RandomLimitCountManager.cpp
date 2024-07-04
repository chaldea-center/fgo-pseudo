void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__int__o *v4; // x19

  if ( (byte_48DDFE9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v2);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v3);
    byte_48DDFE9 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_308427C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v4;
  sub_1B00C70(RandomLimitCountManager_TypeInfo->static_fields);
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
  __int64 v8; // x2
  __int64 v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v12; // [xsp+10h] [xbp-30h] BYREF
  int64_t v13; // [xsp+18h] [xbp-28h] BYREF

  v12 = userSvtId;
  v13 = userId;
  v11 = groupIndex;
  if ( (byte_48DDFE5 & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, userSvtId);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v4);
    byte_48DDFE5 = 1;
  }
  v5 = (System_String_array *)sub_1B00D74(string___TypeInfo, 5LL);
  v6 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  if ( !v5->max_length )
    goto LABEL_10;
  v5->m_Items[0] = v6;
  v6 = (System_String_o *)sub_1B00C70(v5->m_Items);
  if ( v5->max_length <= 1 )
    goto LABEL_10;
  v5->m_Items[1] = (System_String_o *)StringLiteral_1540/*":"*/;
  sub_1B00C70(&v5->m_Items[1]);
  v6 = System_Int64__ToString((int64_t)&v12, 0LL);
  if ( v5->max_length <= 2
    || (v5->m_Items[2] = v6, v6 = (System_String_o *)sub_1B00C70(&v5->m_Items[2]), v5->max_length <= 3)
    || (v5->m_Items[3] = (System_String_o *)StringLiteral_1540/*":"*/,
        sub_1B00C70(&v5->m_Items[3]),
        v6 = System_Int32__ToString((int32_t)&v11, 0LL),
        v5->max_length <= 4) )
  {
LABEL_10:
    sub_1B00F30(v6, v7, v8, v9);
  }
  v5->m_Items[4] = v6;
  sub_1B00C70(&v5->m_Items[4]);
  return System_String__Concat_60339276(v5, 0LL);
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
  System_Int32_array *CostumeList_38895892; // x0
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v65; // x24
  Il2CppObject *v66; // x25
  System_Collections_Generic_List_int__o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
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

  if ( (byte_48DDFE7 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantCostumeMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    sub_1B00CCC(&int___TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v18);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_48DDFE7 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v95, 0LL) )
    {
      v23 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v96.fields.currentCryptoKey = v23;
      *(_QWORD *)&v96.fields.fakeValue = v22;
      v24 = &BalanceConfig_TypeInfo;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v96, 0LL);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v38 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v39 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v98.fields.currentCryptoKey = v38;
        *(_QWORD *)&v98.fields.fakeValue = v37;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v98, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v31 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v32 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v97.fields.currentCryptoKey = v31;
        *(_QWORD *)&v97.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v97, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
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
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v41;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v91 = v92;
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v91, 0LL);
          v43 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v44 = v42;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v43;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v90, 0LL);
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
                       (const MethodInfo_3084BB0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v50 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v51 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v52 = (UserServantCollectionMaster_o *)v50;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v51;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v89 = v92;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v89, 0LL);
          v55 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v56 = v53;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v99.fields.currentCryptoKey = v55;
          *(_QWORD *)&v99.fields.fakeValue = v54;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v99, 0LL);
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
            *(_QWORD *)&v100.fields.currentCryptoKey = v61;
            *(_QWORD *)&v100.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v100, 0LL);
            CostumeList_38895892 = UserServantCollectionEntity__getCostumeList_38895892(v58, lv, v62, 0LL);
          }
          else
          {
            CostumeList_38895892 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_38895892, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v87 = Key;
          v65 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v66 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v67 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v67,
            (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v103, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v67 )
                goto LABEL_89;
              v84 = UnityEngine_Random__Range_68037396(0, v67->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v67,
                       v84,
                       (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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
                (const MethodInfo_3084C30 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1B00F28(Instance, v28);
          }
          v71 = 0LL;
          while ( 1 )
          {
            if ( v71 >= (unsigned int)v70 )
              sub_1B00F30(Instance, v28, v68, v69);
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
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v102, 0LL);
              if ( !v66 )
                goto LABEL_89;
              v24 = v74;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v66,
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
                if ( !v67 )
                  goto LABEL_89;
                items = v67->fields._items;
                v80 = Method_System_Collections_Generic_List_int__Add__;
                ++v67->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v67->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v67,
                    v72,
                    *(const MethodInfo_33A49AC **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
                }
                else
                {
                  v67->fields._size = size + 1;
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
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v101, 0LL);
              if ( !v65 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v65,
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


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_30075856(
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
  __int64 v30; // x3
  struct System_Int32_array *v31; // x25
  __int64 v32; // x8
  unsigned __int64 i; // x26
  int32_t v34; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int32_t v38; // w0
  RandomLimitCountManager_c *v39; // x8

  if ( (byte_48DDFE8 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B00CCC(&OptionManager_TypeInfo, v12);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_48DDFE8 = 1;
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
               (const MethodInfo_3084BB0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1B00F28(Instance, v24);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v28 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = info->fields.randomLimitCountTargets;
  if ( !v31 )
    goto LABEL_49;
  v32 = *(_QWORD *)&v31->max_length;
  if ( (int)v32 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v32; ++i )
    {
      if ( i >= (unsigned int)v32 )
        sub_1B00F30(Instance, v24, v29, v30);
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
        if ( !v28 )
          goto LABEL_49;
        items = v28->fields._items;
        v36 = Method_System_Collections_Generic_List_int__Add__;
        ++v28->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            v34,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v28->fields._size = size + 1;
          items->m_Items[size + 1] = v34;
        }
      }
LABEL_43:
      LODWORD(v32) = v31->max_length;
    }
  }
  if ( !v28 )
    goto LABEL_49;
  v38 = UnityEngine_Random__Range_68037396(0, v28->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v28,
           v38,
           (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
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
    (const MethodInfo_3084C30 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_48DDFE6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v3);
    byte_48DDFE6 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1B00F28(0LL, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_3084E24 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  RandomLimitCountManager_c *v2; // x0

  if ( (byte_48DDFE4 & 1) == 0 )
  {
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v1);
    byte_48DDFE4 = 1;
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
  if ( (byte_48DDFE3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v4);
    byte_48DDFE3 = 1;
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
      sub_1B00F28(0LL, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_3084DB8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}