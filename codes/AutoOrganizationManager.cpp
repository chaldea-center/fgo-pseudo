void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ListViewSort_o *v13; // x19
  struct AutoOrganizationManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418991E & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_2204/*"AutoOrganization"*/, v3);
    sub_B2C35C(&StringLiteral_2210/*"AutoOrganizationWaveBattle"*/, v4);
    byte_418991E = 1;
  }
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_GAIN = 10602;
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_REGAIN = 10603;
  v5 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v5, (System_String_o *)StringLiteral_2204/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->autoOrganizationInfo,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, (System_String_o *)StringLiteral_2210/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v14 = AutoOrganizationManager_TypeInfo->static_fields;
  v14->waveBattleAutoOrganizationInfo = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->waveBattleAutoOrganizationInfo,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  const MethodInfo *v33; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x27
  System_Collections_Generic_HashSet_int__o *v36; // x24
  System_Collections_Generic_HashSet_int__o *v37; // x23
  System_Collections_Generic_List_int__o *v38; // x24
  AutoOrganizationServantBonusFilterEquipComponent_c *v39; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  EventBonusFilterGroupMemberMaster_o *v43; // x27
  int v44; // w28
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  int v53; // w8
  int64_t v54; // x22
  unsigned int v55; // w24
  __int64 v56; // x8
  __int64 v57; // x8
  unsigned __int64 v58; // x28
  UserServantEntity_o *v59; // x25
  __int64 v60; // x22
  __int64 v61; // x26
  int32_t v62; // w0
  __int64 v63; // x22
  __int64 v64; // x26
  int32_t v65; // w0
  __int64 v66; // x26
  __int128 v67; // q0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x24
  __int64 v69; // x22
  __int64 v70; // x27
  int32_t v71; // w0
  int32_t v72; // w2
  int32_t atk; // w8
  WarEntity_o *v74; // x8
  float v75; // s13
  float v76; // s13
  __int64 v77; // x22
  __int64 v78; // x27
  float v79; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x27
  AutoOrganizationManager_c *v81; // x0
  float v82; // s0
  AutoOrganizationManager_c *v83; // x0
  __int64 v84; // x22
  __int64 v85; // x26
  int32_t v86; // w0
  __int64 v87; // x22
  __int64 v88; // x26
  int32_t v89; // w0
  struct AutoOrganizationManager___c_StaticFields *v90; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__20_0; // x19
  Il2CppObject *v92; // x21
  struct AutoOrganizationManager___c_StaticFields *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v101; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v102; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_HashSet_int__o *v103; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // [xsp+10h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+40h] [xbp-C0h]
  int v107; // [xsp+6Ch] [xbp-94h] BYREF
  WarEntity_o *entity; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4189919 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_B2C35C(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_B2C35C(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, v6);
    sub_B2C35C(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v24);
    sub_B2C35C(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v25);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v28);
    sub_B2C35C(&AutoOrganizationManager_ServantData_TypeInfo, v29);
    sub_B2C35C(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__, v30);
    sub_B2C35C(&AutoOrganizationManager___c_TypeInfo, v31);
    byte_4189919 = 1;
  }
  entity = 0LL;
  v107 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v37,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !eventId )
  {
    v103 = v36;
    v38 = organizedEquipIdList;
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
  Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager__GetEventBonusIds(eventId, v33);
  v38 = organizedEquipIdList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  v103 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
  if ( *(int *)(Master_WarQuestSelectionMaster + 32) < 1 )
    goto LABEL_40;
  v39 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    v39 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  }
  static_fields = v39->static_fields;
  v102 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v43 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  v107 = 0;
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v44 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      v45 = System_Int32__ToString((int32_t)&v107, 0LL);
      v46 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v45, 0LL);
      if ( UnityEngine_PlayerPrefs__HasKey(v46, 0LL) )
      {
        v47 = System_Int32__ToString((int32_t)&v107, 0LL);
        v48 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v47, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_35342280(v48, 0LL);
        if ( !v37 )
          goto LABEL_109;
        System_Collections_Generic_HashSet_int___Add(
          v37,
          Master_WarQuestSelectionMaster,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v49 = System_Int32__ToString((int32_t)&v107, 0LL);
      v50 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v49, 0LL);
      Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__HasKey(v50, 0LL);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v51 = System_Int32__ToString((int32_t)&v107, 0LL);
        v52 = System_String__Concat_44305532(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v51, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_35342280(v52, 0LL);
        if ( !v43 )
          goto LABEL_109;
        Master_WarQuestSelectionMaster = (int64_t)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                    v43,
                                                    Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_109;
        v53 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
        v54 = Master_WarQuestSelectionMaster;
        if ( v53 >= 1 )
          break;
      }
LABEL_36:
      v38 = organizedEquipIdList;
      if ( ++v107 >= v44 )
        goto LABEL_37;
    }
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= v53 )
      {
LABEL_110:
        v101 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v101, 0LL);
      }
      v56 = *(_QWORD *)(v54 + 8LL * (int)v55 + 32);
      if ( !v56 || !v37 )
        break;
      Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                         v37,
                                         *(_DWORD *)(v56 + 20),
                                         (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      v53 = *(_DWORD *)(v54 + 24);
      if ( (int)++v55 >= v53 )
        goto LABEL_36;
    }
