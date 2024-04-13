void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ListViewSort_o *v13; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  ListViewSort_o *v15; // x19
  struct AutoOrganizationManager_StaticFields *v16; // x0

  if ( (byte_42E659F & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_2233/*"AutoOrganization"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_2239/*"AutoOrganizationWaveBattle"*/, v10, v11, v12);
    byte_42E659F = 1;
  }
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_GAIN = 10602;
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_REGAIN = 10603;
  v13 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v13, (System_String_o *)StringLiteral_2233/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v13;
  sub_B5D560(&static_fields->autoOrganizationInfo);
  v15 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v15, (System_String_o *)StringLiteral_2239/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v16 = AutoOrganizationManager_TypeInfo->static_fields;
  v16->waveBattleAutoOrganizationInfo = v15;
  sub_B5D560(&v16->waveBattleAutoOrganizationInfo);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v88; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x27
  System_Collections_Generic_HashSet_int__o *v91; // x24
  System_Collections_Generic_HashSet_int__o *v92; // x23
  System_Collections_Generic_List_int__o *v93; // x24
  AutoOrganizationServantBonusFilterEquipComponent_c *v94; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  EventBonusFilterGroupMemberMaster_o *v98; // x27
  int v99; // w28
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  int v108; // w8
  int64_t v109; // x22
  unsigned int v110; // w24
  __int64 v111; // x8
  __int64 v112; // x8
  unsigned __int64 v113; // x28
  UserServantEntity_o *v114; // x25
  __int64 v115; // x22
  __int64 v116; // x26
  int32_t v117; // w0
  __int64 v118; // x22
  __int64 v119; // x26
  int32_t v120; // w0
  __int64 v121; // x26
  __int128 v122; // q0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v123; // x24
  __int64 v124; // x22
  __int64 v125; // x27
  int32_t v126; // w0
  int32_t v127; // w2
  int32_t atk; // w8
  WarEntity_o *v129; // x8
  float v130; // s13
  float v131; // s13
  __int64 v132; // x22
  __int64 v133; // x27
  float v134; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x27
  AutoOrganizationManager_c *v136; // x0
  float v137; // s0
  AutoOrganizationManager_c *v138; // x0
  __int64 v139; // x22
  __int64 v140; // x26
  int32_t v141; // w0
  __int64 v142; // x22
  __int64 v143; // x26
  int32_t v144; // w0
  struct AutoOrganizationManager___c_StaticFields *v145; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__20_0; // x19
  Il2CppObject *v147; // x21
  struct AutoOrganizationManager___c_StaticFields *v148; // x0
  __int64 v150; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v151; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_HashSet_int__o *v152; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v153; // [xsp+10h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+40h] [xbp-C0h]
  int v156; // [xsp+6Ch] [xbp-94h] BYREF
  WarEntity_o *entity; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_42E6599 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)organizedEquipIdList, (_DWORD)method, v3);
    sub_B5D5C4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v21, v22, v23);
    sub_B5D5C4(&DataManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v66, v67, v68);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&AutoOrganizationManager_ServantData_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__, v81, v82, v83);
    sub_B5D5C4(&AutoOrganizationManager___c_TypeInfo, v84, v85, v86);
    byte_42E6599 = 1;
  }
  entity = 0LL;
  v156 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v90,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v153 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v91 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v91,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  v92 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v92,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !eventId )
  {
    v152 = v91;
    v93 = organizedEquipIdList;
LABEL_40:
    if ( !ServantEquipList )
      goto LABEL_109;
    goto LABEL_41;
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager__GetEventBonusIds(eventId, v88);
  v93 = organizedEquipIdList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  v152 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
  if ( *(int *)(Master_WarQuestSelectionMaster + 32) < 1 )
    goto LABEL_40;
  v94 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    v94 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  }
  static_fields = v94->static_fields;
  v151 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v98 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  v156 = 0;
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v99 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      v100 = System_Int32__ToString((int32_t)&v156, 0LL);
      v101 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v100, 0LL);
      if ( UnityEngine_PlayerPrefs__HasKey(v101, 0LL) )
      {
        v102 = System_Int32__ToString((int32_t)&v156, 0LL);
        v103 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v102, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_35647620(v103, 0LL);
        if ( !v92 )
          goto LABEL_109;
        System_Collections_Generic_HashSet_int___Add(
          v92,
          Master_WarQuestSelectionMaster,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v104 = System_Int32__ToString((int32_t)&v156, 0LL);
      v105 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v104, 0LL);
      Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__HasKey(v105, 0LL);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v106 = System_Int32__ToString((int32_t)&v156, 0LL);
        v107 = System_String__Concat_44577788(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v106, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_35647620(v107, 0LL);
        if ( !v98 )
          goto LABEL_109;
        Master_WarQuestSelectionMaster = (int64_t)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                    v98,
                                                    Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_109;
        v108 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
        v109 = Master_WarQuestSelectionMaster;
        if ( v108 >= 1 )
          break;
      }
LABEL_36:
      v93 = organizedEquipIdList;
      if ( ++v156 >= v99 )
        goto LABEL_37;
    }
    v110 = 0;
    while ( 1 )
    {
      if ( v110 >= v108 )
      {
LABEL_110:
        v150 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v150, 0LL);
      }
      v111 = *(_QWORD *)(v109 + 8LL * (int)v110 + 32);
      if ( !v111 || !v92 )
        break;
      Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                         v92,
                                         *(_DWORD *)(v111 + 20),
                                         (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      v108 = *(_DWORD *)(v109 + 24);
      if ( (int)++v110 >= v108 )
        goto LABEL_36;
    }
