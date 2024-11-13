void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *v10; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ListViewSort_o *v15; // x19
  struct AutoOrganizationManager_StaticFields *v16; // x0

  if ( (byte_4B11D72 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_2636/*"AutoOrganization"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_2642/*"AutoOrganizationWaveBattle"*/, v8, v9);
    byte_4B11D72 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v10 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v10, (System_String_o *)StringLiteral_2636/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v10;
  sub_1BCA784(&static_fields->autoOrganizationInfo, v10);
  v15 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v12, v13, v14);
  ListViewSort___ctor_41480716(v15, (System_String_o *)StringLiteral_2642/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v16 = AutoOrganizationManager_TypeInfo->static_fields;
  v16->waveBattleAutoOrganizationInfo = v15;
  sub_1BCA784(&v16->waveBattleAutoOrganizationInfo, v15);
}


void __fastcall AutoOrganizationManager___ctor(AutoOrganizationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationEquip(
        int32_t eventId,
        System_Collections_Generic_List_int__o *organizedEquipIdList,
        const MethodInfo *method)
{
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 Master_object; // x0
  const MethodInfo *v58; // x1
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_HashSet_int__o *v67; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_HashSet_int__o *v71; // x23
  __int64 v72; // x2
  __int64 v73; // x3
  AutoOrganizationServantBonusFilterEquipComponent_c *v74; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  __int64 v78; // x1
  Il2CppObject *v79; // x27
  int v80; // w28
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  int v89; // w8
  __int64 v90; // x29
  unsigned int v91; // w24
  __int64 v92; // x8
  __int64 v93; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v95; // x25
  __int64 v96; // x26
  __int64 v97; // x27
  int32_t v98; // w0
  __int64 v99; // x26
  __int64 v100; // x27
  int32_t v101; // w0
  __int64 v102; // x26
  __int64 v103; // x1
  __int128 v104; // q0
  __int64 v105; // x1
  __int64 v106; // x27
  __int64 v107; // x28
  int32_t v108; // w0
  int32_t v109; // w2
  int32_t atk; // w8
  Il2CppObject *v111; // x8
  float v112; // s13
  __int64 v113; // x1
  float v114; // s13
  __int64 v115; // x27
  __int64 v116; // x28
  float v117; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x27
  AutoOrganizationManager_c *v119; // x0
  float v120; // s0
  AutoOrganizationManager_c *v121; // x0
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  Il2CppClass **v125; // x0
  __int64 v126; // x26
  __int64 v127; // x27
  int32_t v128; // w0
  __int64 v129; // x25
  __int64 v130; // x26
  struct System_Int32_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  System_Comparison_T__o *v134; // x19
  Il2CppObject *v135; // x21
  struct AutoOrganizationManager___c_StaticFields *v136; // x0
  System_Collections_Generic_HashSet_int__o *v138; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v139; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-C0h]
  int v142; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  if ( (byte_4B11D6B & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, organizedEquipIdList, method);
    sub_1BCA7E0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v43, v44);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47, v48);
    sub_1BCA7E0(&ServantBonusFilterSelectMenu_TypeInfo, v49, v50);
    sub_1BCA7E0(&AutoOrganizationManager_ServantData_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, v53, v54);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v55, v56);
    byte_4B11D6B = 1;
  }
  entity = 0LL;
  v142 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, organizedEquipIdList);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       v60,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v139 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v67 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v64,
                                                       v65,
                                                       v66);
  System_Collections_Generic_HashSet_int____ctor(
    v67,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v71 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v68,
                                                       v69,
                                                       v70);
  System_Collections_Generic_HashSet_int____ctor(
    v71,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v58);
    Master_object = (__int64)AutoOrganizationManager__GetEventBonusIds(eventId, v58);
    if ( !Master_object )
      goto LABEL_98;
    v138 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *(int *)(Master_object + 32) >= 1 )
    {
      v74 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v58);
        v74 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v74->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
      v79 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v78);
      Master_object = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v142 = 0;
      if ( (int)Master_object >= 1 )
      {
        v80 = Master_object;
        while ( 1 )
        {
          v81 = System_Int32__ToString((int32_t)&v142, 0LL);
          v82 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v81, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v82, 0LL) )
          {
            v83 = System_Int32__ToString((int32_t)&v142, 0LL);
            v84 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v83, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_70111952(v84, 0LL);
            if ( !v71 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v71,
              Master_object,
              (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v85 = System_Int32__ToString((int32_t)&v142, 0LL);
          v86 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v85, 0LL);
          Master_object = UnityEngine_PlayerPrefs__HasKey(v86, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v87 = System_Int32__ToString((int32_t)&v142, 0LL);
            v88 = System_String__Concat_62401220(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v87, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_70111952(v88, 0LL);
            if ( !v79 )
              goto LABEL_98;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)v79,
                                       Master_object,
                                       0LL);
            if ( !Master_object )
              goto LABEL_98;
            v89 = *(_DWORD *)(Master_object + 24);
            v90 = Master_object;
            if ( v89 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v142 >= v80 )
            goto LABEL_34;
        }
        v91 = 0;
        while ( 1 )
        {
          if ( v91 >= v89 )
LABEL_99:
            sub_1BCAA44(Master_object, v58);
          v92 = *(_QWORD *)(v90 + 8LL * (int)v91 + 32);
          if ( !v92 || !v71 )
            break;
          Master_object = System_Collections_Generic_HashSet_int___Add(
                            v71,
                            *(_DWORD *)(v92 + 20),
                            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v89 = *(_DWORD *)(v90 + 24);
          if ( (int)++v91 >= v89 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1BCAA3C(Master_object, v58);
      }
    }
  }
  else
  {
    v138 = v67;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  v93 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v93 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v93; ++i )
    {
      if ( i >= (unsigned int)v93 )
        goto LABEL_99;
      v95 = ServantEquipList->m_Items[i];
      if ( !v95 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v97 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v96 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
        *(_QWORD *)&v144.fields.currentCryptoKey = v97;
        *(_QWORD *)&v144.fields.fakeValue = v96;
        v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v144, 0LL);
        Master_object = System_Collections_Generic_List_int___Contains(
                          organizedEquipIdList,
                          v98,
                          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v71 )
        goto LABEL_98;
      if ( v71->fields._count >= 1 )
      {
        v100 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v99 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
        *(_QWORD *)&v145.fields.currentCryptoKey = v100;
        *(_QWORD *)&v145.fields.fakeValue = v99;
        v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v145, 0LL);
        Master_object = System_Collections_Generic_HashSet_int___Contains(
                          v71,
                          v101,
                          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = UserServantEntity__IsFriendShipSvtEquip(v95, 0LL);
      if ( (Master_object & 1) != 0 )
        goto LABEL_89;
      v102 = sub_1BCAA2C(AutoOrganizationManager_ServantData_TypeInfo, v58, v72, v73);
      System_Object___ctor((Il2CppObject *)v102, 0LL);
      *(_DWORD *)(v102 + 16) = 0;
      *(_QWORD *)(v102 + 32) = 0LL;
      *(_QWORD *)(v102 + 24) = 0LL;
      *(_QWORD *)(v102 + 44) = 0LL;
      *(_DWORD *)(v102 + 64) = 0;
      *(_BYTE *)(v102 + 68) = 0;
      *(_DWORD *)(v102 + 72) = 0;
      v104 = *(_OWORD *)&v95->fields.id.fields.fakeValue;
      *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&v95->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v141.fields.fakeValue = v104;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v103);
      v140 = v141;
      *(_QWORD *)(v102 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v140, 0LL);
      v107 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
      v106 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v105);
      *(_QWORD *)&v146.fields.currentCryptoKey = v107;
      *(_QWORD *)&v146.fields.fakeValue = v106;
      v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v146, 0LL);
      *(_DWORD *)(v102 + 16) = v108;
      v109 = v108;
      atk = v95->fields.atk;
      Master_object = (__int64)v139;
      *(_DWORD *)(v102 + 48) = 0;
      *(_DWORD *)(v102 + 36) = atk;
      if ( !v139 )
        goto LABEL_98;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v139,
                        &entity,
                        v109,
                        (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        v111 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v102 + 64) = entity[9].monitor;
        *(_DWORD *)(v102 + 44) = v111[13].klass;
      }
      Master_object = (__int64)v138;
      if ( !v138 )
        goto LABEL_98;
      if ( v138->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v138,
             *(_DWORD *)(v102 + 16),
             (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v112 = *(float *)(v102 + 48) + 50000.0;
        *(float *)(v102 + 48) = v112;
        v114 = v112 + (float)((float)UserServantEntity__getRarity(v95, 0LL) * 100000.0);
        *(float *)(v102 + 48) = v114;
        v116 = *(_QWORD *)&v95->fields.limitCount.fields.currentCryptoKey;
        v115 = *(_QWORD *)&v95->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v113);
        *(_QWORD *)&v147.fields.currentCryptoKey = v116;
        *(_QWORD *)&v147.fields.fakeValue = v115;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v147, 0LL);
        v117 = v114 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = (__int64)UserServantEntity__GetEquipCategoryIdList(v95, 0, 0LL);
      if ( Master_object )
      {
        v118 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v119 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v58);
          v119 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = System_Linq_Enumerable__Contains_int_(
                          v118,
                          v119->static_fields->CATEGORY_ID_NP_GAIN,
                          (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
        {
          v120 = *(float *)(v102 + 48) + 40000.0;
        }
        else
        {
          v121 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v58);
            v121 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = System_Linq_Enumerable__Contains_int_(
                            v118,
                            v121->static_fields->CATEGORY_ID_NP_REGAIN,
                            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (Master_object & 1) == 0 )
            goto LABEL_73;
          v120 = *(float *)(v102 + 48) + 30000.0;
        }
        *(float *)(v102 + 48) = v120;
      }
