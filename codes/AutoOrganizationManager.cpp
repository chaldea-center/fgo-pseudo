void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  ListViewSort_o *v16; // x19
  struct AutoOrganizationManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_421678A & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_2214/*"AutoOrganization"*/, v4);
    sub_B0D8A4(&StringLiteral_2220/*"AutoOrganizationWaveBattle"*/, v5);
    byte_421678A = 1;
  }
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_GAIN = 10602;
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_REGAIN = 10603;
  v6 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v6, (System_String_o *)StringLiteral_2214/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->autoOrganizationInfo,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v14, v15);
  ListViewSort___ctor_32823364(v16, (System_String_o *)StringLiteral_2220/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v17 = AutoOrganizationManager_TypeInfo->static_fields;
  v17->waveBattleAutoOrganizationInfo = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->waveBattleAutoOrganizationInfo,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int64_t Master_WarQuestSelectionMaster; // x0
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x27
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_HashSet_int__o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_HashSet_int__o *v42; // x23
  const MethodInfo *v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x24
  AutoOrganizationServantBonusFilterEquipComponent_c *v46; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  EventBonusFilterGroupMemberMaster_o *v50; // x27
  int v51; // w28
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  int v60; // w8
  int64_t v61; // x22
  unsigned int v62; // w24
  __int64 v63; // x8
  __int64 v64; // x8
  unsigned __int64 v65; // x28
  UserServantEntity_o *v66; // x25
  __int64 v67; // x22
  __int64 v68; // x26
  int32_t v69; // w0
  __int64 v70; // x22
  __int64 v71; // x26
  int32_t v72; // w0
  __int64 v73; // x26
  __int128 v74; // q0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x24
  __int64 v76; // x22
  __int64 v77; // x27
  int32_t v78; // w0
  int32_t v79; // w2
  int32_t atk; // w8
  WarEntity_o *v81; // x8
  float v82; // s13
  float v83; // s13
  __int64 v84; // x22
  __int64 v85; // x27
  float v86; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x27
  AutoOrganizationManager_c *v88; // x0
  float v89; // s0
  AutoOrganizationManager_c *v90; // x0
  __int64 v91; // x22
  __int64 v92; // x26
  int32_t v93; // w0
  __int64 v94; // x22
  __int64 v95; // x26
  int32_t v96; // w0
  struct AutoOrganizationManager___c_StaticFields *v97; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__20_0; // x19
  Il2CppObject *v99; // x21
  struct AutoOrganizationManager___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v108; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v109; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_HashSet_int__o *v110; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v111; // [xsp+10h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+40h] [xbp-C0h]
  int v114; // [xsp+6Ch] [xbp-94h] BYREF
  WarEntity_o *entity; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_4216785 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_B0D8A4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, v6);
    sub_B0D8A4(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v25);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B0D8A4(&ServantBonusFilterSelectMenu_TypeInfo, v28);
    sub_B0D8A4(&AutoOrganizationManager_ServantData_TypeInfo, v29);
    sub_B0D8A4(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__, v30);
    sub_B0D8A4(&AutoOrganizationManager___c_TypeInfo, v31);
    byte_4216785 = 1;
  }
  entity = 0LL;
  v114 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v111 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v39 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_HashSet_int____ctor(
    v39,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  v42 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v40,
                                                       v41);
  System_Collections_Generic_HashSet_int____ctor(
    v42,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !eventId )
  {
    v110 = v39;
    v45 = organizedEquipIdList;
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
  Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager__GetEventBonusIds(eventId, v43);
  v45 = organizedEquipIdList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  v110 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
  if ( *(int *)(Master_WarQuestSelectionMaster + 32) < 1 )
    goto LABEL_40;
  v46 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    v46 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  }
  static_fields = v46->static_fields;
  v109 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v50 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  v114 = 0;
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v51 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      v52 = System_Int32__ToString((int32_t)&v114, 0LL);
      v53 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v52, 0LL);
      if ( UnityEngine_PlayerPrefs__HasKey(v53, 0LL) )
      {
        v54 = System_Int32__ToString((int32_t)&v114, 0LL);
        v55 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v54, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_34962660(v55, 0LL);
        if ( !v42 )
          goto LABEL_109;
        System_Collections_Generic_HashSet_int___Add(
          v42,
          Master_WarQuestSelectionMaster,
          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v56 = System_Int32__ToString((int32_t)&v114, 0LL);
      v57 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v56, 0LL);
      Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__HasKey(v57, 0LL);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v58 = System_Int32__ToString((int32_t)&v114, 0LL);
        v59 = System_String__Concat_43849904(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v58, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_34962660(v59, 0LL);
        if ( !v50 )
          goto LABEL_109;
        Master_WarQuestSelectionMaster = (int64_t)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                    v50,
                                                    Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_109;
        v60 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
        v61 = Master_WarQuestSelectionMaster;
        if ( v60 >= 1 )
          break;
      }
LABEL_36:
      v45 = organizedEquipIdList;
      if ( ++v114 >= v51 )
        goto LABEL_37;
    }
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= v60 )
      {
LABEL_110:
        v108 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v108, 0LL);
      }
      v63 = *(_QWORD *)(v61 + 8LL * (int)v62 + 32);
      if ( !v63 || !v42 )
        break;
      Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                         v42,
                                         *(_DWORD *)(v63 + 20),
                                         (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      v60 = *(_DWORD *)(v61 + 24);
      if ( (int)++v62 >= v60 )
        goto LABEL_36;
    }