LABEL_109:
    sub_B5D69C(Master_WarQuestSelectionMaster, v88);
  }
LABEL_37:
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v151;
  if ( !ServantEquipList )
    goto LABEL_109;
LABEL_41:
  v112 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v112 >= 1 )
  {
    v113 = 0LL;
    while ( 1 )
    {
      if ( v113 >= (unsigned int)v112 )
        goto LABEL_110;
      v114 = ServantEquipList->m_Items[v113];
      if ( v114 )
      {
        if ( !v93 )
          goto LABEL_113;
        v116 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
        v115 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v158.fields.currentCryptoKey = v116;
        *(_QWORD *)&v158.fields.fakeValue = v115;
        v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v158, 0LL);
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v93,
                                           v117,
                                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_113:
          if ( !v92 )
            goto LABEL_109;
          if ( v92->fields._count < 1 )
            goto LABEL_114;
          v119 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
          v118 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v159.fields.currentCryptoKey = v119;
          *(_QWORD *)&v159.fields.fakeValue = v118;
          v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v159, 0LL);
          Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Contains(
                                             v92,
                                             v120,
                                             (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
LABEL_114:
            Master_WarQuestSelectionMaster = UserServantEntity__IsFriendShipSvtEquip(v114, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              break;
          }
        }
      }
LABEL_98:
      LODWORD(v112) = ServantEquipList->max_length;
      if ( (__int64)++v113 >= (int)v112 )
        goto LABEL_99;
    }
    v121 = sub_B5D694(AutoOrganizationManager_ServantData_TypeInfo);
    AutoOrganizationManager_ServantData___ctor((AutoOrganizationManager_ServantData_o *)v121, 0LL);
    v122 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
    *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v155.fields.fakeValue = v122;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v123 = v90;
    v154 = v155;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v154, 0LL);
    if ( !v121 )
      goto LABEL_109;
    *(_QWORD *)(v121 + 24) = Master_WarQuestSelectionMaster;
    v125 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
    v124 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v160.fields.currentCryptoKey = v125;
    *(_QWORD *)&v160.fields.fakeValue = v124;
    v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v160, 0LL);
    *(_DWORD *)(v121 + 16) = v126;
    v127 = v126;
    atk = v114->fields.atk;
    Master_WarQuestSelectionMaster = (int64_t)v153;
    *(_DWORD *)(v121 + 44) = 0;
    *(_DWORD *)(v121 + 36) = atk;
    if ( !v153 )
      goto LABEL_109;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       v153,
                                       &entity,
                                       v127,
                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v129 = entity;
      if ( !entity )
        goto LABEL_109;
      *(_DWORD *)(v121 + 48) = entity[1].fields.age;
      *(_DWORD *)(v121 + 40) = v129[1].fields.startType;
    }
    if ( !v152 )
      goto LABEL_109;
    if ( v152->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           v152,
           *(_DWORD *)(v121 + 16),
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v130 = *(float *)(v121 + 44) + 50000.0;
      *(float *)(v121 + 44) = v130;
      v131 = v130 + (float)((float)UserServantEntity__getRarity(v114, 0LL) * 100000.0);
      *(float *)(v121 + 44) = v131;
      v133 = *(_QWORD *)&v114->fields.limitCount.fields.currentCryptoKey;
      v132 = *(_QWORD *)&v114->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v161.fields.currentCryptoKey = v133;
      *(_QWORD *)&v161.fields.fakeValue = v132;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v161, 0LL);
      v134 = v131 + (float)((float)(int)Master_WarQuestSelectionMaster * 10000.0);
      goto LABEL_88;
    }
    Master_WarQuestSelectionMaster = (int64_t)UserServantEntity__GetEquipCategoryIdList(v114, 0, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      v135 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster;
      v136 = AutoOrganizationManager_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        v136 = AutoOrganizationManager_TypeInfo;
      }
      Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                         v135,
                                         v136->static_fields->CATEGORY_ID_NP_GAIN,
                                         (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v137 = *(float *)(v121 + 44) + 40000.0;
      }
      else
      {
        v138 = AutoOrganizationManager_TypeInfo;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v138 = AutoOrganizationManager_TypeInfo;
        }
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           v135,
                                           v138->static_fields->CATEGORY_ID_NP_REGAIN,
                                           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_87;
        v137 = *(float *)(v121 + 44) + 30000.0;
      }
      *(float *)(v121 + 44) = v137;
    }
