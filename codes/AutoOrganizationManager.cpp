void AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_c *v1; // x0
  ListViewSort_o *v2; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ListViewSort_o *v10; // x19
  struct AutoOrganizationManager_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596BDD2 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_2605/*"AutoOrganization"*/);
    sub_2213A60(&StringLiteral_2611/*"AutoOrganizationWaveBattle"*/);
    byte_596BDD2 = 1;
  }
  v1 = ListViewSort_TypeInfo;
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v2 = (ListViewSort_o *)sub_2213CCC(v1);
  ListViewSort___ctor_50854784(v2, (System_String_o *)StringLiteral_2605/*"AutoOrganization"*/, 3, 0, 0);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->autoOrganizationInfo,
    (int32_t)v2,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v10, (System_String_o *)StringLiteral_2611/*"AutoOrganizationWaveBattle"*/, 3, 0, 0);
  v11 = AutoOrganizationManager_TypeInfo->static_fields;
  v11->waveBattleAutoOrganizationInfo = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->waveBattleAutoOrganizationInfo,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void AutoOrganizationManager___ctor(AutoOrganizationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__AutoOrganizationEquip(
        int32_t eventId,
        System_Collections_Generic_List_int__o *organizedEquipIdList,
        const MethodInfo *method)
{
  int v5; // w8
  void *Master_object; // x0
  const MethodInfo *v7; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v9; // x28
  System_Collections_Generic_HashSet_int__o *v10; // x20
  System_Collections_Generic_HashSet_int__o *v11; // x23
  __int64 v12; // x2
  AutoOrganizationServantBonusFilterEquipComponent_c *v13; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x27
  int v20; // w28
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int v29; // w8
  void *v30; // x29
  __int64 v31; // x24
  __int64 v32; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v35; // x25
  __int64 v36; // x26
  __int64 v37; // x27
  int32_t v38; // w0
  __int64 v39; // x26
  __int64 v40; // x27
  int32_t v41; // w0
  __int64 v42; // x26
  __int64 v43; // x1
  __int64 v44; // x2
  __int128 v45; // q1
  int v46; // w8
  __int64 v47; // x1
  __int64 v48; // x2
  int64_t v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v50; // x0
  __int64 v51; // x27
  __int64 v52; // x28
  int32_t v53; // w2
  int32_t atk; // w8
  int klass; // w8
  float v56; // s13
  __int64 v57; // x1
  __int64 v58; // x2
  int32_t Rarity; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v60; // x0
  float v61; // s0
  int v62; // w8
  float v63; // s13
  __int64 v64; // x27
  __int64 v65; // x28
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  float v72; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x27
  AutoOrganizationManager_c *v74; // x0
  float v75; // s0
  AutoOrganizationManager_c *v76; // x0
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x26
  __int64 v82; // x27
  int32_t v83; // w0
  __int64 v84; // x25
  __int64 v85; // x26
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  struct AutoOrganizationManager___c_StaticFields *v89; // x8
  System_Comparison_T__o *_9__21_0; // x19
  Il2CppObject *v91; // x21
  struct AutoOrganizationManager___c_StaticFields *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_Collections_Generic_HashSet_int__o *v100; // [xsp+8h] [xbp-F8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_List_object__o *v102; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+40h] [xbp-C0h]
  int v105; // [xsp+64h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_596BDCB & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_2213A60(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_2213A60(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDCB = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v105 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, organizedEquipIdList, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_99;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v101 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v102 = v9;
  if ( eventId )
  {
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v7, v12);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v7);
    if ( !Master_object )
      goto LABEL_99;
    v100 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *((int *)Master_object + 8) >= 1 )
    {
      v13 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v7, v12);
        v13 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v13->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v12);
      v19 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v17, v18);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v105 = 0;
      if ( (int)Master_object >= 1 )
      {
        v20 = (int)Master_object;
        while ( 1 )
        {
          v21 = System_Int32__ToString((int32_t)&v105, 0);
          v22 = System_String__Concat_75651716(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v21, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v22, 0) )
          {
            v23 = System_Int32__ToString((int32_t)&v105, 0);
            v24 = System_String__Concat_75651716(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v23, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_83396820(v24, 0);
            if ( !v11 )
              goto LABEL_99;
            System_Collections_Generic_HashSet_int___Add(
              v11,
              (int32_t)Master_object,
              (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v25 = System_Int32__ToString((int32_t)&v105, 0);
          v26 = System_String__Concat_75651716(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v25, 0);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v26, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v27 = System_Int32__ToString((int32_t)&v105, 0);
            v28 = System_String__Concat_75651716(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v27, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_83396820(v28, 0);
            if ( !v19 )
              goto LABEL_99;
            Master_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                              (EventBonusFilterGroupMemberMaster_o *)v19,
                              (int32_t)Master_object,
                              0);
            if ( !Master_object )
              goto LABEL_99;
            v29 = *((_DWORD *)Master_object + 6);
            v30 = Master_object;
            if ( v29 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v105 >= v20 )
            goto LABEL_32;
        }
        v31 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v31 >= v29 )
LABEL_100:
            sub_2213CE4(Master_object);
          v32 = *((_QWORD *)v30 + v31 + 4);
          if ( !v32 || !v11 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v11,
                                    *(_DWORD *)(v32 + 20),
                                    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v29 = *((_DWORD *)v30 + 6);
          if ( (int)++v31 >= v29 )
            goto LABEL_31;
        }
LABEL_99:
        sub_2213CDC(Master_object, v7);
      }
LABEL_32:
      v9 = v102;
    }
  }
  else
  {
    v100 = v10;
  }
  if ( !ServantEquipList )
    goto LABEL_99;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_100;
      v35 = ServantEquipList->m_Items[i];
      if ( !v35 )
        goto LABEL_90;
      if ( organizedEquipIdList )
      {
        v36 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
        *(_QWORD *)&v107.fields.currentCryptoKey = v36;
        *(_QWORD *)&v107.fields.fakeValue = v37;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v107, 0);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v38,
                                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_90;
      }
      if ( !v11 )
        goto LABEL_99;
      if ( v11->fields._count >= 1 )
      {
        v39 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
        *(_QWORD *)&v108.fields.currentCryptoKey = v39;
        *(_QWORD *)&v108.fields.fakeValue = v40;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v11,
                                  v41,
                                  (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_90;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v35, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_90;
      v42 = sub_2213CCC(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v42, 0);
      *(_DWORD *)(v42 + 20) = 0;
      *(_QWORD *)(v42 + 24) = 0;
      *(_DWORD *)(v42 + 36) = 0;
      *(_DWORD *)(v42 + 40) = 0;
      *(_QWORD *)(v42 + 48) = 0;
      *(_DWORD *)(v42 + 68) = 0;
      *(_BYTE *)(v42 + 72) = 0;
      *(_QWORD *)(v42 + 76) = 0;
      v45 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
      v46 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v104.fields.fakeValue = v45;
      if ( !v46 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43, v44);
      v103 = v104;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v103, 0);
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
      *(_QWORD *)(v42 + 24) = v49;
      v51 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !*(&v50->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v50, v47, v48);
      *(_QWORD *)&v109.fields.currentCryptoKey = v51;
      *(_QWORD *)&v109.fields.fakeValue = v52;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0);
      atk = v35->fields.atk;
      *(_DWORD *)(v42 + 20) = v53;
      Master_object = v101;
      *(_DWORD *)(v42 + 52) = 0;
      *(_DWORD *)(v42 + 40) = atk;
      if ( !v101 )
        goto LABEL_99;
      Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                v101,
                                &entity,
                                v53,
                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      v9 = v102;
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_99;
        klass = (int)entity[13].klass;
        *(_DWORD *)(v42 + 68) = entity[9].monitor;
        *(_DWORD *)(v42 + 48) = klass;
      }
      Master_object = v100;
      if ( !v100 )
        goto LABEL_99;
      if ( v100->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v100,
             *(_DWORD *)(v42 + 20),
             (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v56 = *(float *)(v42 + 52) + 50000.0;
        *(float *)(v42 + 52) = v56;
        Rarity = UserServantEntity__getRarity(v35, 0);
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
        v61 = (float)Rarity;
        v62 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
        v63 = v56 + (float)(v61 * 100000.0);
        *(float *)(v42 + 52) = v63;
        v64 = *(_QWORD *)&v35->fields.limitCount.fields.currentCryptoKey;
        v65 = *(_QWORD *)&v35->fields.limitCount.fields.fakeValue;
        if ( !v62 )
          j_il2cpp_runtime_class_init_0(v60, v57, v58);
        *(_QWORD *)&v110.fields.currentCryptoKey = v64;
        *(_QWORD *)&v110.fields.fakeValue = v65;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v110, 0);
        v9 = v102;
        v72 = v63 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_75;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v35, 0, 0);
      if ( Master_object )
      {
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v74 = AutoOrganizationManager_TypeInfo;
        if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v7, v66);
          v74 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                  v73,
                                  v74->static_fields->CATEGORY_ID_NP_GAIN,
                                  (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v75 = *(float *)(v42 + 52) + 40000.0;
        }
        else
        {
          v76 = AutoOrganizationManager_TypeInfo;
          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v7, v66);
            v76 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                    v73,
                                    v76->static_fields->CATEGORY_ID_NP_REGAIN,
                                    (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          v75 = *(float *)(v42 + 52);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_74;
          v75 = v75 + 30000.0;
        }
        *(float *)(v42 + 52) = v75;
      }
      else
      {
        v75 = *(float *)(v42 + 52);
      }
