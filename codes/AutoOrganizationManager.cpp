void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ListViewSort_o *v9; // x19
  struct AutoOrganizationManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4AFD8E3 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v1);
    sub_1BC3008(&ListViewSort_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_2477/*"AutoOrganization"*/, v3);
    sub_1BC3008(&StringLiteral_2483/*"AutoOrganizationWaveBattle"*/, v4);
    byte_4AFD8E3 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v5 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v5, (System_String_o *)StringLiteral_2477/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v5, v7, v8);
  v9 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v9, (System_String_o *)StringLiteral_2483/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v10 = AutoOrganizationManager_TypeInfo->static_fields;
  v10->waveBattleAutoOrganizationInfo = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10->waveBattleAutoOrganizationInfo, (int32_t)v9, v11, v12);
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
  void *Master_object; // x0
  const MethodInfo *v32; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v34; // x20
  System_Collections_Generic_HashSet_int__o *v35; // x24
  System_Collections_Generic_HashSet_int__o *v36; // x23
  __int64 v37; // x2
  AutoOrganizationServantBonusFilterEquipComponent_c *v38; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  Il2CppObject *v42; // x27
  int v43; // w28
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  int v52; // w8
  void *v53; // x29
  unsigned int v54; // w24
  __int64 v55; // x8
  __int64 v56; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v58; // x25
  __int64 v59; // x26
  __int64 v60; // x27
  int32_t v61; // w0
  __int64 v62; // x26
  __int64 v63; // x27
  int32_t v64; // w0
  __int64 v65; // x26
  __int128 v66; // q0
  __int64 v67; // x27
  __int64 v68; // x28
  int32_t v69; // w0
  int32_t v70; // w2
  int32_t atk; // w8
  Il2CppObject *v72; // x8
  float v73; // s13
  float v74; // s13
  __int64 v75; // x27
  __int64 v76; // x28
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  float v79; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x27
  AutoOrganizationManager_c *v81; // x0
  float v82; // s0
  AutoOrganizationManager_c *v83; // x0
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x0
  __int64 v88; // x26
  __int64 v89; // x27
  int32_t v90; // w0
  __int64 v91; // x25
  __int64 v92; // x26
  struct System_Int32_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  System_Comparison_T__o *v96; // x19
  Il2CppObject *v97; // x21
  struct AutoOrganizationManager___c_StaticFields *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_Collections_Generic_HashSet_int__o *v102; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+30h] [xbp-C0h]
  int v106; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4AFD8DC & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_1BC3008(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_1BC3008(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v23);
    sub_1BC3008(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v24);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1BC3008(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1BC3008(&AutoOrganizationManager_ServantData_TypeInfo, v28);
    sub_1BC3008(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, v29);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v30);
    byte_4AFD8DC = 1;
  }
  entity = 0LL;
  v106 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  v35 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v35,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v32);
    if ( !Master_object )
      goto LABEL_98;
    v102 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *((int *)Master_object + 8) >= 1 )
    {
      v38 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v38 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v38->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v42 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v106 = 0;
      if ( (int)Master_object >= 1 )
      {
        v43 = (int)Master_object;
        while ( 1 )
        {
          v44 = System_Int32__ToString((int32_t)&v106, 0LL);
          v45 = System_String__Concat_62348648(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v44, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v45, 0LL) )
          {
            v46 = System_Int32__ToString((int32_t)&v106, 0LL);
            v47 = System_String__Concat_62348648(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v46, 0LL);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_69992544(v47, 0LL);
            if ( !v36 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v36,
              (int32_t)Master_object,
              (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v48 = System_Int32__ToString((int32_t)&v106, 0LL);
          v49 = System_String__Concat_62348648(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v48, 0LL);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v49, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v50 = System_Int32__ToString((int32_t)&v106, 0LL);
            v51 = System_String__Concat_62348648(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v50, 0LL);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_69992544(v51, 0LL);
            if ( !v42 )
              goto LABEL_98;
            Master_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                              (EventBonusFilterGroupMemberMaster_o *)v42,
                              (int32_t)Master_object,
                              0LL);
            if ( !Master_object )
              goto LABEL_98;
            v52 = *((_DWORD *)Master_object + 6);
            v53 = Master_object;
            if ( v52 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v106 >= v43 )
            goto LABEL_34;
        }
        v54 = 0;
        while ( 1 )
        {
          if ( v54 >= v52 )
LABEL_99:
            sub_1BC326C(Master_object, v32, v37);
          v55 = *((_QWORD *)v53 + (int)v54 + 4);
          if ( !v55 || !v36 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v36,
                                    *(_DWORD *)(v55 + 20),
                                    (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
          v52 = *((_DWORD *)v53 + 6);
          if ( (int)++v54 >= v52 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1BC3264(Master_object, v32);
      }
    }
  }
  else
  {
    v102 = v35;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  v56 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v56 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v56; ++i )
    {
      if ( i >= (unsigned int)v56 )
        goto LABEL_99;
      v58 = ServantEquipList->m_Items[i];
      if ( !v58 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v60 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
        v59 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v108.fields.currentCryptoKey = v60;
        *(_QWORD *)&v108.fields.fakeValue = v59;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v108, 0LL);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v61,
                                  (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v36 )
        goto LABEL_98;
      if ( v36->fields._count >= 1 )
      {
        v63 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
        v62 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v109.fields.currentCryptoKey = v63;
        *(_QWORD *)&v109.fields.fakeValue = v62;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v109, 0LL);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v36,
                                  v64,
                                  (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v58, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v65 = sub_1BC3254(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v65, 0LL);
      *(_DWORD *)(v65 + 16) = 0;
      *(_QWORD *)(v65 + 32) = 0LL;
      *(_QWORD *)(v65 + 24) = 0LL;
      *(_QWORD *)(v65 + 44) = 0LL;
      *(_DWORD *)(v65 + 64) = 0;
      *(_BYTE *)(v65 + 68) = 0;
      *(_QWORD *)(v65 + 72) = 0LL;
      v66 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
      *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v105.fields.fakeValue = v66;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v104 = v105;
      *(_QWORD *)(v65 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v104, 0LL);
      v68 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v110.fields.currentCryptoKey = v68;
      *(_QWORD *)&v110.fields.fakeValue = v67;
      v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v110, 0LL);
      *(_DWORD *)(v65 + 16) = v69;
      v70 = v69;
      atk = v58->fields.atk;
      Master_object = v103;
      *(_DWORD *)(v65 + 48) = 0;
      *(_DWORD *)(v65 + 36) = atk;
      if ( !v103 )
        goto LABEL_98;
      Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                v103,
                                &entity,
                                v70,
                                (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v72 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v65 + 64) = entity[9].monitor;
        *(_DWORD *)(v65 + 44) = v72[13].klass;
      }
      Master_object = v102;
      if ( !v102 )
        goto LABEL_98;
      if ( v102->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v102,
             *(_DWORD *)(v65 + 16),
             (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v73 = *(float *)(v65 + 48) + 50000.0;
        *(float *)(v65 + 48) = v73;
        v74 = v73 + (float)((float)UserServantEntity__getRarity(v58, 0LL) * 100000.0);
        *(float *)(v65 + 48) = v74;
        v76 = *(_QWORD *)&v58->fields.limitCount.fields.currentCryptoKey;
        v75 = *(_QWORD *)&v58->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v76;
        *(_QWORD *)&v111.fields.fakeValue = v75;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v111, 0LL);
        v79 = v74 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v58, 0, 0LL);
      if ( Master_object )
      {
        v80 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v81 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v81 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                  v80,
                                  v81->static_fields->CATEGORY_ID_NP_GAIN,
                                  (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v82 = *(float *)(v65 + 48) + 40000.0;
        }
        else
        {
          v83 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v83 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                    v80,
                                    v83->static_fields->CATEGORY_ID_NP_REGAIN,
                                    (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_73;
          v82 = *(float *)(v65 + 48) + 30000.0;
        }
        *(float *)(v65 + 48) = v82;
      }
LABEL_73:
      v79 = *(float *)(v65 + 48) + (float)*(int *)(v65 + 36);
LABEL_74:
      *(float *)(v65 + 48) = v79;
      if ( !v34 )
        goto LABEL_98;
      items = v34->fields._items;
      v85 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v65,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v87 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v87[4] = (Il2CppClass *)v65;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v87 + 4), v65, v77, v78);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v89 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v89;
      *(_QWORD *)&v112.fields.fakeValue = v88;
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v112, 0LL);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v90,
                                (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v92 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
        v91 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v113.fields.currentCryptoKey = v92;
        *(_QWORD *)&v113.fields.fakeValue = v91;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v113, 0LL);
        v93 = organizedEquipIdList->fields._items;
        v94 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v93 )
          goto LABEL_98;
        v95 = organizedEquipIdList->fields._size;
        v32 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v95 >= v93->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v95 + 1;
          v93->m_Items[v95 + 1] = (int)Master_object;
        }
      }