LABEL_87:
    v134 = *(float *)(v121 + 44) + (float)*(int *)(v121 + 36);
LABEL_88:
    *(float *)(v121 + 44) = v134;
    if ( !v123 )
      goto LABEL_109;
    v90 = v123;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v123,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    v93 = organizedEquipIdList;
    if ( organizedEquipIdList )
    {
      v140 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
      v139 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v162.fields.currentCryptoKey = v140;
      *(_QWORD *)&v162.fields.fakeValue = v139;
      v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL);
      Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                         organizedEquipIdList,
                                         v141,
                                         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v143 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
        v142 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v163.fields.currentCryptoKey = v143;
        *(_QWORD *)&v163.fields.fakeValue = v142;
        v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v163, 0LL);
        System_Collections_Generic_List_int___Add(
          organizedEquipIdList,
          v144,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    goto LABEL_98;
  }
LABEL_99:
  Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager___c_TypeInfo;
  }
  v145 = *(struct AutoOrganizationManager___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v145->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v145 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v147 = (Il2CppObject *)v145->__9;
    _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__20_0,
      v147,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v148 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v148->__9__20_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__20_0;
    sub_B5D560(&v148->__9__20_0);
  }
  if ( !v90 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90,
    (System_Comparison_T__o *)_9__20_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v90,
                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
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
  AutoOrganizationManager___c__DisplayClass18_0_o *v56; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x19
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v59; // x1
  UserServantEntity_array *OrganizationList; // x22
  __int64 v61; // x8
  unsigned __int64 v62; // x26
  bool UniqueSvtRestriction; // w19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v64; // x27
  peRenderTexture_ChangeLayerObject_o *v65; // x0
  __int128 v66; // q0
  peRenderTexture_ChangeLayerObject_o *v67; // x27
  const MethodInfo *v68; // x2
  int64_t v69; // x19
  float AdjustTotalRate; // s8
  __int128 v71; // q0
  int32_t atk; // w8
  AutoOrganizationManager_ServantData_o *v73; // x27
  __int128 v74; // q0
  const MethodInfo *v75; // x2
  int64_t userSvtId; // x19
  float v77; // s0
  UserServantEntity_o *v78; // x28
  __int64 v79; // x19
  __int64 v80; // x27
  const MethodInfo *v81; // x2
  int32_t svtId; // w27
  const MethodInfo *v83; // x2
  int32_t v84; // w19
  const MethodInfo *v85; // x2
  int32_t v86; // w19
  __int64 v88; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o **p__9__0; // [xsp+0h] [xbp-130h]
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // [xsp+8h] [xbp-128h]
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v92; // [xsp+18h] [xbp-118h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+A0h] [xbp-90h]
  WarEntity_o *entity; // [xsp+D8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_42E6597 & 1) == 0 )
  {
    sub_B5D5C4(
      &AutoOrganizationManager_TypeInfo,
      (_DWORD)restrictionInfo,
      (_DWORD)organizedServantIds,
      questAutoOrganizationAdjustEntities);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&AutoOrganizationManager_ServantData_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v50, v51, v52);
    sub_B5D5C4(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v53, v54, v55);
    byte_42E6597 = 1;
  }
  entity = 0LL;
  v56 = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_B5D694(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  AutoOrganizationManager___c__DisplayClass18_0___ctor(v56, 0LL);
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_72;
  v92 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v57;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( !OrganizationList )
    goto LABEL_72;
  v61 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    p__9__0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)&v56->fields.__9__0;
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v62 >= (unsigned int)v61 )
      {
        v88 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v88, 0LL);
      }
      v78 = m_Items[v62];
      if ( !v78 )
        goto LABEL_68;
      Master_WarQuestSelectionMaster = UserServantEntity__getRarity(m_Items[v62], 0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster == 0 && rarityBit != 31
        || (rarityBit & 1) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 5 )
      {
        goto LABEL_68;
      }
      v79 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
      v80 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v102.fields.currentCryptoKey = v79;
      *(_QWORD *)&v102.fields.fakeValue = v80;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v102, 0LL);
      if ( !v56 )
        goto LABEL_72;
      svtId = Master_WarQuestSelectionMaster;
      v56->fields.svtId = Master_WarQuestSelectionMaster;
      if ( organizedServantIds )
      {
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          goto LABEL_68;
        svtId = v56->fields.svtId;
      }
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = AutoOrganizationManager__IsFatigue(restrictionInfo, svtId, v81);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v84 = v56->fields.svtId;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v84, v83);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v86 = v56->fields.svtId;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = AutoOrganizationManager__IsDataLost(restrictionInfo, v86, v85);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = UserServantEntity__IsLeave(v78, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              Master_WarQuestSelectionMaster = UserServantEntity__getQuestRestriction(v78, restrictionInfo, 1, 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v78, restrictionInfo, 0LL);
                Master_WarQuestSelectionMaster = UserServantEntity__IsUniqueIndividualityRestriction(
                                                   v78,
                                                   restrictionInfo,
                                                   0LL);
                if ( !UniqueSvtRestriction && (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  v64 = *p__9__0;
                  if ( !*p__9__0 )
                  {
                    v64 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                      v64,
                      (Il2CppObject *)v56,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      (const MethodInfo_2B9320C *)Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
                    v56->fields.__9__0 = (struct System_Predicate_AutoOrganizationManager_ServantData__o *)v64;
                    sub_B5D560(p__9__0);
                  }
                  if ( !v92 )
                    goto LABEL_72;
                  v65 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                          v92,
                          (System_Predicate_T__o *)v64,
                          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v65 )
                  {
                    v66 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
                    v67 = v65;
                    *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v100.fields.fakeValue = v66;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v99 = v100;
                    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v99, 0LL);
                    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    }
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v69,
                                        v68);
                    if ( (float)(AdjustTotalRate * (float)v78->fields.atk) >= (float)(*(float *)&v67[1].klass
                                                                                    * (float)SHIDWORD(v67->fields.orgMaterial)) )
                    {
                      v71 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
                      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v100.fields.fakeValue = v71;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      }
                      v98 = v100;
                      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                         &v98,
                                                         0LL);
                      v67->fields.renderer = (struct UnityEngine_Renderer_o *)Master_WarQuestSelectionMaster;
                      atk = v78->fields.atk;
                      *(float *)&v67[1].klass = AdjustTotalRate;
                      HIDWORD(v67->fields.orgMaterial) = atk;
                    }
                  }
                  else
                  {
                    v73 = (AutoOrganizationManager_ServantData_o *)sub_B5D694(AutoOrganizationManager_ServantData_TypeInfo);
                    AutoOrganizationManager_ServantData___ctor(v73, 0LL);
                    v74 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
                    *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v100.fields.fakeValue = v74;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v97 = v100;
                    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                       &v97,
                                                       0LL);
                    if ( !v73 )
                      goto LABEL_72;
                    v73->fields.userSvtId = Master_WarQuestSelectionMaster;
                    v73->fields.svtId = v56->fields.svtId;
                    v73->fields.classId = UserServantEntity__getSvtClassId(v78, 0LL);
                    v73->fields.atk = v78->fields.atk;
                    userSvtId = v73->fields.userSvtId;
                    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    }
                    v77 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            userSvtId,
                            v75);
                    Master_WarQuestSelectionMaster = (int64_t)v90;
                    v73->fields.questAutoOrganizationAdjustRate = v77;
                    if ( !v90 )
                      goto LABEL_72;
                    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v90,
                                                       &entity,
                                                       v73->fields.svtId,
                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_72;
                      v73->fields.cost = (int32_t)entity[1].fields.age;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      LODWORD(v61) = OrganizationList->max_length;
    }
    while ( (__int64)++v62 < (int)v61 );
  }
  Master_WarQuestSelectionMaster = (int64_t)v92;
  if ( !v92 )