LABEL_109:
    sub_B2C434(Master_WarQuestSelectionMaster, v33);
  }
LABEL_37:
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v102;
  if ( !ServantEquipList )
    goto LABEL_109;
LABEL_41:
  v57 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    while ( 1 )
    {
      if ( v58 >= (unsigned int)v57 )
        goto LABEL_110;
      v59 = ServantEquipList->m_Items[v58];
      if ( v59 )
      {
        if ( !v38 )
          goto LABEL_113;
        v61 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
        v60 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v109.fields.currentCryptoKey = v61;
        *(_QWORD *)&v109.fields.fakeValue = v60;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v109, 0LL);
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v38,
                                           v62,
                                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_113:
          if ( !v37 )
            goto LABEL_109;
          if ( v37->fields._count < 1 )
            goto LABEL_114;
          v64 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
          v63 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v110.fields.currentCryptoKey = v64;
          *(_QWORD *)&v110.fields.fakeValue = v63;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v110, 0LL);
          Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Contains(
                                             v37,
                                             v65,
                                             (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
LABEL_114:
            Master_WarQuestSelectionMaster = UserServantEntity__IsFriendShipSvtEquip(v59, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              break;
          }
        }
      }
LABEL_98:
      LODWORD(v57) = ServantEquipList->max_length;
      if ( (__int64)++v58 >= (int)v57 )
        goto LABEL_99;
    }
    v66 = sub_B2C42C(AutoOrganizationManager_ServantData_TypeInfo);
    AutoOrganizationManager_ServantData___ctor((AutoOrganizationManager_ServantData_o *)v66, 0LL);
    v67 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
    *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v106.fields.fakeValue = v67;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v68 = v35;
    v105 = v106;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v105, 0LL);
    if ( !v66 )
      goto LABEL_109;
    *(_QWORD *)(v66 + 24) = Master_WarQuestSelectionMaster;
    v70 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
    v69 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v111.fields.currentCryptoKey = v70;
    *(_QWORD *)&v111.fields.fakeValue = v69;
    v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v111, 0LL);
    *(_DWORD *)(v66 + 16) = v71;
    v72 = v71;
    atk = v59->fields.atk;
    Master_WarQuestSelectionMaster = (int64_t)v104;
    *(_DWORD *)(v66 + 44) = 0;
    *(_DWORD *)(v66 + 36) = atk;
    if ( !v104 )
      goto LABEL_109;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       v104,
                                       &entity,
                                       v72,
                                       (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v74 = entity;
      if ( !entity )
        goto LABEL_109;
      *(_DWORD *)(v66 + 48) = entity[1].fields.age;
      *(_DWORD *)(v66 + 40) = v74[1].fields.startType;
    }
    if ( !v103 )
      goto LABEL_109;
    if ( v103->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           v103,
           *(_DWORD *)(v66 + 16),
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v75 = *(float *)(v66 + 44) + 50000.0;
      *(float *)(v66 + 44) = v75;
      v76 = v75 + (float)((float)UserServantEntity__getRarity(v59, 0LL) * 100000.0);
      *(float *)(v66 + 44) = v76;
      v78 = *(_QWORD *)&v59->fields.limitCount.fields.currentCryptoKey;
      v77 = *(_QWORD *)&v59->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v112.fields.currentCryptoKey = v78;
      *(_QWORD *)&v112.fields.fakeValue = v77;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v112, 0LL);
      v79 = v76 + (float)((float)(int)Master_WarQuestSelectionMaster * 10000.0);
      goto LABEL_88;
    }
    Master_WarQuestSelectionMaster = (int64_t)UserServantEntity__GetEquipCategoryIdList(v59, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      v80 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster;
      v81 = AutoOrganizationManager_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        v81 = AutoOrganizationManager_TypeInfo;
      }
      Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                         v80,
                                         v81->static_fields->CATEGORY_ID_NP_GAIN,
                                         (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v82 = *(float *)(v66 + 44) + 40000.0;
      }
      else
      {
        v83 = AutoOrganizationManager_TypeInfo;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v83 = AutoOrganizationManager_TypeInfo;
        }
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           v80,
                                           v83->static_fields->CATEGORY_ID_NP_REGAIN,
                                           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_87;
        v82 = *(float *)(v66 + 44) + 30000.0;
      }
      *(float *)(v66 + 44) = v82;
    }