LABEL_109:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_37:
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v109;
  if ( !ServantEquipList )
    goto LABEL_109;
LABEL_41:
  v64 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v64 >= 1 )
  {
    v65 = 0LL;
    while ( 1 )
    {
      if ( v65 >= (unsigned int)v64 )
        goto LABEL_110;
      v66 = ServantEquipList->m_Items[v65];
      if ( v66 )
      {
        if ( !v45 )
          goto LABEL_113;
        v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v116.fields.currentCryptoKey = v68;
        *(_QWORD *)&v116.fields.fakeValue = v67;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v116, 0LL);
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v45,
                                           v69,
                                           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_113:
          if ( !v42 )
            goto LABEL_109;
          if ( v42->fields._count < 1 )
            goto LABEL_114;
          v71 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
          v70 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v117.fields.currentCryptoKey = v71;
          *(_QWORD *)&v117.fields.fakeValue = v70;
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v117, 0LL);
          Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Contains(
                                             v42,
                                             v72,
                                             (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
LABEL_114:
            Master_WarQuestSelectionMaster = UserServantEntity__IsFriendShipSvtEquip(v66, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              break;
          }
        }
      }
LABEL_98:
      LODWORD(v64) = ServantEquipList->max_length;
      if ( (__int64)++v65 >= (int)v64 )
        goto LABEL_99;
    }
    v73 = sub_B0D974(AutoOrganizationManager_ServantData_TypeInfo, v43, v44);
    AutoOrganizationManager_ServantData___ctor((AutoOrganizationManager_ServantData_o *)v73, 0LL);
    v74 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
    *(_OWORD *)&v113.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v113.fields.fakeValue = v74;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v75 = v36;
    v112 = v113;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v112, 0LL);
    if ( !v73 )
      goto LABEL_109;
    *(_QWORD *)(v73 + 24) = Master_WarQuestSelectionMaster;
    v77 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
    v76 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v118.fields.currentCryptoKey = v77;
    *(_QWORD *)&v118.fields.fakeValue = v76;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v118, 0LL);
    *(_DWORD *)(v73 + 16) = v78;
    v79 = v78;
    atk = v66->fields.atk;
    Master_WarQuestSelectionMaster = (int64_t)v111;
    *(_DWORD *)(v73 + 44) = 0;
    *(_DWORD *)(v73 + 36) = atk;
    if ( !v111 )
      goto LABEL_109;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       v111,
                                       &entity,
                                       v79,
                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v81 = entity;
      if ( !entity )
        goto LABEL_109;
      *(_DWORD *)(v73 + 48) = entity[1].fields.age;
      *(_DWORD *)(v73 + 40) = v81[1].fields.startType;
    }
    if ( !v110 )
      goto LABEL_109;
    if ( v110->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           v110,
           *(_DWORD *)(v73 + 16),
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v82 = *(float *)(v73 + 44) + 50000.0;
      *(float *)(v73 + 44) = v82;
      v83 = v82 + (float)((float)UserServantEntity__getRarity(v66, 0LL) * 100000.0);
      *(float *)(v73 + 44) = v83;
      v85 = *(_QWORD *)&v66->fields.limitCount.fields.currentCryptoKey;
      v84 = *(_QWORD *)&v66->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v119.fields.currentCryptoKey = v85;
      *(_QWORD *)&v119.fields.fakeValue = v84;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v119, 0LL);
      v86 = v83 + (float)((float)(int)Master_WarQuestSelectionMaster * 10000.0);
      goto LABEL_88;
    }
    Master_WarQuestSelectionMaster = (int64_t)UserServantEntity__GetEquipCategoryIdList(v66, 0, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster;
      v88 = AutoOrganizationManager_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        v88 = AutoOrganizationManager_TypeInfo;
      }
      Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                         v87,
                                         v88->static_fields->CATEGORY_ID_NP_GAIN,
                                         (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v89 = *(float *)(v73 + 44) + 40000.0;
      }
      else
      {
        v90 = AutoOrganizationManager_TypeInfo;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v90 = AutoOrganizationManager_TypeInfo;
        }
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           v87,
                                           v90->static_fields->CATEGORY_ID_NP_REGAIN,
                                           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_87;
        v89 = *(float *)(v73 + 44) + 30000.0;
      }
      *(float *)(v73 + 44) = v89;
    }