LABEL_74:
      v72 = v75 + (float)*(int *)(v42 + 40);
LABEL_75:
      *(float *)(v42 + 52) = v72;
      if ( !v9 )
        goto LABEL_99;
      items = v9->fields._items;
      v78 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_99;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v42,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_90;
      }
      else
      {
        v80 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v42;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 4), v42, v66, v67, v68, v69, v70, v71);
        if ( !organizedEquipIdList )
          goto LABEL_90;
      }
      v81 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
      *(_QWORD *)&v111.fields.currentCryptoKey = v81;
      *(_QWORD *)&v111.fields.fakeValue = v82;
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v111, 0);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v83,
                                (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v85 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v84 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
        *(_QWORD *)&v112.fields.currentCryptoKey = v85;
        *(_QWORD *)&v112.fields.fakeValue = v84;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0);
        v86 = organizedEquipIdList->fields._items;
        v87 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v86 )
          goto LABEL_99;
        v88 = organizedEquipIdList->fields._size;
        v7 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v88 + 1;
          v86->m_Items[v88] = (int)Master_object;
        }
      }
LABEL_90:
      LODWORD(max_length) = ServantEquipList->max_length;
    }
  }
  Master_object = AutoOrganizationManager___c_TypeInfo;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v7, v12);
    Master_object = AutoOrganizationManager___c_TypeInfo;
  }
  v89 = (struct AutoOrganizationManager___c_StaticFields *)*((_QWORD *)Master_object + 23);
  _9__21_0 = (System_Comparison_T__o *)v89->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*((_DWORD *)Master_object + 57) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v7, v12);
      v89 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)v89->__9;
    _9__21_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__21_0,
      v91,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__,
      0);
    v92 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v92->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)_9__21_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v92->__9__21_0, (int32_t)_9__21_0, v93, v94, v95, v96, v97, v98);
  }
  if ( !v9 )
    goto LABEL_99;
  System_Collections_Generic_List_object___Sort_71849708(
    v9,
    _9__21_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v9,
                                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 Master_object; // x0
  __int64 v10; // x1
  UserServantEntity_array *OrganizationList; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x20
  UserServantEntity_o *v14; // x27
  __int64 v15; // x29
  unsigned int v16; // w19
  __int64 v17; // x26
  int32x4_t v18; // q0
  bool v19; // zf
  bool v20; // w8
  bool v21; // zf
  int8x16_t v22; // q0
  bool v23; // w9
  __int64 v24; // x2
  __int64 v25; // x23
  __int64 v26; // x25
  int32_t v27; // w0
  __int64 v28; // x23
  __int64 v29; // x25
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  int32_t v32; // w23
  __int64 v33; // x2
  __int64 v34; // x23
  __int64 v35; // x25
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // w23
  __int64 v39; // x2
  __int64 v40; // x23
  __int64 v41; // x25
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  int32_t v44; // w23
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t DispLimitCountStageSealAfterIndexZero; // w23
  __int64 v48; // x23
  __int64 v49; // x25
  int32_t v50; // w0
  bool UniqueSvtRestriction; // w19
  System_Predicate_object__o *v52; // x19
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *v56; // x19
  int32_t v57; // w29
  __int64 v58; // x23
  __int64 v59; // x25
  __int64 v60; // x1
  __int64 v61; // x2
  const MethodInfo *v62; // x4
  int32_t v63; // w23
  __int64 v64; // x2
  float AdjustTotalRate; // s8
  __int128 v66; // q1
  int v67; // w8
  int v68; // w8
  AutoOrganizationManager_ServantData_o *v69; // x19
  const MethodInfo *v70; // x1
  __int64 v71; // x1
  __int64 v72; // x2
  __int128 v73; // q1
  __int64 v74; // x2
  __int64 v75; // x9
  __int64 v76; // x25
  __int64 v77; // x29
  int32_t v78; // w0
  int32_t v79; // w29
  __int64 v80; // x1
  __int64 v81; // x2
  const MethodInfo *v82; // x4
  int32_t v83; // w23
  float v84; // s0
  int32_t dispLimitCount; // [xsp+14h] [xbp-11Ch]
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_object__o *v89; // [xsp+28h] [xbp-108h]
  int32_t svtId; // [xsp+34h] [xbp-FCh]
  int8x16_t v92; // [xsp+50h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_596BDC8 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_2213A60(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_596BDC8 = 1;
  }
  entity = 0;
  v89 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_80;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_80;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v92 = vceqzq_s32(vandq_s8(vdupq_n_s32(rarityBit), (int8x16_t)xmmword_E9CBD0));
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      v14 = OrganizationList->m_Items[v13];
      v15 = sub_2213CCC(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v14 )
      {
        Master_object = (__int64)UserServantEntity__GetOverwriteStatus(v14, restrictionInfo, 0);
        if ( !Master_object )
          goto LABEL_80;
        v16 = *(_DWORD *)(Master_object + 24);
        v17 = Master_object;
        v18 = vdupq_n_s32(v16);
        v19 = rarityBit != 31 && v16 == 0;
        v20 = v19;
        v21 = (rarityBit & 1) == 0 && v16 == 1;
        v22 = vceqq_s32(v18, (int32x4_t)xmmword_E9D5B0);
        v23 = v21;
        if ( (vmaxv_u16(vmovn_s32(vandq_s8(v92, v22))) & 1) == 0 && !v23 && !v20 )
        {
          Master_object = (__int64)UserServantEntity__get_BaseServantEntity(v14, 0);
          if ( !Master_object || !v15 )
            goto LABEL_80;
          *(_OWORD *)(v15 + 16) = *(_OWORD *)(Master_object + 16);
          svtId = UserServantEntity__GetServantId(v14, -1, 0);
          if ( !organizedServantIds )
            goto LABEL_54;
          v25 = *(_QWORD *)(v15 + 16);
          v26 = *(_QWORD *)(v15 + 24);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v24);
          *(_QWORD *)&v97.fields.currentCryptoKey = v25;
          *(_QWORD *)&v97.fields.fakeValue = v26;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v97, 0);
          Master_object = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                            v27,
                            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (Master_object & 1) == 0 )
          {
LABEL_54:
            v28 = *(_QWORD *)(v15 + 16);
            v29 = *(_QWORD *)(v15 + 24);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v24);
            *(_QWORD *)&v98.fields.currentCryptoKey = v28;
            *(_QWORD *)&v98.fields.fakeValue = v29;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v98, 0);
            if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v30, v31);
            Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, v32, v31);
            if ( (Master_object & 1) == 0 )
            {
              v34 = *(_QWORD *)(v15 + 16);
              v35 = *(_QWORD *)(v15 + 24);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v33);
              *(_QWORD *)&v99.fields.currentCryptoKey = v34;
              *(_QWORD *)&v99.fields.fakeValue = v35;
              v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v99, 0);
              if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v36, v37);
              Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v38, v37);
              if ( (Master_object & 1) == 0 )
              {
                v40 = *(_QWORD *)(v15 + 16);
                v41 = *(_QWORD *)(v15 + 24);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v39);
                *(_QWORD *)&v100.fields.currentCryptoKey = v40;
                *(_QWORD *)&v100.fields.fakeValue = v41;
                v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v100, 0);
                if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v42, v43);
                Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v44, v43);
                if ( (Master_object & 1) == 0 )
                {
                  Master_object = UserServantEntity__IsLeave(v14, 0);
                  if ( (Master_object & 1) == 0 )
                  {
                    DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                              v14,
                                                              -1,
                                                              restrictionInfo,
                                                              0);
                    if ( !restrictionInfo )
                      goto LABEL_84;
                    dispLimitCount = DispLimitCountStageSealAfterIndexZero;
                    v49 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
                    v48 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45, v46);
                    *(_QWORD *)&v101.fields.currentCryptoKey = v49;
                    *(_QWORD *)&v101.fields.fakeValue = v48;
                    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v101, 0);
                    DispLimitCountStageSealAfterIndexZero = dispLimitCount;
                    Master_object = QuestRestrictionInfo__IsRestriction_50436376(
                                      restrictionInfo,
                                      svtId,
                                      v50,
                                      dispLimitCount,
                                      v16,
                                      v14->fields.lv,
                                      1,
                                      0);
                    if ( (Master_object & 1) == 0 )
                    {
LABEL_84:
                      UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v14, restrictionInfo, 0);
                      Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v14, restrictionInfo, 0);
                      if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                      {
                        v52 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                        System_Predicate_object____ctor(
                          v52,
                          (Il2CppObject *)v15,
                          Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                          0);
                        Master_object = (__int64)v89;
                        if ( !v89 )
                          goto LABEL_80;
                        v53 = System_Collections_Generic_List_object___Find(
                                v89,
                                (System_Predicate_T__o *)v52,
                                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                        if ( v53 )
                        {
                          v56 = v53;
                          v57 = DispLimitCountStageSealAfterIndexZero;
                          v58 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
                          v59 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              v54,
                              v55);
                          *(_QWORD *)&v102.fields.currentCryptoKey = v58;
                          *(_QWORD *)&v102.fields.fakeValue = v59;
                          v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v102, 0);
                          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v60, v61);
                          AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                              (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                              svtId,
                                              v63,
                                              v57,
                                              v62);
                          if ( (float)(AdjustTotalRate * (float)*(int *)(v17 + 20)) >= (float)(*((float *)&v56[4].monitor
                                                                                               + 1)
                                                                                             * (float)SLODWORD(v56[2].monitor)) )
                          {
                            HIDWORD(v56[1].klass) = svtId;
                            LODWORD(v56[2].klass) = v57;
                            v66 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                            v67 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                            *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                            *(_OWORD *)&v95.fields.fakeValue = v66;
                            if ( !v67 )
                              j_il2cpp_runtime_class_init_0(
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                v10,
                                v64);
                            v94 = v95;
                            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v94,
                                              0);
                            v56[1].monitor = (void *)Master_object;
                            LODWORD(v56[2].monitor) = *(_DWORD *)(v17 + 20);
                            v68 = *(_DWORD *)(v17 + 28);
                            *((float *)&v56[4].monitor + 1) = AdjustTotalRate;
                            HIDWORD(v56[4].klass) = v68;
                          }
                        }
                        else
                        {
                          v69 = (AutoOrganizationManager_ServantData_o *)sub_2213CCC(AutoOrganizationManager_ServantData_TypeInfo);
                          AutoOrganizationManager_ServantData___ctor(v69, v70);
                          v73 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                          *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                          *(_OWORD *)&v95.fields.fakeValue = v73;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                              v71,
                              v72);
                          v93 = v95;
                          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v93, 0);
                          if ( !v69 )
                            goto LABEL_80;
                          v69->fields.userSvtId = Master_object;
                          v75 = *(_QWORD *)(v15 + 16);
                          v76 = *(_QWORD *)(v15 + 24);
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                          {
                            v77 = *(_QWORD *)(v15 + 16);
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              v10,
                              v74);
                            v75 = v77;
                          }
                          *(_QWORD *)&v103.fields.currentCryptoKey = v75;
                          *(_QWORD *)&v103.fields.fakeValue = v76;
                          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v103, 0);
                          v79 = DispLimitCountStageSealAfterIndexZero;
                          v69->fields.limitCountStageIndexZero = DispLimitCountStageSealAfterIndexZero;
                          v69->fields.baseSvtId = v78;
                          v69->fields.svtId = svtId;
                          v69->fields.classId = UserServantEntity__getSvtClassId(v14, 0, 0, 0);
                          v69->fields.atk = *(_DWORD *)(v17 + 20);
                          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                  v14->fields.limitCount,
                                  0);
                          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v80, v81);
                          v84 = AutoOrganizationManager__GetAdjustTotalRate(
                                  (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                  svtId,
                                  v83,
                                  v79,
                                  v82);
                          Master_object = (__int64)v87;
                          v69->fields.questAutoOrganizationAdjustRate = v84;
                          if ( !v87 )
                            goto LABEL_80;
                          if ( DataMasterBase_object__object__int___TryGetEntity(
                                 v87,
                                 &entity,
                                 v69->fields.svtId,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                          {
                            Master_object = (__int64)entity;
                            v69->fields.cost = *(_DWORD *)(v17 + 28);
                            if ( !Master_object )
                              goto LABEL_80;
                            v69->fields.notSamePartyKey = ServantEntity__GetNotSamePartyKey(
                                                            (ServantEntity_o *)Master_object,
                                                            0);
                          }
                          Master_object = sub_1FFEDA8(
                                            v89,
                                            v69,
                                            Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      LODWORD(max_length) = OrganizationList->max_length;
    }
    while ( (__int64)++v13 < (int)max_length );
  }
  Master_object = (__int64)v89;
  if ( !v89 )
LABEL_80:
    sub_2213CDC(Master_object, v10);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v89,
                                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_596BDC5 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BDC5 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1, v2);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_2213CDC(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0);
}


float AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Func_QuestAutoOrganizationAdjustEntity__float__c *v12; // x0
  System_Func_T__TResult__o *v13; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  AutoOrganizationManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x9
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v21; // x21
  struct AutoOrganizationManager___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596BDD0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_2213A60(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_2213A60(&System_Func_float__float__float__TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_2213A60(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_2213A60(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDD0 = 1;
  }
  v9 = sub_2213CCC(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  *(_DWORD *)(v9 + 20) = limitCount;
  v12 = System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo;
  *(_DWORD *)(v9 + 24) = dispLimitCount;
  v13 = (System_Func_T__TResult__o *)sub_2213CCC(v12);
  System_Func_object__float____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0);
  v14 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v13,
          (const MethodInfo_3891880 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v17 = AutoOrganizationManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v15, v16);
    v17 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__26_1 = static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15, v16);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__26_1 = (System_Func_float__float__float__o *)sub_2213CCC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v21,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0);
    v22 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v22->__9__26_1 = _9__26_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__26_1, (int32_t)_9__26_1, v23, v24, v25, v26, v27, v28);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v18,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_38635D4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float AutoOrganizationManager__GetAdjustTotalRate_40717932(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_T__TResult__o *v14; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AutoOrganizationManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x9
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v22; // x21
  struct AutoOrganizationManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596BDD1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_2213A60(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_2213A60(&System_Func_float__float__float__TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_2213A60(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_2213A60(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDD1 = 1;
  }
  v5 = sub_2213CCC(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)individualities, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0);
  v15 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v14,
          (const MethodInfo_3891880 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v18 = AutoOrganizationManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v16, v17);
    v18 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__27_1 = static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16, v17);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_2213CCC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v22,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0);
    v23 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v23->__9__27_1 = _9__27_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__27_1, (int32_t)_9__27_1, v24, v25, v26, v27, v28, v29);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v19,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_38635D4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_50882528; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  unsigned __int64 v10; // x8
  int v11; // w9
  Il2CppClass *v12; // x0
  bool v13; // w10
  bool v14; // zf
  bool v15; // w9
  char v16; // w8
  unsigned int v17; // w8
  unsigned __int64 v18; // x9
  int v19; // w11
  __int64 v20; // x8
  int v21; // w13
  __int64 v22; // x9
  unsigned int v23; // w10
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  __int64 v26; // x11
  unsigned __int64 v27; // x10
  int v28; // w14

  if ( (byte_596BDC6 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    byte_596BDC6 = 1;
  }
  Filter_50882528 = sub_2213B20(bool___TypeInfo, 13);
  if ( !sort )
LABEL_41:
    sub_2213CDC(Filter_50882528, v6);
  v7 = Filter_50882528;
  v8 = 0;
  v9 = Filter_50882528 + 32;
  do
  {
    Filter_50882528 = ListViewSort__GetFilter_50882528(sort, v8, 0);
    if ( !v7 )
      goto LABEL_41;
    v10 = *(unsigned int *)(v7 + 24);
    if ( v8 >= v10 )
      goto LABEL_40;
    *(_BYTE *)(v9 + v8++) = Filter_50882528 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)v10 < 2 )
