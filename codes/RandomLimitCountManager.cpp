void __fastcall RandomLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_object__int__o *v8; // x19

  if ( (byte_4B11A14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v6, v7);
    byte_4B11A14 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 v1,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  RandomLimitCountManager_TypeInfo->static_fields->choiceRandomLimitCountDic = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_1BCA784(RandomLimitCountManager_TypeInfo->static_fields, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RandomLimitCountManager__GenerateKey(
        int64_t userId,
        int64_t userSvtId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_array *v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF
  int64_t v13; // [xsp+10h] [xbp-30h] BYREF
  int64_t v14; // [xsp+18h] [xbp-28h] BYREF

  v13 = userSvtId;
  v14 = userId;
  v12 = groupIndex;
  if ( (byte_4B11A10 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, userSvtId, *(_QWORD *)&groupIndex);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v4, v5);
    byte_4B11A10 = 1;
  }
  v6 = (System_String_array *)sub_1BCA888(string___TypeInfo, 5LL);
  v7 = System_Int64__ToString((int64_t)&v14, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  if ( !v6->max_length )
    goto LABEL_10;
  v6->m_Items[0] = v7;
  v7 = (System_String_o *)sub_1BCA784(v6->m_Items, v7);
  if ( v6->max_length <= 1 )
    goto LABEL_10;
  v9 = StringLiteral_1541/*":"*/;
  v6->m_Items[1] = (System_String_o *)StringLiteral_1541/*":"*/;
  sub_1BCA784(&v6->m_Items[1], v9);
  v7 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( v6->max_length <= 2
    || (v6->m_Items[2] = v7, v7 = (System_String_o *)sub_1BCA784(&v6->m_Items[2], v7), v6->max_length <= 3)
    || (v10 = StringLiteral_1541/*":"*/,
        v6->m_Items[3] = (System_String_o *)StringLiteral_1541/*":"*/,
        sub_1BCA784(&v6->m_Items[3], v10),
        v7 = System_Int32__ToString((int32_t)&v12, 0LL),
        v6->max_length <= 4) )
  {
LABEL_10:
    sub_1BCAA44(v7, v8);
  }
  v6->m_Items[4] = v7;
  sub_1BCA784(&v6->m_Items[4], v7);
  return System_String__Concat_62414748(v6, 0LL);
}


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount(UserServantEntity_o *entity, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x20
  __int64 v39; // x21
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x21
  BalanceConfig_c **v43; // x27
  __int64 v44; // x1
  int32_t v45; // w20
  BalanceConfig_c *v46; // x8
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v50; // x1
  __int64 v51; // x21
  __int64 v52; // x22
  ServantCostumeMaster_o *v53; // x20
  int32_t v54; // w21
  ServantCostumeEntity_o *v55; // x0
  int32_t Item; // w19
  Il2CppObject *Master_object; // x0
  __int64 v58; // x1
  __int64 v59; // x21
  __int64 v60; // x22
  ServantLimitAddMaster_o *v61; // x20
  int32_t v62; // w21
  __int128 v63; // q1
  int64_t v64; // x0
  __int128 v65; // q1
  int64_t v66; // x20
  __int64 v67; // x1
  const MethodInfo *v68; // x3
  int64_t v69; // x22
  Il2CppObject *Key; // x21
  const MethodInfo *v71; // x1
  RandomLimitCountManager_c *v72; // x0
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  __int128 v75; // q0
  UserServantCollectionMaster_o *v76; // x22
  int64_t v77; // x0
  __int64 v78; // x1
  __int64 v79; // x24
  __int64 v80; // x25
  int64_t v81; // x23
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v83; // x1
  UserServantCollectionEntity_o *v84; // x22
  int32_t lv; // w23
  __int64 v86; // x24
  __int64 v87; // x25
  int32_t v88; // w0
  System_Int32_array *CostumeList_40906776; // x0
  __int64 v90; // x1
  System_Int32_array *RandomLimitCountList; // x23
  Il2CppObject *v92; // x24
  Il2CppObject *v93; // x25
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Collections_Generic_List_int__o *v97; // x22
  __int64 v98; // x8
  unsigned __int64 v99; // x20
  int32_t v100; // w26
  BalanceConfig_c *v101; // x0
  BalanceConfig_c **v102; // x21
  __int64 v103; // x27
  __int64 v104; // x28
  __int64 v105; // x27
  __int64 v106; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  __int64 v110; // x19
  __int64 v111; // x21
  int32_t v112; // w0
  RandomLimitCountManager_c *v113; // x0
  Il2CppObject *v115; // [xsp+10h] [xbp-100h]
  int32_t groupIndex; // [xsp+1Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+80h] [xbp-90h]
  ServantLimitAddEntity_o *v121; // [xsp+A0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entitya; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_4B11A12 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCostumeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v16, v17);
    sub_1BCA7E0(&int___TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    byte_4B11A12 = 1;
  }
  v121 = 0LL;
  entitya = 0LL;
  if ( entity )
  {
    v39 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    v38 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v123.fields.currentCryptoKey = v39;
    *(_QWORD *)&v123.fields.fakeValue = v38;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v123, 0LL) )
    {
      v42 = *(_QWORD *)&entity->fields.dispLimitCount.fields.currentCryptoKey;
      v41 = *(_QWORD *)&entity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
      *(_QWORD *)&v124.fields.currentCryptoKey = v42;
      *(_QWORD *)&v124.fields.fakeValue = v41;
      v43 = &BalanceConfig_TypeInfo;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v124, 0LL);
      v46 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44);
        v46 = BalanceConfig_TypeInfo;
      }
      if ( v45 <= v46->static_fields->ServantLimitMax )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
        entitya = 0LL;
        v60 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v59 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v61 = (ServantLimitAddMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
        *(_QWORD *)&v126.fields.currentCryptoKey = v60;
        *(_QWORD *)&v126.fields.fakeValue = v59;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v126, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v61 )
          goto LABEL_89;
        if ( ServantLimitAddMaster__TryGetEntity(v61, &entitya, v62, (int32_t)Instance, 0LL) )
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_89;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        v52 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
        v53 = (ServantCostumeMaster_o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
        *(_QWORD *)&v125.fields.currentCryptoKey = v52;
        *(_QWORD *)&v125.fields.fakeValue = v51;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v125, 0LL);
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                      entity->fields.dispLimitCount,
                                      0LL);
        if ( !v53 )
          goto LABEL_89;
        v55 = ServantCostumeMaster__GetEntity(v53, v54, (int32_t)Instance, 0LL);
        if ( v55 )
        {
          groupIndex = v55->fields.groupIndex;
LABEL_28:
          v63 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v120.fields.fakeValue = v63;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
          v119 = v120;
          v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v119, 0LL);
          v65 = *(_OWORD *)&entity->fields.id.fields.fakeValue;
          v66 = v64;
          *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&entity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v118.fields.fakeValue = v65;
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v118, 0LL);
          if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v67);
          Key = (Il2CppObject *)RandomLimitCountManager__GenerateKey(v66, v69, groupIndex, v68);
          if ( RandomLimitCountManager__IsChose((System_String_o *)Key, v71) )
          {
            v72 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v48);
              v72 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v72->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
              return System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                       Key,
                       (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            goto LABEL_89;
          }
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_89;
          v73 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          v75 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
          v76 = (UserServantCollectionMaster_o *)v73;
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v120.fields.fakeValue = v75;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v74);
          v117 = v120;
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v117, 0LL);
          v80 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v79 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          v81 = v77;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78);
          *(_QWORD *)&v127.fields.currentCryptoKey = v80;
          *(_QWORD *)&v127.fields.fakeValue = v79;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v127, 0LL);
          if ( !v76 )
            goto LABEL_89;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v76, v81, (int32_t)Instance, 0LL);
          if ( EntityDefinitely )
          {
            v84 = EntityDefinitely;
            lv = entity->fields.lv;
            v87 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v86 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v83);
            *(_QWORD *)&v128.fields.currentCryptoKey = v87;
            *(_QWORD *)&v128.fields.fakeValue = v86;
            v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v128, 0LL);
            CostumeList_40906776 = UserServantCollectionEntity__getCostumeList_40906776(v84, lv, v88, 0LL);
          }
          else
          {
            CostumeList_40906776 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
          }
          RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(entity, CostumeList_40906776, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
          v115 = Key;
          v92 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
          v93 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
          v97 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v94,
                                                            v95,
                                                            v96);
          System_Collections_Generic_List_int____ctor(
            v97,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !RandomLimitCountList )
            goto LABEL_89;
          v98 = *(_QWORD *)&RandomLimitCountList->max_length;
          if ( (int)v98 < 1 )
          {
LABEL_78:
            v111 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
            v110 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
            *(_QWORD *)&v131.fields.currentCryptoKey = v111;
            *(_QWORD *)&v131.fields.fakeValue = v110;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131, 0LL);
            if ( (_DWORD)Instance )
            {
              if ( !v97 )
                goto LABEL_89;
              v112 = UnityEngine_Random__Range_70113984(0, v97->fields._size, 0LL);
              Item = System_Collections_Generic_List_int___get_Item(
                       v97,
                       v112,
                       (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
            }
            else
            {
              Item = 1;
            }
            v113 = RandomLimitCountManager_TypeInfo;
            if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v48);
              v113 = RandomLimitCountManager_TypeInfo;
            }
            Instance = (DataManager_o *)v113->static_fields->choiceRandomLimitCountDic;
            if ( Instance )
            {
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)Instance,
                v115,
                Item,
                (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              return Item;
            }