LABEL_72:
    sub_B5D69C(Master_WarQuestSelectionMaster, v59);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v92,
                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_42E6594 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v1, v2, v3);
    byte_42E6594 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v4->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B5D69C(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  AutoOrganizationManager___c__DisplayClass25_0_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  System_Func_WarBoardAIRoute_RouteData__float__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  AutoOrganizationManager___c_c *v38; // x8
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x9
  System_Func_float__float__float__o *_9__25_1; // x20
  Il2CppObject *v41; // x21
  struct AutoOrganizationManager___c_StaticFields *v42; // x0

  if ( (byte_42E659E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Aggregate_float__float___, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_QuestAutoOrganizationAdjustEntity__float___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_float__float__float___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_float__float__float__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__, v21, v22, v23);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__, v24, v25, v26);
    sub_B5D5C4(&AutoOrganizationManager___c__DisplayClass25_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&AutoOrganizationManager___c_TypeInfo, v30, v31, v32);
    byte_42E659E = 1;
  }
  v33 = (AutoOrganizationManager___c__DisplayClass25_0_o *)sub_B5D694(AutoOrganizationManager___c__DisplayClass25_0_TypeInfo);
  AutoOrganizationManager___c__DisplayClass25_0___ctor(v33, 0LL);
  if ( !v33 )
    sub_B5D69C(v34, v35);
  v33->fields.userSvtId = userSvtId;
  v36 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v36,
    (Il2CppObject *)v33,
    Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__,
    (const MethodInfo_2C30BC4 *)Method_System_Func_QuestAutoOrganizationAdjustEntity__float___ctor__);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
                                                               (System_Func_TSource__TResult__o *)v36,
                                                               (const MethodInfo_1CB37F8 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v38 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v38 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__25_1 = static_fields->__9__25_1;
  if ( !_9__25_1 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__25_1 = (System_Func_float__float__float__o *)sub_B5D694(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__25_1,
      v41,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__,
      (const MethodInfo_2C3A900 *)Method_System_Func_float__float__float___ctor__);
    v42 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v42->__9__25_1 = _9__25_1;
    sub_B5D560(&v42->__9__25_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v37,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__25_1,
           (const MethodInfo_1C971A0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 Filter_34051196; // x0
  __int64 v7; // x1
  System_Boolean_array *v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x24
  unsigned __int64 max_length; // x8
  bool v12; // cf
  _BOOL4 v13; // w9
  bool v14; // w8
  bool v15; // zf
  bool v16; // w9
  char v17; // w11
  unsigned __int64 v18; // x8
  int v19; // w10
  _BOOL4 v20; // w12
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  unsigned __int64 v23; // x9
  int32_t v24; // w8
  bool *v25; // x12
  unsigned __int64 v26; // x11
  unsigned __int64 v27; // x9
  __int64 v29; // x0

  if ( (byte_42E6595 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)settingUnitNum, (_DWORD)method, v3);
    byte_42E6595 = 1;
  }
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_40:
    sub_B5D69C(Filter_34051196, v7);
  v8 = (System_Boolean_array *)Filter_34051196;
  v9 = 0LL;
  v10 = Filter_34051196 + 32;
  do
  {
    Filter_34051196 = ListViewSort__GetFilter_34051196(sort, v9, 0LL);
    if ( !v8 )
      goto LABEL_40;
    max_length = v8->max_length;
    if ( v9 >= max_length )
      goto LABEL_39;
    v12 = v9 >= 0xC;
    *(_BYTE *)(v10 + v9++) = Filter_34051196 & 1;
  }
  while ( !v12 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_39:
    v29 = sub_B5D6C8(Filter_34051196);
    sub_B5D668(v29, 0LL);
  }
  v13 = v8->m_Items[5];
  v14 = !v8->m_Items[4];
  v15 = !v13;
  v16 = v13;
  v17 = v15;
  v8->m_Items[4] |= v17;
  v8->m_Items[5] = v16 || v14;
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 5LL);
  v18 = 0LL;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 + 2 >= v8->max_length )
      goto LABEL_39;
    if ( !Filter_34051196 )
      goto LABEL_40;
    if ( v18 >= *(unsigned int *)(Filter_34051196 + 24) )
      goto LABEL_39;
    v20 = v8->m_Items[v18 + 6];
    *(_BYTE *)(Filter_34051196 + 32 + v18) = v20;
    v12 = v18++ >= 4;
    v19 = (unsigned __int8)v19 & !v20;
  }
  while ( !v12 );
  if ( v19 )
  {
    v21 = v8->max_length;
    v22 = 34LL;
    while ( v22 - 32 < v21 )
    {
      v12 = (unsigned __int64)(v22 - 34) >= 4;
      *((_BYTE *)&v8->obj.klass + v22++) = 1;
      if ( v12 )
        goto LABEL_24;
    }
    goto LABEL_39;
  }
