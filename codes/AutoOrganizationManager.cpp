void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct AutoOrganizationManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_434F70E & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&StringLiteral_2238/*"AutoOrganization"*/);
    sub_B70694(&StringLiteral_2244/*"AutoOrganizationWaveBattle"*/);
    byte_434F70E = 1;
  }
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_GAIN = 10602;
  AutoOrganizationManager_TypeInfo->static_fields->CATEGORY_ID_NP_REGAIN = 10603;
  v1 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v1, (System_String_o *)StringLiteral_2238/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->autoOrganizationInfo,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v9, (System_String_o *)StringLiteral_2244/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v10 = AutoOrganizationManager_TypeInfo->static_fields;
  v10->waveBattleAutoOrganizationInfo = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->waveBattleAutoOrganizationInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x27
  System_Collections_Generic_HashSet_int__o *v9; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x23
  System_Collections_Generic_List_int__o *v11; // x24
  AutoOrganizationServantBonusFilterEquipComponent_c *v12; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  EventBonusFilterGroupMemberMaster_o *v16; // x27
  int v17; // w28
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int v26; // w8
  int64_t v27; // x22
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x8
  unsigned __int64 v31; // x28
  UserServantEntity_o *v32; // x25
  __int64 v33; // x22
  __int64 v34; // x26
  int32_t v35; // w0
  __int64 v36; // x22
  __int64 v37; // x26
  int32_t v38; // w0
  __int64 v39; // x26
  __int128 v40; // q0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x24
  __int64 v42; // x22
  __int64 v43; // x27
  int32_t v44; // w0
  int32_t v45; // w2
  int32_t atk; // w8
  WarEntity_o *v47; // x8
  float v48; // s13
  float v49; // s13
  __int64 v50; // x22
  __int64 v51; // x27
  float v52; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x27
  AutoOrganizationManager_c *v54; // x0
  float v55; // s0
  AutoOrganizationManager_c *v56; // x0
  __int64 v57; // x22
  __int64 v58; // x26
  int32_t v59; // w0
  __int64 v60; // x22
  __int64 v61; // x26
  int32_t v62; // w0
  struct AutoOrganizationManager___c_StaticFields *v63; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__20_0; // x19
  Il2CppObject *v65; // x21
  struct AutoOrganizationManager___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v74; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v75; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_HashSet_int__o *v76; // [xsp+8h] [xbp-F8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // [xsp+10h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+40h] [xbp-C0h]
  int v80; // [xsp+6Ch] [xbp-94h] BYREF
  WarEntity_o *entity; // [xsp+70h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_434F708 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    sub_B70694(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_B70694(&Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    sub_B70694(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_B70694(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_B70694(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__);
    sub_B70694(&AutoOrganizationManager___c_TypeInfo);
    byte_434F708 = 1;
  }
  entity = 0LL;
  v80 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  if ( !eventId )
  {
    v76 = v9;
    v11 = organizedEquipIdList;
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
  Master_WarQuestSelectionMaster = (int64_t)AutoOrganizationManager__GetEventBonusIds(eventId, v6);
  v11 = organizedEquipIdList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_109;
  v76 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
  if ( *(int *)(Master_WarQuestSelectionMaster + 32) < 1 )
    goto LABEL_40;
  v12 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  if ( (BYTE3(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    v12 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
  }
  static_fields = v12->static_fields;
  v75 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
  SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v16 = (EventBonusFilterGroupMemberMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  Master_WarQuestSelectionMaster = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
  v80 = 0;
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v17 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      v18 = System_Int32__ToString((int32_t)&v80, 0LL);
      v19 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v18, 0LL);
      if ( UnityEngine_PlayerPrefs__HasKey(v19, 0LL) )
      {
        v20 = System_Int32__ToString((int32_t)&v80, 0LL);
        v21 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v20, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_36094592(v21, 0LL);
        if ( !v10 )
          goto LABEL_109;
        System_Collections_Generic_HashSet_int___Add(
          v10,
          Master_WarQuestSelectionMaster,
          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v22 = System_Int32__ToString((int32_t)&v80, 0LL);
      v23 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v22, 0LL);
      Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__HasKey(v23, 0LL);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v24 = System_Int32__ToString((int32_t)&v80, 0LL);
        v25 = System_String__Concat_44758168(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v24, 0LL);
        Master_WarQuestSelectionMaster = UnityEngine_PlayerPrefs__GetInt_36094592(v25, 0LL);
        if ( !v16 )
          goto LABEL_109;
        Master_WarQuestSelectionMaster = (int64_t)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                    v16,
                                                    Master_WarQuestSelectionMaster,
                                                    0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_109;
        v26 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
        v27 = Master_WarQuestSelectionMaster;
        if ( v26 >= 1 )
          break;
      }
LABEL_36:
      v11 = organizedEquipIdList;
      if ( ++v80 >= v17 )
        goto LABEL_37;
    }
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
      {
LABEL_110:
        v74 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v74, 0LL);
      }
      v29 = *(_QWORD *)(v27 + 8LL * (int)v28 + 32);
      if ( !v29 || !v10 )
        break;
      Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                         v10,
                                         *(_DWORD *)(v29 + 20),
                                         (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      v26 = *(_DWORD *)(v27 + 24);
      if ( (int)++v28 >= v26 )
        goto LABEL_36;
    }
LABEL_109:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  }
LABEL_37:
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v75;
  if ( !ServantEquipList )
    goto LABEL_109;