LABEL_89:
            sub_1BCAA3C(Instance, v48);
          }
          v99 = 0LL;
          while ( 1 )
          {
            if ( v99 >= (unsigned int)v98 )
              sub_1BCAA44(Instance, v48);
            v100 = RandomLimitCountList->m_Items[v99 + 1];
            if ( v100 == -1 )
              goto LABEL_77;
            v101 = *v43;
            if ( !(*v43)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v101, v48);
              v101 = *v43;
            }
            v102 = v43;
            if ( v100 <= v101->static_fields->ServantLimitMax )
            {
              v121 = 0LL;
              v106 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v105 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
              *(_QWORD *)&v130.fields.currentCryptoKey = v106;
              *(_QWORD *)&v130.fields.fakeValue = v105;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v130, 0LL);
              if ( !v93 )
                goto LABEL_89;
              v43 = v102;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)v93,
                     &v121,
                     (int32_t)Instance,
                     v100,
                     0LL) )
              {
                Instance = (DataManager_o *)v121;
                if ( !v121 )
                  goto LABEL_89;
                Instance = (DataManager_o *)ServantLimitAddEntity__GetRandomGroupIndex(v121, 0LL);
              }
              else
              {
                Instance = 0LL;
              }
              if ( (_DWORD)Instance == groupIndex )
              {
LABEL_72:
                if ( !v97 )
                  goto LABEL_89;
                items = v97->fields._items;
                v108 = Method_System_Collections_Generic_List_int__Add__;
                ++v97->fields._version;
                if ( !items )
                  goto LABEL_89;
                size = v97->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v97,
                    v100,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
                }
                else
                {
                  v97->fields._size = size + 1;
                  items->m_Items[size + 1] = v100;
                }
              }
            }
            else
            {
              v104 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
              v103 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
              *(_QWORD *)&v129.fields.currentCryptoKey = v104;
              *(_QWORD *)&v129.fields.fakeValue = v103;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v129, 0LL);
              if ( !v92 )
                goto LABEL_89;
              Instance = (DataManager_o *)ServantCostumeMaster__GetEntity(
                                            (ServantCostumeMaster_o *)v92,
                                            (int32_t)Instance,
                                            v100,
                                            0LL);
              v43 = v102;
              if ( Instance && LODWORD(Instance->fields.m_CancellationTokenSource) == groupIndex )
                goto LABEL_72;
            }