LABEL_24:
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 6LL);
  v23 = 0LL;
  v24 = 0;
  v25 = &v8->m_Items[11];
  do
  {
    if ( v23 + 7 >= v8->max_length )
      goto LABEL_39;
    if ( !Filter_34051196 )
      goto LABEL_40;
    v26 = *(unsigned int *)(Filter_34051196 + 24);
    if ( v23 >= v26 )
      goto LABEL_39;
    if ( v25[v23] )
      v24 = v23 + 1;
    v12 = v23 >= 5;
    *(_BYTE *)(Filter_34051196 + 32 + v23) = v25[v23];
    ++v23;
  }
  while ( !v12 );
  if ( !v24 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= v26 )
        goto LABEL_39;
      v12 = v27 >= 5;
      *(_BYTE *)(Filter_34051196 + 32 + v27++) = 1;
    }
    while ( !v12 );
    v24 = 6;
  }
  *settingUnitNum = v24;
  return v8;
}


System_Collections_Generic_HashSet_int__o *__fastcall AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
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
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  System_Collections_Generic_HashSet_int__o *v89; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v91; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x20
  System_Int32_array *v94; // x21
  WarQuestSelectionMaster_o *v95; // x20
  SkillLvMaster_o *v96; // x23
  EventBonusFilterMaster_o *v97; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v99; // x24
  AutoOrganizationManager___c_c *v100; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x25
  Il2CppObject *v103; // x21
  struct AutoOrganizationManager___c_StaticFields *v104; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x0
  int size; // w8
  const MethodInfo_2500654 **v108; // x28
  unsigned int v109; // w21
  TitleInfoControl_EventEndTimeInfo_o *v110; // x20
  int v111; // w8
  __int64 v112; // x25
  __int64 v113; // x26
  __int64 v114; // x27
  int v115; // w8
  __int64 v116; // x26
  int v117; // w20
  char v118; // w24
  __int64 v119; // x21
  SkillLvEntity_o *v120; // x27
  const MethodInfo_2500654 **v121; // x19
  __int64 v122; // x21
  __int64 v123; // x28
  int32_t v124; // w21
  EventUpValInfo_o *v125; // x28
  __int64 v126; // x21
  __int64 v127; // x25
  int v128; // w8
  __int64 v129; // x25
  unsigned int v130; // w20
  __int64 v131; // x8
  __int64 v133; // x0
  ServantSkillMaster_o *v134; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *v135; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v136; // [xsp+10h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+18h] [xbp-68h]
  unsigned int v138; // [xsp+24h] [xbp-5Ch]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_42E659A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantSkillMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v32, v33, v34);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&int___TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_SkillInfo__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__, v83, v84, v85);
    sub_B5D5C4(&AutoOrganizationManager___c_TypeInfo, v86, v87, v88);
    byte_42E659A = 1;
  }
  eventUpVallInfo = 0LL;
  v89 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v89,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !EventValUpEventIdHash )
    return v89;
  v93 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v89;
  }
  v94 = System_Linq_Enumerable__ToArray_int_(
          v93,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(setupInfo, v94, 0, 0, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v135 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v95 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v96 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v97 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  v91 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    goto LABEL_72;
  v134 = (ServantSkillMaster_o *)v95;
  *(_DWORD *)(Master_WarQuestSelectionMaster + 32) = eventId;
  if ( !v97 )
LABEL_71:
    sub_B5D69C(Master_WarQuestSelectionMaster, v91);
  FilterList = EventBonusFilterMaster__GetFilterList(v97, (System_Int32_array *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( FilterList )
  {
    v99 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v100 = AutoOrganizationManager___c_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v100 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v100->static_fields;
      _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v100);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v103 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__21_0,
          v103,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
        v104 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v104->__9__21_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__21_0;
        sub_B5D560(&v104->__9__21_0);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v99,
        (System_Comparison_T__o *)_9__21_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v105,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v106,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      size = v99->fields._size;
      if ( size >= 1 )
      {
        v108 = (const MethodInfo_2500654 **)&Method_System_Collections_Generic_HashSet_int__Add__;
        v109 = 0;
        v136 = v99;
        do
        {
          if ( size <= v109 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v110 = v99->fields._items->m_Items[v109];
          if ( !v110 )
            goto LABEL_71;
          v111 = *(_DWORD *)&v110->fields.is_reward;
          v138 = v109;
          if ( v111 == 2 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                        (EventBonusFilterGroupMemberMaster_o *)Master_WarQuestSelectionMaster,
                                                        v110->fields.end_time,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v128 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v129 = Master_WarQuestSelectionMaster;
            if ( v128 >= 1 )
            {
              v130 = 0;
              while ( v130 < v128 )
              {
                v131 = *(_QWORD *)(v129 + 8LL * (int)v130 + 32);
                if ( !v131 || !v89 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v89,
                                                   *(_DWORD *)(v131 + 20),
                                                   *v108);
                v128 = *(_DWORD *)(v129 + 24);
                if ( (int)++v130 >= v128 )
                  goto LABEL_69;
              }
LABEL_72:
              v133 = sub_B5D6C8(Master_WarQuestSelectionMaster);
              sub_B5D668(v133, 0LL);
            }
          }
          else if ( v111 == 1 )
          {
            Master_WarQuestSelectionMaster = (__int64)v135;
            if ( !v135 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v135,
                                                        v110->fields.end_time,
                                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v112 = Master_WarQuestSelectionMaster;
            v114 = *(_QWORD *)(Master_WarQuestSelectionMaster + 16);
            v113 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v140.fields.currentCryptoKey = v114;
            *(_QWORD *)&v140.fields.fakeValue = v113;
            Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v140,
                                               0LL);
            if ( !v134 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)ServantSkillMaster__getServantSkillList(
                                                        v134,
                                                        Master_WarQuestSelectionMaster,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v115 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v116 = Master_WarQuestSelectionMaster;
            if ( v115 >= 1 )
            {
              v117 = 0;
              v118 = 0;
              do
              {
                if ( v117 >= (unsigned int)v115 )
                  goto LABEL_72;
                v119 = *(_QWORD *)(v116 + 8LL * v117 + 32);
                if ( !v119 || !v96 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = (__int64)SkillLvMaster__GetEntity(v96, *(_DWORD *)(v119 + 28), 1, 0LL);
                if ( Master_WarQuestSelectionMaster && !*(_DWORD *)(v119 + 44) )
                {
                  v120 = (SkillLvEntity_o *)Master_WarQuestSelectionMaster;
                  v121 = v108;
                  v122 = *(_QWORD *)(v112 + 16);
                  v123 = *(_QWORD *)(v112 + 24);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v141.fields.currentCryptoKey = v122;
                  *(_QWORD *)&v141.fields.fakeValue = v123;
                  v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v141, 0LL);
                  v125 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v125, setupInfo, v124, 1, 1, 0, 0LL);
                  eventUpVallInfo = v125;
                  Master_WarQuestSelectionMaster = SkillLvEntity__getEventUpVal_26836992(
                                                     v120,
                                                     &eventUpVallInfo,
                                                     1,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
                  v118 |= Master_WarQuestSelectionMaster;
                  v108 = v121;
                }
                v115 = *(_DWORD *)(v116 + 24);
                ++v117;
              }
              while ( v117 < v115 );
              if ( (v118 & 1) != 0 )
              {
                v126 = *(_QWORD *)(v112 + 16);
                v127 = *(_QWORD *)(v112 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v142.fields.currentCryptoKey = v126;
                *(_QWORD *)&v142.fields.fakeValue = v127;
                Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v142,
                                                   0LL);
                if ( !v89 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v89,
                                                   Master_WarQuestSelectionMaster,
                                                   *v108);
              }
            }
          }
LABEL_69:
          v99 = v136;
          size = v136->fields._size;
          v109 = v138 + 1;
        }
        while ( (int)(v138 + 1) < size );
      }
    }
  }
  return v89;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  unsigned __int64 v4; // x10
  __int64 v5; // x0
  bool *v6; // x8
  __int64 v8; // x0

  if ( !rarityFlag )
    sub_B5D69C(0LL, method);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
      {
        v8 = sub_B5D6C8(v5);
        sub_B5D668(v8, 0LL);
      }
      if ( v6[v4] )
        v5 = (1 << v4) | (unsigned int)v5;
    }
  }
  while ( v4++ < 4 );
  return v5;
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 Filter_34051256; // x0
  __int64 v6; // x1
  System_Boolean_array *v7; // x19
  unsigned __int64 v8; // x21
  __int64 v9; // x23
  unsigned __int64 max_length; // x8
  bool v11; // cf
  _BOOL4 v12; // w9
  bool v13; // w8
  bool v14; // zf
  bool v15; // w9
  char v16; // w11
  unsigned __int64 v17; // x8
  int v18; // w10
  _BOOL4 v19; // w12
  unsigned __int64 v20; // x8
  __int64 v21; // x9
  __int64 v23; // x0

  if ( (byte_42E6596 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6596 = 1;
  }
  Filter_34051256 = sub_B5D5DC(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_26:
    sub_B5D69C(Filter_34051256, v6);
  v7 = (System_Boolean_array *)Filter_34051256;
  v8 = 0LL;
  v9 = Filter_34051256 + 32;
  do
  {
    Filter_34051256 = ListViewSort__GetFilter_34051256(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_26;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_25;
    v11 = v8 >= 6;
    *(_BYTE *)(v9 + v8++) = Filter_34051256 & 1;
  }
  while ( !v11 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_25:
    v23 = sub_B5D6C8(Filter_34051256);
    sub_B5D668(v23, 0LL);
  }
  v12 = v7->m_Items[5];
  v13 = !v7->m_Items[4];
  v14 = !v12;
  v15 = v12;
  v16 = v14;
  v7->m_Items[4] |= v16;
  v7->m_Items[5] = v15 || v13;
  Filter_34051256 = sub_B5D5DC(bool___TypeInfo, 5LL);
  v17 = 0LL;
  LOBYTE(v18) = 1;
  do
  {
    if ( v17 + 2 >= v7->max_length )
      goto LABEL_25;
    if ( !Filter_34051256 )
      goto LABEL_26;
    if ( v17 >= *(unsigned int *)(Filter_34051256 + 24) )
      goto LABEL_25;
    v19 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_34051256 + 32 + v17) = v19;
    v11 = v17++ >= 4;
    v18 = (unsigned __int8)v18 & !v19;
  }
  while ( !v11 );
  if ( v18 )
  {
    v20 = v7->max_length;
    v21 = 34LL;
    while ( v21 - 32 < v20 )
    {
      v11 = (unsigned __int64)(v21 - 34) >= 4;
      *((_BYTE *)&v7->obj.klass + v21++) = 1;
      if ( v11 )
        return v7;
    }
    goto LABEL_25;
  }
  return v7;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_42E6593 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v1, v2, v3);
    byte_42E6593 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v4->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B5D69C(autoOrganizationInfo, v1);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0LL);
}


bool __fastcall AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t allOutBattleGroupNo; // w21
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1

  if ( (byte_42E659C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E659C = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v11);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           Master_WarQuestSelectionMaster,
           svtId,
           restrictionInfo->fields.eventId,
           allOutBattleGroupNo,
           0LL);
}


