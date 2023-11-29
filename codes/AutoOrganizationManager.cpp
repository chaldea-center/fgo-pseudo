void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ListViewSort_o *v8; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ListViewSort_o *v20; // x19
  struct AutoOrganizationManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FBF5D & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2198, v6);
    sub_B16FFC(&StringLiteral_2203, v7);
    byte_40FBF5D = 1;
  }
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_GAIN = 10602;
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_REGAIN = 10603;
  v8 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v8, (System_String_o *)StringLiteral_2198, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->autoOrganizationInfo,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v16, v17, v18, v19);
  ListViewSort___ctor_30208480(v20, (System_String_o *)StringLiteral_2203, 3, 0, 0LL);
  v21 = AutoOrganizationManager_TypeInfo->static_fields;
  v21->waveBattleAutoOrganizationInfo = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->waveBattleAutoOrganizationInfo,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x27
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_HashSet_int__o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_HashSet_int__o *v48; // x23
  void *EventBonusIds; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_int__o *v54; // x24
  AutoOrganizationServantBonusFilterEquipComponent_c *v55; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  EventBonusFilterGroupMemberMaster_o *v59; // x27
  int v60; // w28
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  int32_t Int_34836848; // w0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  int32_t v70; // w0
  int v71; // w8
  void *v72; // x22
  unsigned int v73; // w24
  __int64 v74; // x8
  __int64 v75; // x8
  unsigned __int64 v76; // x28
  UserServantEntity_o *v77; // x25
  __int64 v78; // x22
  __int64 v79; // x26
  int32_t v80; // w0
  __int64 v81; // x22
  __int64 v82; // x26
  int32_t v83; // w0
  __int64 v84; // x26
  __int128 v85; // q0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x24
  int64_t v87; // x0
  __int64 v88; // x22
  __int64 v89; // x27
  int32_t v90; // w0
  int32_t atk; // w8
  WarEntity_o *v92; // x8
  float v93; // s13
  float v94; // s13
  __int64 v95; // x22
  __int64 v96; // x27
  float v97; // s0
  System_Int32_array *EquipCategoryIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x27
  AutoOrganizationManager_c *v100; // x0
  float v101; // s0
  AutoOrganizationManager_c *v102; // x0
  __int64 v103; // x22
  __int64 v104; // x26
  int32_t v105; // w0
  __int64 v106; // x22
  __int64 v107; // x26
  int32_t v108; // w0
  AutoOrganizationManager___c_c *v109; // x0
  struct AutoOrganizationManager___c_StaticFields *v110; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__19_0; // x19
  Il2CppObject *v112; // x21
  struct AutoOrganizationManager___c_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v121; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_HashSet_int__o *v122; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v123; // [xsp+10h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+40h] [xbp-C0h]
  int v126; // [xsp+6Ch] [xbp-94h] BYREF
  WarEntity_o *entity; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_40FBF58 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_B16FFC(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_B16FFC(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, v6);
    sub_B16FFC(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v28);
    sub_B16FFC(&AutoOrganizationManager_ServantData_TypeInfo, v29);
    sub_B16FFC(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__19_0__, v30);
    sub_B16FFC(&AutoOrganizationManager___c_TypeInfo, v31);
    byte_40FBF58 = 1;
  }
  entity = 0LL;
  v126 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList(Master_WarQuestSelectionMaster, 0LL);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v123 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v43 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41,
                                                       v42);
  System_Collections_Generic_HashSet_int____ctor(
    v43,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  v48 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v44,
                                                       v45,
                                                       v46,
                                                       v47);
  System_Collections_Generic_HashSet_int____ctor(
    v48,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !eventId )
  {
    v122 = v43;
    v54 = organizedEquipIdList;
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
  EventBonusIds = AutoOrganizationManager__GetEventBonusIds(eventId, v50);
  v54 = organizedEquipIdList;
  if ( !EventBonusIds )
    goto LABEL_109;
  v122 = (System_Collections_Generic_HashSet_int__o *)EventBonusIds;
  if ( *((int *)EventBonusIds + 8) < 1 )
    goto LABEL_40;
  v55 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    v55 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  }
  static_fields = v55->static_fields;
  v121 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v38;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v59 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  EventBonusIds = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  v126 = 0;
  if ( (int)EventBonusIds >= 1 )
  {
    v60 = (int)EventBonusIds;
    while ( 1 )
    {
      v61 = System_Int32__ToString((int32_t)&v126, 0LL);
      v62 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v61, 0LL);
      if ( UnityEngine_PlayerPrefs__HasKey(v62, 0LL) )
      {
        v63 = System_Int32__ToString((int32_t)&v126, 0LL);
        v64 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v63, 0LL);
        Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v64, 0LL);
        if ( !v48 )
          goto LABEL_109;
        System_Collections_Generic_HashSet_int___Add(
          v48,
          Int_34836848,
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v66 = System_Int32__ToString((int32_t)&v126, 0LL);
      v67 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v66, 0LL);
      EventBonusIds = (void *)UnityEngine_PlayerPrefs__HasKey(v67, 0LL);
      if ( ((unsigned __int8)EventBonusIds & 1) != 0 )
      {
        v68 = System_Int32__ToString((int32_t)&v126, 0LL);
        v69 = System_String__Concat_43743732(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v68, 0LL);
        v70 = UnityEngine_PlayerPrefs__GetInt_34836848(v69, 0LL);
        if ( !v59 )
          goto LABEL_109;
        EventBonusIds = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(v59, v70, 0LL);
        if ( !EventBonusIds )
          goto LABEL_109;
        v71 = *((_DWORD *)EventBonusIds + 6);
        v72 = EventBonusIds;
        if ( v71 >= 1 )
          break;
      }