LABEL_73:
      v117 = *(float *)(v102 + 48) + (float)*(int *)(v102 + 36);
LABEL_74:
      *(float *)(v102 + 48) = v117;
      if ( !v63 )
        goto LABEL_98;
      items = v63->fields._items;
      v123 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v63->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v63->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          (Il2CppObject *)v102,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v125 = &items->obj.klass + size;
        v63->fields._size = size + 1;
        v125[4] = (Il2CppClass *)v102;
        Master_object = sub_1BCA784(v125 + 4, v102);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v127 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
      v126 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
      *(_QWORD *)&v148.fields.currentCryptoKey = v127;
      *(_QWORD *)&v148.fields.fakeValue = v126;
      v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v148, 0LL);
      Master_object = System_Collections_Generic_List_int___Contains(
                        organizedEquipIdList,
                        v128,
                        (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        v130 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
        v129 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
        *(_QWORD *)&v149.fields.currentCryptoKey = v130;
        *(_QWORD *)&v149.fields.fakeValue = v129;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v149, 0LL);
        v131 = organizedEquipIdList->fields._items;
        v132 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v131 )
          goto LABEL_98;
        v133 = organizedEquipIdList->fields._size;
        v58 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v133 >= v131->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            Master_object,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v133 + 1;
          v131->m_Items[v133 + 1] = Master_object;
        }
      }