LABEL_40:
    sub_2213CE4(Filter_50882528);
  v11 = *(unsigned __int8 *)(v7 + 32);
  v12 = bool___TypeInfo;
  v13 = *(_BYTE *)(v7 + 33) != 0;
  v14 = v11 == 0;
  v15 = v11 != 0;
  if ( v14 )
    v13 = 1;
  if ( *(_BYTE *)(v7 + 33) )
    v16 = v15;
  else
    v16 = 1;
  *(_BYTE *)(v7 + 33) = v13;
  *(_BYTE *)(v7 + 32) = v16;
  Filter_50882528 = sub_2213B20(v12, 5);
  v17 = *(_DWORD *)(v7 + 24);
  v18 = 0;
  LOBYTE(v19) = 1;
  if ( v17 <= 2 )
    v17 = 2;
  v20 = v17 - 2;
  do
  {
    if ( v20 == v18 )
      goto LABEL_40;
    if ( !Filter_50882528 )
      goto LABEL_41;
    if ( v18 >= *(unsigned int *)(Filter_50882528 + 24) )
      goto LABEL_40;
    v21 = *(unsigned __int8 *)(v7 + 34 + v18);
    *(_BYTE *)(Filter_50882528 + 32 + v18++) = v21;
    v19 = (v21 == 0) & (unsigned __int8)v19;
  }
  while ( v18 != 5 );
  if ( v19 )
  {
    v22 = 0;
    while ( v20 != v22 )
    {
      *(_BYTE *)(v7 + 34 + v22++) = 1;
      if ( v22 == 5 )
        goto LABEL_26;
    }
    goto LABEL_40;
  }