LABEL_36:
      v54 = organizedEquipIdList;
      if ( ++v126 >= v60 )
        goto LABEL_37;
    }
    v73 = 0;
    while ( 1 )
    {
      if ( v73 >= v71 )
      {
LABEL_110:
        sub_B17100(EventBonusIds, v50, v51);
        sub_B170A0();
      }
      v74 = *((_QWORD *)v72 + (int)v73 + 4);
      if ( !v74 || !v48 )
        break;
      EventBonusIds = (void *)System_Collections_Generic_HashSet_int___Add(
                                v48,
                                *(_DWORD *)(v74 + 20),
                                (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      v71 = *((_DWORD *)v72 + 6);
      if ( (int)++v73 >= v71 )
        goto LABEL_36;
    }
LABEL_109:
    sub_B170D4();
  }
LABEL_37:
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121;
  if ( !ServantEquipList )
    goto LABEL_109;
LABEL_41:
  v75 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v75 >= 1 )
  {
    v76 = 0LL;
    while ( 1 )
    {
      if ( v76 >= (unsigned int)v75 )
        goto LABEL_110;
      v77 = ServantEquipList->m_Items[v76];
      if ( v77 )
      {
        if ( !v54 )
          goto LABEL_113;
        v79 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
        v78 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v128.fields.currentCryptoKey = v79;
        *(_QWORD *)&v128.fields.fakeValue = v78;
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128, 0LL);
        EventBonusIds = (void *)System_Collections_Generic_List_int___Contains(
                                  v54,
                                  v80,
                                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)EventBonusIds & 1) == 0 )
        {
LABEL_113:
          if ( !v48 )
            goto LABEL_109;
          if ( v48->fields._count < 1 )
            goto LABEL_114;
          v82 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
          v81 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v129.fields.currentCryptoKey = v82;
          *(_QWORD *)&v129.fields.fakeValue = v81;
          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v129, 0LL);
          EventBonusIds = (void *)System_Collections_Generic_HashSet_int___Contains(
                                    v48,
                                    v83,
                                    (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
          if ( ((unsigned __int8)EventBonusIds & 1) == 0 )
          {
LABEL_114:
            EventBonusIds = (void *)UserServantEntity__IsFriendShipSvtEquip(v77, 0LL);
            if ( ((unsigned __int8)EventBonusIds & 1) == 0 )
              break;
          }
        }
      }