LABEL_89:
      LODWORD(v93) = ServantEquipList->max_length;
    }
  }
  Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v58);
    Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  }
  v134 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 56LL);
  if ( !v134 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v58);
      Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
    }
    v135 = **(Il2CppObject ***)(Master_object + 184);
    v134 = (System_Comparison_T__o *)sub_1BCAA2C(
                                       System_Comparison_AutoOrganizationManager_ServantData__TypeInfo,
                                       v58,
                                       v72,
                                       v73);
    System_Comparison_object____ctor(
      v134,
      v135,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__,
      0LL);
    v136 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v136->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v134;
    Master_object = sub_1BCA784(&v136->__9__21_0, v134);
  }
  if ( !v63 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_56244000(
    v63,
    v134,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v63,
                                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
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
  __int64 v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  __int64 v43; // x1
  __int64 Master_object; // x0
  __int64 v45; // x1
  UserServantEntity_array *OrganizationList; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x19
  UserServantEntity_o *v49; // x28
  __int64 v50; // x27
  __int64 v51; // x29
  const MethodInfo *v52; // x2
  int32_t v53; // w29
  const MethodInfo *v54; // x2
  int32_t v55; // w27
  const MethodInfo *v56; // x2
  int32_t v57; // w27
  bool UniqueSvtRestriction; // w27
  __int64 v59; // x2
  __int64 v60; // x3
  System_Predicate_object__o *v61; // x29
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int128 v66; // q0
  Il2CppObject *v67; // x29
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  int64_t v70; // x27
  float AdjustTotalRate; // s8
  __int128 v72; // q0
  int32_t atk; // w8
  __int64 v74; // x29
  __int64 v75; // x1
  __int128 v76; // q0
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  int64_t v79; // x27
  float v80; // s0
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  System_Predicate_object__o **v86; // [xsp+8h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // [xsp+10h] [xbp-120h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4B11D68 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, restrictionInfo, organizedServantIds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v30, v31);
    sub_1BCA7E0(&AutoOrganizationManager_ServantData_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v34, v35);
    sub_1BCA7E0(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v36, v37);
    byte_4B11D68 = 1;
  }
  entity = 0LL;
  v38 = sub_1BCAA2C(
          AutoOrganizationManager___c__DisplayClass18_0_TypeInfo,
          restrictionInfo,
          organizedServantIds,
          questAutoOrganizationAdjustEntities);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_65;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_65;
  v47 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0LL;
    v86 = (System_Predicate_object__o **)(v38 + 24);
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v48 >= (unsigned int)v47 )
        sub_1BCAA44(Master_object, v45);
      v49 = m_Items[v48];
      if ( !v49 )
        goto LABEL_34;
      Master_object = UserServantEntity__getRarity(m_Items[v48], 0LL);
      if ( rarityBit != 31 && (_DWORD)Master_object == 0
        || (rarityBit & 1) == 0 && (_DWORD)Master_object == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_object == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_object == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_object == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_object == 5 )
      {
        goto LABEL_34;
      }
      v50 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
      *(_QWORD *)&v97.fields.currentCryptoKey = v50;
      *(_QWORD *)&v97.fields.fakeValue = v51;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v97, 0LL);
      if ( !v38 )
        goto LABEL_65;
      v53 = Master_object;
      *(_DWORD *)(v38 + 16) = Master_object;
      if ( organizedServantIds )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                          Master_object,
                          (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
          goto LABEL_34;
        v53 = *(_DWORD *)(v38 + 16);
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v45);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, v53, v52);
      if ( (Master_object & 1) == 0 )
      {
        v55 = *(_DWORD *)(v38 + 16);
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v45);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v55, v54);
        if ( (Master_object & 1) == 0 )
        {
          v57 = *(_DWORD *)(v38 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v45);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v57, v56);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v49, 0LL);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v49, restrictionInfo, 1, 0LL);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v49, restrictionInfo, 0LL);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v49, restrictionInfo, 0LL);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v61 = *v86;
                  if ( !*v86 )
                  {
                    v61 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                          System_Predicate_AutoOrganizationManager_ServantData__TypeInfo,
                                                          v45,
                                                          v59,
                                                          v60);
                    System_Predicate_object____ctor(
                      v61,
                      (Il2CppObject *)v38,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    *(_QWORD *)(v38 + 24) = v61;
                    Master_object = sub_1BCA784(v86, v61);
                  }
                  if ( !v42 )
                    goto LABEL_65;
                  v62 = System_Collections_Generic_List_object___Find(
                          v42,
                          (System_Predicate_T__o *)v61,
                          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v62 )
                  {
                    v66 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
                    v67 = v62;
                    *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v95.fields.fakeValue = v66;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63);
                    v94 = v95;
                    v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v94, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v68);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v70,
                                        v69);
                    if ( (float)(AdjustTotalRate * (float)v49->fields.atk) >= (float)(*(float *)&v67[4].monitor
                                                                                    * (float)SHIDWORD(v67[2].klass)) )
                    {
                      v72 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
                      *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v95.fields.fakeValue = v72;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45);
                      v93 = v95;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v93, 0LL);
                      v67[1].monitor = (void *)Master_object;
                      atk = v49->fields.atk;
                      *(float *)&v67[4].monitor = AdjustTotalRate;
                      HIDWORD(v67[2].klass) = atk;
                    }
                  }
                  else
                  {
                    v74 = sub_1BCAA2C(AutoOrganizationManager_ServantData_TypeInfo, v63, v64, v65);
                    System_Object___ctor((Il2CppObject *)v74, 0LL);
                    *(_DWORD *)(v74 + 16) = 0;
                    *(_QWORD *)(v74 + 44) = 0LL;
                    *(_DWORD *)(v74 + 64) = 0;
                    *(_BYTE *)(v74 + 68) = 0;
                    *(_DWORD *)(v74 + 72) = 0;
                    *(_QWORD *)(v74 + 24) = 0LL;
                    *(_QWORD *)(v74 + 32) = 0LL;
                    v76 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
                    *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v95.fields.fakeValue = v76;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v75);
                    v92 = v95;
                    *(_QWORD *)(v74 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                              &v92,
                                              0LL);
                    *(_DWORD *)(v74 + 16) = *(_DWORD *)(v38 + 16);
                    *(_DWORD *)(v74 + 32) = UserServantEntity__getSvtClassId(v49, 0, 0LL);
                    *(_DWORD *)(v74 + 36) = v49->fields.atk;
                    v79 = *(_QWORD *)(v74 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v77);
                    v80 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v79,
                            v78);
                    Master_object = (__int64)v87;
                    *(float *)(v74 + 72) = v80;
                    if ( !v87 )
                      goto LABEL_65;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v87,
                                      &entity,
                                      *(_DWORD *)(v74 + 16),
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_65;
                      *(_DWORD *)(v74 + 64) = entity[9].monitor;
                    }
                    items = v42->fields._items;
                    v82 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v42->fields._version;
                    if ( !items )
                      goto LABEL_65;
                    size = v42->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v42,
                        (Il2CppObject *)v74,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v84 = &items->obj.klass + size;
                      v42->fields._size = size + 1;
                      v84[4] = (Il2CppClass *)v74;
                      Master_object = sub_1BCA784(v84 + 4, v74);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      LODWORD(v47) = OrganizationList->max_length;
    }
    while ( (__int64)++v48 < (int)v47 );
  }
  Master_object = (__int64)v42;
  if ( !v42 )