LABEL_77:
            LODWORD(v98) = RandomLimitCountList->max_length;
            if ( (__int64)++v99 >= (int)v98 )
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


int32_t __fastcall RandomLimitCountManager__GetChoiceLimitCount_32000736(
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Int32_array *randomLimitCountTargets; // x8
  int64_t userId; // x20
  int64_t userSvtId; // x21
  System_String_o *Key; // x20
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  RandomLimitCountManager_c *v34; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x20
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  int32_t Item; // w19
  Il2CppObject *MasterData_object; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_int__o *v44; // x21
  struct System_Int32_array *v45; // x25
  __int64 v46; // x8
  unsigned __int64 i; // x26
  int32_t v48; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  int32_t v52; // w0
  RandomLimitCountManager_c *v53; // x8

  if ( (byte_4B11A13 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&OptionManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B11A13 = 1;
  }
  if ( !info )
    return -1;
  randomLimitCountTargets = info->fields.randomLimitCountTargets;
  if ( !randomLimitCountTargets || !*(_QWORD *)&randomLimitCountTargets->max_length )
    return -1;
  userId = info->fields.userId;
  userSvtId = info->fields.userSvtId;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  Key = RandomLimitCountManager__GenerateKey(userId, userSvtId, 0, v3);
  if ( RandomLimitCountManager__IsChose(Key, v31) )
  {
    v34 = RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v32);
      v34 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v34->static_fields->choiceRandomLimitCountDic;
    Instance = (Il2CppObject *)RandomLimitCountManager__GenerateKey(info->fields.userId, info->fields.userSvtId, 0, v33);
    if ( choiceRandomLimitCountDic )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               choiceRandomLimitCountDic,
               Instance,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_49:
    sub_1BCAA3C(Instance, v37);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v45 = info->fields.randomLimitCountTargets;
  if ( !v45 )
    goto LABEL_49;
  v46 = *(_QWORD *)&v45->max_length;
  if ( (int)v46 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v46; ++i )
    {
      if ( i >= (unsigned int)v46 )
        sub_1BCAA44(Instance, v37);
      v48 = v45->m_Items[i + 1];
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v37);
      Instance = (Il2CppObject *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        Instance = (Il2CppObject *)ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
                                     (ServantLimitSpoilerProtectionMaster_o *)MasterData_object,
                                     info->fields.svtId,
                                     v48,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_43;
      }
      Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37);
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( v48 == *((_DWORD *)Instance[11].monitor + 7) )
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v37);
        Instance = (Il2CppObject *)OptionManager__GetFriendImageLimitCount(0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_43;
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( !LODWORD(Instance[14].klass) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v37);
        Instance = (Il2CppObject *)BalanceConfig_TypeInfo;
      }
      if ( v48 <= *((_DWORD *)Instance[11].monitor + 7) )
        goto LABEL_53;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v37);
      Instance = (Il2CppObject *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_53:
        if ( !v44 )
          goto LABEL_49;
        items = v44->fields._items;
        v50 = Method_System_Collections_Generic_List_int__Add__;
        ++v44->fields._version;
        if ( !items )
          goto LABEL_49;
        size = v44->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v44,
            v48,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v44->fields._size = size + 1;
          items->m_Items[size + 1] = v48;
        }
      }