LABEL_87:
    v86 = *(float *)(v73 + 44) + (float)*(int *)(v73 + 36);
LABEL_88:
    *(float *)(v73 + 44) = v86;
    if ( !v75 )
      goto LABEL_109;
    v36 = v75;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v75,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    v45 = organizedEquipIdList;
    if ( organizedEquipIdList )
    {
      v92 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
      v91 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v120.fields.currentCryptoKey = v92;
      *(_QWORD *)&v120.fields.fakeValue = v91;
      v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v120, 0LL);
      Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                         organizedEquipIdList,
                                         v93,
                                         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v95 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v121.fields.currentCryptoKey = v95;
        *(_QWORD *)&v121.fields.fakeValue = v94;
        v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v121, 0LL);
        System_Collections_Generic_List_int___Add(
          organizedEquipIdList,
          v96,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
  v97 = *(struct AutoOrganizationManager___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v97->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v97 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v99 = (Il2CppObject *)v97->__9;
    _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_AutoOrganizationManager_ServantData__TypeInfo,
                                                                           v43,
                                                                           v44);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__20_0,
      v99,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v100 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v100->__9__20_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__20_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v100->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  if ( !v36 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__20_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  AutoOrganizationManager___c__DisplayClass18_0_o *v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  int64_t Master_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  UserServantEntity_o *v29; // x27
  __int64 v30; // x26
  __int64 v31; // x28
  const MethodInfo *v32; // x2
  int32_t svtId; // w28
  const MethodInfo *v34; // x2
  int32_t v35; // w26
  const MethodInfo *v36; // x2
  int32_t v37; // w26
  bool UniqueSvtRestriction; // w26
  __int64 v39; // x1
  __int64 v40; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x28
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  int64_t v50; // x28
  __int128 v51; // q0
  AutoOrganizationManager_ServantData_o *v52; // x28
  __int128 v53; // q0
  __int64 v55; // x0
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // [xsp+10h] [xbp-F0h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+80h] [xbp-80h]
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4216783 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, restrictionInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__, v16);
    sub_B0D8A4(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v17);
    sub_B0D8A4(&AutoOrganizationManager_ServantData_TypeInfo, v18);
    sub_B0D8A4(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v19);
    sub_B0D8A4(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v20);
    byte_4216783 = 1;
  }
  entity = 0LL;
  v21 = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_B0D974(
                                                             AutoOrganizationManager___c__DisplayClass18_0_TypeInfo,
                                                             restrictionInfo,
                                                             organizedServantIds);
  AutoOrganizationManager___c__DisplayClass18_0___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_62;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( !OrganizationList )
    goto LABEL_62;
  v27 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    p__9__0 = (BattleServantConfConponent_o *)&v21->fields.__9__0;
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v28 >= (unsigned int)v27 )
      {
        v55 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v55, 0LL);
      }
      v29 = m_Items[v28];
      if ( !v29 )
        goto LABEL_58;
      Master_WarQuestSelectionMaster = UserServantEntity__getRarity(m_Items[v28], 0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster == 0 && rarityBit != 31
        || (rarityBit & 1) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 5 )
      {
        goto LABEL_58;
      }
      v30 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = v30;
      *(_QWORD *)&v66.fields.fakeValue = v31;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v66, 0LL);
      if ( !v21 )
        goto LABEL_62;
      svtId = Master_WarQuestSelectionMaster;
      v21->fields.svtId = Master_WarQuestSelectionMaster;
      if ( organizedServantIds )
      {
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          goto LABEL_58;
        svtId = v21->fields.svtId;
      }
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = AutoOrganizationManager__IsFatigue(restrictionInfo, svtId, v32);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v35 = v21->fields.svtId;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v35, v34);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v37 = v21->fields.svtId;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = AutoOrganizationManager__IsDataLost(restrictionInfo, v37, v36);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = UserServantEntity__IsLeave(v29, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v29, restrictionInfo, 0LL);
              Master_WarQuestSelectionMaster = UserServantEntity__IsUniqueIndividualityRestriction(
                                                 v29,
                                                 restrictionInfo,
                                                 0LL);
              if ( !UniqueSvtRestriction && (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)p__9__0->klass;
                if ( !p__9__0->klass )
                {
                  klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                     System_Predicate_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                     v39,
                                                                                     v40);
                  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                    klass,
                    (Il2CppObject *)v21,
                    Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                    (const MethodInfo_2AF7E30 *)Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
                  v21->fields.__9__0 = (struct System_Predicate_AutoOrganizationManager_ServantData__o *)klass;
                  sub_B0D840(p__9__0, (System_Int32_array **)klass, v42, v43, v44, v45, v46, v47);
                }
                if ( !v24 )
                  goto LABEL_62;
                Master_WarQuestSelectionMaster = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v24,
                                                            (System_Predicate_T__o *)klass,
                                                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
                  v50 = Master_WarQuestSelectionMaster;
                  if ( v29->fields.atk >= *(_DWORD *)(Master_WarQuestSelectionMaster + 36) )
                  {
                    v51 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
                    *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v64.fields.fakeValue = v51;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v63 = v64;
                    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                       &v63,
                                                       0LL);
                    *(_QWORD *)(v50 + 24) = Master_WarQuestSelectionMaster;
                    *(_DWORD *)(v50 + 36) = v29->fields.atk;
                  }
                }
                else
                {
                  v52 = (AutoOrganizationManager_ServantData_o *)sub_B0D974(
                                                                   AutoOrganizationManager_ServantData_TypeInfo,
                                                                   v48,
                                                                   v49);
                  AutoOrganizationManager_ServantData___ctor(v52, 0LL);
                  v53 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
                  *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v64.fields.fakeValue = v53;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v62 = v64;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                     &v62,
                                                     0LL);
                  if ( !v52 )
                    goto LABEL_62;
                  v52->fields.userSvtId = Master_WarQuestSelectionMaster;
                  v52->fields.svtId = v21->fields.svtId;
                  v52->fields.classId = UserServantEntity__getSvtClassId(v29, 0LL);
                  Master_WarQuestSelectionMaster = (int64_t)v57;
                  v52->fields.atk = v29->fields.atk;
                  if ( !v57 )
                    goto LABEL_62;
                  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     v57,
                                                     &entity,
                                                     v52->fields.svtId,
                                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_62;
                    v52->fields.cost = (int32_t)entity[1].fields.age;
                  }
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v24,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_58:
      LODWORD(v27) = OrganizationList->max_length;
    }
    while ( (__int64)++v28 < (int)v27 );
  }
  Master_WarQuestSelectionMaster = (int64_t)v24;
  if ( !v24 )