LABEL_65:
    sub_1BCAA3C(Master_object, v45);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v42,
                                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4B11D65 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    byte_4B11D65 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_1BCAA3C(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  Il2CppObject *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_T__TResult__o *v25; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  AutoOrganizationManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v33; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B11D70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_float__float___, userSvtId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v6, v7);
    sub_1BCA7E0(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_float__float__float__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__, v12, v13);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__, v14, v15);
    sub_1BCA7E0(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v18, v19);
    byte_4B11D70 = 1;
  }
  v20 = (Il2CppObject *)sub_1BCAA2C(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo, userSvtId, method, v3);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  v20[1].klass = (Il2CppClass *)userSvtId;
  v25 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo,
                                       v22,
                                       v23,
                                       v24);
  System_Func_object__float____ctor(
    v25,
    v20,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v25,
          (const MethodInfo_2F43DD4 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v30 = AutoOrganizationManager___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v27);
    v30 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__26_1 = v30->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v27);
      v30 = AutoOrganizationManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__26_1 = (System_Func_float__float__float__o *)sub_1BCAA2C(
                                                       System_Func_float__float__float__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v33,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1BCA784(&static_fields->__9__26_1, _9__26_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v31,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_2F1BF28 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate_32378360(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  Il2CppObject *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_T__TResult__o *v26; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  AutoOrganizationManager___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v34; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4B11D71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_float__float___, individualities, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v6, v7);
    sub_1BCA7E0(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_float__float__float__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__, v12, v13);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__, v14, v15);
    sub_1BCA7E0(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v18, v19);
    byte_4B11D71 = 1;
  }
  v20 = (Il2CppObject *)sub_1BCAA2C(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo, individualities, method, v3);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  v20[1].klass = (Il2CppClass *)individualities;
  sub_1BCA784(&v20[1], individualities);
  v26 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo,
                                       v23,
                                       v24,
                                       v25);
  System_Func_object__float____ctor(
    v26,
    v20,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v26,
          (const MethodInfo_2F43DD4 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v31 = AutoOrganizationManager___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v28);
    v31 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v31->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v28);
      v31 = AutoOrganizationManager___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1BCAA2C(
                                                       System_Func_float__float__float__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v34,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1BCA784(&static_fields->__9__27_1, _9__27_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v32,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_2F1BF28 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_41507520; // x0
  __int64 v6; // x1
  System_Boolean_array *v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  unsigned __int64 max_length; // x8
  _BOOL4 v11; // w9
  bool v12; // w8
  bool v13; // zf
  bool v14; // w9
  char v15; // w11
  unsigned int v16; // w8
  unsigned __int64 v17; // x9
  bool v18; // cf
  __int64 v19; // x8
  int v20; // w11
  _BOOL4 v21; // w13
  __int64 v22; // x9
  unsigned int v23; // w10
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x8
  __int64 v26; // x10
  __int64 v27; // x12
  unsigned __int64 v28; // x10
  _BOOL4 v29; // w14

  if ( (byte_4B11D66 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, settingUnitNum, method);
    byte_4B11D66 = 1;
  }
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1BCAA3C(Filter_41507520, v6);
  v7 = (System_Boolean_array *)Filter_41507520;
  v8 = 0LL;
  v9 = Filter_41507520 + 32;
  do
  {
    Filter_41507520 = ListViewSort__GetFilter_41507520(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_38;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_41507520 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1BCAA44(Filter_41507520, v6);
  v11 = v7->m_Items[5];
  v12 = !v7->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v7->m_Items[4] |= v15;
  v7->m_Items[5] = v14 || v12;
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 5LL);
  v16 = v7->max_length;
  v17 = 0LL;
  v18 = v16 >= 2;
  v19 = v16 - 2;
  if ( (_DWORD)v19 == 0 || !v18 )
    v19 = 0LL;
  LOBYTE(v20) = 1;
  do
  {
    if ( v19 == v17 )
      goto LABEL_37;
    if ( !Filter_41507520 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_41507520 + 24) )
      goto LABEL_37;
    v21 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_41507520 + 32 + v17++) = v21;
    v20 = (unsigned __int8)v20 & !v21;
  }
  while ( v17 != 5 );
  if ( v20 )
  {
    v22 = 0LL;
    while ( v19 != v22 )
    {
      v7->m_Items[v22++ + 6] = 1;
      if ( v22 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 6LL);
  v23 = v7->max_length;
  v24 = 0LL;
  LODWORD(v25) = 0;
  v18 = v23 >= 7;
  v26 = v23 - 7;
  if ( (_DWORD)v26 != 0 && v18 )
    v27 = v26;
  else
    v27 = 0LL;
  do
  {
    if ( v27 == v24 )
      goto LABEL_37;
    if ( !Filter_41507520 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_41507520 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = v7->m_Items[v24 + 11];
    *(_BYTE *)(Filter_41507520 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0LL;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_41507520 + 32 + v25++) = 1;
      if ( v25 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v25;
  return v7;
}


System_Collections_Generic_HashSet_int__o *__fastcall AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_HashSet_int__o *v59; // x19
  __int64 v60; // x1
  __int64 Master_object; // x0
  __int64 v62; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x20
  System_Int32_array *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x1
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x24
  System_Collections_Generic_List_object__o *v77; // x26
  AutoOrganizationManager___c_c *v78; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v80; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_object__o *v89; // x0
  int32_t v90; // w25
  int v91; // w8
  __int64 v92; // x26
  __int64 v93; // x26
  __int64 v94; // x21
  __int64 v95; // x27
  int v96; // w8
  __int64 v97; // x27
  int v98; // w24
  char v99; // w20
  __int64 v100; // x21
  SkillLvEntity_o *v101; // x28
  __int64 v102; // x21
  __int64 v103; // x29
  int32_t v104; // w21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  EventUpValInfo_o *v108; // x29
  __int64 v109; // x21
  __int64 v110; // x27
  int v111; // w8
  __int64 v112; // x26
  unsigned int v113; // w20
  __int64 v114; // x8
  ServantSkillMaster_o *v116; // [xsp+8h] [xbp-88h]
  Il2CppObject *v117; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v118; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  if ( (byte_4B11D6C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventBonusFilterEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v21, v22);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v35, v36);
    sub_1BCA7E0(&int___TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v47, v48);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v49, v50);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillInfo__TypeInfo, v51, v52);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v54);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__, v55, v56);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v57, v58);
    byte_4B11D6C = 1;
  }
  eventUpVallInfo = 0LL;
  v59 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v59,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0LL, 0LL);
  if ( !EventValUpEventIdHash )
    return v59;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v59;
  }
  v65 = System_Linq_Enumerable__ToArray_int_(
          v64,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v66, v67, v68);
  EventUpValSetupInfo___ctor_39629568(setupInfo, v65, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
  v117 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v116 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v70 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v71 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v62 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v71 )