LABEL_89:
      LODWORD(v56) = ServantEquipList->max_length;
    }
  }
  Master_object = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_object = AutoOrganizationManager___c_TypeInfo;
  }
  v96 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 56LL);
  if ( !v96 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = AutoOrganizationManager___c_TypeInfo;
    }
    v97 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v96 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v96, v97, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0LL);
    v98 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v98->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v96;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v98->__9__21_0, (int32_t)v96, v99, v100);
  }
  if ( !v34 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_57288964(
    v34,
    v96,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v34,
                                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x21
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
  int64_t Master_object; // x0
  __int64 v25; // x1
  UserServantEntity_array *OrganizationList; // x25
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  unsigned __int64 v29; // x24
  UserServantEntity_o *v30; // x29
  int32_t v31; // w27
  int64_t v32; // x28
  QuestRestrictionInfo_o *v33; // x23
  System_Int32_array *v34; // x21
  __int64 v35; // x19
  __int64 v36; // x26
  int32_t klass; // w19
  int32_t v38; // w19
  int32_t v39; // w19
  bool UniqueSvtRestriction; // w19
  System_Predicate_object__o *v41; // x19
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x0
  __int128 v45; // q0
  Il2CppObject *v46; // x27
  const MethodInfo *v47; // x2
  int64_t v48; // x19
  float AdjustTotalRate; // s8
  __int128 v50; // q0
  int v51; // w8
  __int64 v52; // x27
  __int128 v53; // q0
  const MethodInfo *v54; // x2
  int64_t v55; // x19
  float v56; // s0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  CGThumbnailListItem_o *p_monitor; // [xsp+8h] [xbp-118h]
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_object__o *v67; // [xsp+20h] [xbp-100h]
  Il2CppObject *object; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v6 = restrictionInfo;
  if ( (byte_4AFD8D9 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, restrictionInfo);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v16);
    sub_1BC3008(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v17);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_1BC3008(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v20);
    sub_1BC3008(&AutoOrganizationManager_ServantData_TypeInfo, v21);
    sub_1BC3008(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v22);
    sub_1BC3008(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v23);
    byte_4AFD8D9 = 1;
  }
  entity = 0LL;
  object = (Il2CppObject *)sub_1BC3254(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(object, 0LL);
  v67 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_67;
  v28 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BC326C(Master_object, v25, v27);
      v30 = OrganizationList->m_Items[v29];
      if ( !v30 )
        goto LABEL_36;
      Master_object = (int64_t)UserServantEntity__GetOverwriteStatus(OrganizationList->m_Items[v29], v6, 0LL);
      if ( !Master_object )
        goto LABEL_67;
      v31 = *(_DWORD *)(Master_object + 24);
      v32 = Master_object;
      Master_object = (rarityBit != 31) & (unsigned __int8)(v31 == 0);
      if ( rarityBit != 31 && v31 == 0
        || (rarityBit & 1) == 0 && v31 == 1
        || (rarityBit & 2) == 0 && v31 == 2
        || (rarityBit & 4) == 0 && v31 == 3
        || (rarityBit & 8) == 0 && v31 == 4
        || (rarityBit & 0x10) == 0 && v31 == 5 )
      {
        goto LABEL_36;
      }
      v33 = v6;
      v34 = organizedServantIds;
      v36 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v74.fields.currentCryptoKey = v36;
      *(_QWORD *)&v74.fields.fakeValue = v35;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v74, 0LL);
      if ( !object )
        goto LABEL_67;
      klass = Master_object;
      organizedServantIds = v34;
      LODWORD(object[1].klass) = Master_object;
      if ( v34 )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                          Master_object,
                          (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
        v6 = v33;
        if ( (Master_object & 1) != 0 )
          goto LABEL_36;
        klass = (int32_t)object[1].klass;
      }
      else
      {
        v6 = v33;
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(v6, klass, v27);
      if ( (Master_object & 1) == 0 )
      {
        v38 = (int32_t)object[1].klass;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(v6, v38, v27);
        if ( (Master_object & 1) == 0 )
        {
          v39 = (int32_t)object[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(v6, v39, v27);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v30, 0LL);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v30, v6, v31, 1, 0LL);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v30, v6, 0LL);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v30, v6, 0LL);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v41 = (System_Predicate_object__o *)p_monitor->klass;
                  if ( !p_monitor->klass )
                  {
                    v41 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v41,
                      object,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    object[1].monitor = v41;
                    sub_1BC2FAC(p_monitor, (int32_t)v41, v42, v43);
                  }
                  Master_object = (int64_t)v67;
                  if ( !v67 )
                    goto LABEL_67;
                  v44 = System_Collections_Generic_List_object___Find(
                          v67,
                          (System_Predicate_T__o *)v41,
                          (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v44 )
                  {
                    v45 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
                    v46 = v44;
                    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v72.fields.fakeValue = v45;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v71 = v72;
                    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v71, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v48,
                                        v47);
                    if ( (float)(AdjustTotalRate * (float)*(int *)(v32 + 20)) >= (float)(*(float *)&v46[4].monitor
                                                                                       * (float)*(int *)(v32 + 20)) )
                    {
                      v50 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
                      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v72.fields.fakeValue = v50;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v70 = v72;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v70, 0LL);
                      v46[1].monitor = (void *)Master_object;
                      HIDWORD(v46[2].klass) = *(_DWORD *)(v32 + 20);
                      v51 = *(_DWORD *)(v32 + 28);
                      *(float *)&v46[4].monitor = AdjustTotalRate;
                      LODWORD(v46[4].klass) = v51;
                    }
                  }
                  else
                  {
                    v52 = sub_1BC3254(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v52, 0LL);
                    *(_DWORD *)(v52 + 16) = 0;
                    *(_QWORD *)(v52 + 44) = 0LL;
                    *(_DWORD *)(v52 + 64) = 0;
                    *(_BYTE *)(v52 + 68) = 0;
                    *(_QWORD *)(v52 + 72) = 0LL;
                    *(_QWORD *)(v52 + 24) = 0LL;
                    *(_QWORD *)(v52 + 32) = 0LL;
                    v53 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
                    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v72.fields.fakeValue = v53;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v69 = v72;
                    *(_QWORD *)(v52 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                              &v69,
                                              0LL);
                    *(_DWORD *)(v52 + 16) = object[1].klass;
                    *(_DWORD *)(v52 + 32) = UserServantEntity__getSvtClassId(v30, 0, 0, 0LL);
                    *(_DWORD *)(v52 + 36) = *(_DWORD *)(v32 + 20);
                    v55 = *(_QWORD *)(v52 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v56 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v55,
                            v54);
                    Master_object = (int64_t)v65;
                    *(float *)(v52 + 72) = v56;
                    if ( !v65 )
                      goto LABEL_67;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v65,
                                      &entity,
                                      *(_DWORD *)(v52 + 16),
                                      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      *(_DWORD *)(v52 + 64) = *(_DWORD *)(v32 + 28);
                      Master_object = (int64_t)entity;
                      if ( !entity )
                        goto LABEL_67;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)entity, 0LL);
                      *(_DWORD *)(v52 + 76) = Master_object;
                    }
                    items = v67->fields._items;
                    v60 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v67->fields._version;
                    if ( !items )
                      goto LABEL_67;
                    size = v67->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v67,
                        (Il2CppObject *)v52,
                        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v62 = &items->obj.klass + size;
                      v67->fields._size = size + 1;
                      v62[4] = (Il2CppClass *)v52;
                      sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 4), v52, v57, v58);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      LODWORD(v28) = OrganizationList->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  Master_object = (int64_t)v67;
  if ( !v67 )