LABEL_26:
  Filter_50882528 = sub_2213B20(bool___TypeInfo, 6);
  v23 = *(_DWORD *)(v7 + 24);
  v24 = 0;
  LODWORD(v25) = 0;
  if ( v23 <= 7 )
    v23 = 7;
  v26 = v23 - 7;
  do
  {
    if ( v26 == v24 )
      goto LABEL_40;
    if ( !Filter_50882528 )
      goto LABEL_41;
    v27 = *(unsigned int *)(Filter_50882528 + 24);
    if ( v24 >= v27 )
      goto LABEL_40;
    v28 = *(unsigned __int8 *)(v7 + 39 + v24);
    *(_BYTE *)(Filter_50882528 + 32 + v24++) = v28;
    if ( v28 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0;
    while ( v27 != v25 )
    {
      *(_BYTE *)(Filter_50882528 + 32 + v25++) = 1;
      if ( v25 == 6 )
        goto LABEL_39;
    }
    goto LABEL_40;
  }
LABEL_39:
  *settingUnitNum = v25;
  return (System_Boolean_array *)v7;
}


System_Collections_Generic_HashSet_int__o *AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Int32_array *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x26
  AutoOrganizationManager___c_c *v21; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v24; // x21
  struct AutoOrganizationManager___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x0
  int32_t v34; // w25
  __int64 v35; // x2
  int v36; // w8
  __int64 v37; // x26
  __int64 v38; // x2
  __int64 v39; // x26
  __int64 v40; // x21
  __int64 v41; // x27
  int v42; // w8
  __int64 v43; // x27
  int v44; // w24
  char v45; // w20
  __int64 v46; // x21
  __int64 v47; // x2
  SkillLvEntity_o *v48; // x28
  __int64 v49; // x21
  __int64 v50; // x29
  int32_t v51; // w21
  EventUpValInfo_o *v52; // x29
  __int64 v53; // x21
  __int64 v54; // x26
  int v55; // w8
  __int64 v56; // x26
  __int64 v57; // x20
  __int64 v58; // x8
  ServantSkillMaster_o *v60; // [xsp+8h] [xbp-88h]
  Il2CppObject *v61; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v62; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_596BDCC & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventUpValInfo_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDCC = 1;
  }
  eventUpVallInfo = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0, 0);
  if ( !EventValUpEventIdHash )
    return v3;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(setupInfo, v10, 0, 0, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  v61 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_2213B20(int___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_61;
  v7 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  v60 = (ServantSkillMaster_o *)v13;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v15 )
LABEL_61:
    sub_2213CDC(Master_object, v7);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v15,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0);
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
  if ( FilterList )
  {
    v20 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v21 = AutoOrganizationManager___c_TypeInfo;
      if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v17, v18);
        v21 = AutoOrganizationManager___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__22_0 = (System_Comparison_T__o *)static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !*(&v21->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v21, v17, v18);
          static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v24,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0);
        v25 = AutoOrganizationManager___c_TypeInfo->static_fields;
        v25->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v25->__9__22_0,
          (int32_t)_9__22_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v20,
        _9__22_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v20->fields._size >= 1 )
      {
        v34 = 0;
        v62 = v20;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v20,
                                     v34,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v36 = *(_DWORD *)(Master_object + 20);
          v37 = Master_object;
          if ( v36 == 2 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v35);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v37 + 24),
                                       0);
            if ( !Master_object )
              goto LABEL_61;
            v55 = *(_DWORD *)(Master_object + 24);
            v56 = Master_object;
            if ( v55 >= 1 )
            {
              v57 = 0;
              while ( (unsigned int)v57 < v55 )
              {
                v58 = *(_QWORD *)(v56 + 32 + 8 * v57);
                if ( !v58 || !v3 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v3,
                                  *(_DWORD *)(v58 + 20),
                                  (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v55 = *(_DWORD *)(v56 + 24);
                if ( (int)++v57 >= v55 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_2213CE4(Master_object);
            }
          }
          else if ( v36 == 1 )
          {
            if ( !v19 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v19,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v39 = Master_object;
            v40 = *(_QWORD *)(Master_object + 16);
            v41 = *(_QWORD *)(Master_object + 24);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v38);
            *(_QWORD *)&v65.fields.currentCryptoKey = v40;
            *(_QWORD *)&v65.fields.fakeValue = v41;
            v7 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
            Master_object = (__int64)v60;
            if ( !v60 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v60, v7, 0);
            if ( !Master_object )
              goto LABEL_61;
            v42 = *(_DWORD *)(Master_object + 24);
            v43 = Master_object;
            if ( v42 >= 1 )
            {
              v44 = 0;
              v45 = 0;
              do
              {
                if ( v44 >= (unsigned int)v42 )
                  goto LABEL_62;
                v46 = *(_QWORD *)(v43 + 8LL * v44 + 32);
                if ( !v46 || !v14 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v14, *(_DWORD *)(v46 + 28), 1, 0);
                if ( Master_object && !*(_DWORD *)(v46 + 44) )
                {
                  v48 = (SkillLvEntity_o *)Master_object;
                  v50 = *(_QWORD *)(v39 + 16);
                  v49 = *(_QWORD *)(v39 + 24);
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v47);
                  *(_QWORD *)&v66.fields.currentCryptoKey = v50;
                  *(_QWORD *)&v66.fields.fakeValue = v49;
                  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v66, 0);
                  v52 = (EventUpValInfo_o *)sub_2213CCC(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v52, setupInfo, v51, 1, 1, 0, 0);
                  eventUpVallInfo = v52;
                  Master_object = SkillLvEntity__getEventUpVal_49920836(v48, &eventUpVallInfo, 1, 1, 0, 1, 0, -1, 0);
                  v45 |= Master_object;
                }
                v42 = *(_DWORD *)(v43 + 24);
                ++v44;
              }
              while ( v44 < v42 );
              v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
              if ( (v45 & 1) != 0 )
              {
                v53 = *(_QWORD *)(v39 + 16);
                v54 = *(_QWORD *)(v39 + 24);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v47);
                *(_QWORD *)&v67.fields.currentCryptoKey = v53;
                *(_QWORD *)&v67.fields.fakeValue = v54;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v20 = v62;
          ++v34;
        }
        while ( v34 < v62->fields._size );
      }
    }
  }
  return v3;
}