LABEL_61:
    sub_1BCAA3C(Master_object, v62);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v71,
                 (System_Int32_array *)Master_object,
                 1,
                 0LL);
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)v117;
  if ( FilterList )
  {
    v77 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v78 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v73);
        v78 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v78->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78, v73);
          v78 = AutoOrganizationManager___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v78->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                               System_Comparison_EventBonusFilterEntity__TypeInfo,
                                               v73,
                                               v74,
                                               v75);
        System_Comparison_object____ctor(
          _9__22_0,
          v80,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1BCA784(&static_fields->__9__22_0, _9__22_0);
      }
      System_Collections_Generic_List_object___Sort_56244000(
        v77,
        _9__22_0,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                           v82,
                                                           v83,
                                                           v84);
      System_Collections_Generic_List_object____ctor(
        v85,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v89 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                           v86,
                                                           v87,
                                                           v88);
      System_Collections_Generic_List_object____ctor(
        v89,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v77->fields._size >= 1 )
      {
        v90 = 0;
        v118 = v77;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v77,
                                     v90,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v91 = *(_DWORD *)(Master_object + 20);
          v92 = Master_object;
          if ( v91 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v92 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v111 = *(_DWORD *)(Master_object + 24);
            v112 = Master_object;
            if ( v111 >= 1 )
            {
              v113 = 0;
              while ( v113 < v111 )
              {
                v114 = *(_QWORD *)(v112 + 8LL * (int)v113 + 32);
                if ( !v114 || !v59 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v59,
                                  *(_DWORD *)(v114 + 20),
                                  (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v111 = *(_DWORD *)(v112 + 24);
                if ( (int)++v113 >= v111 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1BCAA44(Master_object, v62);
            }
          }
          else if ( v91 == 1 )
          {
            if ( !v76 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v76,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v93 = Master_object;
            v95 = *(_QWORD *)(Master_object + 16);
            v94 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
            *(_QWORD *)&v121.fields.currentCryptoKey = v95;
            *(_QWORD *)&v121.fields.fakeValue = v94;
            v62 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v121, 0LL);
            Master_object = (__int64)v116;
            if ( !v116 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v116, v62, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v96 = *(_DWORD *)(Master_object + 24);
            v97 = Master_object;
            if ( v96 >= 1 )
            {
              v98 = 0;
              v99 = 0;
              do
              {
                if ( v98 >= (unsigned int)v96 )
                  goto LABEL_62;
                v100 = *(_QWORD *)(v97 + 8LL * v98 + 32);
                if ( !v100 || !v70 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)v70,
                                           *(_DWORD *)(v100 + 28),
                                           1,
                                           0LL);
                if ( Master_object && !*(_DWORD *)(v100 + 44) )
                {
                  v101 = (SkillLvEntity_o *)Master_object;
                  v102 = *(_QWORD *)(v93 + 16);
                  v103 = *(_QWORD *)(v93 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
                  *(_QWORD *)&v122.fields.currentCryptoKey = v102;
                  *(_QWORD *)&v122.fields.fakeValue = v103;
                  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v122, 0LL);
                  v108 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v105, v106, v107);
                  EventUpValInfo___ctor(v108, setupInfo, v104, 1, 1, 0, 0LL);
                  eventUpVallInfo = v108;
                  Master_object = SkillLvEntity__getEventUpVal_40683416(v101, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v99 |= Master_object;
                }
                v96 = *(_DWORD *)(v97 + 24);
                ++v98;
              }
              while ( v98 < v96 );
              v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)v117;
              if ( (v99 & 1) != 0 )
              {
                v110 = *(_QWORD *)(v93 + 16);
                v109 = *(_QWORD *)(v93 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
                *(_QWORD *)&v123.fields.currentCryptoKey = v110;
                *(_QWORD *)&v123.fields.fakeValue = v109;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v123, 0LL);
                if ( !v59 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v59,
                  Master_object,
                  (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v77 = v118;
          ++v90;
        }
        while ( v90 < v118->fields._size );
      }
    }
  }
  return v59;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *v6; // x8

  if ( !rarityFlag )
    sub_1BCAA3C(0LL, method);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
        sub_1BCAA44(v5, method);
      if ( v6[v4] )
        v5 = (1 << v4) | (unsigned int)v5;
    }
    ++v4;
  }
  while ( v4 != 5 );
  return v5;
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 Filter_41507568; // x0
  __int64 v5; // x1
  System_Boolean_array *v6; // x19
  unsigned __int64 v7; // x21
  __int64 v8; // x23
  unsigned __int64 max_length; // x8
  _BOOL4 v10; // w9
  bool v11; // w8
  bool v12; // zf
  bool v13; // w9
  char v14; // w11
  unsigned int v15; // w8
  unsigned __int64 v16; // x9
  bool v17; // cf
  __int64 v18; // x8
  int v19; // w11
  _BOOL4 v20; // w13
  __int64 v21; // x9

  if ( (byte_4B11D67 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    byte_4B11D67 = 1;
  }
  Filter_41507568 = sub_1BCA888(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1BCAA3C(Filter_41507568, v5);
  v6 = (System_Boolean_array *)Filter_41507568;
  v7 = 0LL;
  v8 = Filter_41507568 + 32;
  do
  {
    Filter_41507568 = ListViewSort__GetFilter_41507568(sort, v7, 0LL);
    if ( !v6 )
      goto LABEL_25;
    max_length = v6->max_length;
    if ( v7 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v8 + v7++) = Filter_41507568 & 1;
  }
  while ( v7 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1BCAA44(Filter_41507568, v5);
  v10 = v6->m_Items[5];
  v11 = !v6->m_Items[4];
  v12 = !v10;
  v13 = v10;
  v14 = v12;
  v6->m_Items[4] |= v14;
  v6->m_Items[5] = v13 || v11;
  Filter_41507568 = sub_1BCA888(bool___TypeInfo, 5LL);
  v15 = v6->max_length;
  v16 = 0LL;
  v17 = v15 >= 2;
  v18 = v15 - 2;
  if ( (_DWORD)v18 == 0 || !v17 )
    v18 = 0LL;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 == v16 )
      goto LABEL_24;
    if ( !Filter_41507568 )
      goto LABEL_25;
    if ( v16 >= *(unsigned int *)(Filter_41507568 + 24) )
      goto LABEL_24;
    v20 = v6->m_Items[v16 + 6];
    *(_BYTE *)(Filter_41507568 + 32 + v16++) = v20;
    v19 = (unsigned __int8)v19 & !v20;
  }
  while ( v16 != 5 );
  if ( v19 )
  {
    v21 = 0LL;
    while ( v18 != v21 )
    {
      v6->m_Items[v21++ + 6] = 1;
      if ( v21 == 5 )
        return v6;
    }
    goto LABEL_24;
  }
  return v6;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4B11D64 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    byte_4B11D64 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_1BCAA3C(autoOrganizationInfo, v1);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t allOutBattleGroupNo; // w21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B11D6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B11D6E = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           (UserEventAlloutBattleMaster_o *)Master_object,
           svtId,
           restrictionInfo->fields.eventId,
           allOutBattleGroupNo,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AutoOrganizationManager__IsDataLost(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v12; // x1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11D6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B11D6F = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_19;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          UserId,
          restrictionInfo->fields.dataLostBattleId,
          0LL) )
    return 0;
  UserId = (int64_t)entity;
  if ( !entity || (UserId = UserEventDataLostEntity__IsRestart(entity, svtId, 0LL), !entity) )
LABEL_19:
    sub_1BCAA3C(UserId, v12);
  if ( (UserId & 1) != 0 )
  {
    if ( UserEventDataLostEntity__GetTimesToRestart(entity, svtId, 0LL) >= 1 )
      return 1;
  }
  else if ( UserEventDataLostEntity__IsDataLost(entity, svtId, 0LL) )
  {
    return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AutoOrganizationManager__IsFatigue(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11D6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B11D6D = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v10);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v12 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  return v12 > NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t monitor_high; // w20
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
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 v33; // x1
  Il2CppObject *Master_object; // x0
  __int64 v35; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x29
  int32_t klass; // w22
  _BOOL8 v41; // x0
  __int64 v42; // x1
  float Rate; // s0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  AutoOrganizationManager___c_c *v47; // x0
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v49; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4B11D69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76806320, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v28, v29);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v30, v31);
    byte_4B11D69 = 1;
  }
  entity = 0LL;
  memset(&v54, 0, sizeof(v54));
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       *(_QWORD *)&enemyClassId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235344(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76806320);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v32 )
LABEL_32:
    sub_1BCAA3C(Master_object, v35);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v32,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v37 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1BCAA3C(v37, v38);
    if ( !v36 )
      sub_1BCAA3C(v37, v38);
    klass = (int32_t)v54.fields._current[2].klass;
    v41 = DataMasterBase_object__object__int___TryGetEntity(
            v36,
            &entity,
            klass,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v41 )
    {
      if ( !entity )
        sub_1BCAA3C(v41, v42);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v47 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v44);
    v47 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T__TResult__o *)v47->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47, v44);
      v47 = AutoOrganizationManager___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v47->static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_AutoOrganizationManager_ServantData__float__TypeInfo,
                                              v44,
                                              v45,
                                              v46);
    System_Func_object__float____ctor(
      _9__19_0,
      v49,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1BCA784(&static_fields->__9__19_0, _9__19_0);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_2F3BA08 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v51,
                                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortServant(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t monitor_high; // w20
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x19
  __int64 v51; // x1
  Il2CppObject *Master_object; // x0
  __int64 v53; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x21
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x27
  int32_t klass; // w22
  _BOOL8 v59; // x0
  __int64 v60; // x1
  float Rate; // s8
  float v62; // s0
  float v63; // s0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  AutoOrganizationManager___c_c *v67; // x0
  System_Func_T__TResult__o *_9__20_0; // x20
  Il2CppObject *v69; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  AutoOrganizationManager___c_c *v75; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v78; // x21
  struct AutoOrganizationManager___c_StaticFields *v79; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  AutoOrganizationManager___c_c *v84; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v85; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v87; // x21
  struct AutoOrganizationManager___c_StaticFields *v88; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  AutoOrganizationManager___c_c *v93; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v94; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v96; // x21
  struct AutoOrganizationManager___c_StaticFields *v97; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  AutoOrganizationManager___c_c *v102; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v103; // x19
  System_Func_T__TResult__o *_9__20_4; // x20
  Il2CppObject *v105; // x21
  struct AutoOrganizationManager___c_StaticFields *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4B11D6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76806320, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortServant_b__20_0__, v38, v39);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortServant_b__20_1__, v40, v41);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortServant_b__20_2__, v42, v43);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortServant_b__20_3__, v44, v45);
    sub_1BCA7E0(&Method_AutoOrganizationManager___c__SortServant_b__20_4__, v46, v47);
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v48, v49);
    byte_4B11D6A = 1;
  }
  entity = 0LL;
  memset(&v110, 0, sizeof(v110));
  v50 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       *(_QWORD *)&enemyClassId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235344(
    v50,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76806320);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v50 )