LABEL_98:
      LODWORD(v75) = ServantEquipList->max_length;
      if ( (__int64)++v76 >= (int)v75 )
        goto LABEL_99;
    }
    v84 = sub_B170CC(AutoOrganizationManager_ServantData_TypeInfo, v50, v51, v52, v53);
    AutoOrganizationManager_ServantData___ctor((AutoOrganizationManager_ServantData_o *)v84, 0LL);
    v85 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
    *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v125.fields.fakeValue = v85;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v86 = v38;
    v124 = v125;
    v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v124, 0LL);
    if ( !v84 )
      goto LABEL_109;
    *(_QWORD *)(v84 + 24) = v87;
    v89 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v88 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v130.fields.currentCryptoKey = v89;
    *(_QWORD *)&v130.fields.fakeValue = v88;
    v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v130, 0LL);
    *(_DWORD *)(v84 + 16) = v90;
    atk = v77->fields.atk;
    *(_DWORD *)(v84 + 44) = 0;
    *(_DWORD *)(v84 + 36) = atk;
    if ( !v123 )
      goto LABEL_109;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v123,
           &entity,
           v90,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      v92 = entity;
      if ( !entity )
        goto LABEL_109;
      *(_DWORD *)(v84 + 48) = entity[1].fields.age;
      *(_DWORD *)(v84 + 40) = v92[1].fields.startType;
    }
    if ( !v122 )
      goto LABEL_109;
    if ( v122->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           v122,
           *(_DWORD *)(v84 + 16),
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v93 = *(float *)(v84 + 44) + 50000.0;
      *(float *)(v84 + 44) = v93;
      v94 = v93 + (float)((float)UserServantEntity__getRarity(v77, 0LL) * 100000.0);
      *(float *)(v84 + 44) = v94;
      v96 = *(_QWORD *)&v77->fields.limitCount.fields.currentCryptoKey;
      v95 = *(_QWORD *)&v77->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v131.fields.currentCryptoKey = v96;
      *(_QWORD *)&v131.fields.fakeValue = v95;
      v97 = v94
          + (float)((float)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v131, 0LL) * 10000.0);
      goto LABEL_88;
    }
    EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(v77, 0LL);
    if ( EquipCategoryIdList )
    {
      v99 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipCategoryIdList;
      v100 = AutoOrganizationManager_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        v100 = AutoOrganizationManager_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v99,
             v100->static_fields->CATEGORY_ID_NP_GAIN,
             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v101 = *(float *)(v84 + 44) + 40000.0;
      }
      else
      {
        v102 = AutoOrganizationManager_TypeInfo;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v102 = AutoOrganizationManager_TypeInfo;
        }
        if ( !System_Linq_Enumerable__Contains_int_(
                v99,
                v102->static_fields->CATEGORY_ID_NP_REGAIN,
                (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          goto LABEL_87;
        v101 = *(float *)(v84 + 44) + 30000.0;
      }
      *(float *)(v84 + 44) = v101;
    }
LABEL_87:
    v97 = *(float *)(v84 + 44) + (float)*(int *)(v84 + 36);
LABEL_88:
    *(float *)(v84 + 44) = v97;
    if ( !v86 )
      goto LABEL_109;
    v38 = v86;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v86,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    v54 = organizedEquipIdList;
    if ( organizedEquipIdList )
    {
      v104 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v132.fields.currentCryptoKey = v104;
      *(_QWORD *)&v132.fields.fakeValue = v103;
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v132, 0LL);
      EventBonusIds = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v105,
                                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)EventBonusIds & 1) == 0 )
      {
        v107 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
        v106 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v133.fields.currentCryptoKey = v107;
        *(_QWORD *)&v133.fields.fakeValue = v106;
        v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133, 0LL);
        System_Collections_Generic_List_int___Add(
          organizedEquipIdList,
          v108,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    goto LABEL_98;
  }