LABEL_41:
  v30 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        goto LABEL_110;
      v32 = ServantEquipList->m_Items[v31];
      if ( v32 )
      {
        if ( !v11 )
          goto LABEL_113;
        v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v82.fields.currentCryptoKey = v34;
        *(_QWORD *)&v82.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v82, 0LL);
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                           v11,
                                           v35,
                                           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
LABEL_113:
          if ( !v10 )
            goto LABEL_109;
          if ( v10->fields._count < 1 )
            goto LABEL_114;
          v37 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
          v36 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v83.fields.currentCryptoKey = v37;
          *(_QWORD *)&v83.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v83, 0LL);
          Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Contains(
                                             v10,
                                             v38,
                                             (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
LABEL_114:
            Master_WarQuestSelectionMaster = UserServantEntity__IsFriendShipSvtEquip(v32, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              break;
          }
        }
      }
LABEL_98:
      LODWORD(v30) = ServantEquipList->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_99;
    }
    v39 = sub_B70764(AutoOrganizationManager_ServantData_TypeInfo);
    AutoOrganizationManager_ServantData___ctor((AutoOrganizationManager_ServantData_o *)v39, 0LL);
    v40 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
    *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v79.fields.fakeValue = v40;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v8;
    v78 = v79;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v78, 0LL);
    if ( !v39 )
      goto LABEL_109;
    *(_QWORD *)(v39 + 24) = Master_WarQuestSelectionMaster;
    v43 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v84.fields.currentCryptoKey = v43;
    *(_QWORD *)&v84.fields.fakeValue = v42;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v84, 0LL);
    *(_DWORD *)(v39 + 16) = v44;
    v45 = v44;
    atk = v32->fields.atk;
    Master_WarQuestSelectionMaster = (int64_t)v77;
    *(_DWORD *)(v39 + 44) = 0;
    *(_DWORD *)(v39 + 36) = atk;
    if ( !v77 )
      goto LABEL_109;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       v77,
                                       &entity,
                                       v45,
                                       (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      v47 = entity;
      if ( !entity )
        goto LABEL_109;
      *(_DWORD *)(v39 + 48) = entity[1].fields.age;
      *(_DWORD *)(v39 + 40) = v47[1].fields.startType;
    }
    if ( !v76 )
      goto LABEL_109;
    if ( v76->fields._count >= 1
      && System_Collections_Generic_HashSet_int___Contains(
           v76,
           *(_DWORD *)(v39 + 16),
           (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v48 = *(float *)(v39 + 44) + 50000.0;
      *(float *)(v39 + 44) = v48;
      v49 = v48 + (float)((float)UserServantEntity__getRarity(v32, 0LL) * 100000.0);
      *(float *)(v39 + 44) = v49;
      v51 = *(_QWORD *)&v32->fields.limitCount.fields.currentCryptoKey;
      v50 = *(_QWORD *)&v32->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v85.fields.currentCryptoKey = v51;
      *(_QWORD *)&v85.fields.fakeValue = v50;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v85, 0LL);
      v52 = v49 + (float)((float)(int)Master_WarQuestSelectionMaster * 10000.0);
      goto LABEL_88;
    }
    Master_WarQuestSelectionMaster = (int64_t)UserServantEntity__GetEquipCategoryIdList(v32, 0, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      v53 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster;
      v54 = AutoOrganizationManager_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        v54 = AutoOrganizationManager_TypeInfo;
      }
      Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                         v53,
                                         v54->static_fields->CATEGORY_ID_NP_GAIN,
                                         (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v55 = *(float *)(v39 + 44) + 40000.0;
      }
      else
      {
        v56 = AutoOrganizationManager_TypeInfo;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v56 = AutoOrganizationManager_TypeInfo;
        }
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           v53,
                                           v56->static_fields->CATEGORY_ID_NP_REGAIN,
                                           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_87;
        v55 = *(float *)(v39 + 44) + 30000.0;
      }
      *(float *)(v39 + 44) = v55;
    }