LABEL_56:
    sub_1BCAA3C(Master_object, v53);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
    v50,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v110 = v109;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v110,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v55 )
      break;
    current = v110.fields._current;
    if ( !v110.fields._current )
      sub_1BCAA3C(v55, v56);
    if ( !v54 )
      sub_1BCAA3C(v55, v56);
    klass = (int32_t)v110.fields._current[2].klass;
    v59 = DataMasterBase_object__object__int___TryGetEntity(
            v54,
            &entity,
            klass,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v59 )
    {
      if ( !entity )
        sub_1BCAA3C(v59, v60);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
    {
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
      v62 = ClassRelationMaster__getRate(monitor_high, klass, 0LL);
    }
    else
    {
      v62 = 1.0;
      Rate = 1.0;
    }
    v63 = (float)SLODWORD(current[2].monitor) / v62;
    *((float *)&current[3].klass + 1) = *(float *)&current[4].monitor
                                      * (float)(Rate * (float)SHIDWORD(current[2].klass));
    *(float *)&current[3].monitor = v63;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v110,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v67 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v64);
    v67 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_0 = (System_Func_T__TResult__o *)v67->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v64);
      v67 = AutoOrganizationManager___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__20_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_AutoOrganizationManager_ServantData__float__TypeInfo,
                                              v64,
                                              v65,
                                              v66);
    System_Func_object__float____ctor(_9__20_0, v69, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1BCA784(&static_fields->__9__20_0, _9__20_0);
  }
  v71 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v50,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2F3BA08 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v75 = AutoOrganizationManager___c_TypeInfo;
  v76 = v71;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v72);
    v75 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v75->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75, v72);
      v75 = AutoOrganizationManager___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v75->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_AutoOrganizationManager_ServantData__int__TypeInfo,
                                               v72,
                                               v73,
                                               v74);
    System_Func_object__int____ctor(_9__20_1, v78, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0LL);
    v79 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v79->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1BCA784(&v79->__9__20_1, _9__20_1);
  }
  v80 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v76,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v84 = AutoOrganizationManager___c_TypeInfo;
  v85 = v80;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v81);
    v84 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v84->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84, v81);
      v84 = AutoOrganizationManager___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v84->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_AutoOrganizationManager_ServantData__float__TypeInfo,
                                              v81,
                                              v82,
                                              v83);
    System_Func_object__float____ctor(_9__20_2, v87, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0LL);
    v88 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v88->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1BCA784(&v88->__9__20_2, _9__20_2);
  }
  v89 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v85,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_2F4B430 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v93 = AutoOrganizationManager___c_TypeInfo;
  v94 = v89;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v90);
    v93 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v93->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v93->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v93, v90);
      v93 = AutoOrganizationManager___c_TypeInfo;
    }
    v96 = (Il2CppObject *)v93->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_AutoOrganizationManager_ServantData__int__TypeInfo,
                                               v90,
                                               v91,
                                               v92);
    System_Func_object__int____ctor(_9__20_3, v96, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0LL);
    v97 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v97->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1BCA784(&v97->__9__20_3, _9__20_3);
  }
  v98 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v94,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v102 = AutoOrganizationManager___c_TypeInfo;
  v103 = v98;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v99);
    v102 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_T__TResult__o *)v102->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102, v99);
      v102 = AutoOrganizationManager___c_TypeInfo;
    }
    v105 = (Il2CppObject *)v102->static_fields->__9;
    _9__20_4 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_AutoOrganizationManager_ServantData__long__TypeInfo,
                                              v99,
                                              v100,
                                              v101);
    System_Func_object__long____ctor(_9__20_4, v105, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0LL);
    v106 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v106->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1BCA784(&v106->__9__20_4, _9__20_4);
  }
  v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                                v103,
                                                                (System_Func_TSource__TKey__o *)_9__20_4,
                                                                (const MethodInfo_2F4B364 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v107,
                                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0

  if ( (byte_4B11D62 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    byte_4B11D62 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  return v3->static_fields->autoOrganizationInfo;
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0

  if ( (byte_4B11D63 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v1, v2);
    byte_4B11D63 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  return v3->static_fields->waveBattleAutoOrganizationInfo;
}


void __fastcall AutoOrganizationManager_MySvtOrNpcData___ctor(
        AutoOrganizationManager_MySvtOrNpcData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtId = 0;
  this->fields.userSvtId = 0LL;
  this->fields.slot = 0;
}


void __fastcall AutoOrganizationManager_ServantData___ctor(
        AutoOrganizationManager_ServantData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtId = 0;
  *(_QWORD *)&this->fields.collectionNo = 0LL;
  this->fields.cost = 0;
  this->fields.used = 0;
  this->fields.questAutoOrganizationAdjustRate = 0.0;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)&this->fields.classId = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11D73 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager___c_TypeInfo, v1, v2);
    byte_4B11D73 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AutoOrganizationManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v4;
  sub_1BCA784(AutoOrganizationManager___c_TypeInfo->static_fields, v4);
}


void __fastcall AutoOrganizationManager___c___ctor(AutoOrganizationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AutoOrganizationManager___c___AutoOrganizationEquip_b__21_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *a,
        AutoOrganizationManager_ServantData_o *b,
        const MethodInfo *method)
{
  float relationNum; // s0
  float v5; // s1
  int32_t collectionNo; // w8
  int32_t v8; // w9

  if ( !a || !b )
    sub_1BCAA3C(this, a);
  relationNum = a->fields.relationNum;
  v5 = b->fields.relationNum;
  if ( relationNum > v5 )
    return -1;
  if ( relationNum < v5 )
    return 1;
  collectionNo = a->fields.collectionNo;
  v8 = b->fields.collectionNo;
  if ( collectionNo >= v8 )
    return collectionNo > v8;
  else
    return -1;
}


float __fastcall AutoOrganizationManager___c___GetAdjustTotalRate_b__26_1(
        AutoOrganizationManager___c_o *this,
        float total,
        float rate,
        const MethodInfo *method)
{
  return total * rate;
}


float __fastcall AutoOrganizationManager___c___GetAdjustTotalRate_b__27_1(
        AutoOrganizationManager___c_o *this,
        float total,
        float rate,
        const MethodInfo *method)
{
  return total * rate;
}


int32_t __fastcall AutoOrganizationManager___c___GetEventBonusIds_b__22_0(
        AutoOrganizationManager___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.relationNum;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.relationAtk;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.treasureDeviceLv;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.relationDef;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.svtId;
}


int64_t __fastcall AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BCAA3C(this, 0LL);
  return d->fields.userSvtId;
}


void __fastcall AutoOrganizationManager___c__DisplayClass18_0___ctor(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutoOrganizationManager___c__DisplayClass18_0___AutoOrganizationServant_b__0(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        AutoOrganizationManager_ServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}


void __fastcall AutoOrganizationManager___c__DisplayClass26_0___ctor(
        AutoOrganizationManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall AutoOrganizationManager___c__DisplayClass26_0___GetAdjustTotalRate_b__0(
        AutoOrganizationManager___c__DisplayClass26_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(entity, this->fields.userSvtId, 0LL);
}


void __fastcall AutoOrganizationManager___c__DisplayClass27_0___ctor(
        AutoOrganizationManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall AutoOrganizationManager___c__DisplayClass27_0___GetAdjustTotalRate_b__0(
        AutoOrganizationManager___c__DisplayClass27_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_40183884(entity, this->fields.individualities, 0LL);
}