LABEL_99:
  v109 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v109 = AutoOrganizationManager___c_TypeInfo;
  }
  v110 = v109->static_fields;
  _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v110->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v109->vtable._0_Equals.methodPtr) & 4) != 0 && !v109->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v109);
      v110 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v112 = (Il2CppObject *)v110->__9;
    _9__19_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_AutoOrganizationManager_ServantData__TypeInfo,
                                                                           v50,
                                                                           v51,
                                                                           v52,
                                                                           v53);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__19_0,
      v112,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__19_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v113 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v113->__9__19_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__19_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v113->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
  }
  if ( !v38 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v38,
    (System_Comparison_T__o *)_9__19_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        System_Int32_array *enemyClassIds,
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        const MethodInfo *method)
{
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
  signed int max_length; // w8
  unsigned int materialParentWarId; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  UserServantMaster_o *v40; // x0
  UserServantEntity_array *OrganizationList; // x26
  int64_t Rarity; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x8
  unsigned __int64 v48; // x24
  UserServantEntity_o *v49; // x28
  __int64 v50; // x25
  __int64 v51; // x27
  int32_t v52; // w0
  int32_t svtId; // w27
  int32_t v54; // w25
  int32_t v55; // w25
  bool UniqueSvtRestriction; // w25
  int32_t SvtClassId; // w27
  bool v58; // w0
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x1
  float Rate; // s8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x27
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int64_t v71; // x27
  __int128 v72; // q0
  int v73; // w8
  AutoOrganizationManager_ServantData_o *v74; // x27
  __int128 v75; // q0
  int64_t v76; // x0
  AutoOrganizationManager___c_c *v77; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x19
  Il2CppObject *v80; // x20
  struct AutoOrganizationManager___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  BattleServantConfConponent_o *p__9__1; // [xsp+8h] [xbp-128h]
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // [xsp+10h] [xbp-120h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v91; // [xsp+28h] [xbp-108h]
  AutoOrganizationManager___c__DisplayClass18_0_o *object; // [xsp+40h] [xbp-F0h]
  UserServantEntity_o **m_Items; // [xsp+48h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+90h] [xbp-A0h]
  WarEntity_o *v99; // [xsp+B8h] [xbp-78h] BYREF
  WarEntity_o *entity[2]; // [xsp+C0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_40FBF57 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, *(_QWORD *)&rarityBit);
    sub_B16FFC(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__, v7);
    sub_B16FFC(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_B16FFC(&Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__, v24);
    sub_B16FFC(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v25);
    sub_B16FFC(&AutoOrganizationManager_ServantData_TypeInfo, v26);
    sub_B16FFC(&Method_AutoOrganizationManager___c__AutoOrganizationServant_b__18_0__, v27);
    sub_B16FFC(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__1__, v28);
    sub_B16FFC(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v29);
    sub_B16FFC(&AutoOrganizationManager___c_TypeInfo, v30);
    byte_40FBF57 = 1;
  }
  v99 = 0LL;
  entity[0] = 0LL;
  object = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_B170CC(
                                                                AutoOrganizationManager___c__DisplayClass18_0_TypeInfo,
                                                                *(_QWORD *)&rarityBit,
                                                                restrictionInfo,
                                                                organizedServantIds,
                                                                method);
  AutoOrganizationManager___c__DisplayClass18_0___ctor(object, 0LL);
  if ( enemyClassIds && (max_length = enemyClassIds->max_length, max_length >= 1) )
  {
    materialParentWarId = enemyClassIds->m_Items[1];
    if ( materialParentWarId == 7 )
    {
      if ( max_length >= 2 )
        materialParentWarId = enemyClassIds->m_Items[2];
      else
        materialParentWarId = 7;
    }
  }
  else
  {
    materialParentWarId = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v38 = Master_WarQuestSelectionMaster;
  if ( materialParentWarId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           entity,
           materialParentWarId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
    {
      if ( !entity[0] )
        goto LABEL_91;
      materialParentWarId = entity[0]->fields.materialParentWarId;
    }
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v40 = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v40 )
    goto LABEL_91;
  v91 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39;
  OrganizationList = UserServantMaster__getOrganizationList(v40, 0LL);
  Rarity = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)Rarity;
  if ( !OrganizationList )
    goto LABEL_91;
  v47 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = 0LL;
    p__9__1 = (BattleServantConfConponent_o *)&object->fields.__9__1;
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v48 >= (unsigned int)v47 )
      {
        sub_B17100(Rarity, v43, v44);
        sub_B170A0();
      }
      v49 = m_Items[v48];
      if ( !v49 )
        goto LABEL_78;
      Rarity = UserServantEntity__getRarity(m_Items[v48], 0LL);
      if ( (_DWORD)Rarity == 0 && rarityBit != 31
        || (rarityBit & 1) == 0 && (_DWORD)Rarity == 1
        || (rarityBit & 2) == 0 && (_DWORD)Rarity == 2
        || (rarityBit & 4) == 0 && (_DWORD)Rarity == 3
        || (rarityBit & 8) == 0 && (_DWORD)Rarity == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Rarity == 5 )
      {
        goto LABEL_78;
      }
      v50 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v101.fields.currentCryptoKey = v50;
      *(_QWORD *)&v101.fields.fakeValue = v51;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v101, 0LL);
      if ( !object )
        goto LABEL_91;
      svtId = v52;
      object->fields.svtId = v52;
      if ( organizedServantIds )
      {
        Rarity = System_Linq_Enumerable__Contains_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                   v52,
                   (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Rarity & 1) != 0 )
          goto LABEL_78;
        svtId = object->fields.svtId;
      }
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      Rarity = AutoOrganizationManager__IsFatigue(restrictionInfo, svtId, v44);
      if ( (Rarity & 1) == 0 )
      {
        v54 = object->fields.svtId;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        }
        Rarity = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v54, v44);
        if ( (Rarity & 1) == 0 )
        {
          v55 = object->fields.svtId;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          Rarity = AutoOrganizationManager__IsDataLost(restrictionInfo, v55, v44);
          if ( (Rarity & 1) == 0 )
          {
            Rarity = UserServantEntity__IsLeave(v49, 0LL);
            if ( (Rarity & 1) == 0 )
            {
              UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v49, restrictionInfo, 0LL);
              Rarity = UserServantEntity__IsUniqueIndividualityRestriction(v49, restrictionInfo, 0LL);
              if ( !UniqueSvtRestriction && (Rarity & 1) == 0 )
              {
                SvtClassId = UserServantEntity__getSvtClassId(v49, 0LL);
                if ( !v38 )
                  goto LABEL_91;
                v58 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        v38,
                        entity,
                        SvtClassId,
                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
                v62 = materialParentWarId;
                if ( v58 )
                {
                  if ( !entity[0] )
                    goto LABEL_91;
                  SvtClassId = entity[0]->fields.materialParentWarId;
                }
                Rate = 1.0;
                if ( materialParentWarId )
                  Rate = ClassRelationMaster__getRate(SvtClassId, materialParentWarId, 0LL);
                klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)p__9__1->klass;
                if ( !p__9__1->klass )
                {
                  klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                     System_Predicate_AutoOrganizationManager_ServantData__TypeInfo,
                                                                                     v62,
                                                                                     v59,
                                                                                     v60,
                                                                                     v61);
                  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                    klass,
                    (Il2CppObject *)object,
                    Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__1__,
                    (const MethodInfo_2B0B204 *)Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
                  object->fields.__9__1 = (struct System_Predicate_AutoOrganizationManager_ServantData__o *)klass;
                  sub_B16F98(p__9__1, (System_Int32_array **)klass, v65, v66, v67, v68, v69, v70);
                }
                if ( !v39 )
                  goto LABEL_91;
                Rarity = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v39,
                                    (System_Predicate_T__o *)klass,
                                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                if ( Rarity )
                {
                  v71 = Rarity;
                  if ( v49->fields.atk + v49->fields.adjustAtk >= *(_DWORD *)(Rarity + 36) )
                  {
                    v72 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
                    *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v98.fields.fakeValue = v72;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v97 = v98;
                    Rarity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v97, 0LL);
                    *(_QWORD *)(v71 + 24) = Rarity;
                    v73 = v49->fields.adjustAtk + v49->fields.atk;
                    *(_DWORD *)(v71 + 36) = v73;
                    *(float *)(v71 + 44) = Rate * (float)v73;
                  }
                }
                else
                {
                  v74 = (AutoOrganizationManager_ServantData_o *)sub_B170CC(
                                                                   AutoOrganizationManager_ServantData_TypeInfo,
                                                                   v43,
                                                                   v44,
                                                                   v45,
                                                                   v46);
                  AutoOrganizationManager_ServantData___ctor(v74, 0LL);
                  v75 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
                  *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v98.fields.fakeValue = v75;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  }
                  v96 = v98;
                  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v96, 0LL);
                  if ( !v74 )
                    goto LABEL_91;
                  v74->fields.userSvtId = v76;
                  v74->fields.svtId = object->fields.svtId;
                  v74->fields.classId = UserServantEntity__getSvtClassId(v49, 0LL);
                  v74->fields.atk = v49->fields.adjustAtk + v49->fields.atk;
                  if ( !v90 )
                    goto LABEL_91;
                  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         v90,
                         &v99,
                         v74->fields.svtId,
                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                  {
                    if ( !v99 )
                      goto LABEL_91;
                    v74->fields.cost = (int32_t)v99[1].fields.age;
                  }
                  v74->fields.relationNum = Rate * (float)v74->fields.atk;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v39,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                }
              }
            }
          }
        }
      }