bool __fastcall AutoOrganizationManager__IsDataLost(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E659D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E659D = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          UserId,
          restrictionInfo->fields.dataLostBattleId,
          0LL) )
    return 0;
  UserId = (int64_t)entity;
  if ( !entity || (UserId = UserEventDataLostEntity__IsRestart(entity, svtId, 0LL), !entity) )
LABEL_20:
    sub_B5D69C(UserId, v14);
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


bool __fastcall AutoOrganizationManager__IsFatigue(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UserEventServantFatigueMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  int64_t v14; // x19
  bool isRecover; // [xsp+Ch] [xbp-24h] BYREF
  int64_t recoverAt; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E659B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E659B = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v13);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          Master_WarQuestSelectionMaster,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v14 = recoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v14 > NetworkManager__getTime(0LL);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t materialParentWarId; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v48; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  Il2CppObject *current; // x25
  int32_t klass; // w22
  _BOOL8 v54; // x0
  __int64 v55; // x1
  float Rate; // s0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  AutoOrganizationManager___c_c *v59; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__19_0; // x20
  Il2CppObject *v62; // x21
  struct AutoOrganizationManager___c_StaticFields *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  materialParentWarId = enemyClassId;
  if ( (byte_42E6598 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, enemyClassId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v30, v31, v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___68756432,
      v36,
      v37,
      v38);
    sub_B5D5C4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v42, v43, v44);
    sub_B5D5C4(&AutoOrganizationManager___c_TypeInfo, v45, v46, v47);
    byte_42E6598 = 1;
  }
  entity = 0LL;
  memset(&v67, 0, sizeof(v67));
  v48 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v48,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___68756432);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( materialParentWarId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_34;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    materialParentWarId,
                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_34;
      materialParentWarId = entity->fields.materialParentWarId;
    }
  }
  if ( !v48 )