LABEL_87:
    v79 = *(float *)(v66 + 44) + (float)*(int *)(v66 + 36);
LABEL_88:
    *(float *)(v66 + 44) = v79;
    if ( !v68 )
      goto LABEL_109;
    v35 = v68;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v68,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    v38 = organizedEquipIdList;
    if ( organizedEquipIdList )
    {
      v85 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
      v84 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v113.fields.currentCryptoKey = v85;
      *(_QWORD *)&v113.fields.fakeValue = v84;
      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v113, 0LL);
      Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                         organizedEquipIdList,
                                         v86,
                                         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v88 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
        v87 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v114.fields.currentCryptoKey = v88;
        *(_QWORD *)&v114.fields.fakeValue = v87;
        v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v114, 0LL);
        System_Collections_Generic_List_int___Add(
          organizedEquipIdList,
          v89,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
  v90 = *(struct AutoOrganizationManager___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v90->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v90 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v92 = (Il2CppObject *)v90->__9;
    _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__20_0,
      v92,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v93 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v93->__9__20_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__20_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v93->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  if ( !v35 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
    (System_Comparison_T__o *)_9__20_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  UserServantEntity_array *OrganizationList; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  UserServantEntity_o *v28; // x27
  __int64 v29; // x26
  __int64 v30; // x28
  const MethodInfo *v31; // x2
  int32_t svtId; // w28
  const MethodInfo *v33; // x2
  int32_t v34; // w26
  const MethodInfo *v35; // x2
  int32_t v36; // w26
  bool UniqueSvtRestriction; // w26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x28
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t v45; // x28
  __int128 v46; // q0
  AutoOrganizationManager_ServantData_o *v47; // x28
  __int128 v48; // q0
  __int64 v50; // x0
  BattleServantConfConponent_o *p__9__0; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // [xsp+10h] [xbp-F0h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+80h] [xbp-80h]
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4189917 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, restrictionInfo);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__, v16);
    sub_B2C35C(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v17);
    sub_B2C35C(&AutoOrganizationManager_ServantData_TypeInfo, v18);
    sub_B2C35C(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v19);
    sub_B2C35C(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v20);
    byte_4189917 = 1;
  }
  entity = 0LL;
  v21 = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_B2C42C(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  AutoOrganizationManager___c__DisplayClass18_0___ctor(v21, 0LL);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_62;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( !OrganizationList )
    goto LABEL_62;
  v26 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    p__9__0 = (BattleServantConfConponent_o *)&v21->fields.__9__0;
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v27 >= (unsigned int)v26 )
      {
        v50 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v50, 0LL);
      }
      v28 = m_Items[v27];
      if ( !v28 )
        goto LABEL_58;
      Master_WarQuestSelectionMaster = UserServantEntity__getRarity(m_Items[v27], 0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster == 0 && rarityBit != 31
        || (rarityBit & 1) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 5 )
      {
        goto LABEL_58;
      }
      v29 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = v29;
      *(_QWORD *)&v61.fields.fakeValue = v30;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61, 0LL);
      if ( !v21 )
        goto LABEL_62;
      svtId = Master_WarQuestSelectionMaster;
      v21->fields.svtId = Master_WarQuestSelectionMaster;
      if ( organizedServantIds )
      {
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          goto LABEL_58;
        svtId = v21->fields.svtId;
      }
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = AutoOrganizationManager__IsFatigue(restrictionInfo, svtId, v31);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v34 = v21->fields.svtId;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v34, v33);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v36 = v21->fields.svtId;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = AutoOrganizationManager__IsDataLost(restrictionInfo, v36, v35);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = UserServantEntity__IsLeave(v28, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v28, restrictionInfo, 0LL);
              Master_WarQuestSelectionMaster = UserServantEntity__IsUniqueIndividualityRestriction(
                                                 v28,
                                                 restrictionInfo,
                                                 0LL);
              if ( !UniqueSvtRestriction && (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)p__9__0->klass;
                if ( !p__9__0->klass )
                {
                  klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                    klass,
                    (Il2CppObject *)v21,
                    Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                    (const MethodInfo_2952BE4 *)Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
                  v21->fields.__9__0 = (struct System_Predicate_AutoOrganizationManager_ServantData__o *)klass;
                  sub_B2C2F8(p__9__0, (System_Int32_array **)klass, v39, v40, v41, v42, v43, v44);
                }
                if ( !v22 )
                  goto LABEL_62;
                Master_WarQuestSelectionMaster = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v22,
                                                            (System_Predicate_T__o *)klass,
                                                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                if ( Master_WarQuestSelectionMaster )
                {
                  v45 = Master_WarQuestSelectionMaster;
                  if ( v28->fields.atk + v28->fields.adjustAtk >= *(_DWORD *)(Master_WarQuestSelectionMaster + 36) )
                  {
                    v46 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
                    *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v59.fields.fakeValue = v46;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v58 = v59;
                    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                       &v58,
                                                       0LL);
                    *(_QWORD *)(v45 + 24) = Master_WarQuestSelectionMaster;
                    *(_DWORD *)(v45 + 36) = v28->fields.adjustAtk + v28->fields.atk;
                  }
                }
                else
                {
                  v47 = (AutoOrganizationManager_ServantData_o *)sub_B2C42C(AutoOrganizationManager_ServantData_TypeInfo);
                  AutoOrganizationManager_ServantData___ctor(v47, 0LL);
                  v48 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
                  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v59.fields.fakeValue = v48;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v57 = v59;
                  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                     &v57,
                                                     0LL);
                  if ( !v47 )
                    goto LABEL_62;
                  v47->fields.userSvtId = Master_WarQuestSelectionMaster;
                  v47->fields.svtId = v21->fields.svtId;
                  v47->fields.classId = UserServantEntity__getSvtClassId(v28, 0LL);
                  Master_WarQuestSelectionMaster = (int64_t)v52;
                  v47->fields.atk = v28->fields.adjustAtk + v28->fields.atk;
                  if ( !v52 )
                    goto LABEL_62;
                  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     v52,
                                                     &entity,
                                                     v47->fields.svtId,
                                                     (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_62;
                    v47->fields.cost = (int32_t)entity[1].fields.age;
                  }
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v22,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_58:
      LODWORD(v26) = OrganizationList->max_length;
    }
    while ( (__int64)++v27 < (int)v26 );
  }
  Master_WarQuestSelectionMaster = (int64_t)v22;
  if ( !v22 )