int32_t AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 v3; // x9
  __int64 v4; // x0
  unsigned __int64 max_length_low; // x10
  bool *m_Items; // x8

  if ( !rarityFlag )
    sub_2213CDC(0, method);
  v3 = 0;
  v4 = 0;
  max_length_low = LODWORD(rarityFlag->max_length);
  m_Items = rarityFlag->m_Items;
  do
  {
    if ( (__int64)v3 <= (int)max_length_low )
    {
      if ( v3 >= max_length_low )
        sub_2213CE4(v4);
      if ( m_Items[v3] )
        v4 = (unsigned int)v4 | (1 << v3);
    }
    ++v3;
  }
  while ( v3 != 5 );
  return v4;
}


System_Boolean_array *AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 Filter_50882576; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  unsigned __int64 i; // x21
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  int v9; // w9
  Il2CppClass *v10; // x0
  bool v11; // w10
  bool v12; // zf
  bool v13; // w9
  char v14; // w8
  unsigned int v15; // w8
  unsigned __int64 v16; // x9
  int v17; // w10
  __int64 v18; // x8
  int v19; // w12
  __int64 v20; // x9

  if ( (byte_596BDC7 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    byte_596BDC7 = 1;
  }
  Filter_50882576 = sub_2213B20(bool___TypeInfo, 7);
  if ( !sort )
LABEL_28:
    sub_2213CDC(Filter_50882576, v4);
  v5 = Filter_50882576;
  for ( i = 0; i != 7; ++i )
  {
    Filter_50882576 = ListViewSort__GetFilter_50882576(sort, i, 0);
    if ( !v5 )
      goto LABEL_28;
    v7 = *(unsigned int *)(v5 + 24);
    if ( i >= v7 )
      goto LABEL_27;
    v8 = v5 + i;
    *(_BYTE *)(v8 + 32) = Filter_50882576 & 1;
  }
  if ( (unsigned int)v7 < 2 )
LABEL_27:
    sub_2213CE4(Filter_50882576);
  v9 = *(unsigned __int8 *)(v5 + 32);
  v10 = bool___TypeInfo;
  v11 = *(_BYTE *)(v5 + 33) != 0;
  v12 = v9 == 0;
  v13 = v9 != 0;
  if ( v12 )
    v11 = 1;
  if ( *(_BYTE *)(v5 + 33) )
    v14 = v13;
  else
    v14 = 1;
  *(_BYTE *)(v5 + 33) = v11;
  *(_BYTE *)(v5 + 32) = v14;
  Filter_50882576 = sub_2213B20(v10, 5);
  v15 = *(_DWORD *)(v5 + 24);
  v16 = 0;
  if ( v15 <= 2 )
    v15 = 2;
  LOBYTE(v17) = 1;
  v18 = v15 - 2;
  do
  {
    if ( v18 == v16 )
      goto LABEL_27;
    if ( !Filter_50882576 )
      goto LABEL_28;
    if ( v16 >= *(unsigned int *)(Filter_50882576 + 24) )
      goto LABEL_27;
    v19 = *(unsigned __int8 *)(v5 + v16 + 34);
    *(_BYTE *)(Filter_50882576 + 32 + v16++) = v19;
    v17 = (v19 == 0) & (unsigned __int8)v17;
  }
  while ( v16 != 5 );
  if ( v17 )
  {
    v20 = 0;
    while ( v18 != v20 )
    {
      *(_BYTE *)(v5 + 34 + v20++) = 1;
      if ( v20 == 5 )
        return (System_Boolean_array *)v5;
    }
    goto LABEL_27;
  }
  return (System_Boolean_array *)v5;
}


void AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_596BDC4 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BDC4 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1, v2);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_2213CDC(autoOrganizationInfo, v1);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
bool AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t allOutBattleGroupNo; // w21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_596BDCE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596BDCE = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           (UserEventAlloutBattleMaster_o *)Master_object,
           svtId,
           restrictionInfo->fields.eventId,
           allOutBattleGroupNo,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool AutoOrganizationManager__IsDataLost(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  bool IsRestart; // w8
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596BDCF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596BDCF = 1;
  }
  entity = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_24;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          *(_QWORD *)(p_image[23] + 64LL),
          restrictionInfo->fields.dataLostBattleId,
          0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
    goto LABEL_24;
  IsRestart = UserEventDataLostEntity__IsRestart(entity, svtId, 0);
  p_image = &entity->klass;
  if ( !IsRestart )
  {
    if ( entity )
      return UserEventDataLostEntity__IsDataLost(entity, svtId, 0);
LABEL_24:
    sub_2213CDC(p_image, v5);
  }
  if ( !entity )
    goto LABEL_24;
  return UserEventDataLostEntity__GetTimesToRestart(entity, svtId, 0) >= 1;
}


// local variable allocation has failed, the output may be wrong!
bool AutoOrganizationManager__IsFatigue(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596BDCD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596BDCD = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0) )
    return 0;
  v9 = recoverAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  return v9 > NetworkManager__getTime(0);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x29
  int32_t klass_high; // w22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  float Rate; // s0
  __int64 v18; // x1
  __int64 v19; // x2
  AutoOrganizationManager___c_c *v20; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v23; // x21
  struct AutoOrganizationManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_596BDC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_2213A60(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___91673712);
    sub_2213A60(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDC9 = 1;
  }
  entity = 0;
  memset(&v34, 0, sizeof(v34));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___91673712);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_2213CDC(Master_object, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v34 = v33;
  v33.fields._list = 0;
  *(_QWORD *)&v33.fields._index = &v34;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v11 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_2213CDC(v11, v12);
    if ( !v10 )
      sub_2213CDC(v11, v12);
    klass_high = HIDWORD(v34.fields._current[2].klass);
    v15 = DataMasterBase_object__object__int___TryGetEntity(
            v10,
            &entity,
            klass_high,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v15 )
    {
      if ( !entity )
        sub_2213CDC(v15, v16);
      klass_high = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass_high, enemyClassId, 0);
    else
      Rate = 1.0;
    *((float *)&current[3].klass + 1) = *((float *)&current[4].monitor + 1)
                                      * (float)(Rate * (float)SLODWORD(current[2].monitor));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v20 = AutoOrganizationManager___c_TypeInfo;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v18, v19);
    v20 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__19_0 = (System_Func_T__TResult__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__19_0, v23, Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, 0);
    v24 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v24->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__19_0, (int32_t)_9__19_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_3889314 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v31,
                                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortServant(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x27
  int32_t klass_high; // w22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  float Rate; // s8
  float v18; // s0
  float v19; // s0
  __int64 v20; // x1
  __int64 v21; // x2
  AutoOrganizationManager___c_c *v22; // x0
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__20_0; // x20
  Il2CppObject *v25; // x21
  struct AutoOrganizationManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  AutoOrganizationManager___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x19
  struct AutoOrganizationManager___c_StaticFields *v38; // x9
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v40; // x21
  struct AutoOrganizationManager___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  AutoOrganizationManager___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x19
  struct AutoOrganizationManager___c_StaticFields *v53; // x9
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v55; // x21
  struct AutoOrganizationManager___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  AutoOrganizationManager___c_c *v66; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x19
  struct AutoOrganizationManager___c_StaticFields *v68; // x9
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v70; // x21
  struct AutoOrganizationManager___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  AutoOrganizationManager___c_c *v81; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x19
  struct AutoOrganizationManager___c_StaticFields *v83; // x9
  System_Func_object__long__o *_9__20_4; // x20
  Il2CppObject *v85; // x21
  struct AutoOrganizationManager___c_StaticFields *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596BDCA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_2213A60(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_2213A60(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_2213A60(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___91673712);
    sub_2213A60(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_2213A60(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDCA = 1;
  }
  entity = 0;
  memset(&v96, 0, sizeof(v96));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___91673712);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_2213CDC(Master_object, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v96 = v95;
  v95.fields._list = 0;
  *(_QWORD *)&v95.fields._index = &v96;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v11 )
      break;
    current = v96.fields._current;
    if ( !v96.fields._current )
      sub_2213CDC(v11, v12);
    if ( !v10 )
      sub_2213CDC(v11, v12);
    klass_high = HIDWORD(v96.fields._current[2].klass);
    v15 = DataMasterBase_object__object__int___TryGetEntity(
            v10,
            &entity,
            klass_high,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v15 )
    {
      if ( !entity )
        sub_2213CDC(v15, v16);
      klass_high = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
    {
      Rate = ClassRelationMaster__getRate(klass_high, enemyClassId, 0);
      v18 = ClassRelationMaster__getRate(enemyClassId, klass_high, 0);
    }
    else
    {
      v18 = 1.0;
      Rate = 1.0;
    }
    v19 = (float)SHIDWORD(current[2].monitor) / v18;
    *(float *)&current[3].monitor = *((float *)&current[4].monitor + 1)
                                  * (float)(Rate * (float)SLODWORD(current[2].monitor));
    *((float *)&current[3].monitor + 1) = v19;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v22 = AutoOrganizationManager___c_TypeInfo;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v20, v21);
    v22 = AutoOrganizationManager___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__20_0 = (System_Func_T__TResult__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v20, v21);
      static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v25, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0);
    v26 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v26->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__20_0, (int32_t)_9__20_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_3889314 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v36 = AutoOrganizationManager___c_TypeInfo;
  v37 = v33;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v34, v35);
    v36 = AutoOrganizationManager___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__20_1 = (System_Func_object__int__o *)v38->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34, v35);
      v38 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v40, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0);
    v41 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v41->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__20_1, (int32_t)_9__20_1, v42, v43, v44, v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v37,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v51 = AutoOrganizationManager___c_TypeInfo;
  v52 = v48;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v49, v50);
    v51 = AutoOrganizationManager___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__20_2 = (System_Func_T__TResult__o *)v53->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !*(&v51->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v51, v49, v50);
      v53 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v55, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0);
    v56 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v56->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->__9__20_2, (int32_t)_9__20_2, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v52,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_389B554 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v66 = AutoOrganizationManager___c_TypeInfo;
  v67 = v63;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v64, v65);
    v66 = AutoOrganizationManager___c_TypeInfo;
  }
  v68 = v66->static_fields;
  _9__20_3 = (System_Func_object__int__o *)v68->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !*(&v66->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v66, v64, v65);
      v68 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v70, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0);
    v71 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v71->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71->__9__20_3, (int32_t)_9__20_3, v72, v73, v74, v75, v76, v77);
  }
  v78 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v67,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v81 = AutoOrganizationManager___c_TypeInfo;
  v82 = v78;
  if ( !*(&AutoOrganizationManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo, v79, v80);
    v81 = AutoOrganizationManager___c_TypeInfo;
  }
  v83 = v81->static_fields;
  _9__20_4 = (System_Func_object__long__o *)v83->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !*(&v81->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v81, v79, v80);
      v83 = AutoOrganizationManager___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)v83->__9;
    _9__20_4 = (System_Func_object__long__o *)sub_2213CCC(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v85, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0);
    v86 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v86->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v86->__9__20_4, (int32_t)_9__20_4, v87, v88, v89, v90, v91, v92);
  }
  v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v82,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_389B488 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v93,
                                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0

  if ( (byte_596BDC2 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BDC2 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1, v2);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  return v3->static_fields->autoOrganizationInfo;
}