LABEL_34:
    sub_B5D69C(Master_WarQuestSelectionMaster, v50);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v48,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v67 = v66;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v57 )
      break;
    current = v67.fields.current;
    if ( !v67.fields.current )
      sub_B5D69C(v57, v58);
    if ( !v51 )
      sub_B5D69C(v57, v58);
    klass = (int32_t)v67.fields.current[2].klass;
    v54 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v51,
            &entity,
            klass,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v54 )
    {
      if ( !entity )
        sub_B5D69C(v54, v55);
      klass = entity->fields.materialParentWarId;
    }
    Rate = 1.0;
    if ( materialParentWarId )
      Rate = ClassRelationMaster__getRate(klass, materialParentWarId, 0LL);
    *((float *)&current[2].monitor + 1) = *(float *)&current[3].monitor
                                        * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v59 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v59 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__19_0,
      v62,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      (const MethodInfo_2C30BC4 *)Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__);
    v63 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v63->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_B5D560(&v63->__9__19_0);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_AutoOrganizationManager_ServantData__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_1CAF710 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v64,
                                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AutoOrganizationManager_c *v4; // x0

  if ( (byte_42E6591 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v1, v2, v3);
    byte_42E6591 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  return v4->static_fields->autoOrganizationInfo;
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AutoOrganizationManager_c *v4; // x0

  if ( (byte_42E6592 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v1, v2, v3);
    byte_42E6592 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  return v4->static_fields->waveBattleAutoOrganizationInfo;
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
  this->fields.questAutoOrganizationAdjustRate = 0.0;
  *(_QWORD *)&this->fields.classId = 0LL;
  *(_QWORD *)&this->fields.collectionNo = 0LL;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)((char *)&this->fields.relationNum + 1) = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7540 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager___c_TypeInfo, v1, v2, v3);
    byte_42E7540 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AutoOrganizationManager___c___ctor(AutoOrganizationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AutoOrganizationManager___c___AutoOrganizationEquip_b__20_0(
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
    sub_B5D69C(this, a);
  relationNum = a->fields.relationNum;
  v5 = b->fields.relationNum;
  if ( relationNum > v5 )
    return -1;
  if ( relationNum < v5 )
    return 1;
  collectionNo = a->fields.collectionNo;
  v8 = b->fields.collectionNo;
  if ( collectionNo < v8 )
    return -1;
  return collectionNo > v8;
}


float __fastcall AutoOrganizationManager___c___GetAdjustTotalRate_b__25_1(
        AutoOrganizationManager___c_o *this,
        float total,
        float rate,
        const MethodInfo *method)
{
  return total * rate;
}


int32_t __fastcall AutoOrganizationManager___c___GetEventBonusIds_b__21_0(
        AutoOrganizationManager___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_B5D69C(this, 0LL);
  return d->fields.relationNum;
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
    sub_B5D69C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}


void __fastcall AutoOrganizationManager___c__DisplayClass25_0___ctor(
        AutoOrganizationManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall AutoOrganizationManager___c__DisplayClass25_0___GetAdjustTotalRate_b__0(
        AutoOrganizationManager___c__DisplayClass25_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(entity, this->fields.userSvtId, 0LL);
}