LABEL_87:
    v52 = *(float *)(v39 + 44) + (float)*(int *)(v39 + 36);
LABEL_88:
    *(float *)(v39 + 44) = v52;
    if ( !v41 )
      goto LABEL_109;
    v8 = v41;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v41,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    v11 = organizedEquipIdList;
    if ( organizedEquipIdList )
    {
      v58 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v86.fields.currentCryptoKey = v58;
      *(_QWORD *)&v86.fields.fakeValue = v57;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v86, 0LL);
      Master_WarQuestSelectionMaster = System_Collections_Generic_List_int___Contains(
                                         organizedEquipIdList,
                                         v59,
                                         (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v61 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
        v60 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v87.fields.currentCryptoKey = v61;
        *(_QWORD *)&v87.fields.fakeValue = v60;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v87, 0LL);
        System_Collections_Generic_List_int___Add(
          organizedEquipIdList,
          v62,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
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
  v63 = *(struct AutoOrganizationManager___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v63->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v63 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__20_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__20_0,
      v65,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_AutoOrganizationManager_ServantData___ctor__);
    v66 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v66->__9__20_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__20_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v66->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  if ( !v8 )
    goto LABEL_109;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__20_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  AutoOrganizationManager___c__DisplayClass18_0_o *v5; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  UserServantEntity_array *OrganizationList; // x22
  __int64 v10; // x8
  unsigned __int64 v11; // x26
  bool UniqueSvtRestriction; // w19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *klass; // x27
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  peRenderTexture_ChangeLayerObject_o *v20; // x0
  __int128 v21; // q0
  peRenderTexture_ChangeLayerObject_o *v22; // x27
  const MethodInfo *v23; // x2
  int64_t v24; // x19
  float AdjustTotalRate; // s8
  __int128 v26; // q0
  int32_t atk; // w8
  AutoOrganizationManager_ServantData_o *v28; // x27
  __int128 v29; // q0
  const MethodInfo *v30; // x2
  int64_t userSvtId; // x19
  float v32; // s0
  UserServantEntity_o *v33; // x28
  __int64 v34; // x19
  __int64 v35; // x27
  const MethodInfo *v36; // x2
  int32_t svtId; // w27
  const MethodInfo *v38; // x2
  int32_t v39; // w19
  const MethodInfo *v40; // x2
  int32_t v41; // w19
  __int64 v43; // x0
  BattleServantConfConponent_o *p__9__0; // [xsp+0h] [xbp-130h]
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // [xsp+8h] [xbp-128h]
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v47; // [xsp+18h] [xbp-118h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+A0h] [xbp-90h]
  WarEntity_o *entity; // [xsp+D8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_434F706 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
    sub_B70694(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_B70694(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_B70694(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_B70694(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_434F706 = 1;
  }
  entity = 0LL;
  v5 = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_B70764(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  AutoOrganizationManager___c__DisplayClass18_0___ctor(v5, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_72;
  v47 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v6;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( !OrganizationList )
    goto LABEL_72;
  v10 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    p__9__0 = (BattleServantConfConponent_o *)&v5->fields.__9__0;
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v43 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v43, 0LL);
      }
      v33 = m_Items[v11];
      if ( !v33 )
        goto LABEL_68;
      Master_WarQuestSelectionMaster = UserServantEntity__getRarity(m_Items[v11], 0LL);
      if ( (_DWORD)Master_WarQuestSelectionMaster == 0 && rarityBit != 31
        || (rarityBit & 1) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_WarQuestSelectionMaster == 5 )
      {
        goto LABEL_68;
      }
      v34 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v57.fields.currentCryptoKey = v34;
      *(_QWORD *)&v57.fields.fakeValue = v35;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v57, 0LL);
      if ( !v5 )
        goto LABEL_72;
      svtId = Master_WarQuestSelectionMaster;
      v5->fields.svtId = Master_WarQuestSelectionMaster;
      if ( organizedServantIds )
      {
        Master_WarQuestSelectionMaster = System_Linq_Enumerable__Contains_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
          goto LABEL_68;
        svtId = v5->fields.svtId;
      }
      if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = AutoOrganizationManager__IsFatigue(restrictionInfo, svtId, v36);
      if ( (Master_WarQuestSelectionMaster & 1) == 0 )
      {
        v39 = v5->fields.svtId;
        if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v39, v38);
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v41 = v5->fields.svtId;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = AutoOrganizationManager__IsDataLost(restrictionInfo, v41, v40);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          {
            Master_WarQuestSelectionMaster = UserServantEntity__IsLeave(v33, 0LL);
            if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            {
              Master_WarQuestSelectionMaster = UserServantEntity__getQuestRestriction(v33, restrictionInfo, 1, 0LL);
              if ( (Master_WarQuestSelectionMaster & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v33, restrictionInfo, 0LL);
                Master_WarQuestSelectionMaster = UserServantEntity__IsUniqueIndividualityRestriction(
                                                   v33,
                                                   restrictionInfo,
                                                   0LL);
                if ( !UniqueSvtRestriction && (Master_WarQuestSelectionMaster & 1) == 0 )
                {
                  klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)p__9__0->klass;
                  if ( !p__9__0->klass )
                  {
                    klass = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                      klass,
                      (Il2CppObject *)v5,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      (const MethodInfo_2BF23B8 *)Method_System_Predicate_AutoOrganizationManager_ServantData___ctor__);
                    v5->fields.__9__0 = (struct System_Predicate_AutoOrganizationManager_ServantData__o *)klass;
                    sub_B70630(p__9__0, (System_Int32_array **)klass, v14, v15, v16, v17, v18, v19);
                  }
                  if ( !v47 )
                    goto LABEL_72;
                  v20 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                          v47,
                          (System_Predicate_T__o *)klass,
                          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v20 )
                  {
                    v21 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
                    v22 = v20;
                    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v55.fields.fakeValue = v21;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v54 = v55;
                    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v54, 0LL);
                    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    }
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v24,
                                        v23);
                    if ( (float)(AdjustTotalRate * (float)v33->fields.atk) >= (float)(*(float *)&v22[1].klass
                                                                                    * (float)SHIDWORD(v22->fields.orgMaterial)) )
                    {
                      v26 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
                      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v55.fields.fakeValue = v26;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      }
                      v53 = v55;
                      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                                         &v53,
                                                         0LL);
                      v22->fields.renderer = (struct UnityEngine_Renderer_o *)Master_WarQuestSelectionMaster;
                      atk = v33->fields.atk;
                      *(float *)&v22[1].klass = AdjustTotalRate;
                      HIDWORD(v22->fields.orgMaterial) = atk;
                    }
                  }
                  else
                  {
                    v28 = (AutoOrganizationManager_ServantData_o *)sub_B70764(AutoOrganizationManager_ServantData_TypeInfo);
                    AutoOrganizationManager_ServantData___ctor(v28, 0LL);
                    v29 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
                    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v55.fields.fakeValue = v29;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v52 = v55;
                    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(
                                                       &v52,
                                                       0LL);
                    if ( !v28 )
                      goto LABEL_72;
                    v28->fields.userSvtId = Master_WarQuestSelectionMaster;
                    v28->fields.svtId = v5->fields.svtId;
                    v28->fields.classId = UserServantEntity__getSvtClassId(v33, 0LL);
                    v28->fields.atk = v33->fields.atk;
                    userSvtId = v28->fields.userSvtId;
                    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    }
                    v32 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            userSvtId,
                            v30);
                    Master_WarQuestSelectionMaster = (int64_t)v45;
                    v28->fields.questAutoOrganizationAdjustRate = v32;
                    if ( !v45 )
                      goto LABEL_72;
                    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v45,
                                                       &entity,
                                                       v28->fields.svtId,
                                                       (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_72;
                      v28->fields.cost = (int32_t)entity[1].fields.age;
                    }
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      LODWORD(v10) = OrganizationList->max_length;
    }
    while ( (__int64)++v11 < (int)v10 );
  }
  Master_WarQuestSelectionMaster = (int64_t)v47;
  if ( !v47 )