LABEL_78:
      LODWORD(v47) = OrganizationList->max_length;
    }
    while ( (__int64)++v48 < (int)v47 );
  }
  v77 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v77 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v77->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v80 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_AutoOrganizationManager_ServantData__TypeInfo,
                                                                           v43,
                                                                           v44,
                                                                           v45,
                                                                           v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v80,
      Method_AutoOrganizationManager___c__AutoOrganizationServant_b__18_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v81 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v81->__9__18_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__18_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v81->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  if ( !v91 )
LABEL_91:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v91,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v91,
                                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x0

  if ( (byte_40FBF54 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v1);
    byte_40FBF54 = 1;
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
        (waveBattleAutoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(waveBattleAutoOrganizationInfo, 0LL);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_Boolean_array *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  __int64 Filter_30230224; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned __int64 max_length; // x8
  bool v13; // cf
  _BOOL4 v14; // w9
  bool v15; // w8
  bool v16; // zf
  bool v17; // w9
  char v18; // w11
  unsigned __int64 v19; // x8
  int v20; // w10
  _BOOL4 v21; // w12
  unsigned __int64 v22; // x8
  __int64 v23; // x9
  unsigned __int64 v24; // x9
  int32_t v25; // w8
  bool *v26; // x12
  unsigned __int64 v27; // x11
  unsigned __int64 v28; // x9

  if ( (byte_40FBF55 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, settingUnitNum);
    byte_40FBF55 = 1;
  }
  v5 = sub_B17014(bool___TypeInfo, 13LL, method);
  if ( !sort )
LABEL_40:
    sub_B170D4();
  v6 = (System_Boolean_array *)v5;
  v7 = 0LL;
  v8 = v5 + 32;
  do
  {
    Filter_30230224 = ListViewSort__GetFilter_30230224(sort, v7, 0LL);
    if ( !v6 )
      goto LABEL_40;
    max_length = v6->max_length;
    if ( v7 >= max_length )
      goto LABEL_39;
    v13 = v7 >= 0xC;
    *(_BYTE *)(v8 + v7++) = Filter_30230224 & 1;
  }
  while ( !v13 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_39:
    sub_B17100(Filter_30230224, v10, v11);
    sub_B170A0();
  }
  v14 = v6->m_Items[5];
  v15 = !v6->m_Items[4];
  v16 = !v14;
  v17 = v14;
  v18 = v16;
  v6->m_Items[4] |= v18;
  v6->m_Items[5] = v17 || v15;
  Filter_30230224 = sub_B17014(bool___TypeInfo, 5LL, v11);
  v19 = 0LL;
  LOBYTE(v20) = 1;
  do
  {
    if ( v19 + 2 >= v6->max_length )
      goto LABEL_39;
    if ( !Filter_30230224 )
      goto LABEL_40;
    if ( v19 >= *(unsigned int *)(Filter_30230224 + 24) )
      goto LABEL_39;
    v21 = v6->m_Items[v19 + 6];
    *(_BYTE *)(Filter_30230224 + 32 + v19) = v21;
    v13 = v19++ >= 4;
    v20 = (unsigned __int8)v20 & !v21;
  }
  while ( !v13 );
  if ( v20 )
  {
    v22 = v6->max_length;
    v23 = 34LL;
    while ( v23 - 32 < v22 )
    {
      v13 = (unsigned __int64)(v23 - 34) >= 4;
      *((_BYTE *)&v6->obj.klass + v23++) = 1;
      if ( v13 )
        goto LABEL_24;
    }
    goto LABEL_39;
  }
LABEL_24:
  Filter_30230224 = sub_B17014(bool___TypeInfo, 6LL, v11);
  v24 = 0LL;
  v25 = 0;
  v26 = &v6->m_Items[11];
  do
  {
    if ( v24 + 7 >= v6->max_length )
      goto LABEL_39;
    if ( !Filter_30230224 )
      goto LABEL_40;
    v27 = *(unsigned int *)(Filter_30230224 + 24);
    if ( v24 >= v27 )
      goto LABEL_39;
    if ( v26[v24] )
      v25 = v24 + 1;
    v13 = v24 >= 5;
    *(_BYTE *)(Filter_30230224 + 32 + v24) = v26[v24];
    ++v24;
  }
  while ( !v13 );
  if ( !v25 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= v27 )
        goto LABEL_39;
      v13 = v28 >= 5;
      *(_BYTE *)(Filter_30230224 + 32 + v28++) = 1;
    }
    while ( !v13 );
    v25 = 6;
  }
  *settingUnitNum = v25;
  return v6;
}