LABEL_62:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4216780 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v1);
    byte_4216780 = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B0D97C(autoOrganizationInfo);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_32845628; // x0
  System_Boolean_array *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  unsigned __int64 max_length; // x8
  bool v10; // cf
  _BOOL4 v11; // w9
  bool v12; // w8
  bool v13; // zf
  bool v14; // w9
  char v15; // w11
  unsigned __int64 v16; // x8
  int v17; // w10
  _BOOL4 v18; // w12
  unsigned __int64 v19; // x8
  __int64 v20; // x9
  unsigned __int64 v21; // x9
  int32_t v22; // w8
  bool *v23; // x12
  unsigned __int64 v24; // x11
  unsigned __int64 v25; // x9
  __int64 v27; // x0

  if ( (byte_4216781 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, settingUnitNum);
    byte_4216781 = 1;
  }
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_40:
    sub_B0D97C(Filter_32845628);
  v6 = (System_Boolean_array *)Filter_32845628;
  v7 = 0LL;
  v8 = Filter_32845628 + 32;
  do
  {
    Filter_32845628 = ListViewSort__GetFilter_32845628(sort, v7, 0LL);
    if ( !v6 )
      goto LABEL_40;
    max_length = v6->max_length;
    if ( v7 >= max_length )
      goto LABEL_39;
    v10 = v7 >= 0xC;
    *(_BYTE *)(v8 + v7++) = Filter_32845628 & 1;
  }
  while ( !v10 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_39:
    v27 = sub_B0D9A8(Filter_32845628);
    sub_B0D948(v27, 0LL);
  }
  v11 = v6->m_Items[5];
  v12 = !v6->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v6->m_Items[4] |= v15;
  v6->m_Items[5] = v14 || v12;
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 5LL);
  v16 = 0LL;
  LOBYTE(v17) = 1;
  do
  {
    if ( v16 + 2 >= v6->max_length )
      goto LABEL_39;
    if ( !Filter_32845628 )
      goto LABEL_40;
    if ( v16 >= *(unsigned int *)(Filter_32845628 + 24) )
      goto LABEL_39;
    v18 = v6->m_Items[v16 + 6];
    *(_BYTE *)(Filter_32845628 + 32 + v16) = v18;
    v10 = v16++ >= 4;
    v17 = (unsigned __int8)v17 & !v18;
  }
  while ( !v10 );
  if ( v17 )
  {
    v19 = v6->max_length;
    v20 = 34LL;
    while ( v20 - 32 < v19 )
    {
      v10 = (unsigned __int64)(v20 - 34) >= 4;
      *((_BYTE *)&v6->obj.klass + v20++) = 1;
      if ( v10 )
        goto LABEL_24;
    }
    goto LABEL_39;
  }