LABEL_62:
    sub_B2C434(Master_WarQuestSelectionMaster, v24);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4189914 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v1);
    byte_4189914 = 1;
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
    sub_B2C434(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_33936432; // x0
  __int64 v6; // x1
  System_Boolean_array *v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
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
  unsigned __int64 v22; // x9
  int32_t v23; // w8
  bool *v24; // x12
  unsigned __int64 v25; // x11
  unsigned __int64 v26; // x9
  __int64 v28; // x0

  if ( (byte_4189915 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, settingUnitNum);
    byte_4189915 = 1;
  }
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_40:
    sub_B2C434(Filter_33936432, v6);
  v7 = (System_Boolean_array *)Filter_33936432;
  v8 = 0LL;
  v9 = Filter_33936432 + 32;
  do
  {
    Filter_33936432 = ListViewSort__GetFilter_33936432(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_40;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_39;
    v11 = v8 >= 0xC;
    *(_BYTE *)(v9 + v8++) = Filter_33936432 & 1;
  }
  while ( !v11 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_39:
    v28 = sub_B2C460(Filter_33936432);
    sub_B2C400(v28, 0LL);
  }
  v12 = v7->m_Items[5];
  v13 = !v7->m_Items[4];
  v14 = !v12;
  v15 = v12;
  v16 = v14;
  v7->m_Items[4] |= v16;
  v7->m_Items[5] = v15 || v13;
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 5LL);
  v17 = 0LL;
  LOBYTE(v18) = 1;
  do
  {
    if ( v17 + 2 >= v7->max_length )
      goto LABEL_39;
    if ( !Filter_33936432 )
      goto LABEL_40;
    if ( v17 >= *(unsigned int *)(Filter_33936432 + 24) )
      goto LABEL_39;
    v19 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_33936432 + 32 + v17) = v19;
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
        goto LABEL_24;
    }
    goto LABEL_39;
  }