System_Collections_Generic_HashSet_int__o *__fastcall AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *EventValUpEventIdList; // x0
  System_Int32_array *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  WarQuestSelectionMaster_o *v40; // x20
  SkillLvMaster_o *v41; // x23
  EventBonusFilterMaster_o *v42; // x25
  __int64 v43; // x2
  System_Int32_array *EntitiesByGroupId; // x0
  __int64 v45; // x2
  System_Int32_array *v46; // x1
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v52; // x24
  AutoOrganizationManager___c_c *v53; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__20_0; // x25
  Il2CppObject *v56; // x21
  struct AutoOrganizationManager___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x0
  int size; // w8
  const MethodInfo_21D915C **v75; // x28
  unsigned int v76; // w21
  TitleInfoControl_EventEndTimeInfo_o *v77; // x20
  int v78; // w8
  WarEntity_o *Entity; // x0
  WarEntity_o *v80; // x25
  struct System_String_o *age; // x26
  __int64 v82; // x27
  int32_t v83; // w0
  int v84; // w8
  System_Int32_array *v85; // x26
  int v86; // w20
  char v87; // w24
  __int64 v88; // x21
  SkillLvEntity_o *v89; // x27
  const MethodInfo_21D915C **v90; // x19
  __int64 v91; // x21
  struct System_String_o *v92; // x28
  int32_t v93; // w21
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  EventUpValInfo_o *v98; // x28
  __int64 v99; // x21
  struct System_String_o *v100; // x25
  int32_t v101; // w0
  EventBonusFilterGroupMemberMaster_o *v102; // x0
  int max_length; // w8
  System_Int32_array *v104; // x25
  unsigned int v105; // w20
  __int64 v106; // x8
  ServantSkillMaster_o *v108; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *v109; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v110; // [xsp+10h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+18h] [xbp-68h]
  unsigned int v112; // [xsp+24h] [xbp-5Ch]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_40FBF59 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventBonusFilterEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_EventBonusFilterEntity__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantSkillMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v15);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v16);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v19);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v26);
    sub_B16FFC(&System_Collections_Generic_List_SkillInfo__TypeInfo, v27);
    sub_B16FFC(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v28);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
    sub_B16FFC(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__20_0__, v30);
    sub_B16FFC(&AutoOrganizationManager___c_TypeInfo, v31);
    byte_40FBF59 = 1;
  }
  eventUpVallInfo = 0LL;
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(Master_WarQuestSelectionMaster, 0, 0LL);
  if ( !EventValUpEventIdList )
    return v32;
  v35 = EventValUpEventIdList;
  if ( (int)EventValUpEventIdList->max_length < 1
    || !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdList,
          eventId,
          (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return v32;
  }
  setupInfo = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v36, v37, v38, v39);
  EventUpValSetupInfo___ctor_24610352(setupInfo, v35, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v109 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v40 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v41 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v42 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  EntitiesByGroupId = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v43);
  if ( !EntitiesByGroupId )
    goto LABEL_71;
  v46 = EntitiesByGroupId;
  if ( !EntitiesByGroupId->max_length )
    goto LABEL_72;
  v108 = (ServantSkillMaster_o *)v40;
  EntitiesByGroupId->m_Items[1] = eventId;
  if ( !v42 )