LABEL_67:
    sub_1BC3264(Master_object, v25);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v67,
                                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4AFD8D6 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v1);
    byte_4AFD8D6 = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_1BC3264(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_Func_T__TResult__o *v15; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  AutoOrganizationManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v20; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4AFD8E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Aggregate_float__float___, userSvtId);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v5);
    sub_1BC3008(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v6);
    sub_1BC3008(&System_Func_float__float__float__TypeInfo, v7);
    sub_1BC3008(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__, v8);
    sub_1BC3008(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__, v9);
    sub_1BC3008(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo, v10);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v11);
    byte_4AFD8E1 = 1;
  }
  v12 = (Il2CppObject *)sub_1BC3254(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BC3264(v13, v14);
  v12[1].klass = (Il2CppClass *)userSvtId;
  v15 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v15,
    v12,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v15,
          (const MethodInfo_3036684 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v17 = AutoOrganizationManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v17 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__26_1 = v17->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = AutoOrganizationManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__26_1 = (System_Func_float__float__float__o *)sub_1BC3254(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v20,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v22, v23);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v18,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_300AAF0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate_33101368(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Func_T__TResult__o *v17; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  AutoOrganizationManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v22; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4AFD8E2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Aggregate_float__float___, individualities);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v5);
    sub_1BC3008(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v6);
    sub_1BC3008(&System_Func_float__float__float__TypeInfo, v7);
    sub_1BC3008(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__, v8);
    sub_1BC3008(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__, v9);
    sub_1BC3008(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo, v10);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v11);
    byte_4AFD8E2 = 1;
  }
  v12 = sub_1BC3254(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BC3264(v13, v14);
  *(_QWORD *)(v12 + 16) = individualities;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)individualities, v15, v16);
  v17 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v17,
          (const MethodInfo_3036684 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v19 = AutoOrganizationManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v19 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v19->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = AutoOrganizationManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1BC3254(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v22,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v24, v25);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v20,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_300AAF0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_42829936; // x0
  __int64 v6; // x1
  System_Boolean_array *v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  __int64 v10; // x2
  unsigned __int64 max_length; // x8
  _BOOL4 v12; // w9
  bool v13; // w8
  bool v14; // zf
  bool v15; // w9
  char v16; // w11
  unsigned int v17; // w8
  unsigned __int64 v18; // x9
  bool v19; // cf
  __int64 v20; // x8
  int v21; // w11
  _BOOL4 v22; // w13
  __int64 v23; // x9
  unsigned int v24; // w10
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x8
  __int64 v27; // x10
  __int64 v28; // x12
  unsigned __int64 v29; // x10
  _BOOL4 v30; // w14

  if ( (byte_4AFD8D7 & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, settingUnitNum);
    byte_4AFD8D7 = 1;
  }
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1BC3264(Filter_42829936, v6);
  v7 = (System_Boolean_array *)Filter_42829936;
  v8 = 0LL;
  v9 = Filter_42829936 + 32;
  do
  {
    Filter_42829936 = ListViewSort__GetFilter_42829936(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_38;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_42829936 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1BC326C(Filter_42829936, v6, v10);
  v12 = v7->m_Items[5];
  v13 = !v7->m_Items[4];
  v14 = !v12;
  v15 = v12;
  v16 = v14;
  v7->m_Items[4] |= v16;
  v7->m_Items[5] = v15 || v13;
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 5LL);
  v17 = v7->max_length;
  v18 = 0LL;
  v19 = v17 >= 2;
  v20 = v17 - 2;
  if ( (_DWORD)v20 == 0 || !v19 )
    v20 = 0LL;
  LOBYTE(v21) = 1;
  do
  {
    if ( v20 == v18 )
      goto LABEL_37;
    if ( !Filter_42829936 )
      goto LABEL_38;
    if ( v18 >= *(unsigned int *)(Filter_42829936 + 24) )
      goto LABEL_37;
    v22 = v7->m_Items[v18 + 6];
    *(_BYTE *)(Filter_42829936 + 32 + v18++) = v22;
    v21 = (unsigned __int8)v21 & !v22;
  }
  while ( v18 != 5 );
  if ( v21 )
  {
    v23 = 0LL;
    while ( v20 != v23 )
    {
      v7->m_Items[v23++ + 6] = 1;
      if ( v23 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 6LL);
  v24 = v7->max_length;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v19 = v24 >= 7;
  v27 = v24 - 7;
  if ( (_DWORD)v27 != 0 && v19 )
    v28 = v27;
  else
    v28 = 0LL;
  do
  {
    if ( v28 == v25 )
      goto LABEL_37;
    if ( !Filter_42829936 )
      goto LABEL_38;
    v29 = *(unsigned int *)(Filter_42829936 + 24);
    if ( v25 >= v29 )
      goto LABEL_37;
    v30 = v7->m_Items[v25 + 11];
    *(_BYTE *)(Filter_42829936 + 32 + v25++) = v30;
    if ( v30 )
      LODWORD(v26) = v25;
  }
  while ( v25 != 6 );
  if ( !(_DWORD)v26 )
  {
    v26 = 0LL;
    while ( v26 < v29 )
    {
      *(_BYTE *)(Filter_42829936 + 32 + v26++) = 1;
      if ( v26 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v26;
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
  __int64 v29; // x1
  System_Collections_Generic_HashSet_int__o *v30; // x19
  __int64 Master_object; // x0
  __int64 v32; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Int32_array *v35; // x21
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x25
  __int64 v38; // x2
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  System_Collections_Generic_List_object__o *v41; // x26
  AutoOrganizationManager___c_c *v42; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v44; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_List_object__o *v48; // x0
  System_Collections_Generic_List_object__o *v49; // x0
  int32_t v50; // w25
  int v51; // w8
  __int64 v52; // x26
  __int64 v53; // x26
  __int64 v54; // x21
  __int64 v55; // x27
  int v56; // w8
  __int64 v57; // x27
  int v58; // w24
  char v59; // w20
  __int64 v60; // x21
  SkillLvEntity_o *v61; // x28
  __int64 v62; // x21
  __int64 v63; // x29
  int32_t v64; // w21
  EventUpValInfo_o *v65; // x29
  __int64 v66; // x21
  __int64 v67; // x27
  int v68; // w8
  __int64 v69; // x26
  unsigned int v70; // w20
  __int64 v71; // x8
  ServantSkillMaster_o *v73; // [xsp+8h] [xbp-88h]
  Il2CppObject *v74; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v75; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4AFD8DD & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_EventBonusFilterEntity__TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1BC3008(&EventUpValInfo_TypeInfo, v12);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_1BC3008(&int___TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v24);
    sub_1BC3008(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v25);
    sub_1BC3008(&System_Collections_Generic_List_SkillInfo__TypeInfo, v26);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1BC3008(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__, v28);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v29);
    byte_4AFD8DD = 1;
  }
  eventUpVallInfo = 0LL;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0LL, 0LL);
  if ( !EventValUpEventIdHash )
    return v30;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v30;
  }
  v35 = System_Linq_Enumerable__ToArray_int_(
          v34,
          (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40756148(setupInfo, v35, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v74 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  v73 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v32 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v37 )
LABEL_61:
    sub_1BC3264(Master_object, v32);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v37,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0LL);
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)v74;
  if ( FilterList )
  {
    v41 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v42 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v42 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v42->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = AutoOrganizationManager___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v44,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v46, v47);
      }
      System_Collections_Generic_List_object___Sort_57288964(
        v41,
        _9__22_0,
        (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v48 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v49 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v49,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v41->fields._size >= 1 )
      {
        v50 = 0;
        v75 = v41;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v41,
                                     v50,
                                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v51 = *(_DWORD *)(Master_object + 20);
          v52 = Master_object;
          if ( v51 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v52 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v68 = *(_DWORD *)(Master_object + 24);
            v69 = Master_object;
            if ( v68 >= 1 )
            {
              v70 = 0;
              while ( v70 < v68 )
              {
                v71 = *(_QWORD *)(v69 + 8LL * (int)v70 + 32);
                if ( !v71 || !v30 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v30,
                                  *(_DWORD *)(v71 + 20),
                                  (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
                v68 = *(_DWORD *)(v69 + 24);
                if ( (int)++v70 >= v68 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1BC326C(Master_object, v32, v38);
            }
          }
          else if ( v51 == 1 )
          {
            if ( !v40 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v40,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v53 = Master_object;
            v55 = *(_QWORD *)(Master_object + 16);
            v54 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v55;
            *(_QWORD *)&v78.fields.fakeValue = v54;
            v32 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v78, 0LL);
            Master_object = (__int64)v73;
            if ( !v73 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v73, v32, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v56 = *(_DWORD *)(Master_object + 24);
            v57 = Master_object;
            if ( v56 >= 1 )
            {
              v58 = 0;
              v59 = 0;
              do
              {
                if ( v58 >= (unsigned int)v56 )
                  goto LABEL_62;
                v60 = *(_QWORD *)(v57 + 8LL * v58 + 32);
                if ( !v60 || !v36 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v36, *(_DWORD *)(v60 + 28), 1, 0LL);
                if ( Master_object && !*(_DWORD *)(v60 + 44) )
                {
                  v61 = (SkillLvEntity_o *)Master_object;
                  v62 = *(_QWORD *)(v53 + 16);
                  v63 = *(_QWORD *)(v53 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v79.fields.currentCryptoKey = v62;
                  *(_QWORD *)&v79.fields.fakeValue = v63;
                  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v79, 0LL);
                  v65 = (EventUpValInfo_o *)sub_1BC3254(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v65, setupInfo, v64, 1, 1, 0, 0LL);
                  eventUpVallInfo = v65;
                  Master_object = SkillLvEntity__getEventUpVal_41879020(v61, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v59 |= Master_object;
                }
                v56 = *(_DWORD *)(v57 + 24);
                ++v58;
              }
              while ( v58 < v56 );
              v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)v74;
              if ( (v59 & 1) != 0 )
              {
                v67 = *(_QWORD *)(v53 + 16);
                v66 = *(_QWORD *)(v53 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v80.fields.currentCryptoKey = v67;
                *(_QWORD *)&v80.fields.fakeValue = v66;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v80, 0LL);
                if ( !v30 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v30,
                  Master_object,
                  (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v41 = v75;
          ++v50;
        }
        while ( v50 < v75->fields._size );
      }
    }
  }
  return v30;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 max_length; // x10
  unsigned __int64 v5; // x9
  __int64 v6; // x0
  bool *v7; // x8

  if ( !rarityFlag )
    sub_1BC3264(0LL, method);
  max_length = rarityFlag->max_length;
  v5 = 0LL;
  v6 = 0LL;
  v7 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v5 <= (int)max_length )
    {
      if ( v5 >= max_length )
        sub_1BC326C(v6, method, v2);
      if ( v7[v5] )
        v6 = (1 << v5) | (unsigned int)v6;
    }
    ++v5;
  }
  while ( v5 != 5 );
  return v6;
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 Filter_42829984; // x0
  __int64 v4; // x1
  System_Boolean_array *v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  __int64 v8; // x2
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

  if ( (byte_4AFD8D8 & 1) == 0 )
  {
    sub_1BC3008(&bool___TypeInfo, method);
    byte_4AFD8D8 = 1;
  }
  Filter_42829984 = sub_1BC30B0(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1BC3264(Filter_42829984, v4);
  v5 = (System_Boolean_array *)Filter_42829984;
  v6 = 0LL;
  v7 = Filter_42829984 + 32;
  do
  {
    Filter_42829984 = ListViewSort__GetFilter_42829984(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_25;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_42829984 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1BC326C(Filter_42829984, v4, v8);
  v10 = v5->m_Items[5];
  v11 = !v5->m_Items[4];
  v12 = !v10;
  v13 = v10;
  v14 = v12;
  v5->m_Items[4] |= v14;
  v5->m_Items[5] = v13 || v11;
  Filter_42829984 = sub_1BC30B0(bool___TypeInfo, 5LL);
  v15 = v5->max_length;
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
    if ( !Filter_42829984 )
      goto LABEL_25;
    if ( v16 >= *(unsigned int *)(Filter_42829984 + 24) )
      goto LABEL_24;
    v20 = v5->m_Items[v16 + 6];
    *(_BYTE *)(Filter_42829984 + 32 + v16++) = v20;
    v19 = (unsigned __int8)v19 & !v20;
  }
  while ( v16 != 5 );
  if ( v19 )
  {
    v21 = 0LL;
    while ( v18 != v21 )
    {
      v5->m_Items[v21++ + 6] = 1;
      if ( v21 == 5 )
        return v5;
    }
    goto LABEL_24;
  }
  return v5;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4AFD8D5 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v1);
    byte_4AFD8D5 = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0LL),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0LL) )
  {
    sub_1BC3264(autoOrganizationInfo, v1);
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
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4AFD8DF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    byte_4AFD8DF = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v8);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  void *IsRestart; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFD8E0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    byte_4AFD8E0 = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    byte_4AFC1F1 = 1;
  }
  IsRestart = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsRestart = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserEventDataLostMaster__TryGetEntity(
          (UserEventDataLostMaster_o *)Master_object,
          &entity,
          *(_QWORD *)(*((_QWORD *)IsRestart + 23) + 64LL),
          restrictionInfo->fields.dataLostBattleId,
          0LL) )
    return 0;
  IsRestart = entity;
  if ( !entity || (IsRestart = (void *)UserEventDataLostEntity__IsRestart(entity, svtId, 0LL), !entity) )
LABEL_23:
    sub_1BC3264(IsRestart, v7);
  if ( ((unsigned __int8)IsRestart & 1) != 0 )
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
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int64_t v9; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFD8DE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    byte_4AFD8DE = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v8);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v9 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v9 > NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  int32_t monitor_high; // w20
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
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x29
  int32_t klass; // w22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  float Rate; // s0
  AutoOrganizationManager___c_c *v29; // x0
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v31; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4AFD8DA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v10);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v11);
    sub_1BC3008(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76780448, v14);
    sub_1BC3008(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v15);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v16);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v17);
    byte_4AFD8DA = 1;
  }
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  v18 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76780448);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v18 )
LABEL_32:
    sub_1BC3264(Master_object, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v18,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v22 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1BC3264(v22, v23);
    if ( !v21 )
      sub_1BC3264(v22, v23);
    klass = (int32_t)v38.fields._current[2].klass;
    v26 = DataMasterBase_object__object__int___TryGetEntity(
            v21,
            &entity,
            klass,
            (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v26 )
    {
      if ( !entity )
        sub_1BC3264(v26, v27);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v29 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v29 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T__TResult__o *)v29->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = AutoOrganizationManager___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__19_0,
      v31,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_302DB60 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v35,
                                                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


// local variable allocation has failed, the output may be wrong!
AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortServant(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  int32_t monitor_high; // w20
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
  System_Collections_Generic_List_object__o *v27; // x19
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x27
  int32_t klass; // w22
  _BOOL8 v35; // x0
  __int64 v36; // x1
  float Rate; // s8
  float v38; // s0
  float v39; // s0
  AutoOrganizationManager___c_c *v40; // x0
  System_Func_T__TResult__o *_9__20_0; // x20
  Il2CppObject *v42; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x0
  AutoOrganizationManager___c_c *v47; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v50; // x21
  struct AutoOrganizationManager___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x0
  AutoOrganizationManager___c_c *v55; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v58; // x21
  struct AutoOrganizationManager___c_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x0
  AutoOrganizationManager___c_c *v63; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v66; // x21
  struct AutoOrganizationManager___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x0
  AutoOrganizationManager___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x19
  System_Func_T__TResult__o *_9__20_4; // x20
  Il2CppObject *v74; // x21
  struct AutoOrganizationManager___c_StaticFields *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4AFD8DB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v14);
    sub_1BC3008(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v15);
    sub_1BC3008(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo, v16);
    sub_1BC3008(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76780448, v19);
    sub_1BC3008(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v20);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortServant_b__20_0__, v21);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortServant_b__20_1__, v22);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortServant_b__20_2__, v23);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortServant_b__20_3__, v24);
    sub_1BC3008(&Method_AutoOrganizationManager___c__SortServant_b__20_4__, v25);
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v26);
    byte_4AFD8DB = 1;
  }
  entity = 0LL;
  memset(&v81, 0, sizeof(v81));
  v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76780448);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v27 )