LABEL_43:
      LODWORD(v46) = v45->max_length;
    }
  }
  if ( !v44 )
    goto LABEL_49;
  v52 = UnityEngine_Random__Range_70113984(0, v44->fields._size, 0LL);
  Item = System_Collections_Generic_List_int___get_Item(
           v44,
           v52,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
  v53 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v37);
    v53 = RandomLimitCountManager_TypeInfo;
  }
  Instance = (Il2CppObject *)v53->static_fields->choiceRandomLimitCountDic;
  if ( !Instance )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)Instance,
    (Il2CppObject *)Key,
    Item,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  return Item;
}


bool __fastcall RandomLimitCountManager__IsChose(System_String_o *key, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  RandomLimitCountManager_c *v6; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  if ( (byte_4B11A11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method, v2);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v4, v5);
    byte_4B11A11 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v6->static_fields->choiceRandomLimitCountDic;
  if ( !choiceRandomLimitCountDic )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           choiceRandomLimitCountDic,
           (Il2CppObject *)key,
           (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall RandomLimitCountManager__get_EnableRandomLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  RandomLimitCountManager_c *v3; // x0

  if ( (byte_4B11A0F & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v1, v2);
    byte_4B11A0F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v1);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  return v3->static_fields->enableRandomLimitCount;
}


void __fastcall RandomLimitCountManager__set_EnableRandomLimitCount(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v4; // w21
  __int64 v5; // x1
  __int64 v6; // x2
  RandomLimitCountManager_c *v7; // x0
  System_Collections_Generic_Dictionary_object__int__o *choiceRandomLimitCountDic; // x0

  v4 = value;
  if ( (byte_4B11A0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method, v2);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v5, v6);
    byte_4B11A0E = 1;
  }
  v7 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v7 = RandomLimitCountManager_TypeInfo;
  }
  v7->static_fields->enableRandomLimitCount = v4;
  if ( !value )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7, method);
      v7 = RandomLimitCountManager_TypeInfo;
    }
    choiceRandomLimitCountDic = (System_Collections_Generic_Dictionary_object__int__o *)v7->static_fields->choiceRandomLimitCountDic;
    if ( !choiceRandomLimitCountDic )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_Dictionary_object__int___Clear(
      choiceRandomLimitCountDic,
      (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
  }
}