LABEL_71:
    sub_B170D4();
  FilterList = EventBonusFilterMaster__GetFilterList(v42, EntitiesByGroupId, 1, 0LL);
  if ( FilterList )
  {
    v52 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v53 = AutoOrganizationManager___c_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v53 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__20_0;
      if ( !_9__20_0 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_EventBonusFilterEntity__TypeInfo,
                                                                               v48,
                                                                               v49,
                                                                               v50,
                                                                               v51);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__20_0,
          v56,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__20_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
        v57 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v57->__9__20_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__20_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v57->__9__20_0,
          (System_Int32_array **)_9__20_0,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v52,
        (System_Comparison_T__o *)_9__20_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventUpValInfo__TypeInfo, v64, v65, v66, v67);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v68,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SkillInfo__TypeInfo, v69, v70, v71, v72);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v73,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      size = v52->fields._size;
      if ( size >= 1 )
      {
        v75 = (const MethodInfo_21D915C **)&Method_System_Collections_Generic_HashSet_int__Add__;
        v76 = 0;
        v110 = v52;
        do
        {
          if ( size <= v76 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v77 = v52->fields._items->m_Items[v76];
          if ( !v77 )
            goto LABEL_71;
          v78 = *(_DWORD *)&v77->fields.is_reward;
          v112 = v76;
          if ( v78 == 2 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v102 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !v102 )
              goto LABEL_71;
            EntitiesByGroupId = (System_Int32_array *)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                        v102,
                                                        v77->fields.end_time,
                                                        0LL);
            if ( !EntitiesByGroupId )
              goto LABEL_71;
            max_length = EntitiesByGroupId->max_length;
            v104 = EntitiesByGroupId;
            if ( max_length >= 1 )
            {
              v105 = 0;
              while ( v105 < max_length )
              {
                v106 = *(_QWORD *)&v104->m_Items[2 * v105 + 1];
                if ( !v106 || !v32 )
                  goto LABEL_71;
                EntitiesByGroupId = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                            v32,
                                                            *(_DWORD *)(v106 + 20),
                                                            *v75);
                max_length = v104->max_length;
                if ( (int)++v105 >= max_length )
                  goto LABEL_69;
              }
LABEL_72:
              sub_B17100(EntitiesByGroupId, v46, v45);
              sub_B170A0();
            }
          }
          else if ( v78 == 1 )
          {
            if ( !v109 )
              goto LABEL_71;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v109,
                       v77->fields.end_time,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Entity )
              goto LABEL_71;
            v80 = Entity;
            v82 = *(_QWORD *)&Entity->fields.id;
            age = Entity->fields.age;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v114.fields.currentCryptoKey = v82;
            *(_QWORD *)&v114.fields.fakeValue = age;
            v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v114, 0LL);
            if ( !v108 )
              goto LABEL_71;
            EntitiesByGroupId = (System_Int32_array *)ServantSkillMaster__getServantSkillList(v108, v83, 0LL);
            if ( !EntitiesByGroupId )
              goto LABEL_71;
            v84 = EntitiesByGroupId->max_length;
            v85 = EntitiesByGroupId;
            if ( v84 >= 1 )
            {
              v86 = 0;
              v87 = 0;
              do
              {
                if ( v86 >= (unsigned int)v84 )
                  goto LABEL_72;
                v88 = *(_QWORD *)&v85->m_Items[2 * v86 + 1];
                if ( !v88 || !v41 )
                  goto LABEL_71;
                EntitiesByGroupId = (System_Int32_array *)SkillLvMaster__GetEntity(v41, *(_DWORD *)(v88 + 28), 1, 0LL);
                if ( EntitiesByGroupId && !*(_DWORD *)(v88 + 44) )
                {
                  v89 = (SkillLvEntity_o *)EntitiesByGroupId;
                  v90 = v75;
                  v91 = *(_QWORD *)&v80->fields.id;
                  v92 = v80->fields.age;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v115.fields.currentCryptoKey = v91;
                  *(_QWORD *)&v115.fields.fakeValue = v92;
                  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v115, 0LL);
                  v98 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v94, v95, v96, v97);
                  EventUpValInfo___ctor(v98, setupInfo, v93, 1, 1, 0, 0LL);
                  eventUpVallInfo = v98;
                  EntitiesByGroupId = (System_Int32_array *)SkillLvEntity__getEventUpVal_23627436(
                                                              v89,
                                                              &eventUpVallInfo,
                                                              1,
                                                              1,
                                                              0,
                                                              1,
                                                              0LL);
                  v87 |= (unsigned __int8)EntitiesByGroupId;
                  v75 = v90;
                }
                v84 = v85->max_length;
                ++v86;
              }
              while ( v86 < v84 );
              if ( (v87 & 1) != 0 )
              {
                v99 = *(_QWORD *)&v80->fields.id;
                v100 = v80->fields.age;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v116.fields.currentCryptoKey = v99;
                *(_QWORD *)&v116.fields.fakeValue = v100;
                v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v116, 0LL);
                if ( !v32 )
                  goto LABEL_71;
                System_Collections_Generic_HashSet_int___Add(v32, v101, *v75);
              }
            }
          }