LABEL_24:
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 6LL);
  v21 = 0LL;
  v22 = 0;
  v23 = &v6->m_Items[11];
  do
  {
    if ( v21 + 7 >= v6->max_length )
      goto LABEL_39;
    if ( !Filter_32845628 )
      goto LABEL_40;
    v24 = *(unsigned int *)(Filter_32845628 + 24);
    if ( v21 >= v24 )
      goto LABEL_39;
    if ( v23[v21] )
      v22 = v21 + 1;
    v10 = v21 >= 5;
    *(_BYTE *)(Filter_32845628 + 32 + v21) = v23[v21];
    ++v21;
  }
  while ( !v10 );
  if ( !v22 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= v24 )
        goto LABEL_39;
      v10 = v25 >= 5;
      *(_BYTE *)(Filter_32845628 + 32 + v25++) = 1;
    }
    while ( !v10 );
    v22 = 6;
  }
  *settingUnitNum = v22;
  return v6;
}


System_Collections_Generic_HashSet_int__o *__fastcall AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_HashSet_int__o *v32; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Int32_array *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  WarQuestSelectionMaster_o *v39; // x20
  SkillLvMaster_o *v40; // x23
  EventBonusFilterMaster_o *v41; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v45; // x24
  AutoOrganizationManager___c_c *v46; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x25
  Il2CppObject *v49; // x21
  struct AutoOrganizationManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x0
  int size; // w8
  const MethodInfo_2C761D8 **v64; // x28
  unsigned int v65; // w21
  TitleInfoControl_EventEndTimeInfo_o *v66; // x20
  int v67; // w8
  __int64 v68; // x25
  __int64 v69; // x26
  __int64 v70; // x27
  int v71; // w8
  __int64 v72; // x26
  int v73; // w20
  char v74; // w24
  __int64 v75; // x21
  SkillLvEntity_o *v76; // x27
  const MethodInfo_2C761D8 **v77; // x19
  __int64 v78; // x21
  __int64 v79; // x28
  int32_t v80; // w21
  __int64 v81; // x1
  __int64 v82; // x2
  EventUpValInfo_o *v83; // x28
  __int64 v84; // x21
  __int64 v85; // x25
  int v86; // w8
  __int64 v87; // x25
  unsigned int v88; // w20
  __int64 v89; // x8
  __int64 v91; // x0
  ServantSkillMaster_o *v92; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v94; // [xsp+10h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+18h] [xbp-68h]
  unsigned int v96; // [xsp+24h] [xbp-5Ch]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_4216786 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventBonusFilterEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventBonusFilterEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantSkillMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_B0D8A4(&EventUpValInfo_TypeInfo, v14);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v19);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v20);
    sub_B0D8A4(&int___TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v26);
    sub_B0D8A4(&System_Collections_Generic_List_SkillInfo__TypeInfo, v27);
    sub_B0D8A4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v28);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B0D8A4(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__, v30);
    sub_B0D8A4(&AutoOrganizationManager___c_TypeInfo, v31);
    byte_4216786 = 1;
  }
  eventUpVallInfo = 0LL;
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !EventValUpEventIdHash )
    return v32;
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v32;
  }
  v36 = System_Linq_Enumerable__ToArray_int_(
          v35,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v37, v38);
  EventUpValSetupInfo___ctor_25655088(setupInfo, v36, 0, 0, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
  v39 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v40 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v41 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    goto LABEL_72;
  v92 = (ServantSkillMaster_o *)v39;
  *(_DWORD *)(Master_WarQuestSelectionMaster + 32) = eventId;
  if ( !v41 )
LABEL_71:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  FilterList = EventBonusFilterMaster__GetFilterList(v41, (System_Int32_array *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( FilterList )
  {
    v45 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v46 = AutoOrganizationManager___c_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v46 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v46->static_fields;
      _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                               System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                               v43,
                                                                               v44);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__21_0,
          v49,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
        v50 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v50->__9__21_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__21_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v50->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v45,
        (System_Comparison_T__o *)_9__21_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventUpValInfo__TypeInfo, v57, v58);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v59,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SkillInfo__TypeInfo, v60, v61);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v62,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      size = v45->fields._size;
      if ( size >= 1 )
      {
        v64 = (const MethodInfo_2C761D8 **)&Method_System_Collections_Generic_HashSet_int__Add__;
        v65 = 0;
        v94 = v45;
        do
        {
          if ( size <= v65 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v66 = v45->fields._items->m_Items[v65];
          if ( !v66 )
            goto LABEL_71;
          v67 = *(_DWORD *)&v66->fields.is_reward;
          v96 = v65;
          if ( v67 == 2 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                        (EventBonusFilterGroupMemberMaster_o *)Master_WarQuestSelectionMaster,
                                                        v66->fields.end_time,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v86 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v87 = Master_WarQuestSelectionMaster;
            if ( v86 >= 1 )
            {
              v88 = 0;
              while ( v88 < v86 )
              {
                v89 = *(_QWORD *)(v87 + 8LL * (int)v88 + 32);
                if ( !v89 || !v32 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v32,
                                                   *(_DWORD *)(v89 + 20),
                                                   *v64);
                v86 = *(_DWORD *)(v87 + 24);
                if ( (int)++v88 >= v86 )
                  goto LABEL_69;
              }
LABEL_72:
              v91 = sub_B0D9A8(Master_WarQuestSelectionMaster);
              sub_B0D948(v91, 0LL);
            }
          }
          else if ( v67 == 1 )
          {
            Master_WarQuestSelectionMaster = (__int64)v93;
            if ( !v93 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v93,
                                                        v66->fields.end_time,
                                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v68 = Master_WarQuestSelectionMaster;
            v70 = *(_QWORD *)(Master_WarQuestSelectionMaster + 16);
            v69 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v98.fields.currentCryptoKey = v70;
            *(_QWORD *)&v98.fields.fakeValue = v69;
            Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v98,
                                               0LL);
            if ( !v92 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)ServantSkillMaster__getServantSkillList(
                                                        v92,
                                                        Master_WarQuestSelectionMaster,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v71 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v72 = Master_WarQuestSelectionMaster;
            if ( v71 >= 1 )
            {
              v73 = 0;
              v74 = 0;
              do
              {
                if ( v73 >= (unsigned int)v71 )
                  goto LABEL_72;
                v75 = *(_QWORD *)(v72 + 8LL * v73 + 32);
                if ( !v75 || !v40 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = (__int64)SkillLvMaster__GetEntity(v40, *(_DWORD *)(v75 + 28), 1, 0LL);
                if ( Master_WarQuestSelectionMaster && !*(_DWORD *)(v75 + 44) )
                {
                  v76 = (SkillLvEntity_o *)Master_WarQuestSelectionMaster;
                  v77 = v64;
                  v78 = *(_QWORD *)(v68 + 16);
                  v79 = *(_QWORD *)(v68 + 24);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v99.fields.currentCryptoKey = v78;
                  *(_QWORD *)&v99.fields.fakeValue = v79;
                  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v99, 0LL);
                  v83 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v81, v82);
                  EventUpValInfo___ctor(v83, setupInfo, v80, 1, 1, 0, 0LL);
                  eventUpVallInfo = v83;
                  Master_WarQuestSelectionMaster = SkillLvEntity__getEventUpVal_26144328(
                                                     v76,
                                                     &eventUpVallInfo,
                                                     1,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
                  v74 |= Master_WarQuestSelectionMaster;
                  v64 = v77;
                }
                v71 = *(_DWORD *)(v72 + 24);
                ++v73;
              }
              while ( v73 < v71 );
              if ( (v74 & 1) != 0 )
              {
                v84 = *(_QWORD *)(v68 + 16);
                v85 = *(_QWORD *)(v68 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v100.fields.currentCryptoKey = v84;
                *(_QWORD *)&v100.fields.fakeValue = v85;
                Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v100,
                                                   0LL);
                if ( !v32 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v32,
                                                   Master_WarQuestSelectionMaster,
                                                   *v64);
              }
            }
          }
LABEL_69:
          v45 = v94;
          size = v94->fields._size;
          v65 = v96 + 1;
        }
        while ( (int)(v96 + 1) < size );
      }
    }
  }
  return v32;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  unsigned __int64 v4; // x10
  __int64 v5; // x0
  bool *v6; // x8
  __int64 v8; // x0

  if ( !rarityFlag )
    sub_B0D97C(0LL);
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
        v8 = sub_B0D9A8(v5);
        sub_B0D948(v8, 0LL);
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
  __int64 Filter_32845688; // x0
  System_Boolean_array *v4; // x19
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  unsigned __int64 max_length; // x8
  bool v8; // cf
  _BOOL4 v9; // w9
  bool v10; // w8
  bool v11; // zf
  bool v12; // w9
  char v13; // w11
  unsigned __int64 v14; // x8
  int v15; // w10
  _BOOL4 v16; // w12
  unsigned __int64 v17; // x8
  __int64 v18; // x9
  __int64 v20; // x0

  if ( (byte_4216782 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    byte_4216782 = 1;
  }
  Filter_32845688 = sub_B0D8BC(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_26:
    sub_B0D97C(Filter_32845688);
  v4 = (System_Boolean_array *)Filter_32845688;
  v5 = 0LL;
  v6 = Filter_32845688 + 32;
  do
  {
    Filter_32845688 = ListViewSort__GetFilter_32845688(sort, v5, 0LL);
    if ( !v4 )
      goto LABEL_26;
    max_length = v4->max_length;
    if ( v5 >= max_length )
      goto LABEL_25;
    v8 = v5 >= 6;
    *(_BYTE *)(v6 + v5++) = Filter_32845688 & 1;
  }
  while ( !v8 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_25:
    v20 = sub_B0D9A8(Filter_32845688);
    sub_B0D948(v20, 0LL);
  }
  v9 = v4->m_Items[5];
  v10 = !v4->m_Items[4];
  v11 = !v9;
  v12 = v9;
  v13 = v11;
  v4->m_Items[4] |= v13;
  v4->m_Items[5] = v12 || v10;
  Filter_32845688 = sub_B0D8BC(bool___TypeInfo, 5LL);
  v14 = 0LL;
  LOBYTE(v15) = 1;
  do
  {
    if ( v14 + 2 >= v4->max_length )
      goto LABEL_25;
    if ( !Filter_32845688 )
      goto LABEL_26;
    if ( v14 >= *(unsigned int *)(Filter_32845688 + 24) )
      goto LABEL_25;
    v16 = v4->m_Items[v14 + 6];
    *(_BYTE *)(Filter_32845688 + 32 + v14) = v16;
    v8 = v14++ >= 4;
    v15 = (unsigned __int8)v15 & !v16;
  }
  while ( !v8 );
  if ( v15 )
  {
    v17 = v4->max_length;
    v18 = 34LL;
    while ( v18 - 32 < v17 )
    {
      v8 = (unsigned __int64)(v18 - 34) >= 4;
      *((_BYTE *)&v4->obj.klass + v18++) = 1;
      if ( v8 )
        return v4;
    }
    goto LABEL_25;
  }
  return v4;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_421677F & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v1);
    byte_421677F = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B0D97C(autoOrganizationInfo);
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
  int32_t allOutBattleGroupNo; // w21
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4216788 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_4216788 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           Master_WarQuestSelectionMaster,
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
  __int64 v6; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216789 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    byte_4216789 = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
    sub_B0D97C(UserId);
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
  __int64 v6; // x1
  UserEventServantFatigueMaster_o *Master_WarQuestSelectionMaster; // x0
  int64_t v8; // x19
  bool isRecover; // [xsp+Ch] [xbp-24h] BYREF
  int64_t recoverAt; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4216787 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    byte_4216787 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          Master_WarQuestSelectionMaster,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v8 = recoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v8 > NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  int32_t materialParentWarId; // w20
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
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  Il2CppObject *current; // x25
  int32_t klass; // w22
  _BOOL8 v24; // x0
  float Rate; // s0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  AutoOrganizationManager___c_c *v29; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__19_0; // x20
  Il2CppObject *v32; // x21
  struct AutoOrganizationManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  materialParentWarId = enemyClassId;
  if ( (byte_4216784 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v11);
    sub_B0D8A4(&Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__, v12);
    sub_B0D8A4(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___67901032, v15);
    sub_B0D8A4(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v16);
    sub_B0D8A4(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v17);
    sub_B0D8A4(&AutoOrganizationManager___c_TypeInfo, v18);
    byte_4216784 = 1;
  }
  entity = 0LL;
  memset(&v43, 0, sizeof(v43));
  v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                                          *(_QWORD *)&enemyClassId,
                                                                          method);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___67901032);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( materialParentWarId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_34;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    materialParentWarId,
                                                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_34;
      materialParentWarId = entity->fields.materialParentWarId;
    }
  }
  if ( !v19 )