LABEL_56:
    sub_1BC3264(Master_object, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    v27,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v31 )
      break;
    current = v81.fields._current;
    if ( !v81.fields._current )
      sub_1BC3264(v31, v32);
    if ( !v30 )
      sub_1BC3264(v31, v32);
    klass = (int32_t)v81.fields._current[2].klass;
    v35 = DataMasterBase_object__object__int___TryGetEntity(
            v30,
            &entity,
            klass,
            (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1BC3264(v35, v36);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
    {
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
      v38 = ClassRelationMaster__getRate(monitor_high, klass, 0LL);
    }
    else
    {
      v38 = 1.0;
      Rate = 1.0;
    }
    v39 = (float)SLODWORD(current[2].monitor) / v38;
    *((float *)&current[3].klass + 1) = *(float *)&current[4].monitor
                                      * (float)(Rate * (float)SHIDWORD(current[2].klass));
    *(float *)&current[3].monitor = v39;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v40 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v40 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_0 = (System_Func_T__TResult__o *)v40->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = AutoOrganizationManager___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v40->static_fields->__9;
    _9__20_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v42, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v44, v45);
  }
  v46 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_302DB60 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v47 = AutoOrganizationManager___c_TypeInfo;
  v48 = v46;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v47 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v47->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = AutoOrganizationManager___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v50, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0LL);
    v51 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v51->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v51->__9__20_1, (int32_t)_9__20_1, v52, v53);
  }
  v54 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v48,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_303DDDC *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v55 = AutoOrganizationManager___c_TypeInfo;
  v56 = v54;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v55 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v55->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = AutoOrganizationManager___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v58, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0LL);
    v59 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v59->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v59->__9__20_2, (int32_t)_9__20_2, v60, v61);
  }
  v62 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v56,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_303DF74 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v63 = AutoOrganizationManager___c_TypeInfo;
  v64 = v62;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v63 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v63->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = AutoOrganizationManager___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v66, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0LL);
    v67 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v67->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v67->__9__20_3, (int32_t)_9__20_3, v68, v69);
  }
  v70 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v64,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_303DDDC *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v71 = AutoOrganizationManager___c_TypeInfo;
  v72 = v70;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v71 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_T__TResult__o *)v71->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = AutoOrganizationManager___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__20_4 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v74, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0LL);
    v75 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v75->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v75->__9__20_4, (int32_t)_9__20_4, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v72,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_303DEA8 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v78,
                                                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_4AFD8D3 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v1);
    byte_4AFD8D3 = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4AFD8D4 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v1);
    byte_4AFD8D4 = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
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
  *(_QWORD *)&this->fields.collectionNo = 0LL;
  this->fields.cost = 0;
  this->fields.used = 0;
  *(_QWORD *)&this->fields.questAutoOrganizationAdjustRate = 0LL;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)&this->fields.classId = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFD8E4 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_4AFD8E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, a);
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
    sub_1BC3264(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
  return d->fields.relationNum;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
  return d->fields.relationAtk;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
  return d->fields.treasureDeviceLv;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
  return d->fields.relationDef;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
  return d->fields.svtId;
}


int64_t __fastcall AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_41357684(entity, this->fields.individualities, 0LL);
}