LABEL_69:
          v52 = v110;
          size = v110->fields._size;
          v76 = v112 + 1;
        }
        while ( (int)(v112 + 1) < size );
      }
    }
  }
  return v32;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 max_length; // x9
  unsigned __int64 v5; // x10
  __int64 v6; // x0
  bool *v7; // x8

  if ( !rarityFlag )
    sub_B170D4();
  max_length = rarityFlag->max_length;
  v5 = 0LL;
  v6 = 0LL;
  v7 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v5 <= (int)max_length )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(v6, method, v2);
        sub_B170A0();
      }
      if ( v7[v5] )
        v6 = (1 << v5) | (unsigned int)v6;
    }
  }
  while ( v5++ < 4 );
  return v6;
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  System_Boolean_array *v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  __int64 Filter_30230284; // x0
  __int64 v9; // x1
  __int64 v10; // x2
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

  if ( (byte_40FBF56 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    byte_40FBF56 = 1;
  }
  v4 = sub_B17014(bool___TypeInfo, 7LL, v2);
  if ( !sort )
LABEL_26:
    sub_B170D4();
  v5 = (System_Boolean_array *)v4;
  v6 = 0LL;
  v7 = v4 + 32;
  do
  {
    Filter_30230284 = ListViewSort__GetFilter_30230284(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_26;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_25;
    v12 = v6 >= 6;
    *(_BYTE *)(v7 + v6++) = Filter_30230284 & 1;
  }
  while ( !v12 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_25:
    sub_B17100(Filter_30230284, v9, v10);
    sub_B170A0();
  }
  v13 = v5->m_Items[5];
  v14 = !v5->m_Items[4];
  v15 = !v13;
  v16 = v13;
  v17 = v15;
  v5->m_Items[4] |= v17;
  v5->m_Items[5] = v16 || v14;
  Filter_30230284 = sub_B17014(bool___TypeInfo, 5LL, v10);
  v18 = 0LL;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 + 2 >= v5->max_length )
      goto LABEL_25;
    if ( !Filter_30230284 )
      goto LABEL_26;
    if ( v18 >= *(unsigned int *)(Filter_30230284 + 24) )
      goto LABEL_25;
    v20 = v5->m_Items[v18 + 6];
    *(_BYTE *)(Filter_30230284 + 32 + v18) = v20;
    v12 = v18++ >= 4;
    v19 = (unsigned __int8)v19 & !v20;
  }
  while ( !v12 );
  if ( v19 )
  {
    v21 = v5->max_length;
    v22 = 34LL;
    while ( v22 - 32 < v21 )
    {
      v12 = (unsigned __int64)(v22 - 34) >= 4;
      *((_BYTE *)&v5->obj.klass + v22++) = 1;
      if ( v12 )
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
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x0

  if ( (byte_40FBF53 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v1);
    byte_40FBF53 = 1;
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
        (waveBattleAutoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(waveBattleAutoOrganizationInfo, 0LL);
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

  if ( (byte_40FBF5B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FBF5B = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  bool IsRestart; // w0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBF5C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    byte_40FBF5C = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
  if ( !entity || (IsRestart = UserEventDataLostEntity__IsRestart(entity, svtId, 0LL), !entity) )
LABEL_20:
    sub_B170D4();
  if ( IsRestart )
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

  if ( (byte_40FBF5A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    byte_40FBF5A = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_40FBF51 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v1);
    byte_40FBF51 = 1;
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

  if ( (byte_40FBF52 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v1);
    byte_40FBF52 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F914A & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_40F914A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AutoOrganizationManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall AutoOrganizationManager___c___ctor(AutoOrganizationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AutoOrganizationManager___c___AutoOrganizationEquip_b__19_0(
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
    sub_B170D4();
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


int32_t __fastcall AutoOrganizationManager___c___AutoOrganizationServant_b__18_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *a,
        AutoOrganizationManager_ServantData_o *b,
        const MethodInfo *method)
{
  float relationNum; // s0
  float v5; // s1

  if ( !a || !b )
    sub_B170D4();
  relationNum = a->fields.relationNum;
  v5 = b->fields.relationNum;
  if ( relationNum <= v5 )
    return relationNum < v5;
  else
    return -1;
}


int32_t __fastcall AutoOrganizationManager___c___GetEventBonusIds_b__20_0(
        AutoOrganizationManager___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


void __fastcall AutoOrganizationManager___c__DisplayClass18_0___ctor(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutoOrganizationManager___c__DisplayClass18_0___AutoOrganizationServant_b__1(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        AutoOrganizationManager_ServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.svtId == this->fields.svtId;
}