LABEL_24:
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 6LL);
  v22 = 0LL;
  v23 = 0;
  v24 = &v7->m_Items[11];
  do
  {
    if ( v22 + 7 >= v7->max_length )
      goto LABEL_39;
    if ( !Filter_33936432 )
      goto LABEL_40;
    v25 = *(unsigned int *)(Filter_33936432 + 24);
    if ( v22 >= v25 )
      goto LABEL_39;
    if ( v24[v22] )
      v23 = v22 + 1;
    v11 = v22 >= 5;
    *(_BYTE *)(Filter_33936432 + 32 + v22) = v24[v22];
    ++v22;
  }
  while ( !v11 );
  if ( !v23 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= v25 )
        goto LABEL_39;
      v11 = v26 >= 5;
      *(_BYTE *)(Filter_33936432 + 32 + v26++) = 1;
    }
    while ( !v11 );
    v23 = 6;
  }
  *settingUnitNum = v23;
  return v7;
}


System_Collections_Generic_HashSet_int__o *__fastcall AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_HashSet_int__o *v29; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  System_Int32_array *EventValUpEventIdList; // x0
  System_Int32_array *v33; // x21
  WarQuestSelectionMaster_o *v34; // x20
  SkillLvMaster_o *v35; // x23
  EventBonusFilterMaster_o *v36; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v38; // x24
  AutoOrganizationManager___c_c *v39; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x25
  Il2CppObject *v42; // x21
  struct AutoOrganizationManager___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x0
  int size; // w8
  const MethodInfo_2D8625C **v53; // x28
  unsigned int v54; // w21
  TitleInfoControl_EventEndTimeInfo_o *v55; // x20
  int v56; // w8
  __int64 v57; // x25
  __int64 v58; // x26
  __int64 v59; // x27
  int v60; // w8
  __int64 v61; // x26
  int v62; // w20
  char v63; // w24
  __int64 v64; // x21
  SkillLvEntity_o *v65; // x27
  const MethodInfo_2D8625C **v66; // x19
  __int64 v67; // x21
  __int64 v68; // x28
  int32_t v69; // w21
  EventUpValInfo_o *v70; // x28
  __int64 v71; // x21
  __int64 v72; // x25
  int v73; // w8
  __int64 v74; // x25
  unsigned int v75; // w20
  __int64 v76; // x8
  __int64 v78; // x0
  ServantSkillMaster_o *v79; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *v80; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v81; // [xsp+10h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+18h] [xbp-68h]
  unsigned int v83; // [xsp+24h] [xbp-5Ch]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_418991A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventBonusFilterEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantSkillMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v13);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v16);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_B2C35C(&int___TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v23);
    sub_B2C35C(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_B2C35C(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v25);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B2C35C(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__, v27);
    sub_B2C35C(&AutoOrganizationManager___c_TypeInfo, v28);
    byte_418991A = 1;
  }
  eventUpVallInfo = 0LL;
  v29 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v29,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !EventValUpEventIdList )
    return v29;
  v33 = EventValUpEventIdList;
  if ( (int)EventValUpEventIdList->max_length < 1
    || !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdList,
          eventId,
          (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return v29;
  }
  setupInfo = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(setupInfo, v33, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v80 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v34 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v35 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v36 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = sub_B2C374(int___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  v31 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    goto LABEL_72;
  v79 = (ServantSkillMaster_o *)v34;
  *(_DWORD *)(Master_WarQuestSelectionMaster + 32) = eventId;
  if ( !v36 )
LABEL_71:
    sub_B2C434(Master_WarQuestSelectionMaster, v31);
  FilterList = EventBonusFilterMaster__GetFilterList(v36, (System_Int32_array *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( FilterList )
  {
    v38 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v39 = AutoOrganizationManager___c_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v39 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v39->static_fields;
      _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__21_0,
          v42,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
        v43 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v43->__9__21_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__21_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v43->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v38,
        (System_Comparison_T__o *)_9__21_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v50,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v51,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      size = v38->fields._size;
      if ( size >= 1 )
      {
        v53 = (const MethodInfo_2D8625C **)&Method_System_Collections_Generic_HashSet_int__Add__;
        v54 = 0;
        v81 = v38;
        do
        {
          if ( size <= v54 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v55 = v38->fields._items->m_Items[v54];
          if ( !v55 )
            goto LABEL_71;
          v56 = *(_DWORD *)&v55->fields.is_reward;
          v83 = v54;
          if ( v56 == 2 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                        (EventBonusFilterGroupMemberMaster_o *)Master_WarQuestSelectionMaster,
                                                        v55->fields.end_time,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v73 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v74 = Master_WarQuestSelectionMaster;
            if ( v73 >= 1 )
            {
              v75 = 0;
              while ( v75 < v73 )
              {
                v76 = *(_QWORD *)(v74 + 8LL * (int)v75 + 32);
                if ( !v76 || !v29 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v29,
                                                   *(_DWORD *)(v76 + 20),
                                                   *v53);
                v73 = *(_DWORD *)(v74 + 24);
                if ( (int)++v75 >= v73 )
                  goto LABEL_69;
              }
LABEL_72:
              v78 = sub_B2C460(Master_WarQuestSelectionMaster);
              sub_B2C400(v78, 0LL);
            }
          }
          else if ( v56 == 1 )
          {
            Master_WarQuestSelectionMaster = (__int64)v80;
            if ( !v80 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v80,
                                                        v55->fields.end_time,
                                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v57 = Master_WarQuestSelectionMaster;
            v59 = *(_QWORD *)(Master_WarQuestSelectionMaster + 16);
            v58 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v85.fields.currentCryptoKey = v59;
            *(_QWORD *)&v85.fields.fakeValue = v58;
            Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                               v85,
                                               0LL);
            if ( !v79 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)ServantSkillMaster__getServantSkillList(
                                                        v79,
                                                        Master_WarQuestSelectionMaster,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v60 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v61 = Master_WarQuestSelectionMaster;
            if ( v60 >= 1 )
            {
              v62 = 0;
              v63 = 0;
              do
              {
                if ( v62 >= (unsigned int)v60 )
                  goto LABEL_72;
                v64 = *(_QWORD *)(v61 + 8LL * v62 + 32);
                if ( !v64 || !v35 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = (__int64)SkillLvMaster__GetEntity(v35, *(_DWORD *)(v64 + 28), 1, 0LL);
                if ( Master_WarQuestSelectionMaster && !*(_DWORD *)(v64 + 44) )
                {
                  v65 = (SkillLvEntity_o *)Master_WarQuestSelectionMaster;
                  v66 = v53;
                  v67 = *(_QWORD *)(v57 + 16);
                  v68 = *(_QWORD *)(v57 + 24);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v86.fields.currentCryptoKey = v67;
                  *(_QWORD *)&v86.fields.fakeValue = v68;
                  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v86, 0LL);
                  v70 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v70, setupInfo, v69, 1, 1, 0, 0LL);
                  eventUpVallInfo = v70;
                  Master_WarQuestSelectionMaster = SkillLvEntity__getEventUpVal_23801352(
                                                     v65,
                                                     &eventUpVallInfo,
                                                     1,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
                  v63 |= Master_WarQuestSelectionMaster;
                  v53 = v66;
                }
                v60 = *(_DWORD *)(v61 + 24);
                ++v62;
              }
              while ( v62 < v60 );
              if ( (v63 & 1) != 0 )
              {
                v71 = *(_QWORD *)(v57 + 16);
                v72 = *(_QWORD *)(v57 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v87.fields.currentCryptoKey = v71;
                *(_QWORD *)&v87.fields.fakeValue = v72;
                Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v87,
                                                   0LL);
                if ( !v29 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v29,
                                                   Master_WarQuestSelectionMaster,
                                                   *v53);
              }
            }
          }
LABEL_69:
          v38 = v81;
          size = v81->fields._size;
          v54 = v83 + 1;
        }
        while ( (int)(v83 + 1) < size );
      }
    }
  }
  return v29;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  unsigned __int64 v4; // x10
  __int64 v5; // x0
  bool *v6; // x8
  __int64 v8; // x0

  if ( !rarityFlag )
    sub_B2C434(0LL, method);
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
        v8 = sub_B2C460(v5);
        sub_B2C400(v8, 0LL);
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
  __int64 Filter_33936492; // x0
  __int64 v4; // x1
  System_Boolean_array *v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  unsigned __int64 max_length; // x8
  bool v9; // cf
  _BOOL4 v10; // w9
  bool v11; // w8
  bool v12; // zf
  bool v13; // w9
  char v14; // w11
  unsigned __int64 v15; // x8
  int v16; // w10
  _BOOL4 v17; // w12
  unsigned __int64 v18; // x8
  __int64 v19; // x9
  __int64 v21; // x0

  if ( (byte_4189916 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, method);
    byte_4189916 = 1;
  }
  Filter_33936492 = sub_B2C374(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_26:
    sub_B2C434(Filter_33936492, v4);
  v5 = (System_Boolean_array *)Filter_33936492;
  v6 = 0LL;
  v7 = Filter_33936492 + 32;
  do
  {
    Filter_33936492 = ListViewSort__GetFilter_33936492(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_26;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_25;
    v9 = v6 >= 6;
    *(_BYTE *)(v7 + v6++) = Filter_33936492 & 1;
  }
  while ( !v9 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_25:
    v21 = sub_B2C460(Filter_33936492);
    sub_B2C400(v21, 0LL);
  }
  v10 = v5->m_Items[5];
  v11 = !v5->m_Items[4];
  v12 = !v10;
  v13 = v10;
  v14 = v12;
  v5->m_Items[4] |= v14;
  v5->m_Items[5] = v13 || v11;
  Filter_33936492 = sub_B2C374(bool___TypeInfo, 5LL);
  v15 = 0LL;
  LOBYTE(v16) = 1;
  do
  {
    if ( v15 + 2 >= v5->max_length )
      goto LABEL_25;
    if ( !Filter_33936492 )
      goto LABEL_26;
    if ( v15 >= *(unsigned int *)(Filter_33936492 + 24) )
      goto LABEL_25;
    v17 = v5->m_Items[v15 + 6];
    *(_BYTE *)(Filter_33936492 + 32 + v15) = v17;
    v9 = v15++ >= 4;
    v16 = (unsigned __int8)v16 & !v17;
  }
  while ( !v9 );
  if ( v16 )
  {
    v18 = v5->max_length;
    v19 = 34LL;
    while ( v19 - 32 < v18 )
    {
      v9 = (unsigned __int64)(v19 - 34) >= 4;
      *((_BYTE *)&v5->obj.klass + v19++) = 1;
      if ( v9 )
        return v5;
    }
    goto LABEL_25;
  }
  return v5;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4189913 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v1);
    byte_4189913 = 1;
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
    sub_B2C434(autoOrganizationInfo, v1);
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
  __int64 v8; // x1

  if ( (byte_418991C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_418991C = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v8);
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
  __int64 v9; // x1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418991D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    byte_418991D = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
    sub_B2C434(UserId, v9);
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
  __int64 v8; // x1
  int64_t v9; // x19
  bool isRecover; // [xsp+Ch] [xbp-24h] BYREF
  int64_t recoverAt; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_418991B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    byte_418991B = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v8);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          Master_WarQuestSelectionMaster,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v9 = recoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v9 > NetworkManager__getTime(0LL);
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
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  Il2CppObject *current; // x25
  int32_t klass; // w22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  float Rate; // s0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  AutoOrganizationManager___c_c *v30; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x20
  Il2CppObject *v33; // x21
  struct AutoOrganizationManager___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  materialParentWarId = enemyClassId;
  if ( (byte_4189918 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, *(_QWORD *)&enemyClassId);
    sub_B2C35C(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___67327440, v15);
    sub_B2C35C(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v16);
    sub_B2C35C(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v17);
    sub_B2C35C(&AutoOrganizationManager___c_TypeInfo, v18);
    byte_4189918 = 1;
  }
  entity = 0LL;
  memset(&v43, 0, sizeof(v43));
  v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___67327440);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( materialParentWarId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_34;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    materialParentWarId,
                                                                    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_34;
      materialParentWarId = entity->fields.materialParentWarId;
    }
  }
  if ( !v19 )
LABEL_34:
    sub_B2C434(Master_WarQuestSelectionMaster, v21);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v28 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B2C434(v28, v29);
    if ( !v22 )
      sub_B2C434(v28, v29);
    klass = (int32_t)v43.fields.current[2].klass;
    v25 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v22,
            &entity,
            klass,
            (const MethodInfo_24E412C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v25 )
    {
      if ( !entity )
        sub_B2C434(v25, v26);
      klass = entity->fields.materialParentWarId;
    }
    Rate = 1.0;
    if ( materialParentWarId )
      Rate = ClassRelationMaster__getRate(klass, materialParentWarId, 0LL);
    *((float *)&current[2].monitor + 1) = Rate * (float)SHIDWORD(current[2].klass);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v30 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v30 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v33,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v34 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v34->__9__19_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__19_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_4189911 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v1);
    byte_4189911 = 1;
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

  if ( (byte_4189912 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v1);
    byte_4189912 = 1;
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BD4 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_4186BD4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *a,
        AutoOrganizationManager_ServantData_o *b,
        const MethodInfo *method)
{
  float relationNum; // s0
  float v5; // s1

  if ( !a || !b )
    sub_B2C434(this, a);
  relationNum = a->fields.relationNum;
  v5 = b->fields.relationNum;
  if ( relationNum <= v5 )
    return relationNum < v5;
  else
    return -1;
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
    sub_B2C434(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}