LABEL_72:
    sub_B7076C(Master_WarQuestSelectionMaster, v8);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_434F703 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    byte_434F703 = 1;
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
    sub_B7076C(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  AutoOrganizationManager___c__DisplayClass25_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_WarBoardAIRoute_RouteData__float__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  AutoOrganizationManager___c_c *v10; // x8
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x9
  System_Func_float__float__float__o *_9__25_1; // x20
  Il2CppObject *v13; // x21
  struct AutoOrganizationManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_434F70D & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_B70694(&Method_System_Func_QuestAutoOrganizationAdjustEntity__float___ctor__);
    sub_B70694(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_B70694(&Method_System_Func_float__float__float___ctor__);
    sub_B70694(&System_Func_float__float__float__TypeInfo);
    sub_B70694(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__);
    sub_B70694(&Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__);
    sub_B70694(&AutoOrganizationManager___c__DisplayClass25_0_TypeInfo);
    sub_B70694(&AutoOrganizationManager___c_TypeInfo);
    byte_434F70D = 1;
  }
  v5 = (AutoOrganizationManager___c__DisplayClass25_0_o *)sub_B70764(AutoOrganizationManager___c__DisplayClass25_0_TypeInfo);
  AutoOrganizationManager___c__DisplayClass25_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.userSvtId = userSvtId;
  v8 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B70764(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__,
    (const MethodInfo_29AE46C *)Method_System_Func_QuestAutoOrganizationAdjustEntity__float___ctor__);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
                                                              (System_Func_TSource__TResult__o *)v8,
                                                              (const MethodInfo_1CC452C *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v10 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v10 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__25_1 = static_fields->__9__25_1;
  if ( !_9__25_1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__25_1 = (System_Func_float__float__float__o *)sub_B70764(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__25_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__,
      (const MethodInfo_29B8A70 *)Method_System_Func_float__float__float___ctor__);
    v14 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v14->__9__25_1 = _9__25_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__25_1,
      (System_Int32_array **)_9__25_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v9,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__25_1,
           (const MethodInfo_1CA70BC *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_34002324; // x0
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

  if ( (byte_434F704 & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    byte_434F704 = 1;
  }
  Filter_34002324 = sub_B706AC(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_40:
    sub_B7076C(Filter_34002324, v6);
  v7 = (System_Boolean_array *)Filter_34002324;
  v8 = 0LL;
  v9 = Filter_34002324 + 32;
  do
  {
    Filter_34002324 = ListViewSort__GetFilter_34002324(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_40;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_39;
    v11 = v8 >= 0xC;
    *(_BYTE *)(v9 + v8++) = Filter_34002324 & 1;
  }
  while ( !v11 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_39:
    v28 = sub_B70798(Filter_34002324);
    sub_B70738(v28, 0LL);
  }
  v12 = v7->m_Items[5];
  v13 = !v7->m_Items[4];
  v14 = !v12;
  v15 = v12;
  v16 = v14;
  v7->m_Items[4] |= v16;
  v7->m_Items[5] = v15 || v13;
  Filter_34002324 = sub_B706AC(bool___TypeInfo, 5LL);
  v17 = 0LL;
  LOBYTE(v18) = 1;
  do
  {
    if ( v17 + 2 >= v7->max_length )
      goto LABEL_39;
    if ( !Filter_34002324 )
      goto LABEL_40;
    if ( v17 >= *(unsigned int *)(Filter_34002324 + 24) )
      goto LABEL_39;
    v19 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_34002324 + 32 + v17) = v19;
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
  Filter_34002324 = sub_B706AC(bool___TypeInfo, 6LL);
  v22 = 0LL;
  v23 = 0;
  v24 = &v7->m_Items[11];
  do
  {
    if ( v22 + 7 >= v7->max_length )
      goto LABEL_39;
    if ( !Filter_34002324 )
      goto LABEL_40;
    v25 = *(unsigned int *)(Filter_34002324 + 24);
    if ( v22 >= v25 )
      goto LABEL_39;
    if ( v24[v22] )
      v23 = v22 + 1;
    v11 = v22 >= 5;
    *(_BYTE *)(Filter_34002324 + 32 + v22) = v24[v22];
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
      *(_BYTE *)(Filter_34002324 + 32 + v26++) = 1;
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
  System_Collections_Generic_HashSet_int__o *v3; // x22
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Int32_array *v8; // x21
  WarQuestSelectionMaster_o *v9; // x20
  SkillLvMaster_o *v10; // x23
  EventBonusFilterMaster_o *v11; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v13; // x24
  AutoOrganizationManager___c_c *v14; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x25
  Il2CppObject *v17; // x21
  struct AutoOrganizationManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x0
  int size; // w8
  const MethodInfo_2EAF050 **v28; // x28
  unsigned int v29; // w21
  TitleInfoControl_EventEndTimeInfo_o *v30; // x20
  int v31; // w8
  __int64 v32; // x25
  __int64 v33; // x26
  __int64 v34; // x27
  int v35; // w8
  __int64 v36; // x26
  int v37; // w20
  char v38; // w24
  __int64 v39; // x21
  SkillLvEntity_o *v40; // x27
  const MethodInfo_2EAF050 **v41; // x19
  __int64 v42; // x21
  __int64 v43; // x28
  int32_t v44; // w21
  EventUpValInfo_o *v45; // x28
  __int64 v46; // x21
  __int64 v47; // x25
  int v48; // w8
  __int64 v49; // x25
  unsigned int v50; // w20
  __int64 v51; // x8
  __int64 v53; // x0
  ServantSkillMaster_o *v54; // [xsp+0h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v56; // [xsp+10h] [xbp-70h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+18h] [xbp-68h]
  unsigned int v58; // [xsp+24h] [xbp-5Ch]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_434F709 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventBonusFilterEntity___ctor__);
    sub_B70694(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&EventUpValInfo_TypeInfo);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__);
    sub_B70694(&AutoOrganizationManager___c_TypeInfo);
    byte_434F709 = 1;
  }
  eventUpVallInfo = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(
                            (EventMaster_o *)Master_WarQuestSelectionMaster,
                            0,
                            0LL,
                            0LL);
  if ( !EventValUpEventIdHash )
    return v3;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_23742548(setupInfo, v8, 0, 0, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v10 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v11 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_WarQuestSelectionMaster = sub_B706AC(int___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  v5 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    goto LABEL_72;
  v54 = (ServantSkillMaster_o *)v9;
  *(_DWORD *)(Master_WarQuestSelectionMaster + 32) = eventId;
  if ( !v11 )
LABEL_71:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(v11, (System_Int32_array *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( FilterList )
  {
    v13 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v14 = AutoOrganizationManager___c_TypeInfo;
      if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v14 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__21_0,
          v17,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__,
          (const MethodInfo_2B05B38 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
        v18 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v18->__9__21_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__21_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v18->__9__21_0,
          (System_Int32_array **)_9__21_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v13,
        (System_Comparison_T__o *)_9__21_0,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v25,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v26,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      size = v13->fields._size;
      if ( size >= 1 )
      {
        v28 = (const MethodInfo_2EAF050 **)&Method_System_Collections_Generic_HashSet_int__Add__;
        v29 = 0;
        v56 = v13;
        do
        {
          if ( size <= v29 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v30 = v13->fields._items->m_Items[v29];
          if ( !v30 )
            goto LABEL_71;
          v31 = *(_DWORD *)&v30->fields.is_reward;
          v58 = v29;
          if ( v31 == 2 )
          {
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                                        (EventBonusFilterGroupMemberMaster_o *)Master_WarQuestSelectionMaster,
                                                        v30->fields.end_time,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v48 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v49 = Master_WarQuestSelectionMaster;
            if ( v48 >= 1 )
            {
              v50 = 0;
              while ( v50 < v48 )
              {
                v51 = *(_QWORD *)(v49 + 8LL * (int)v50 + 32);
                if ( !v51 || !v3 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v3,
                                                   *(_DWORD *)(v51 + 20),
                                                   *v28);
                v48 = *(_DWORD *)(v49 + 24);
                if ( (int)++v50 >= v48 )
                  goto LABEL_69;
              }
LABEL_72:
              v53 = sub_B70798(Master_WarQuestSelectionMaster);
              sub_B70738(v53, 0LL);
            }
          }
          else if ( v31 == 1 )
          {
            Master_WarQuestSelectionMaster = (__int64)v55;
            if ( !v55 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v55,
                                                        v30->fields.end_time,
                                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v32 = Master_WarQuestSelectionMaster;
            v34 = *(_QWORD *)(Master_WarQuestSelectionMaster + 16);
            v33 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v60.fields.currentCryptoKey = v34;
            *(_QWORD *)&v60.fields.fakeValue = v33;
            Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                               v60,
                                               0LL);
            if ( !v54 )
              goto LABEL_71;
            Master_WarQuestSelectionMaster = (__int64)ServantSkillMaster__getServantSkillList(
                                                        v54,
                                                        Master_WarQuestSelectionMaster,
                                                        0LL);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_71;
            v35 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
            v36 = Master_WarQuestSelectionMaster;
            if ( v35 >= 1 )
            {
              v37 = 0;
              v38 = 0;
              do
              {
                if ( v37 >= (unsigned int)v35 )
                  goto LABEL_72;
                v39 = *(_QWORD *)(v36 + 8LL * v37 + 32);
                if ( !v39 || !v10 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = (__int64)SkillLvMaster__GetEntity(v10, *(_DWORD *)(v39 + 28), 1, 0LL);
                if ( Master_WarQuestSelectionMaster && !*(_DWORD *)(v39 + 44) )
                {
                  v40 = (SkillLvEntity_o *)Master_WarQuestSelectionMaster;
                  v41 = v28;
                  v42 = *(_QWORD *)(v32 + 16);
                  v43 = *(_QWORD *)(v32 + 24);
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v61.fields.currentCryptoKey = v42;
                  *(_QWORD *)&v61.fields.fakeValue = v43;
                  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v61, 0LL);
                  v45 = (EventUpValInfo_o *)sub_B70764(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v45, setupInfo, v44, 1, 1, 0, 0LL);
                  eventUpVallInfo = v45;
                  Master_WarQuestSelectionMaster = SkillLvEntity__getEventUpVal_26500472(
                                                     v40,
                                                     &eventUpVallInfo,
                                                     1,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL,
                                                     0LL);
                  v38 |= Master_WarQuestSelectionMaster;
                  v28 = v41;
                }
                v35 = *(_DWORD *)(v36 + 24);
                ++v37;
              }
              while ( v37 < v35 );
              if ( (v38 & 1) != 0 )
              {
                v46 = *(_QWORD *)(v32 + 16);
                v47 = *(_QWORD *)(v32 + 24);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v62.fields.currentCryptoKey = v46;
                *(_QWORD *)&v62.fields.fakeValue = v47;
                Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                   v62,
                                                   0LL);
                if ( !v3 )
                  goto LABEL_71;
                Master_WarQuestSelectionMaster = System_Collections_Generic_HashSet_int___Add(
                                                   v3,
                                                   Master_WarQuestSelectionMaster,
                                                   *v28);
              }
            }
          }
LABEL_69:
          v13 = v56;
          size = v56->fields._size;
          v29 = v58 + 1;
        }
        while ( (int)(v58 + 1) < size );
      }
    }
  }
  return v3;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  unsigned __int64 v4; // x10
  __int64 v5; // x0
  bool *v6; // x8
  __int64 v8; // x0

  if ( !rarityFlag )
    sub_B7076C(0LL, method);
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
        v8 = sub_B70798(v5);
        sub_B70738(v8, 0LL);
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
  __int64 Filter_34002384; // x0
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

  if ( (byte_434F705 & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    byte_434F705 = 1;
  }
  Filter_34002384 = sub_B706AC(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_26:
    sub_B7076C(Filter_34002384, v4);
  v5 = (System_Boolean_array *)Filter_34002384;
  v6 = 0LL;
  v7 = Filter_34002384 + 32;
  do
  {
    Filter_34002384 = ListViewSort__GetFilter_34002384(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_26;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_25;
    v9 = v6 >= 6;
    *(_BYTE *)(v7 + v6++) = Filter_34002384 & 1;
  }
  while ( !v9 );
  if ( (unsigned int)max_length < 2 )
  {
LABEL_25:
    v21 = sub_B70798(Filter_34002384);
    sub_B70738(v21, 0LL);
  }
  v10 = v5->m_Items[5];
  v11 = !v5->m_Items[4];
  v12 = !v10;
  v13 = v10;
  v14 = v12;
  v5->m_Items[4] |= v14;
  v5->m_Items[5] = v13 || v11;
  Filter_34002384 = sub_B706AC(bool___TypeInfo, 5LL);
  v15 = 0LL;
  LOBYTE(v16) = 1;
  do
  {
    if ( v15 + 2 >= v5->max_length )
      goto LABEL_25;
    if ( !Filter_34002384 )
      goto LABEL_26;
    if ( v15 >= *(unsigned int *)(Filter_34002384 + 24) )
      goto LABEL_25;
    v17 = v5->m_Items[v15 + 6];
    *(_BYTE *)(Filter_34002384 + 32 + v15) = v17;
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

  if ( (byte_434F702 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    byte_434F702 = 1;
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
    sub_B7076C(autoOrganizationInfo, v1);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0LL);
}


bool __fastcall AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t allOutBattleGroupNo; // w21
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1

  if ( (byte_434F70B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_434F70B = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v7);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F70C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434F70C = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
    sub_B7076C(UserId, v7);
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
  UserEventServantFatigueMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int64_t v7; // x19
  bool isRecover; // [xsp+Ch] [xbp-24h] BYREF
  int64_t recoverAt; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_434F70A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434F70A = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v6);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          Master_WarQuestSelectionMaster,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v7 = recoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v7 > NetworkManager__getTime(0LL);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  Il2CppObject *current; // x25
  int32_t klass; // w22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  float Rate; // s0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  AutoOrganizationManager___c_c *v16; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__19_0; // x20
  Il2CppObject *v19; // x21
  struct AutoOrganizationManager___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_434F707 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_B70694(&Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__);
    sub_B70694(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___69181320);
    sub_B70694(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_B70694(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_B70694(&AutoOrganizationManager___c_TypeInfo);
    byte_434F707 = 1;
  }
  entity = 0LL;
  memset(&v30, 0, sizeof(v30));
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___69181320);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( enemyClassId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_34;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    enemyClassId,
                                                                    (const MethodInfo_21C049C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_34;
      enemyClassId = entity->fields.materialParentWarId;
    }
  }
  if ( !v5 )
LABEL_34:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v14 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B7076C(v14, v15);
    if ( !v8 )
      sub_B7076C(v14, v15);
    klass = (int32_t)v30.fields.current[2].klass;
    v11 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_21C049C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v11 )
    {
      if ( !entity )
        sub_B7076C(v11, v12);
      klass = entity->fields.materialParentWarId;
    }
    Rate = 1.0;
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0LL);
    *((float *)&current[2].monitor + 1) = *(float *)&current[3].monitor
                                        * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v16 = AutoOrganizationManager___c_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v16 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B70764(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__19_0,
      v19,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      (const MethodInfo_29AE46C *)Method_System_Func_AutoOrganizationManager_ServantData__float___ctor__);
    v20 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v20->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_AutoOrganizationManager_ServantData__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_1CC00C8 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v27,
                                                        (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_434F700 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    byte_434F700 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  return v1->static_fields->autoOrganizationInfo;
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_434F701 & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager_TypeInfo);
    byte_434F701 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  return v1->static_fields->waveBattleAutoOrganizationInfo;
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43509DF & 1) == 0 )
  {
    sub_B70694(&AutoOrganizationManager___c_TypeInfo);
    byte_43509DF = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutoOrganizationManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, a);
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
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(entity, this->fields.userSvtId, 0LL);
}