ListViewSort_o *AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AutoOrganizationManager_c *v3; // x0

  if ( (byte_596BDC3 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BDC3 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v1, v2);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  return v3->static_fields->waveBattleAutoOrganizationInfo;
}


void AutoOrganizationManager_MySvtOrNpcData___ctor(
        AutoOrganizationManager_MySvtOrNpcData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtId = 0;
  this->fields.userSvtId = 0;
  this->fields.slot = 0;
}


void AutoOrganizationManager_ServantData___ctor(AutoOrganizationManager_ServantData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svtId = 0;
  this->fields.userSvtId = 0;
  this->fields.classId = 0;
  this->fields.atk = 0;
  *(_QWORD *)&this->fields.collectionNo = 0;
  this->fields.cost = 0;
  this->fields.used = 0;
  *(_QWORD *)&this->fields.questAutoOrganizationAdjustRate = 0;
}


void AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BDD3 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager___c_TypeInfo);
    byte_596BDD3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AutoOrganizationManager___c___ctor(AutoOrganizationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AutoOrganizationManager___c___AutoOrganizationEquip_b__21_0(
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
    sub_2213CDC(this, a);
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


float AutoOrganizationManager___c___GetAdjustTotalRate_b__26_1(
        AutoOrganizationManager___c_o *this,
        float total,
        float rate,
        const MethodInfo *method)
{
  return total * rate;
}


float AutoOrganizationManager___c___GetAdjustTotalRate_b__27_1(
        AutoOrganizationManager___c_o *this,
        float total,
        float rate,
        const MethodInfo *method)
{
  return total * rate;
}


int32_t AutoOrganizationManager___c___GetEventBonusIds_b__22_0(
        AutoOrganizationManager___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


float AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.relationNum;
}


float AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.relationAtk;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.treasureDeviceLv;
}


float AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.relationDef;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.baseSvtId;
}


int64_t AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.userSvtId;
}


void AutoOrganizationManager___c__DisplayClass18_0___ctor(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AutoOrganizationManager___c__DisplayClass18_0___AutoOrganizationServant_b__0(
        AutoOrganizationManager___c__DisplayClass18_0_o *this,
        AutoOrganizationManager_ServantData_o *x,
        const MethodInfo *method)
{
  AutoOrganizationManager___c__DisplayClass18_0_o *v4; // x20
  int32_t baseSvtId; // w21
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_596BDD4 & 1) == 0 )
  {
    this = (AutoOrganizationManager___c__DisplayClass18_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596BDD4 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  baseSvtId = x->fields.baseSvtId;
  v6 = *(_QWORD *)&v4->fields.baseSvtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v4->fields.baseSvtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return baseSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
}


void AutoOrganizationManager___c__DisplayClass26_0___ctor(
        AutoOrganizationManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float AutoOrganizationManager___c__DisplayClass26_0___GetAdjustTotalRate_b__0(
        AutoOrganizationManager___c__DisplayClass26_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(
           entity,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.dispLimitCount,
           0);
}


void AutoOrganizationManager___c__DisplayClass27_0___ctor(
        AutoOrganizationManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float AutoOrganizationManager___c__DisplayClass27_0___GetAdjustTotalRate_b__0(
        AutoOrganizationManager___c__DisplayClass27_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_49476276(entity, this->fields.individualities, 0);
}