LABEL_34:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v26 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B0D97C(v26);
    if ( !v21 )
      sub_B0D97C(v26);
    klass = (int32_t)v43.fields.current[2].klass;
    v24 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v21,
            &entity,
            klass,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v24 )
    {
      if ( !entity )
        sub_B0D97C(v24);
      klass = entity->fields.materialParentWarId;
    }
    Rate = 1.0;
    if ( materialParentWarId )
      Rate = ClassRelationMaster__getRate(klass, materialParentWarId, 0LL);
    *((float *)&current[2].monitor + 1) = Rate * (float)SHIDWORD(current[2].klass);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v29 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v29 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B0D974(
                                                                    System_Func_AutoOrganizationManager_ServantData__float__TypeInfo,
                                                                    v27,
                                                                    v28);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__19_0,
      v32,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      (const MethodInfo_261A8AC *)Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__);
    v33 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v33->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_AutoOrganizationManager_ServantData__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_1B4EE2C *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v40,
                                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_421677D & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v1);
    byte_421677D = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  return v2->static_fields->autoOrganizationInfo;
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_421677E & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v1);
    byte_421677E = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  return v2->static_fields->waveBattleAutoOrganizationInfo;
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
  *(_QWORD *)&this->fields.classId = 0LL;
  *(_QWORD *)&this->fields.collectionNo = 0LL;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)((char *)&this->fields.relationNum + 1) = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421398A & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_421398A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AutoOrganizationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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


int32_t __fastcall AutoOrganizationManager___c___GetEventBonusIds_b__21_0(
        AutoOrganizationManager___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.svtId == this->fields.svtId;
}